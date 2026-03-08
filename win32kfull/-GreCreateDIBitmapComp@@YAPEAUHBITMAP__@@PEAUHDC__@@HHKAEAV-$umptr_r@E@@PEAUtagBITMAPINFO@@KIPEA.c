/*
 * XREFs of ?GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1C02DFBC8
 * Callers:
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C008C990 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C008FD90 (NtGdiCreateDIBitmapInternal.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007BB00 (GreCreateCompatibleBitmapInternal.c)
 *     ?GreSetDIBitsInternal@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@Z @ 0x1C02DFCFC (-GreSetDIBitsInternal@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX.c)
 */

__int64 __fastcall GreCreateDIBitmapComp(
        HDC a1,
        int a2,
        int a3,
        char a4,
        _QWORD *a5,
        _DWORD *a6,
        unsigned int a7,
        int a8,
        __int64 a9)
{
  int v9; // ebp
  unsigned int v12; // esi
  __int64 CompatibleBitmapInternal; // rdi

  v9 = a7;
  if ( a7 > 2 || a6 && *a6 >= 0x28u && (unsigned int)(a6[4] - 4) <= 1 )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v12 = -a3;
    if ( a3 >= 0 )
      v12 = a3;
    CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal((__int64)a1, a2, v12, 0, 0LL, 0LL);
    if ( CompatibleBitmapInternal )
    {
      if ( (a4 & 4) == 0 || !*a5 || !a6 || (unsigned int)GreSetDIBitsInternal(a1, (__int64)a5, (__int64)a6, v9, a8, a9) )
        return CompatibleBitmapInternal;
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&a7);
      GreDeleteObject(CompatibleBitmapInternal);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&a7);
    }
  }
  return 0LL;
}
