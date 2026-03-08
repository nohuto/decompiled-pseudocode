/*
 * XREFs of GreExcludeClipRect @ 0x1C0088000
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C000FA18 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     NtGdiExcludeClipRect @ 0x1C0087FE0 (NtGdiExcludeClipRect.c)
 * Callees:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C0050964 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     bCvtPts1 @ 0x1C0086D84 (bCvtPts1.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0088198 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C02910AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreExcludeClipRect(HDC a1, LONG left, LONG a3, LONG right, LONG a5)
{
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  DC *v11; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v13; // rdi
  __int64 v15; // rax
  unsigned int v16; // ecx
  ULONG v17; // ecx
  DC *v18; // [rsp+30h] [rbp-40h] BYREF
  int v19; // [rsp+38h] [rbp-38h]
  unsigned int v20; // [rsp+3Ch] [rbp-34h]
  int v21; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-28h] BYREF
  int v23; // [rsp+54h] [rbp-1Ch]
  struct _RECTL v24; // [rsp+58h] [rbp-18h] BYREF

  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v18, a1);
  if ( v18 )
  {
    if ( *((_WORD *)v18 + 6) > 1u )
    {
      v15 = *((_QWORD *)v18 + 6);
      if ( v15 )
        v16 = *(_DWORD *)(v15 + 40);
      else
        v16 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(10LL, v16, *((unsigned __int16 *)v18 + 6));
      EngSetLastError(6u);
      DCOBJ::~DCOBJ((DCOBJ *)&v18);
      return 0LL;
    }
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v22, (struct XDCOBJ *)&v18, 0x80000204);
    v24.left = left;
    v24.top = a3;
    v24.right = right;
    v24.bottom = a5;
    v8 = *(_DWORD *)(v22 + 32);
    if ( (v8 & 1) != 0 )
    {
      if ( (v8 & 0x43) != 0x43 )
      {
        bCvtPts1(v22, &v24, 2LL);
        right = v24.right;
        left = v24.left;
      }
      if ( v23 )
      {
        v24.left = left + 1;
        v24.right = right + 1;
      }
      ERECTL::vOrder((ERECTL *)&v24);
      v9 = DC::iCombine(v18, &v24, 4);
      goto LABEL_9;
    }
    if ( ((left & 0xF8000000) == 0 || (left & 0xF8000000) == -134217728)
      && ((a5 & 0xF8000000) == 0 || (a5 & 0xF8000000) == 0xF8000000)
      && (((right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
    {
      v9 = DC::iCombine(v18, (struct EXFORMOBJ *)&v22, &v24, 4);
LABEL_9:
      v10 = v9;
      if ( v9 > 1 )
        v10 = 3;
      goto LABEL_11;
    }
    v17 = 87;
  }
  else
  {
    v17 = 6;
  }
  EngSetLastError(v17);
  v10 = 0;
LABEL_11:
  v11 = v18;
  if ( v18 )
  {
    if ( v19 && (*((_DWORD *)v18 + 11) & 2) != 0 )
    {
      if ( !v20 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v18);
        v11 = v18;
        if ( UserAttr )
        {
          DC::RestoreAttributes(v18, UserAttr);
          v11 = v18;
        }
      }
      *((_DWORD *)v11 + 11) &= ~2u;
      v19 = 0;
      v11 = v18;
    }
    v21 = 0;
    v13 = *(_QWORD *)v11;
    HmgDecrementExclusiveReferenceCountEx(v11, v20, &v21);
    if ( v21 )
      GrepDeleteDC(v13, 0x2000000LL);
  }
  return v10;
}
