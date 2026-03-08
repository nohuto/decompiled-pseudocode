/*
 * XREFs of HalpDisableSecondaryInterrupt @ 0x140517908
 * Callers:
 *     HalDisableInterrupt @ 0x14028E8F0 (HalDisableInterrupt.c)
 * Callees:
 *     HalpFindSecondaryIcEntry @ 0x140379320 (HalpFindSecondaryIcEntry.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x140379B70 (HalpReleaseSecondaryIcEntryShared.c)
 *     HalpCheckInterruptType @ 0x1403AE16C (HalpCheckInterruptType.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpDisableSecondaryInterrupt(_DWORD *a1)
{
  int v2; // edi
  unsigned int v3; // esi
  __int64 SecondaryIcEntry; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned int v7; // esi

  if ( SecondaryIcServicesEnabled )
  {
    if ( HalpCheckInterruptType(a1) )
    {
      v3 = a1[16];
      SecondaryIcEntry = HalpFindSecondaryIcEntry(v3);
      v5 = SecondaryIcEntry;
      if ( SecondaryIcEntry )
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(SecondaryIcEntry + 64))(*(_QWORD *)(SecondaryIcEntry + 32), v3);
        if ( v2 >= 0 )
        {
          v7 = v3 - *(_DWORD *)(v5 + 16);
          *(_DWORD *)(v5 + 16LL * v7 + 168) |= 0x80000000;
          *(_BYTE *)(v5 + 16LL * v7 + 172) = 0;
        }
        LOBYTE(v6) = 1;
        HalpReleaseSecondaryIcEntryShared(v5, v6);
      }
      else
      {
        return (unsigned int)-1073700575;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v2;
}
