__int64 __fastcall GreDrawStream(Gre::Base *a1, unsigned int a2, int *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 left; // rdx
  __int64 top; // rcx
  int v14; // eax
  _DWORD *v15; // rsi
  unsigned int v16; // r14d
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  int v19; // r11d
  int v20; // r8d
  int v21; // eax
  int v22; // edx
  int v23; // r10d
  int v24; // eax
  int v25; // r9d
  int v26; // r8d
  int v27; // eax
  HDC v28; // rdx
  struct _DC_ATTR *UserAttr; // rax
  int v30; // eax
  int v31; // r8d
  LONG v32; // r10d
  LONG bottom; // r9d
  __int64 v34; // rax
  Gre::Base *v35; // r14
  Gre::Base *v36; // rsi
  Gre::Base *v37; // rdi
  __int64 v38; // rdi
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int cEntries; // eax
  DC *v44; // rcx
  struct _DC_ATTR *v45; // rax
  __int64 v46; // rbx
  LONG right; // r8d
  LONG v49; // eax
  LONG v50; // eax
  LONG v51; // eax
  LONG v52; // eax
  struct Gre::Base::SESSION_GLOBALS *v53; // rax
  struct Gre::Base::SESSION_GLOBALS *v54; // rax
  struct Gre::Base::SESSION_GLOBALS *v55; // rax
  __int64 v56; // rcx
  int v57; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v58; // [rsp+64h] [rbp-9Ch]
  DC *v59; // [rsp+68h] [rbp-98h] BYREF
  __int64 v60; // [rsp+70h] [rbp-90h]
  unsigned int v61; // [rsp+78h] [rbp-88h]
  int v62; // [rsp+7Ch] [rbp-84h]
  Gre::Base *v63; // [rsp+80h] [rbp-80h] BYREF
  Gre::Base *v64; // [rsp+88h] [rbp-78h] BYREF
  char *v65; // [rsp+90h] [rbp-70h]
  Gre::Base *v66; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v67; // [rsp+A0h] [rbp-60h]
  struct SURFACE *v68; // [rsp+A8h] [rbp-58h]
  struct _XLATEOBJ *v69; // [rsp+B0h] [rbp-50h] BYREF
  char *v70; // [rsp+B8h] [rbp-48h] BYREF
  int v71; // [rsp+C0h] [rbp-40h]
  int v72; // [rsp+C4h] [rbp-3Ch]
  __int64 v73; // [rsp+C8h] [rbp-38h]
  __int64 v74; // [rsp+D0h] [rbp-30h]
  struct _XLATEOBJ *v75; // [rsp+D8h] [rbp-28h]
  struct Gre::Base::SESSION_GLOBALS *v76; // [rsp+E0h] [rbp-20h]
  Gre::Base *v77; // [rsp+E8h] [rbp-18h]
  __int64 v78; // [rsp+F0h] [rbp-10h]
  __int128 v79; // [rsp+100h] [rbp+0h] BYREF
  __int64 v80; // [rsp+110h] [rbp+10h]
  int v81; // [rsp+118h] [rbp+18h]
  _QWORD v82[2]; // [rsp+120h] [rbp+20h] BYREF
  __int16 v83; // [rsp+130h] [rbp+30h]
  __int64 v84; // [rsp+138h] [rbp+38h]
  __int64 v85; // [rsp+140h] [rbp+40h]
  __int64 v86; // [rsp+148h] [rbp+48h]
  _QWORD v87[4]; // [rsp+150h] [rbp+50h] BYREF
  Gre::Base *v88; // [rsp+170h] [rbp+70h]
  Gre::Base *v89; // [rsp+178h] [rbp+78h]
  Gre::Base *v90; // [rsp+180h] [rbp+80h]
  struct _RECTL v91; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL v92; // [rsp+1B0h] [rbp+B0h] BYREF

  v77 = a1;
  v83 = 256;
  v60 = 0LL;
  v5 = 0LL;
  v59 = 0LL;
  v6 = 0LL;
  v70 = 0LL;
  v7 = 0LL;
  v72 = 0;
  v82[1] = 0LL;
  v8 = 0LL;
  v76 = Gre::Base::Globals(a1);
  v9 = 0LL;
  v10 = *((_QWORD *)v76 + 751);
  v57 = 0;
  v73 = 0LL;
  v68 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v69 = 0LL;
  v62 = 0;
  v65 = 0LL;
  v78 = v10;
  memset_0(v87, 0, 0x48uLL);
  v61 = 0;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0;
  v82[0] = 0LL;
  v86 = 0LL;
  v85 = 0LL;
  v84 = 0LL;
  top = *(_QWORD *)(SGDGetSessionState(v11) + 32);
  if ( *(_DWORD *)(top + 8740) )
  {
    if ( a2 >= 4 )
    {
      v14 = *a3;
      v15 = a3 + 1;
      v67 = v15;
      if ( v14 == 1148352339 )
      {
        v16 = a2 - 4;
        v58 = v16;
        if ( v16 < 4 )
        {
LABEL_107:
          LODWORD(v36) = 1;
          goto LABEL_108;
        }
        while ( 1 )
        {
          if ( *v15 )
          {
            top = (unsigned int)(*v15 - 1);
            if ( *v15 != 1 )
            {
              if ( *v15 != 9 )
                goto LABEL_135;
              v58 = 60;
              if ( v16 < 0x3C )
                goto LABEL_135;
              v19 = v15[9];
              if ( (v19 & 0xFFFFFF80) != 0 )
                goto LABEL_135;
              if ( !v68 )
                goto LABEL_135;
              v20 = v15[5];
              if ( v20 < 0 )
                goto LABEL_135;
              v21 = v15[6];
              if ( v21 < 0 )
                goto LABEL_135;
              v22 = v15[7];
              if ( v22 > *((_DWORD *)v68 + 14) )
                goto LABEL_135;
              top = (unsigned int)v15[8];
              if ( (int)top > *((_DWORD *)v68 + 15) )
                goto LABEL_135;
              left = (unsigned int)(v22 - v20);
              top = (unsigned int)(top - v21);
              if ( (int)left <= 0 )
                goto LABEL_135;
              if ( (int)top <= 0 )
                goto LABEL_135;
              if ( (v19 & 0x20) == 0 )
              {
                v23 = v15[10];
                if ( v23 < 0 )
                  goto LABEL_135;
                v24 = v15[11];
                if ( v24 < 0 )
                  goto LABEL_135;
                v25 = v15[12];
                if ( v25 < 0 )
                  goto LABEL_135;
                v26 = v15[13];
                if ( v26 < 0
                  || v23 > (int)left
                  || v24 > (int)left
                  || v25 > (int)top
                  || v26 > (int)top
                  || v23 + v24 > (int)left
                  || v26 + v25 > (int)top )
                {
                  goto LABEL_135;
                }
              }
              if ( (v19 & 0xC) == 0xC )
                goto LABEL_135;
              if ( (v19 & 8) != 0 )
              {
                v15[14] = ulGetNearestIndexFromColorref(v9, v6, (unsigned int)v15[14], 1LL);
              }
              else
              {
                v27 = v62;
                if ( (v19 & 4) != 0 )
                  v27 = 1;
                v62 = v27;
              }
              if ( v65 )
              {
                left = (unsigned int)v92.left;
                right = v92.right;
                if ( v92.left == v92.right || (top = (unsigned int)v92.top, v92.top == v92.bottom) )
                {
                  v92 = *(struct _RECTL *)(v15 + 1);
                }
                else
                {
                  v49 = v15[1];
                  if ( v49 < v92.left )
                    left = (unsigned int)v49;
                  v50 = v15[2];
                  v92.left = left;
                  if ( v50 < v92.top )
                    top = (unsigned int)v50;
                  v51 = v15[3];
                  v92.top = top;
                  if ( v51 > v92.right )
                    right = v51;
                  v52 = v15[4];
                  v92.right = right;
                  if ( v52 > v92.bottom )
                    v92.bottom = v52;
                }
              }
              else
              {
                v92 = *(struct _RECTL *)(v15 + 1);
                v65 = (char *)v15;
              }
              goto LABEL_20;
            }
            top = (__int64)v65;
            if ( !v65 )
            {
              if ( v5 )
              {
                if ( (struct SURFACE *)v5 == SURFACE::pdibDefault )
                {
                  DEC_SHARE_REF_CNT(v5);
                }
                else
                {
                  GreAcquireHmgrSemaphore();
                  SURFACE::vDec_cRef((SURFACE *)v5);
                  GreReleaseHmgrSemaphore();
                }
                v5 = 0LL;
              }
              v58 = 8;
              if ( v16 < 8 )
                goto LABEL_135;
              if ( !v61 )
                goto LABEL_135;
              LOBYTE(left) = 5;
              v5 = HmgShareLockCheck((int)v15[1], left);
              if ( !v5 )
                goto LABEL_135;
              if ( (struct SURFACE *)v5 != SURFACE::pdibDefault )
              {
                GreAcquireHmgrSemaphore();
                INC_SHARE_REF_CNT(v5);
                ++*(_DWORD *)(v5 + 168);
                DEC_SHARE_REF_CNT(v5);
                GreReleaseHmgrSemaphore();
              }
              v9 = *(_QWORD *)(v5 + 128);
              v68 = (struct SURFACE *)v5;
              v17 = *((_QWORD *)v76 + 750);
              v74 = v17;
              if ( !v9
                || (*(_DWORD *)(v9 + 24) & 0x2000) != 0
                || v5 == v73
                || *(_DWORD *)(v5 + 96) != 6
                || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                    &v69,
                                    0LL,
                                    *((unsigned int *)v59 + 30),
                                    v9,
                                    v7,
                                    v17,
                                    v8,
                                    *(_DWORD *)(*((_QWORD *)v59 + 122) + 184LL),
                                    *(_DWORD *)(*((_QWORD *)v59 + 122) + 176LL),
                                    0,
                                    0) )
              {
                goto LABEL_135;
              }
              v75 = v69;
              goto LABEL_20;
            }
          }
          else
          {
            top = (__int64)v65;
            if ( !v65 )
            {
              v58 = 24;
              if ( v16 < 0x18 )
                goto LABEL_135;
              v28 = (HDC)(int)v15[1];
              if ( v28 != (HDC)v77 )
                goto LABEL_135;
              top = v61;
              if ( !v61 )
              {
                XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v59, v28);
                if ( !v59 )
                  goto LABEL_135;
                if ( (*((_DWORD *)v59 + 11) & 2) == 0 )
                {
                  if ( !HIDWORD(v60) )
                  {
                    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v59);
                    if ( UserAttr )
                    {
                      if ( !DC::SaveAttributes(v59, UserAttr) )
                      {
                        _InterlockedDecrement((volatile signed __int32 *)v59 + 3);
                        LODWORD(v36) = v57;
                        v59 = 0LL;
                        goto LABEL_108;
                      }
                    }
                  }
                  *((_DWORD *)v59 + 11) |= 2u;
                  LODWORD(v60) = 1;
                }
                if ( (*((_DWORD *)v59 + 130) & 4) != 0 )
                  DC::vMarkTransformDirty(v59);
                top = v61;
              }
              if ( !v59
                || (*((_DWORD *)v59 + 9) & 0x10000) != 0
                || !(_DWORD)top && !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v79, (struct XDCOBJ *)&v59, 0) )
              {
                goto LABEL_135;
              }
              v71 = *(_DWORD *)(*((_QWORD *)v59 + 122) + 208LL);
              v72 = *(_DWORD *)(*((_QWORD *)v59 + 122) + 108LL) & 1;
              if ( (*(_DWORD *)(*((_QWORD *)v59 + 122) + 340LL) & 0x1E000) != 0 )
              {
                EXFORMOBJ::vInit((EXFORMOBJ *)&v70, (struct XDCOBJ *)&v59, 0x204u, 0);
                top = (__int64)v70;
              }
              else
              {
                top = (__int64)v59 + 320;
                v70 = (char *)v59 + 320;
              }
              v30 = *(_DWORD *)(top + 32);
              if ( (v30 & 1) == 0 )
                goto LABEL_135;
              v31 = v15[2];
              v32 = v15[3];
              left = (unsigned int)v15[4];
              bottom = v15[5];
              v91.left = v31;
              v91.top = v32;
              v91.right = left;
              v91.bottom = bottom;
              if ( (v30 & 0x43) != 0x43 )
              {
                bCvtPts1(top, &v91, 2LL);
                bottom = v91.bottom;
                left = (unsigned int)v91.right;
                v32 = v91.top;
                v31 = v91.left;
              }
              if ( v72 )
              {
                ++v31;
                left = (unsigned int)(left + 1);
                v91.left = v31;
                v91.right = left;
              }
              if ( v31 > (int)left )
              {
                v91.left = left;
                v91.right = v31;
              }
              if ( v32 > bottom )
              {
                v91.top = bottom;
                v91.bottom = v32;
              }
              top = *((unsigned int *)v59 + 9);
              if ( (top & 0xE0) != 0 )
                XDCOBJ::vAccumulate((XDCOBJ *)&v59, (struct ERECTL *)&v91);
              v34 = *((_QWORD *)v59 + 62);
              v73 = v34;
              if ( !v34 )
                goto LABEL_135;
              v7 = *(_QWORD *)(v34 + 128);
              v8 = *((_QWORD *)v59 + 11);
              if ( v9 )
              {
                if ( (*(_DWORD *)(v9 + 24) & 0x2000) != 0 )
                  goto LABEL_135;
              }
              v61 = 1;
LABEL_20:
              v16 -= v58;
              v18 = (unsigned __int64)v58 >> 2;
              v58 = v16;
              v15 += v18;
              v67 = v15;
              if ( v16 )
                goto LABEL_21;
              top = (__int64)v65;
              if ( !v65 )
                goto LABEL_21;
            }
          }
          if ( v59 && v68 )
          {
            v87[0] = 72LL;
            v35 = 0LL;
            v63 = 0LL;
            v36 = 0LL;
            v64 = 0LL;
            v37 = 0LL;
            v66 = 0LL;
            v87[1] = 33488896LL;
            v87[2] = 0LL;
            if ( v62 )
            {
              if ( (unsigned int)(*(_DWORD *)(v73 + 96) - 1) <= 2
                || (v38 = v78, !(unsigned int)EXLATEOBJ::bInitXlateObj(&v63, 0LL, 0LL, v9, v78, v74, v74, 0, 0, 0, 0))
                || (v35 = v63,
                    v88 = v63,
                    !(unsigned int)EXLATEOBJ::bInitXlateObj(&v64, 0LL, 0LL, v7, v38, v8, v8, 0, 0, 0, 0)) )
              {
                EXLATEOBJ::vAltUnlock(&v66);
                EXLATEOBJ::vAltUnlock(&v64);
                EXLATEOBJ::vAltUnlock(&v63);
                goto LABEL_108;
              }
              v36 = v64;
              v89 = v64;
              if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v66, 0LL, 0LL, v38, v7, v8, v8, 0, 0, 0, 0) )
                goto LABEL_134;
              v37 = v66;
              top = (__int64)v65;
              v90 = v66;
            }
            else
            {
              v90 = 0LL;
              v89 = 0LL;
              v88 = 0LL;
            }
            if ( !NtGdiDrawStreamInternal(
                    (struct XDCOBJ *)&v59,
                    (struct EXFORMOBJ *)&v70,
                    v68,
                    v75,
                    &v91,
                    &v92,
                    (_DWORD)v67 - top,
                    (char *)top,
                    (struct _DRAWSTREAMINFO *)v87) )
            {
LABEL_134:
              EXLATEOBJ::vAltUnlock(&v66);
              EXLATEOBJ::vAltUnlock(&v64);
              EXLATEOBJ::vAltUnlock(&v63);
LABEL_135:
              LODWORD(v36) = v57;
              goto LABEL_108;
            }
            v65 = 0LL;
            v62 = 0;
            if ( v37 )
            {
              v39 = *((_DWORD *)v37 + 9);
              if ( v39 >= 0 )
              {
                v53 = Gre::Base::Globals((Gre::Base *)top);
                top = 32LL * *((int *)v37 + 9);
                _InterlockedDecrement((volatile signed __int32 *)((char *)v53 + top + 6632));
                v35 = v63;
                v36 = v64;
              }
              else if ( v39 == -1 )
              {
                FreeThreadBufferWithTag(v37);
              }
            }
            if ( v36 )
            {
              v40 = *((_DWORD *)v36 + 9);
              if ( v40 >= 0 )
              {
                v54 = Gre::Base::Globals((Gre::Base *)top);
                top = 32LL * *((int *)v36 + 9);
                _InterlockedDecrement((volatile signed __int32 *)((char *)v54 + top + 6632));
                v35 = v63;
              }
              else if ( v40 == -1 )
              {
                FreeThreadBufferWithTag(v36);
              }
            }
            if ( v35 )
            {
              v41 = *((_DWORD *)v35 + 9);
              if ( v41 >= 0 )
              {
                v55 = Gre::Base::Globals((Gre::Base *)top);
                top = 32LL * *((int *)v35 + 9);
                _InterlockedDecrement((volatile signed __int32 *)((char *)v55 + top + 6632));
              }
              else if ( v41 == -1 )
              {
                FreeThreadBufferWithTag(v35);
              }
            }
            v16 = v58;
            v15 = v67;
          }
