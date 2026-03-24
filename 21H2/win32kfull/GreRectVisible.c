/*
 * XREFs of GreRectVisible @ 0x1C00B84E0
 * Callers:
 *     NtGdiRectVisible @ 0x1C00B8840 (NtGdiRectVisible.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008E970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00B2CDC (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B30BC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00B7A24 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B9858 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FDC44 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C016A4AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreRectVisible(HDC a1, struct _RECTL *a2)
{
  unsigned int v3; // ebx
  struct REGION *v4; // rax
  struct _RECTL v5; // xmm0
  char *v6; // rcx
  LONG right; // eax
  LONG left; // edx
  __int64 v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+38h] [rbp-C8h]
  struct REGION *v12; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-A8h] BYREF
  DC *v15[7]; // [rsp+68h] [rbp-98h] BYREF
  char v16[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v17; // [rsp+A8h] [rbp-58h]
  _BYTE v18[32]; // [rsp+120h] [rbp+20h] BYREF
  char v19[80]; // [rsp+140h] [rbp+40h] BYREF
  struct _RECTL v20; // [rsp+190h] [rbp+90h] BYREF
  struct _POINTL v21; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _POINTL v22; // [rsp+1A8h] [rbp+A8h] BYREF
  LONG v23; // [rsp+1B0h] [rbp+B0h]
  LONG bottom; // [rsp+1B4h] [rbp+B4h]
  LONG v25; // [rsp+1B8h] [rbp+B8h]
  LONG v26; // [rsp+1BCh] [rbp+BCh]

  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  if ( !v15[0] )
    goto LABEL_4;
  v3 = 1;
  if ( *((_WORD *)v15[0] + 6) == 1 )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v19);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v18, (struct XDCOBJ *)v15, 1);
    if ( (v18[24] & 1) == 0 )
    {
LABEL_14:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v18);
      goto LABEL_15;
    }
    v4 = XDCOBJ::prgnEffRao(v15);
    v5 = *a2;
    v12 = v4;
    v20 = v5;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v13, (struct XDCOBJ *)v15, 0x80000204);
    if ( (*(_DWORD *)(v13[0] + 32LL) & 1) != 0 )
    {
      EXFORMOBJ::vOrder((EXFORMOBJ *)v13, &v20);
      EXFORMOBJ::bXform((EXFORMOBJ *)v13, (struct _POINTL *)&v20);
      v6 = (char *)v15[0] + 1024;
      if ( (*((_DWORD *)v15[0] + 10) & 1) == 0 )
        v6 = (char *)v15[0] + 1016;
      v20.left += *(_DWORD *)v6;
      v20.right += *(_DWORD *)v6;
      v20.top += *((_DWORD *)v6 + 1);
      v20.bottom += *((_DWORD *)v6 + 1);
      v3 = RGNOBJ::bInside((RGNOBJ *)&v12, &v20) == 2;
      goto LABEL_14;
    }
    right = a2->right;
    left = a2->left;
    v21.y = a2->top;
    v22.x = right;
    v22.y = v21.y;
    v23 = right;
    bottom = a2->bottom;
    v26 = bottom;
    v21.x = left;
    v25 = left;
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v16);
    if ( v17 )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)v16, (struct EXFORMOBJ *)v13, &v21)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)v16, (struct EXFORMOBJ *)v13, &v22, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)v16) )
      {
        v10 = 0LL;
        v11 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v10, (struct EPATHOBJ *)v16, 1u, 0LL);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v10);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v14);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v14);
        if ( v10 && v14[0] )
        {
          if ( RGNOBJ::bMerge((RGNOBJ *)v14, (struct RGNOBJ *)&v12, (struct RGNOBJ *)&v10, 8u)
            && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v14) != 1 )
          {
            v3 = 2;
          }
        }
        else
        {
          EngSetLastError(8u);
          v3 = -1;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
        goto LABEL_13;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v3 = -1;
LABEL_13:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v16);
    goto LABEL_14;
  }
  TraceLoggingWriteUnsupportedGdiUsage(21LL, 0LL, *((unsigned __int16 *)v15[0] + 6), 7LL, 0LL);
LABEL_4:
  EngSetLastError(6u);
  v3 = -1;
LABEL_15:
  DCOBJ::~DCOBJ((DCOBJ *)v15);
  return v3;
}
