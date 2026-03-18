/*
 * XREFs of GreExtSelectClipRgnInternal @ 0x1C014CBF4
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C009050C (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     _ExcludeUpdateRgn @ 0x1C00C4B2C (_ExcludeUpdateRgn.c)
 *     DrawTextExWorker @ 0x1C025B810 (DrawTextExWorker.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0041E20 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C0041E44 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0042D7C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0043D24 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreExtSelectClipRgnInternal(HDC a1, HRGN a2, int a3, int a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // edi
  DC *v9; // rcx
  __int64 v10; // rax
  struct REGION *v12; // [rsp+38h] [rbp-D0h] BYREF
  DC *v13[2]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v14[40]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v15[24]; // [rsp+78h] [rbp-90h] BYREF
  char v16; // [rsp+90h] [rbp-78h]
  _QWORD v17[2]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v18[64]; // [rsp+A8h] [rbp-60h] BYREF
  struct REGION *v19[8]; // [rsp+E8h] [rbp-20h] BYREF

  v4 = 0;
  v8 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    EngSetLastError(0x57u);
    return v8;
  }
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v9 = v13[0];
  if ( !v13[0] )
    goto LABEL_10;
  if ( !a4 )
  {
    if ( (*(_DWORD *)(HmgPentryFromPobj(v13[0]) + 8) & 0xFFFFFFFE) == 0 )
      goto LABEL_10;
    v9 = v13[0];
  }
  if ( *((_WORD *)v9 + 6) <= 1u )
  {
    if ( a2 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a2, 1, 0);
      if ( v19[0] )
      {
        v8 = DC::iSelect(v13[0], v19[0], a3);
        if ( v8 )
        {
          DLODCOBJ::DLODCOBJ((DLODCOBJ *)v17);
          DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v13, 1);
          v8 = 0;
          if ( (v16 & 1) != 0 )
          {
            v12 = XDCOBJ::prgnEffRao(v13);
            v8 = RGNOBJ::iComplexity((RGNOBJ *)&v12);
          }
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v15);
          if ( v17[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v17);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v18);
        }
      }
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
    }
    else if ( a3 == 5 )
    {
      v8 = DC::iSelect(v9, 0LL, 5);
      if ( v8 )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v17);
        DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v13, 1);
        v8 = 0;
        if ( (v16 & 1) != 0 )
        {
          v12 = DC::prgnVisSnap(v13[0]);
          v8 = RGNOBJ::iComplexity((RGNOBJ *)&v12);
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v15);
        if ( v17[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v17);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v18);
      }
    }
    goto LABEL_11;
  }
  v10 = *((_QWORD *)v9 + 6);
  if ( v10 )
    v4 = *(_DWORD *)(v10 + 40);
  TraceLoggingWriteUnsupportedGdiUsage(11LL, v4, *((unsigned __int16 *)v9 + 6));
LABEL_10:
  EngSetLastError(6u);
LABEL_11:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v13);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v14);
  return v8;
}
