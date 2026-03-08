/*
 * XREFs of GreGetAppClipBox @ 0x1C008C244
 * Callers:
 *     NtGdiGetAppClipBox @ 0x1C008C170 (NtGdiGetAppClipBox.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0050D68 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0051250 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007FBDC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     bCvtPts1 @ 0x1C0086D84 (bCvtPts1.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00881C4 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C008C218 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C008C924 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269660 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C02910AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreGetAppClipBox(HDC a1, LONG *a2)
{
  unsigned int v3; // ebx
  DC *v4; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v6; // rax
  struct REGION *v7; // rax
  struct REGION *v8; // rsi
  unsigned __int64 v9; // r9
  DC *v10; // rdx
  LONG v11; // r10d
  LONG v12; // r11d
  __int64 v13; // rcx
  LONG v14; // r8d
  LONG v15; // r10d
  LONG v16; // r11d
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  bool v21; // zf
  __int64 v22; // rax
  int v23; // esi
  unsigned int v24; // esi
  DC *v25; // rcx
  struct _DC_ATTR *v26; // rax
  __int64 v27; // rdi
  LONG v29; // edx
  LONG v30; // eax
  LONG x; // r9d
  LONG v32; // r11d
  LONG v33; // eax
  LONG v34; // esi
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // ecx
  LONG y; // r8d
  bool v39; // cc
  LONG v40; // r10d
  LONG v41; // eax
  LONG v42; // eax
  LONG v43; // r14d
  LONG v44; // eax
  LONG v45; // eax
  LONG v46; // eax
  LONG v47; // eax
  LONG v48; // eax
  LONG v49; // eax
  LONG v50; // eax
  LONG v51; // eax
  LONG v52; // eax
  LONG v53; // ecx
  DC *v54; // [rsp+30h] [rbp-79h] BYREF
  __int64 v55; // [rsp+38h] [rbp-71h]
  int v56; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int64 v57; // [rsp+48h] [rbp-61h] BYREF
  int v58; // [rsp+54h] [rbp-55h]
  _BYTE v59[32]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v60[2]; // [rsp+80h] [rbp-29h] BYREF
  __int16 v61; // [rsp+90h] [rbp-19h]
  struct _POINTL v62; // [rsp+B0h] [rbp+7h] BYREF
  LONG v63; // [rsp+B8h] [rbp+Fh]
  LONG v64; // [rsp+BCh] [rbp+13h]
  LONG v65; // [rsp+C0h] [rbp+17h]
  int v66; // [rsp+C4h] [rbp+1Bh]
  LONG v67; // [rsp+C8h] [rbp+1Fh]
  int v68; // [rsp+CCh] [rbp+23h]

  v3 = 0;
  v54 = 0LL;
  v55 = 0LL;
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v54, a1);
  v4 = v54;
  if ( !v54 )
    goto LABEL_50;
  if ( (*((_DWORD *)v54 + 11) & 2) == 0 )
  {
    if ( !HIDWORD(v55) )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v54);
      if ( UserAttr && !DC::SaveAttributes(v54, UserAttr) )
      {
        _InterlockedDecrement((volatile signed __int32 *)v54 + 3);
        v54 = 0LL;
        goto LABEL_50;
      }
      v4 = v54;
    }
    *((_DWORD *)v4 + 11) |= 2u;
    v4 = v54;
    LODWORD(v55) = 1;
  }
  if ( (*((_DWORD *)v4 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v4);
    v4 = v54;
  }
  if ( v4 )
  {
    v6 = *((unsigned __int16 *)v4 + 6);
    if ( (_WORD)v6 == 1 )
    {
      v60[0] = 0LL;
      v60[1] = 0LL;
      v61 = 256;
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v59, (struct XDCOBJ *)&v54, 1);
      if ( (v59[24] & 1) != 0 )
      {
        if ( DC::prgnRao(v54) )
          v7 = DC::prgnRao(v54);
        else
          v7 = DC::prgnVisSnap(v54);
        v8 = v7;
        *(_OWORD *)a2 = *(_OWORD *)((char *)v7 + 56);
        if ( *a2 >= a2[2] || a2[1] >= a2[3] )
        {
          *(_QWORD *)a2 = 0LL;
          v24 = 1;
          *((_QWORD *)a2 + 1) = 0LL;
          goto LABEL_31;
        }
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v57, (struct XDCOBJ *)&v54, 0x80000402);
        v9 = v57;
        if ( v57 )
        {
          v10 = v54;
          v11 = a2[2];
          v12 = a2[1];
          v13 = *((_DWORD *)v54 + 10) & 1;
          v14 = *a2 - *((_DWORD *)v54 + 2 * v13 + 254);
          *a2 = v14;
          v15 = v11 - *((_DWORD *)v10 + 2 * v13 + 254);
          a2[2] = v15;
          v16 = v12 - *((_DWORD *)v10 + 2 * v13 + 255);
          a2[1] = v16;
          v17 = a2[3] - *((_DWORD *)v10 + 2 * v13 + 255);
          a2[3] = v17;
          v18 = *(_DWORD *)(v9 + 32);
          if ( (v18 & 1) == 0 )
          {
            v62.x = v14;
            v65 = v14;
            v66 = v17;
            v68 = v17;
            v62.y = v16;
            v63 = v15;
            v64 = v16;
            v67 = v15;
            EXFORMOBJ::bXform((EXFORMOBJ *)&v57, &v62, 4LL);
            v29 = v63;
            v30 = v63;
            x = v62.x;
            v32 = v65;
            if ( v62.x < v63 )
              v30 = v62.x;
            if ( v30 >= v65 )
            {
              v33 = v65;
            }
            else
            {
              v33 = v63;
              if ( v62.x < v63 )
                v33 = v62.x;
            }
            v34 = v67;
            if ( v33 >= v67 )
            {
              v36 = v67;
            }
            else
            {
              v35 = v63;
              if ( v62.x < v63 )
                v35 = v62.x;
              if ( v35 >= v65 )
              {
                v36 = v65;
              }
              else
              {
                v36 = v63;
                if ( v62.x < v63 )
                  v36 = v62.x;
              }
            }
            v37 = v64;
            y = v62.y;
            v39 = v62.y < v64;
            v40 = v66;
            *a2 = v36;
            v41 = v37;
            if ( v39 )
              v41 = y;
            if ( v41 >= v40 )
            {
              v42 = v40;
            }
            else
            {
              v42 = v37;
              if ( y < v37 )
                v42 = y;
            }
            v43 = v68;
            if ( v42 >= v68 )
            {
              v45 = v68;
            }
            else
            {
              v44 = v37;
              if ( y < v37 )
                v44 = y;
              if ( v44 >= v40 )
              {
                v45 = v40;
              }
              else
              {
                v45 = v37;
                if ( y < v37 )
                  v45 = y;
              }
            }
            a2[1] = v45;
            v46 = v29;
            if ( x > v29 )
              v46 = x;
            if ( v46 <= v32 )
            {
              v47 = v32;
            }
            else
            {
              v47 = v29;
              if ( x > v29 )
                v47 = x;
            }
            if ( v47 <= v34 )
            {
              v29 = v34;
            }
            else
            {
              v48 = v29;
              if ( x > v29 )
                v48 = x;
              if ( v48 <= v32 )
              {
                v29 = v32;
              }
              else if ( x > v29 )
              {
                v29 = x;
              }
            }
            a2[2] = v29;
            v49 = v37;
            if ( y > v37 )
              v49 = y;
            if ( v49 <= v40 )
            {
              v50 = v40;
            }
            else
            {
              v50 = v37;
              if ( y > v37 )
                v50 = y;
            }
            if ( v50 <= v43 )
            {
              v37 = v43;
            }
            else
            {
              v51 = v37;
              if ( y > v37 )
                v51 = y;
              if ( v51 <= v40 )
              {
                v37 = v40;
              }
              else if ( y > v37 )
              {
                v37 = y;
              }
            }
            a2[3] = v37;
            v24 = 3;
LABEL_30:
            if ( !v24 )
            {
LABEL_32:
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v59);
              if ( v60[0] )
                DLODCOBJ::vUnlock((DLODCOBJ *)v60);
              goto LABEL_34;
            }
LABEL_31:
            if ( (*(_DWORD *)(*((_QWORD *)v54 + 122) + 108LL) & 1) != 0 )
            {
              v52 = *a2;
              v53 = a2[2];
              if ( *a2 > v53 )
              {
                *a2 = v53;
                a2[2] = v52;
              }
            }
            goto LABEL_32;
          }
          if ( (v18 & 0x43) == 0x43 || (v21 = (unsigned int)bCvtPts1(v9, a2, 2LL) == 0, v19 = 0, !v21) )
            v19 = 1;
          if ( v58 )
          {
            ++*a2;
            ++a2[2];
          }
          if ( v19 )
          {
            v20 = (__int64)v8 + 52;
            if ( !v8 )
              v20 = 28LL;
            if ( *(_DWORD *)v20 == 1 )
            {
              v24 = 1;
            }
            else
            {
              v21 = v8 == 0LL;
              v22 = (__int64)v8 + 48;
              v23 = 0;
              if ( v21 )
                v22 = 24LL;
              LOBYTE(v23) = *(_DWORD *)v22 > 0x38u;
              v24 = v23 + 2;
            }
            goto LABEL_30;
          }
        }
        v24 = 0;
        goto LABEL_30;
      }
      if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)&v54) )
      {
        *(_QWORD *)a2 = 0LL;
        *((_QWORD *)a2 + 1) = 0LL;
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v59);
        v3 = 3;
      }
      else
      {
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v59);
        if ( v60[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v60);
      }
    }
    else
    {
      TraceLoggingWriteUnsupportedGdiUsage(21LL, 0LL, v6);
      EngSetLastError(6u);
    }
    DCOBJ::~DCOBJ((DCOBJ *)&v54);
    return v3;
  }
LABEL_50:
  EngSetLastError(6u);
  v24 = 0;
LABEL_34:
  v25 = v54;
  if ( v54 )
  {
    if ( (_DWORD)v55 && (*((_DWORD *)v54 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v55) )
      {
        v26 = XDCOBJ::GetUserAttr((XDCOBJ *)&v54);
        v25 = v54;
        if ( v26 )
        {
          DC::RestoreAttributes(v54, v26);
          v25 = v54;
        }
      }
      *((_DWORD *)v25 + 11) &= ~2u;
      v25 = v54;
      LODWORD(v55) = 0;
    }
    v56 = 0;
    v27 = *(_QWORD *)v25;
    HmgDecrementExclusiveReferenceCountEx(v25, HIDWORD(v55), &v56);
    if ( v56 )
      GrepDeleteDC(v27, 0x2000000LL);
  }
  return v24;
}
