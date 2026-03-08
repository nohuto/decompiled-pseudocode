/*
 * XREFs of BgpDisplayCharacterEx @ 0x14066F654
 * Callers:
 *     BcpDisplayCriticalCharacter @ 0x14066FC60 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x14066FD2C (BcpDisplayCriticalString.c)
 *     BcpDisplayProgress @ 0x140670320 (BcpDisplayProgress.c)
 *     BcpPrintSpaces @ 0x1406706FC (BcpPrintSpaces.c)
 *     BgpConsoleDisplayCharacter @ 0x140AEE4C0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayCharacterEx @ 0x140AEE5D4 (BgpConsoleDisplayCharacterEx.c)
 *     BgpConsoleDrawCursor @ 0x140AEE928 (BgpConsoleDrawCursor.c)
 *     BgpConsoleScrollScreen @ 0x140AEEAC0 (BgpConsoleScrollScreen.c)
 * Callees:
 *     BgpTxtDisplayCharacter @ 0x140381538 (BgpTxtDisplayCharacter.c)
 *     BgpTxtAdjustStaticRegion @ 0x14066FA50 (BgpTxtAdjustStaticRegion.c)
 */

__int64 __fastcall BgpDisplayCharacterEx(
        unsigned __int16 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8,
        unsigned __int64 a9)
{
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  _DWORD v14[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h]
  int v16; // [rsp+50h] [rbp-18h]
  int v17; // [rsp+54h] [rbp-14h]

  v17 = 0;
  if ( (dword_140C0E3B0 & 1) == 0 )
    return 3221225473LL;
  v12 = a2[3];
  v14[0] = a5;
  v14[1] = a6;
  v16 = *((_DWORD *)a2 + 2);
  v13 = *a2;
  a9 = __PAIR64__(a4, a3);
  v15 = v13;
  result = BgpTxtAdjustStaticRegion(v12, &a9, v14);
  if ( (int)result >= 0 )
    return BgpTxtDisplayCharacter(a2[3], a1, 0, a7, a8);
  return result;
}
