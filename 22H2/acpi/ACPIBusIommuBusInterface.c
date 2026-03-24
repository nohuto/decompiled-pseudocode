/*
 * XREFs of ACPIBusIommuBusInterface @ 0x1C00995C4
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0010C50 (ACPIBusIrpQueryInterface.c)
 *     ACPIFilterIrpQueryIommuInterface @ 0x1C00994CC (ACPIFilterIrpQueryIommuInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C00116E4 (ACPIAmliBuildObjectPathname.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

__int64 __fastcall ACPIBusIommuBusInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 DeviceExtension; // rdx
  __int64 v4; // r9
  int v5; // ebx
  int v6; // r15d
  unsigned __int16 v7; // bp
  __int64 v8; // rax
  unsigned __int16 *v9; // r13
  _BYTE *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rax
  SIZE_T v13; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v15; // rsi
  void (__fastcall *v16)(_DWORD *); // rax
  void *Src; // [rsp+58h] [rbp+10h] BYREF

  Src = 0LL;
  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = *(_QWORD *)(DeviceExtension + 720);
  if ( !v4 )
    return (unsigned int)-1073741823;
  v6 = *(unsigned __int16 *)(v2 + 18);
  if ( (unsigned __int16)(v6 - 1) > 1u )
    return (unsigned int)-1073741811;
  if ( v6 == 1 )
  {
    v7 = 72;
    goto LABEL_8;
  }
  if ( v6 != 2 )
    return (unsigned int)-1073741811;
  v7 = 80;
LABEL_8:
  if ( *(_WORD *)(v2 + 16) < v7 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(v2 + 32);
  if ( !v8 || v8 != *(_QWORD *)(DeviceExtension + 744) )
    return (unsigned int)-1073741811;
  v9 = *(unsigned __int16 **)(v2 + 24);
  v5 = ACPIAmliBuildObjectPathname(v4, (char **)&Src, 3);
  if ( v5 >= 0 )
  {
    v10 = Src;
    v11 = -1LL;
    v12 = -1LL;
    do
      ++v12;
    while ( *((_BYTE *)Src + v12) );
    v13 = (unsigned int)(v12 + 113);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x46706341u);
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v13);
      v15[22] = 2;
      *((_QWORD *)v15 + 12) = v15 + 28;
      do
        ++v11;
      while ( v10[v11] );
      memmove(v15 + 28, v10, v11 + 1);
      ExFreePoolWithTag(v10, 0x53706341u);
      memmove(v9, &AcpiIommuBusInterface, v7);
      v16 = (void (__fastcall *)(_DWORD *))*((_QWORD *)v9 + 2);
      *v9 = v7;
      v9[1] = v6;
      *((_QWORD *)v9 + 1) = v15;
      v16(v15);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
