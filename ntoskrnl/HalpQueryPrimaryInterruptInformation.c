/*
 * XREFs of HalpQueryPrimaryInterruptInformation @ 0x14080BECC
 * Callers:
 *     HalpSecondaryInterruptQueryPrimaryInformation @ 0x14080BE70 (HalpSecondaryInterruptQueryPrimaryInformation.c)
 * Callees:
 *     HalpIsInterruptTypeSecondary @ 0x1402FCE50 (HalpIsInterruptTypeSecondary.c)
 *     HalpFindSecondaryIcEntry @ 0x140379320 (HalpFindSecondaryIcEntry.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x140379B70 (HalpReleaseSecondaryIcEntryShared.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpQueryPrimaryInterruptInformation(int *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 SecondaryIcEntry; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned int v7; // ebx

  if ( SecondaryIcServicesEnabled )
  {
    v3 = a1[14];
    if ( HalpIsInterruptTypeSecondary(*a1, v3) )
    {
      SecondaryIcEntry = HalpFindSecondaryIcEntry(v3);
      v5 = SecondaryIcEntry;
      if ( SecondaryIcEntry )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(SecondaryIcEntry + 88))(
               *(_QWORD *)(SecondaryIcEntry + 32),
               v3,
               a2);
        if ( v7 == -1073741802 )
          v7 = 0;
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
  return v7;
}
