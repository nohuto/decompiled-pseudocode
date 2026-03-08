/*
 * XREFs of IommupDeviceEnableSvm @ 0x140930DD4
 * Callers:
 *     IommupDeviceEnablePasidTaggedDma @ 0x140822E44 (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     HalpIommuGetDomainId @ 0x1403A4310 (HalpIommuGetDomainId.c)
 *     IommuGetLeastMaximumSupportedAsidValue @ 0x1403AB514 (IommuGetLeastMaximumSupportedAsidValue.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IommupPasidDeviceCreate @ 0x14050C278 (IommupPasidDeviceCreate.c)
 *     IommupPasidDeviceDelete @ 0x14050C384 (IommupPasidDeviceDelete.c)
 *     HalpIommuFreeDomainId @ 0x140512F78 (HalpIommuFreeDomainId.c)
 *     IommuDisableDevicePasid @ 0x14051FC00 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x14051FFF0 (IommuEnableDevicePasid.c)
 *     IommupMapDeviceInternal @ 0x1405216F8 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x140521AB8 (IommupUnmapDeviceInternal.c)
 *     IommupHvAttachPasidDevice @ 0x140521E7C (IommupHvAttachPasidDevice.c)
 *     IommupHvDetachPasidDevice @ 0x140522410 (IommupHvDetachPasidDevice.c)
 */

__int64 __fastcall IommupDeviceEnableSvm(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebp
  KSPIN_LOCK **v5; // r15
  char v6; // r13
  unsigned int LeastMaximumSupportedAsidValue; // edi
  int (__fastcall *v10)(_QWORD, int *); // rax
  int *v11; // r14
  int v12; // edi
  int DomainId; // eax
  int v14; // eax
  int v15; // eax
  int v17; // [rsp+70h] [rbp+8h] BYREF
  ULONG v18; // [rsp+78h] [rbp+10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = -1;
  v17 = 0;
  v5 = 0LL;
  v6 = 0;
  v18 = -1;
  v19 = 0LL;
  if ( HalpHvIommu )
    LeastMaximumSupportedAsidValue = IommupHvMaximumAsids;
  else
    LeastMaximumSupportedAsidValue = IommuGetLeastMaximumSupportedAsidValue();
  if ( a2 )
  {
    v11 = (int *)(a1 + 384);
  }
  else
  {
    v10 = *(int (__fastcall **)(_QWORD, int *))(a1 + 304);
    if ( !v10 || !*(_QWORD *)(a1 + 312) || !*(_QWORD *)(a1 + 320) )
    {
      v12 = -1073741822;
      goto LABEL_31;
    }
    if ( v10(*(_QWORD *)(a1 + 280), &v17) < 0
      || (v17 & 4) == 0
      || 1 << ((unsigned __int8)v17 >> 3) < LeastMaximumSupportedAsidValue )
    {
      v12 = -1073741637;
      goto LABEL_31;
    }
    v11 = (int *)(a1 + 384);
    *(_DWORD *)(a1 + 384) = *(_DWORD *)(a1 + 384) ^ (*(_DWORD *)(a1 + 384) ^ v17) & 0xF8 | 4;
  }
  if ( !HalpHvIommu )
  {
    DomainId = HalpIommuGetDomainId(*(_QWORD *)(a1 + 32), &v18);
    v4 = v18;
    v12 = DomainId;
    if ( DomainId < 0 )
      goto LABEL_31;
    if ( v18 - 1 > 0xFFFFFFFD )
    {
      v12 = -1073741670;
      goto LABEL_31;
    }
    *(_DWORD *)(a1 + 352) = v18;
    v6 = 1;
  }
  v14 = IommupPasidDeviceCreate(a1, 0, &v19);
  v3 = v19;
  v12 = v14;
  if ( v14 >= 0 )
  {
    if ( HalpHvIommu )
    {
      v15 = IommupHvAttachPasidDevice(a1);
    }
    else
    {
      v5 = *(KSPIN_LOCK ***)(v19 + 56);
      v12 = IommupMapDeviceInternal(*v5, (__int64 *)a1, v11);
      if ( v12 < 0 )
        goto LABEL_31;
      v15 = IommuEnableDevicePasid((__int64 *)v5, a1);
    }
    v12 = v15;
    if ( v15 >= 0 )
    {
      if ( a2 )
        return (unsigned int)v12;
      v12 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64 (*)(), __int64))(a1 + 312))(
              *(_QWORD *)(a1 + 280),
              v11,
              xHalGetInterruptTranslator,
              a1);
      if ( v12 >= 0 )
        return (unsigned int)v12;
      if ( HalpHvIommu )
        IommupHvDetachPasidDevice(a1);
      else
        IommuDisableDevicePasid((__int64)v5, a1);
    }
  }
LABEL_31:
  if ( *(_QWORD *)(a1 + 88) )
    IommupUnmapDeviceInternal((__int64)*v5, a1, a3);
  if ( v3 )
    IommupPasidDeviceDelete(v3);
  if ( v6 )
  {
    HalpIommuFreeDomainId(*(_QWORD *)(a1 + 32), v4);
    *(_DWORD *)(a1 + 352) = -1;
  }
  *(_DWORD *)(a1 + 384) &= 0xFFFFFF03;
  return (unsigned int)v12;
}
