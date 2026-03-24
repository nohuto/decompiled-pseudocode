/*
 * XREFs of GreGetAppClipBox @ 0x1C00B6A6C
 * Callers:
 *     NtGdiGetAppClipBox @ 0x1C00B6E30 (NtGdiGetAppClipBox.c)
 * Callees:
 *     bCvtPts1 @ 0x1C0084CF0 (bCvtPts1.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008E970 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACD0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00B2CDC (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B30BC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00B63B0 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FDC44 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C016A4AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C016A60C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A69C (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A898 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetAppClipBox(HDC a1, LONG *a2)
{
  unsigned int v3; // edi
  int v5; // ebx
  unsigned __int64 v6; // r9
  DC *v7; // r15
  LONG v8; // r8d
  LONG v9; // r10d
  char *v10; // rcx
  LONG v11; // edx
  LONG v12; // r8d
  LONG v13; // r10d
  int v14; // ecx
  int v15; // eax
  bool v16; // zf
  int v17; // eax
  LONG v18; // edx
  LONG v19; // eax
  LONG x; // r9d
  LONG v21; // r11d
  LONG v22; // eax
  LONG v23; // ebx
  LONG v24; // eax
  LONG v25; // eax
  LONG v26; // ecx
  LONG y; // r8d
  bool v28; // cc
  LONG v29; // r10d
  LONG v30; // eax
  LONG v31; // eax
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  LONG v38; // eax
  LONG v39; // eax
  LONG v40; // eax
  LONG v41; // ecx
  DC *v43[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v44[32]; // [rsp+40h] [rbp-C0h] BYREF
  struct REGION *v45; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v46; // [rsp+68h] [rbp-98h] BYREF
  int v47; // [rsp+74h] [rbp-8Ch]
  _BYTE v48[32]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-60h]
  __int64 v50; // [rsp+A8h] [rbp-58h]
  char v51[32]; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v52; // [rsp+D0h] [rbp-30h]
  struct _POINTL v53; // [rsp+F0h] [rbp-10h] BYREF
  LONG v54; // [rsp+F8h] [rbp-8h]
  LONG v55; // [rsp+FCh] [rbp-4h]
  LONG v56; // [rsp+100h] [rbp+0h]
  int v57; // [rsp+104h] [rbp+4h]
  LONG v58; // [rsp+108h] [rbp+8h]
  int v59; // [rsp+10Ch] [rbp+Ch]

  v3 = 0;
  v43[0] = 0LL;
  v43[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v44);
  XDCOBJ::vLock((XDCOBJ *)v43, a1);
  if ( !v43[0] )
  {
    EngSetLastError(6u);
    v5 = 0;
    goto LABEL_94;
  }
  if ( *((_WORD *)v43[0] + 6) == 1 )
  {
    v49 = 0LL;
    v50 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v51);
    v52 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v48, (struct XDCOBJ *)v43, 1);
    if ( (v48[24] & 1) == 0 )
    {
      if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v43) )
      {
        *(_QWORD *)a2 = 0LL;
        v5 = 3;
        *((_QWORD *)a2 + 1) = 0LL;
LABEL_92:
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v48);
LABEL_94:
        v3 = v5;
        goto LABEL_95;
      }
LABEL_86:
      v5 = 0;
      goto LABEL_92;
    }
    v45 = XDCOBJ::prgnEffRao(v43);
    *(_OWORD *)a2 = *((_OWORD *)v45 + 6);
    if ( *a2 >= a2[2] || a2[1] >= a2[3] )
    {
      v7 = v43[0];
      v5 = 1;
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
    }
    else
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v46, (struct XDCOBJ *)v43, 0x80000402);
      v6 = v46;
      if ( !v46 )
        goto LABEL_86;
      v7 = v43[0];
      v8 = a2[2];
      v9 = a2[1];
      v10 = (char *)v43[0] + 1024;
      if ( (*((_DWORD *)v43[0] + 10) & 1) == 0 )
        v10 = (char *)v43[0] + 1016;
      v11 = *a2 - *(_DWORD *)v10;
      *a2 = v11;
      v12 = v8 - *(_DWORD *)v10;
      a2[2] = v12;
      v13 = v9 - *((_DWORD *)v10 + 1);
      a2[1] = v13;
      v14 = a2[3] - *((_DWORD *)v10 + 1);
      a2[3] = v14;
      v15 = *(_DWORD *)(v6 + 32);
      if ( (v15 & 1) != 0 )
      {
        if ( (v15 & 0x43) == 0x43 || (v16 = (unsigned int)bCvtPts1(v6, a2, 2LL) == 0, v17 = 0, !v16) )
          v17 = 1;
        if ( v47 )
        {
          ++*a2;
          ++a2[2];
        }
        if ( v17 )
          v5 = RGNOBJ::iComplexity((RGNOBJ *)&v45);
        else
          v5 = 0;
      }
      else
      {
        v53.x = v11;
        v54 = v12;
        v56 = v11;
        v57 = v14;
        v58 = v12;
        v59 = v14;
        v53.y = v13;
        v55 = v13;
        EXFORMOBJ::bXform((EXFORMOBJ *)&v46, &v53, 4LL);
        v18 = v54;
        v19 = v54;
        x = v53.x;
        v21 = v56;
        if ( v53.x < v54 )
          v19 = v53.x;
        if ( v19 >= v56 )
        {
          v22 = v56;
        }
        else
        {
          v22 = v54;
          if ( v53.x < v54 )
            v22 = v53.x;
        }
        v23 = v58;
        if ( v22 >= v58 )
        {
          v25 = v58;
        }
        else
        {
          v24 = v54;
          if ( v53.x < v54 )
            v24 = v53.x;
          if ( v24 >= v56 )
          {
            v25 = v56;
          }
          else
          {
            v25 = v54;
            if ( v53.x < v54 )
              v25 = v53.x;
          }
        }
        v26 = v55;
        y = v53.y;
        v28 = v53.y < v55;
        v29 = v57;
        *a2 = v25;
        v30 = v26;
        if ( v28 )
          v30 = y;
        if ( v30 >= v29 )
        {
          v31 = v29;
        }
        else
        {
          v31 = v26;
          if ( y < v26 )
            v31 = y;
        }
        if ( v31 >= v59 )
        {
          v33 = v59;
        }
        else
        {
          v32 = v26;
          if ( y < v26 )
            v32 = y;
          if ( v32 >= v29 )
          {
            v33 = v29;
          }
          else
          {
            v33 = v26;
            if ( y < v26 )
              v33 = y;
          }
        }
        a2[1] = v33;
        v34 = v18;
        if ( x > v18 )
          v34 = x;
        if ( v34 <= v21 )
        {
          v35 = v21;
        }
        else
        {
          v35 = v18;
          if ( x > v18 )
            v35 = x;
        }
        if ( v35 <= v23 )
        {
          v18 = v23;
        }
        else
        {
          v36 = v18;
          if ( x > v18 )
            v36 = x;
          if ( v36 <= v21 )
          {
            v18 = v21;
          }
          else if ( x > v18 )
          {
            v18 = x;
          }
        }
        a2[2] = v18;
        v37 = v26;
        if ( y > v26 )
          v37 = y;
        if ( v37 <= v29 )
        {
          v38 = v29;
        }
        else
        {
          v38 = v26;
          if ( y > v26 )
            v38 = y;
        }
        if ( v38 <= v59 )
        {
          v26 = v59;
        }
        else
        {
          v39 = v26;
          if ( y > v26 )
            v39 = y;
          if ( v39 <= v29 )
          {
            v26 = v29;
          }
          else if ( y > v26 )
          {
            v26 = y;
          }
        }
        a2[3] = v26;
        v5 = 3;
      }
    }
    if ( v5 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v7 + 122) + 108LL) & 1) != 0 )
      {
        v40 = *a2;
        v41 = a2[2];
        if ( *a2 > v41 )
        {
          *a2 = v41;
          a2[2] = v40;
        }
      }
    }
    goto LABEL_92;
  }
  TraceLoggingWriteUnsupportedGdiUsage(21LL, 0LL, *((unsigned __int16 *)v43[0] + 6), 4LL, 0LL);
  EngSetLastError(6u);
LABEL_95:
  DCOBJ::~DCOBJ((DCOBJ *)v43);
  return v3;
}
