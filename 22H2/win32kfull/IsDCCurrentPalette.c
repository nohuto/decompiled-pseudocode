/*
 * XREFs of IsDCCurrentPalette @ 0x1C02B7A10
 * Callers:
 *     xxxRealizePalette @ 0x1C011B890 (xxxRealizePalette.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall IsDCCurrentPalette(HDC a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  _QWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  if ( v4[0] )
  {
    if ( *(HPALETTE *)(v4[0] + 80LL) == hForePalette
      || *(_DWORD *)(*(_QWORD *)(v4[0] + 976LL) + 208LL) == 1
      && (v2 = (unsigned __int16)*(_DWORD *)(v4[0] + 80LL) | (*(_DWORD *)(v4[0] + 80LL) >> 8) & 0xFF0000u,
          (_DWORD)v2 == ((unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000))
      && hForePID == (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v2) )
    {
      v1 = 1;
    }
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v4);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v5);
  return v1;
}
