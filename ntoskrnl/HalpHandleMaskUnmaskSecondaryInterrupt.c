/*
 * XREFs of HalpHandleMaskUnmaskSecondaryInterrupt @ 0x140517A94
 * Callers:
 *     HalpMaskInterrupt @ 0x140376370 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x140379600 (HalpUnmaskInterrupt.c)
 * Callees:
 *     HalpIsInterruptTypeSecondary @ 0x1402FCE50 (HalpIsInterruptTypeSecondary.c)
 *     HalpFindSecondaryIcEntry @ 0x140379320 (HalpFindSecondaryIcEntry.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x140379B70 (HalpReleaseSecondaryIcEntryShared.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpHandleMaskUnmaskSecondaryInterrupt(unsigned int a1, unsigned int a2, char a3)
{
  int v6; // edi
  __int64 SecondaryIcEntry; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v12; // rsi

  if ( SecondaryIcServicesEnabled )
  {
    if ( HalpIsInterruptTypeSecondary(0, a1) )
    {
      SecondaryIcEntry = HalpFindSecondaryIcEntry(a1);
      v8 = SecondaryIcEntry;
      if ( SecondaryIcEntry )
      {
        v9 = a1 - *(_DWORD *)(SecondaryIcEntry + 16);
        if ( a3 )
        {
          v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(SecondaryIcEntry + 72))(
                 *(_QWORD *)(SecondaryIcEntry + 32),
                 a2,
                 a1);
          if ( v6 >= 0 )
            *(_BYTE *)(v8 + 16LL * (unsigned int)v9 + 172) = 0;
        }
        else
        {
          v11 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(SecondaryIcEntry + 80);
          v12 = 2 * v9;
          *(_BYTE *)(v8 + 8 * v12 + 172) = 1;
          v6 = v11(*(_QWORD *)(v8 + 32), a2, a1);
          if ( v6 < 0 )
            *(_BYTE *)(v8 + 8 * v12 + 172) = 0;
        }
        LOBYTE(v10) = 1;
        HalpReleaseSecondaryIcEntryShared(v8, v10);
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
  return (unsigned int)v6;
}
