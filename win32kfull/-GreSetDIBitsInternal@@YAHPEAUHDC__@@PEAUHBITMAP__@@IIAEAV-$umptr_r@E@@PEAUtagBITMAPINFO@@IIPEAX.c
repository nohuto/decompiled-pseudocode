/*
 * XREFs of ?GreSetDIBitsInternal@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@Z @ 0x1C02DFCFC
 * Callers:
 *     ?GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1C02DFBC8 (-GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEA.c)
 *     GreSetDIBits @ 0x1C02E0580 (GreSetDIBits.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C008D940 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 */

__int64 __fastcall GreSetDIBitsInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9)
{
  HDC CompatibleDC; // rdi
  __int64 v11; // r12
  int v12; // r13d
  int v15; // ebp
  struct Gre::Base::SESSION_GLOBALS *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbx
  int v20; // r14d
  __int64 v21; // r14
  _QWORD v23[9]; // [rsp+80h] [rbp-48h] BYREF
  int v25; // [rsp+E0h] [rbp+18h]
  int v27; // [rsp+F8h] [rbp+30h]

  CompatibleDC = 0LL;
  v11 = 0LL;
  v25 = 0;
  v12 = 0;
  if ( !a6 || *a6 >= 0x28 && a6[4] - 4 <= 1 )
  {
    EngSetLastError(0x57u);
    return (unsigned int)CompatibleDC;
  }
  v15 = a6[2];
  v27 = a6[1];
  if ( v15 < 0 )
    v15 = -v15;
  v16 = Gre::Base::Globals((Gre::Base *)a1);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v16 + 10));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v16 + 10));
  LOBYTE(v17) = 5;
  v18 = HmgShareLockCheck(a2, v17);
  v19 = v18;
  if ( v18 && (*(_DWORD *)(v18 + 112) & 0x4000000) != 0 )
  {
    if ( *(_DWORD *)(v18 + 168) )
      CompatibleDC = *(HDC *)(v18 + 160);
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
    GreReleaseSemaphoreInternal(*((_QWORD *)v16 + 10));
    if ( CompatibleDC || (CompatibleDC = (HDC)GreCreateCompatibleDC(a1), v12 = 1, CompatibleDC) )
    {
      v20 = 1;
      if ( !a1 || a1 == CompatibleDC )
        goto LABEL_20;
      DCOBJ::DCOBJ((DCOBJ *)v23, a1);
      if ( v23[0] )
      {
        v11 = GreSelectPalette(CompatibleDC, *(_QWORD *)(v23[0] + 80LL), 1LL);
      }
      else
      {
        EngSetLastError(6u);
        v20 = 0;
      }
      if ( v23[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v23);
      if ( v20 )
      {
LABEL_20:
        v21 = GreSelectBitmap(CompatibleDC, a2);
        if ( v21 )
        {
          v25 = GreSetDIBitsToDeviceInternalImpl(CompatibleDC, 0LL, 0, v27, v15, 0, 0, 0, a4, a5, a6, a7, a8, 0, a9);
          if ( v11 )
            GreSelectPalette(CompatibleDC, v11, 1LL);
          GreSelectBitmap(CompatibleDC, v21);
        }
      }
      if ( v12 )
        GrepDeleteDC(CompatibleDC, 0x400000LL);
      LODWORD(CompatibleDC) = v25;
    }
    else
    {
      LODWORD(CompatibleDC) = 0;
    }
  }
  else
  {
    EngSetLastError(6u);
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
    GreReleaseSemaphoreInternal(*((_QWORD *)v16 + 10));
    if ( !v19 )
      return (unsigned int)CompatibleDC;
  }
  DEC_SHARE_REF_CNT(v19);
  return (unsigned int)CompatibleDC;
}
