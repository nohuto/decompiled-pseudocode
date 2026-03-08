/*
 * XREFs of HalpInterruptRequestSecondaryInterrupt @ 0x140517DEC
 * Callers:
 *     HalpInterruptRequestInterrupt @ 0x1405031A0 (HalpInterruptRequestInterrupt.c)
 * Callees:
 *     HalpFindSecondaryIcEntry @ 0x140379320 (HalpFindSecondaryIcEntry.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x140379B70 (HalpReleaseSecondaryIcEntryShared.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpInterruptRequestSecondaryInterrupt(unsigned int a1)
{
  __int64 SecondaryIcEntry; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  int v6; // edi
  int v7; // [rsp+38h] [rbp+10h] BYREF

  if ( !SecondaryIcServicesEnabled || !((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_140C01B90[0])(0LL, a1) )
    return 3221225485LL;
  SecondaryIcEntry = HalpFindSecondaryIcEntry(a1);
  v4 = SecondaryIcEntry;
  if ( !SecondaryIcEntry )
    return 3221266721LL;
  v7 = -1;
  if ( *(_BYTE *)(SecondaryIcEntry + 16LL * (a1 - *(_DWORD *)(SecondaryIcEntry + 16)) + 172) )
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(SecondaryIcEntry + 96))(
           *(_QWORD *)(SecondaryIcEntry + 32),
           a1,
           &v7);
  else
    v6 = -1073741823;
  LOBYTE(v3) = 1;
  HalpReleaseSecondaryIcEntryShared(v4, v3);
  if ( v6 < 0 || v7 == -1 )
    return (unsigned int)v6;
  else
    return off_140C01C20[0]();
}
