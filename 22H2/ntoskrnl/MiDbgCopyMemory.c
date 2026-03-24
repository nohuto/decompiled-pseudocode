/*
 * XREFs of MiDbgCopyMemory @ 0x1405457E4
 * Callers:
 *     MmDbgCopyMemory @ 0x1405469DC (MmDbgCopyMemory.c)
 * Callees:
 *     KeIsUserVaAccessAllowed @ 0x140254798 (KeIsUserVaAccessAllowed.c)
 *     MmIsAddressValidEx @ 0x14028CB70 (MmIsAddressValidEx.c)
 *     MmGetPhysicalAddress @ 0x140301020 (MmGetPhysicalAddress.c)
 *     KeGenericCallDpc @ 0x14035E460 (KeGenericCallDpc.c)
 *     MiCopyFromUntrustedMemory @ 0x140545580 (MiCopyFromUntrustedMemory.c)
 *     MiCopyToUntrustedMemory @ 0x1405456AC (MiCopyToUntrustedMemory.c)
 *     MiDbgReleaseAddress @ 0x140545FFC (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140546130 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140546504 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x1405465FC (MiDbgWriteCheck.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiDbgCopyMemory(char *BaseAddress, _BYTE *a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  SIZE_T v6; // r13
  unsigned int v8; // r14d
  int v10; // r15d
  int v11; // edx
  unsigned int v12; // ebx
  __int64 v13; // r9
  int v14; // r8d
  unsigned int v15; // eax
  unsigned int v16; // edi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v18; // [rsp+20h] [rbp-68h] BYREF
  __int128 v19; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v20[2]; // [rsp+38h] [rbp-50h] BYREF
  int v21; // [rsp+48h] [rbp-40h]
  unsigned int v22; // [rsp+4Ch] [rbp-3Ch]
  unsigned int v23; // [rsp+50h] [rbp-38h]
  unsigned int v24; // [rsp+54h] [rbp-34h]

  v6 = a3;
  v8 = a5;
  v18 = 0LL;
  v19 = 0LL;
  v24 = 0;
  if ( !a3 )
    return 3221225713LL;
  v10 = a5 & 2;
  if ( (a5 & 0x40) != 0 && ((a5 & 2) != 0 || (a5 & 1) == 0 || (a5 & 4) == 0) )
    return 3221225714LL;
  v12 = KeIsUserVaAccessAllowed(0LL) ? 2 : 0;
  if ( v14 )
  {
    if ( v11 || KeGetCurrentIrql() <= 1u )
    {
      BaseAddress = (char *)MiDbgTranslatePhysicalAddress(BaseAddress, a5, &v19);
      if ( !BaseAddress )
        return 3221225473LL;
LABEL_42:
      v10 = v8 & 2;
      if ( (v10 | 4) == 4 && KeSmapEnabled )
        __asm { stac }
      if ( (v8 & 1) != 0 )
      {
        BaseAddress = (char *)MiDbgWriteCheck(BaseAddress, &v18);
        if ( !BaseAddress )
        {
          v16 = -1073741585;
LABEL_26:
          if ( (v10 | 4) == 4 && v12 < 2 && KeSmapEnabled )
            __asm { clac }
          if ( (v12 & 1) != 0 )
            MiDbgReleaseAddress(BaseAddress, &v18, v8);
          if ( v10 )
            MiDbgUnTranslatePhysicalAddress(&v19);
          return v16;
        }
        v12 |= 1u;
        goto LABEL_49;
      }
      goto LABEL_24;
    }
    return 3221225714LL;
  }
  if ( v11 )
  {
    if ( MmIsAddressValidEx((__int64)BaseAddress) )
    {
      if ( (a5 & 0x40) == 0 )
        goto LABEL_42;
      PhysicalAddress = MmGetPhysicalAddress(BaseAddress);
      BaseAddress = (char *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MiDbgTranslatePhysicalAddress)(
                              (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
                              a5,
                              &v19);
      if ( BaseAddress )
      {
        v8 = a5 | 2;
        goto LABEL_42;
      }
      return (unsigned int)-1073741823;
    }
    else
    {
      return (unsigned int)-1073741585;
    }
  }
  if ( KeGetCurrentIrql() > 1u )
    return 3221225714LL;
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
    if ( (a5 & 1) != 0 )
    {
LABEL_49:
      v15 = MiCopyToUntrustedMemory(BaseAddress, a2, v6, a4);
      goto LABEL_25;
    }
LABEL_24:
    v15 = MiCopyFromUntrustedMemory(a2, BaseAddress, v6, a4);
LABEL_25:
    v16 = v15;
    goto LABEL_26;
  }
  v20[0] = BaseAddress;
  v21 = v6;
  v20[1] = v13;
  v22 = a4;
  v23 = a5;
  KeGenericCallDpc((__int64)MiDbgCopyMemoryTarget, (__int64)v20);
  return v24;
}
