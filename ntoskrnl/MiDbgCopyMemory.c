/*
 * XREFs of MiDbgCopyMemory @ 0x140347088
 * Callers:
 *     MmDbgCopyMemory @ 0x140346FE0 (MmDbgCopyMemory.c)
 * Callees:
 *     KeIsUserVaAccessAllowed @ 0x140256450 (KeIsUserVaAccessAllowed.c)
 *     KeGenericCallDpc @ 0x1403008E0 (KeGenericCallDpc.c)
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 *     MiCopyFromUntrustedMemory @ 0x140347320 (MiCopyFromUntrustedMemory.c)
 *     MiDbgReleaseAddress @ 0x140387814 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1403878D8 (MiDbgWriteCheck.c)
 *     MiCopyToUntrustedMemory @ 0x1403948F0 (MiCopyToUntrustedMemory.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140641B08 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140641E70 (MiDbgUnTranslatePhysicalAddress.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiDbgCopyMemory(char *BaseAddress, __int64 a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  SIZE_T v6; // r15
  unsigned int v9; // esi
  int v10; // edx
  unsigned int v11; // ebx
  int v12; // r8d
  unsigned int v13; // eax
  unsigned int v14; // edi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v17; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-60h] BYREF
  int v19; // [rsp+48h] [rbp-50h]
  unsigned int v20; // [rsp+4Ch] [rbp-4Ch]
  unsigned int v21; // [rsp+50h] [rbp-48h]
  unsigned int v22; // [rsp+54h] [rbp-44h]
  _BYTE v23[40]; // [rsp+58h] [rbp-40h] BYREF

  v6 = a3;
  v9 = a5;
  v17 = 0LL;
  memset(v23, 0, 32);
  v22 = 0;
  if ( !a3 )
    return 3221225713LL;
  if ( (a5 & 0x40) != 0 && ((a5 & 2) != 0 || (a5 & 1) == 0 || (a5 & 4) == 0) )
    return 3221225714LL;
  v11 = KeIsUserVaAccessAllowed(0LL) != 0 ? 2 : 0;
  if ( !v12 )
  {
    if ( v10 )
    {
      if ( !(unsigned __int8)MmIsAddressValidEx(BaseAddress) )
        return (unsigned int)-1073741585;
      if ( (a5 & 0x40) == 0 )
        goto LABEL_7;
      PhysicalAddress = MmGetPhysicalAddress(BaseAddress);
      BaseAddress = (char *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MiDbgTranslatePhysicalAddress)(
                              (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
                              a5,
                              v23);
      if ( !BaseAddress )
        return (unsigned int)-1073741823;
      v9 = a5 | 2;
LABEL_7:
      if ( (v9 & 6) == 4 && KeSmapEnabled )
        __asm { stac }
      if ( (v9 & 1) == 0 )
      {
LABEL_11:
        v13 = MiCopyFromUntrustedMemory(a2, BaseAddress, (unsigned int)v6, a4);
LABEL_12:
        v14 = v13;
        goto LABEL_13;
      }
      BaseAddress = (char *)MiDbgWriteCheck(BaseAddress, &v17);
      if ( !BaseAddress )
      {
        v14 = -1073741585;
LABEL_13:
        if ( v11 < 2 && (v9 & 6) == 4 && KeSmapEnabled )
          __asm { clac }
        if ( (v11 & 1) != 0 )
          MiDbgReleaseAddress(BaseAddress, &v17, v9);
        if ( (v9 & 2) != 0 )
          MiDbgUnTranslatePhysicalAddress(v23);
        return v14;
      }
      v11 |= 1u;
LABEL_21:
      v13 = MiCopyToUntrustedMemory(BaseAddress, a2, (unsigned int)v6, a4);
      goto LABEL_12;
    }
    if ( KeGetCurrentIrql() <= 1u )
    {
      if ( (unsigned __int64)BaseAddress < 0xFFFF800000000000uLL )
      {
        if ( (a5 & 1) != 0 )
        {
          ProbeForWrite(BaseAddress, v6, v6);
        }
        else
        {
          if ( (((_DWORD)v6 - 1) & (unsigned int)BaseAddress) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&BaseAddress[v6] > 0x7FFFFFFF0000LL || &BaseAddress[v6] < BaseAddress )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        if ( (a5 & 1) == 0 )
          goto LABEL_11;
        goto LABEL_21;
      }
      v18[0] = BaseAddress;
      v19 = v6;
      v18[1] = a2;
      v20 = a4;
      v21 = a5;
      KeGenericCallDpc((__int64)MiDbgCopyMemoryTarget, (__int64)v18);
      return v22;
    }
    return 3221225714LL;
  }
  if ( !v10 && KeGetCurrentIrql() > 1u )
    return 3221225714LL;
  BaseAddress = (char *)MiDbgTranslatePhysicalAddress(BaseAddress, a5, v23);
  if ( BaseAddress )
    goto LABEL_7;
  return 3221225473LL;
}
