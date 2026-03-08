/*
 * XREFs of GreRectVisible @ 0x1C0086F6C
 * Callers:
 *     NtGdiRectVisible @ 0x1C0086F10 (NtGdiRectVisible.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C0050964 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0050D68 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C0086D84 (bCvtPts1.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008C1D8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C008C950 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C014D8B8 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C014DA72 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C02910AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreRectVisible(HDC a1, struct _RECTL *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  unsigned int v5; // ebx
  struct REGION *v6; // rax
  struct _RECTL v7; // xmm0
  LONG left; // eax
  LONG right; // r8d
  __int64 v10; // rcx
  LONG v12; // eax
  LONG v13; // edx
  _QWORD v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+5Ch] [rbp-A4h]
  _QWORD v19[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v20[32]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v21[2]; // [rsp+90h] [rbp-70h] BYREF
  __int16 v22; // [rsp+A0h] [rbp-60h]
  char v23[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-38h]
  struct _RECTL v25; // [rsp+140h] [rbp+40h] BYREF
  struct _POINTL v26; // [rsp+150h] [rbp+50h] BYREF
  struct _POINTL v27; // [rsp+158h] [rbp+58h] BYREF
  LONG v28; // [rsp+160h] [rbp+60h]
  LONG bottom; // [rsp+164h] [rbp+64h]
  LONG v30; // [rsp+168h] [rbp+68h]
  LONG v31; // [rsp+16Ch] [rbp+6Ch]

  v3 = 0;
  v14[0] = 0LL;
  v14[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v14, a1);
  if ( v14[0] )
  {
    v4 = *(unsigned __int16 *)(v14[0] + 12LL);
    v5 = 1;
    if ( (_WORD)v4 == 1 )
    {
      v21[0] = 0LL;
      v21[1] = 0LL;
      v22 = 256;
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v20, (struct XDCOBJ *)v14, 1);
      if ( (v20[24] & 1) != 0 )
      {
        v6 = XDCOBJ::prgnEffRao((XDCOBJ *)v14);
        v7 = *a2;
        v19[0] = v6;
        v25 = v7;
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v17, (struct XDCOBJ *)v14, 0x80000204);
        if ( (*(_DWORD *)(v17 + 32) & 1) != 0 )
        {
          EXFORMOBJ::vOrder((EXFORMOBJ *)&v17, &v25);
          if ( (*(_BYTE *)(v17 + 32) & 0x43) != 0x43 )
            bCvtPts1(v17, &v25, 2LL);
          left = v25.left;
          right = v25.right;
          if ( v18 )
          {
            left = v25.left + 1;
            right = v25.right + 1;
            ++v25.left;
            ++v25.right;
          }
          v10 = *(_DWORD *)(v14[0] + 40LL) & 1;
          v25.left = *(_DWORD *)(v14[0] + 8 * v10 + 1016) + left;
          v25.right = *(_DWORD *)(v14[0] + 8 * v10 + 1016) + right;
          v25.top += *(_DWORD *)(v14[0] + 8 * v10 + 1020);
          v25.bottom += *(_DWORD *)(v14[0] + 8 * v10 + 1020);
          LOBYTE(v3) = RGNOBJ::bInside((RGNOBJ *)v19, &v25) == 2;
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v20);
          v5 = v3;
          goto LABEL_10;
        }
        v12 = a2->right;
        v13 = a2->left;
        v26.y = a2->top;
        v27.x = v12;
        v27.y = v26.y;
        v28 = v12;
        bottom = a2->bottom;
        v31 = bottom;
        v26.x = v13;
        v30 = v13;
        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v23);
        if ( v24 )
        {
          if ( (unsigned int)EPATHOBJ::bMoveTo((EPATHOBJ *)v23, (struct EXFORMOBJ *)&v17, &v26)
            && (unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)v23, (struct EXFORMOBJ *)&v17, &v27, 3u)
            && EPATHOBJ::bCloseFigure((EPATHOBJ *)v23) )
          {
            RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v16, (struct EPATHOBJ *)v23, 1u, 0LL);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v16);
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v15);
            if ( v16 && v15 )
            {
              if ( RGNOBJ::bMerge((RGNOBJ *)&v15, (struct RGNOBJ *)v19, (struct RGNOBJ *)&v16, 8u)
                && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v15) != 1 )
              {
                v5 = 2;
              }
            }
            else
            {
              EngSetLastError(8u);
              v5 = -1;
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
            goto LABEL_20;
          }
        }
        else
        {
          EngSetLastError(8u);
        }
        v5 = -1;
LABEL_20:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v23);
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v20);
        if ( v21[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v21);
        if ( v14[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v14);
        return v5;
      }
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v20);
    }
    else
    {
      TraceLoggingWriteUnsupportedGdiUsage(21LL, 0LL, v4);
      EngSetLastError(6u);
      v5 = -1;
    }
LABEL_10:
    DCOBJ::~DCOBJ((DCOBJ *)v14);
    return v5;
  }
  EngSetLastError(6u);
  DCOBJ::~DCOBJ((DCOBJ *)v14);
  return 0xFFFFFFFFLL;
}
