/*
 * XREFs of GreExtSelectClipRgnInternal @ 0x1C016CC48
 * Callers:
 *     _ExcludeUpdateRgn @ 0x1C0043070 (_ExcludeUpdateRgn.c)
 *     NtGdiExtSelectClipRgn @ 0x1C00B29C0 (NtGdiExtSelectClipRgn.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00F2570 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     DrawTextExWorker @ 0x1C025EBF0 (DrawTextExWorker.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008E970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00B2C14 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00B2CDC (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00B2D00 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00B307C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B30BC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00B3134 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C016A4AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreExtSelectClipRgnInternal(HDC a1, HRGN a2, int a3, int a4)
{
  unsigned int v4; // ebx
  DC *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  struct REGION *v13; // [rsp+38h] [rbp-D0h] BYREF
  DC *v14[6]; // [rsp+40h] [rbp-C8h] BYREF
  struct REGION *v15[7]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v16[24]; // [rsp+A8h] [rbp-60h] BYREF
  char v17; // [rsp+C0h] [rbp-48h]

  v4 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    EngSetLastError(0x57u);
    return v4;
  }
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v8 = v14[0];
  if ( !v14[0] )
    goto LABEL_11;
  if ( !a4 )
  {
    if ( (*(_DWORD *)(HmgPentryFromPobj(v14[0]) + 8) & 0xFFFFFFFE) == 0 )
      goto LABEL_11;
    v8 = v14[0];
  }
  v9 = *((unsigned __int16 *)v8 + 6);
  if ( (unsigned __int16)v9 <= 1u )
  {
    if ( a2 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v15, a2, 1, 0);
      if ( v15[0] )
      {
        v4 = DC::iSelect(v14[0], v15[0], a3);
        if ( v4 )
        {
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16, (struct XDCOBJ *)v14, 1);
          v4 = 0;
          if ( (v17 & 1) != 0 )
          {
            v13 = XDCOBJ::prgnEffRao(v14);
            v4 = RGNOBJ::iComplexity((RGNOBJ *)&v13);
          }
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v16);
        }
      }
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v15);
    }
    else if ( a3 == 5 )
    {
      v4 = DC::iSelect(v8, 0LL, 5);
      if ( v4 )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16, (struct XDCOBJ *)v14, 1);
        v4 = 0;
        if ( (v17 & 1) != 0 )
        {
          v13 = DC::prgnVisSnap(v14[0]);
          v4 = RGNOBJ::iComplexity((RGNOBJ *)&v13);
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v16);
      }
    }
    goto LABEL_12;
  }
  v10 = *((_QWORD *)v8 + 6);
  if ( v10 )
    v11 = *(_DWORD *)(v10 + 40);
  else
    v11 = 0;
  TraceLoggingWriteUnsupportedGdiUsage(11, v11, v9, 0LL, 0LL);
LABEL_11:
  EngSetLastError(6u);
LABEL_12:
  DCOBJ::~DCOBJ((DCOBJ *)v14);
  return v4;
}