LABEL_21:
          if ( v16 < 4 )
            goto LABEL_107;
          v6 = v74;
        }
      }
    }
  }
  LODWORD(v36) = 0;
LABEL_108:
  if ( v69 )
  {
    cEntries = v69[1].cEntries;
    if ( cEntries >= 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals((Gre::Base *)top) + 8 * (int)v69[1].cEntries
                                                                                            + 1658);
    }
    else if ( cEntries == -1 )
    {
      FreeThreadBufferWithTag(v69);
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v79);
  if ( v82[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v82);
  if ( v5 )
  {
    if ( (struct SURFACE *)v5 == SURFACE::pdibDefault )
    {
      DEC_SHARE_REF_CNT(v5);
    }
    else
    {
      GreAcquireHmgrSemaphore();
      DEC_SHARE_REF_CNT(v5);
      if ( (*(_DWORD *)(v5 + 168))-- == 1 )
      {
        if ( (*(_DWORD *)v5 & 0x800000) != 0 && _bittest16((const signed __int16 *)(v5 + 102), 0xAu) )
        {
          v56 = *(_QWORD *)v5;
          *(_WORD *)(v5 + 102) &= ~0x400u;
          GreMakeBitmapNonStock(v56);
        }
        *(_QWORD *)(v5 + 160) = 0LL;
      }
      GreReleaseHmgrSemaphore();
    }
  }
  v44 = v59;
  if ( v59 )
  {
    if ( (_DWORD)v60 && (*((_DWORD *)v59 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v60) )
      {
        v45 = XDCOBJ::GetUserAttr((XDCOBJ *)&v59);
        v44 = v59;
        if ( v45 )
        {
          DC::RestoreAttributes(v59, v45);
          v44 = v59;
        }
      }
      *((_DWORD *)v44 + 11) &= ~2u;
      v44 = v59;
      LODWORD(v60) = 0;
    }
    v57 = 0;
    v46 = *(_QWORD *)v44;
    HmgDecrementExclusiveReferenceCountEx(v44, HIDWORD(v60), &v57);
    if ( v57 )
      GrepDeleteDC(v46, 0x2000000LL);
  }
  return (unsigned int)v36;
}
