/*
 * XREFs of ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0025E8C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00698F0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C0021308 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     SetWindowGroupBand @ 0x1C0025CE4 (SetWindowGroupBand.c)
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C0026330 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C0026458 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C0026674 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     GetLastTopMostWindow @ 0x1C0044610 (GetLastTopMostWindow.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

struct tagSMWP *__fastcall ZOrderByOwner(struct tagSMWP *a1)
{
  __int64 v1; // r10
  int v2; // eax
  struct tagSMWP *v3; // rdi
  _QWORD *v4; // r8
  __int64 v5; // rdx
  _QWORD *i; // rcx
  _QWORD *v7; // rcx
  int v8; // esi
  __int64 v9; // r13
  int v10; // eax
  __int128 *v11; // rcx
  int v12; // r15d
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rbx
  __int64 v24; // rax
  struct tagWND *v25; // r13
  __int64 v26; // rbx
  __int64 v27; // r12
  struct tagWINDOWPOS *v28; // r14
  __int128 v29; // xmm1
  int v30; // edx
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int64 v39; // rax
  struct tagWND *v40; // r15
  struct tagWND *v41; // rax
  __int64 *v42; // r8
  _OWORD *v44; // rcx
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int64 v54; // rax
  unsigned int v55; // r12d
  struct tagWND *v56; // r14
  _QWORD *v57; // rbx
  __int64 v58; // r15
  __int64 v59; // rdx
  _QWORD *v60; // rbx
  int v61; // r15d
  int v62; // r8d
  _QWORD *LastTopMostWindow; // rax
  __int64 *v64; // rax
  __int64 v65; // rax
  struct tagWND *v66; // [rsp+30h] [rbp-A9h]
  __int64 v67; // [rsp+38h] [rbp-A1h] BYREF
  __int128 v68; // [rsp+40h] [rbp-99h]
  __int128 v69; // [rsp+50h] [rbp-89h]
  __int128 v70; // [rsp+60h] [rbp-79h]
  __int128 v71; // [rsp+70h] [rbp-69h]
  __int128 v72; // [rsp+80h] [rbp-59h]
  __int128 v73; // [rsp+90h] [rbp-49h]
  __int128 v74; // [rsp+A0h] [rbp-39h]
  __int128 v75; // [rsp+B0h] [rbp-29h]
  __int128 v76; // [rsp+C0h] [rbp-19h]
  __int128 v77; // [rsp+D0h] [rbp-9h]
  __int64 v78; // [rsp+E0h] [rbp+7h]
  int v79; // [rsp+140h] [rbp+67h]
  __int64 v80; // [rsp+148h] [rbp+6Fh] BYREF
  __int64 v81; // [rsp+150h] [rbp+77h]
  struct tagWND *v82; // [rsp+158h] [rbp+7Fh]

  v1 = *((int *)a1 + 7);
  v2 = 0;
  v3 = a1;
  if ( (int)v1 > 0 )
  {
    v4 = (_QWORD *)*((_QWORD *)a1 + 5);
    v5 = 0LL;
    for ( i = v4; !*i; i += 21 )
    {
      ++v2;
      if ( ++v5 >= v1 )
        return v3;
    }
    if ( &v4[21 * v2] )
    {
      while ( 1 )
      {
        v7 = (_QWORD *)*((_QWORD *)v3 + 5);
        LODWORD(v1) = v1 - 1;
        v8 = *((_DWORD *)v3 + 7) - 1;
        v79 = v1;
        if ( !*v7 )
        {
          if ( *((_DWORD *)v3 + 7) != 1 )
          {
            memmove(v7, v7 + 21, 168LL * v8);
            LODWORD(v1) = v79;
          }
          --*((_DWORD *)v3 + 7);
          goto LABEL_31;
        }
        v9 = v7[1];
        v10 = CheckTopmost((struct tagWINDOWPOS *)v7);
        v11 = (__int128 *)*((_QWORD *)v3 + 5);
        v12 = v10;
        v13 = *((_QWORD *)v11 + 20);
        v14 = v11[1];
        v68 = *v11;
        v15 = v11[2];
        v69 = v14;
        v16 = v11[3];
        v70 = v15;
        v17 = v11[4];
        v71 = v16;
        v18 = v11[5];
        v72 = v17;
        v19 = v11[6];
        v73 = v18;
        v20 = v11[7];
        v74 = v19;
        v21 = v11[8];
        v75 = v20;
        v22 = v11[9];
        v76 = v21;
        v77 = v22;
        v78 = v13;
        if ( v8 )
        {
          v81 = v8;
          memmove(v11, (char *)v11 + 168, 168LL * v8);
          v44 = (_OWORD *)(168LL * v8 + *((_QWORD *)v3 + 5));
          v23 = v8;
          v45 = v69;
          *v44 = v68;
          v46 = v70;
          v44[1] = v45;
          v47 = v71;
          v44[2] = v46;
          v48 = v72;
          v44[3] = v47;
          v49 = v73;
          v44[4] = v48;
          v50 = v74;
          v44[5] = v49;
          v51 = v75;
          v44[6] = v50;
          v44 += 8;
          v52 = v76;
          *(v44 - 1) = v51;
          v53 = v77;
          v54 = v78;
          *v44 = v52;
          v44[1] = v53;
          *((_QWORD *)v44 + 4) = v54;
        }
        else
        {
          v23 = 0LL;
          v81 = 0LL;
        }
        v3 = ZOrderByOwner2(v3, v8);
        if ( !v3 )
          return v3;
        if ( v12 )
          break;
LABEL_10:
        v24 = *((int *)v3 + 7);
        v25 = 0LL;
        v67 = 0LL;
        v26 = 0LL;
        v80 = 0LL;
        if ( (int)v24 <= 0 )
          v82 = 0LL;
        else
          v82 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(168 * v24 + *((_QWORD *)v3 + 5) - 168));
        v66 = 0LL;
        if ( (v70 & 0x200000) != 0 )
          v66 = (struct tagWND *)_HMObjectFromHandle(*((_QWORD *)&v68 + 1));
        if ( v8 != *((_DWORD *)v3 + 7) )
        {
          v27 = 168 * v81;
          do
          {
            v28 = (struct tagWINDOWPOS *)(v27 + *((_QWORD *)v3 + 5));
            if ( *(_QWORD *)v28 == (_QWORD)v68 )
            {
              v29 = v69;
              v30 = v70 ^ ((unsigned __int8)v70 ^ (unsigned __int8)*((_DWORD *)v28 + 8)) & 4;
              *(_OWORD *)v28 = v68;
              v31 = v70;
              *((_OWORD *)v28 + 1) = v29;
              v32 = v71;
              *((_OWORD *)v28 + 2) = v31;
              v33 = v72;
              *((_OWORD *)v28 + 3) = v32;
              v34 = v73;
              *((_OWORD *)v28 + 4) = v33;
              v35 = v74;
              *((_OWORD *)v28 + 5) = v34;
              v36 = v75;
              *((_OWORD *)v28 + 6) = v35;
              v37 = v76;
              *((_OWORD *)v28 + 7) = v36;
              v38 = v77;
              v39 = v78;
              *((_OWORD *)v28 + 8) = v37;
              *((_OWORD *)v28 + 9) = v38;
              *((_QWORD *)v28 + 20) = v39;
              *((_DWORD *)v28 + 8) = v30;
              if ( (v30 & 0x20000) != 0 )
                *((_DWORD *)v28 + 8) = v30 & 0xFFFDFBFF | 0x400;
            }
            v40 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)v28);
            if ( v40 )
            {
              if ( v26 )
                v41 = (struct tagWND *)_HMObjectFromHandle(v26);
              else
                v41 = 0LL;
              if ( TrackBackground(v28, v40, v25, v66, v82, v41) )
              {
                v26 = *(_QWORD *)v28;
                v80 = *(_QWORD *)v28;
              }
              else
              {
                v42 = &v80;
                if ( ((*(unsigned __int8 *)(*((_QWORD *)v40 + 5) + 19LL) >> 2) & 1) != ((*(unsigned __int8 *)(*((_QWORD *)v40 + 5) + 24LL) >> 3) & 1) )
                {
                  v26 = v67;
                  v42 = &v67;
                }
                if ( v26 )
                  *((_QWORD *)v28 + 1) = v26;
                *v42 = *(_QWORD *)v28;
                v26 = v80;
              }
              v25 = v40;
            }
            else
            {
              v25 = 0LL;
            }
            ++v8;
            v27 += 168LL;
          }
          while ( v8 != *((_DWORD *)v3 + 7) );
        }
        LODWORD(v1) = v79;
LABEL_31:
        if ( !(_DWORD)v1 )
          return v3;
      }
      v55 = 0;
      v56 = (struct tagWND *)_HMObjectFromHandle(v68);
      if ( v12 == 2 )
      {
        v57 = (_QWORD *)(*((_QWORD *)v3 + 5) + 168 * v23);
        v58 = _HMObjectFromHandle(*v57);
        if ( (*(_BYTE *)(*(_QWORD *)(v58 + 40) + 24LL) & 8) != 0 && v9 == -2 )
        {
          LastTopMostWindow = (_QWORD *)GetLastTopMostWindow(v56);
          if ( LastTopMostWindow )
            LastTopMostWindow = (_QWORD *)*LastTopMostWindow;
          v57[1] = LastTopMostWindow;
          if ( LastTopMostWindow == (_QWORD *)*v57 )
          {
            if ( (*(_WORD *)(*(_QWORD *)(v58 + 40) + 42LL) & 0x2FFF) == 0x29D || (v64 = *(__int64 **)(v58 + 96)) == 0LL )
              v65 = 0LL;
            else
              v65 = *v64;
            v57[1] = v65;
          }
        }
      }
      else if ( v12 == 1 )
      {
        v59 = 1LL;
        goto LABEL_40;
      }
      v59 = 0LL;
LABEL_40:
      v60 = (_QWORD *)((char *)v56 + 40);
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)&v74 + 1) + 424LL) + 812LL) & 2) != 0
        && (unsigned int)(*(_DWORD *)(*v60 + 236LL) - 1) <= 1 )
      {
        v61 = 1;
        v55 = v59 + 1;
      }
      else
      {
        v61 = 0;
        if ( (v70 & 0x200) != 0 )
        {
          v62 = 1;
LABEL_43:
          if ( *(_DWORD *)(*v60 + 236LL) == 1 || v55 == 1 )
            SetTopmostEnum(v56, v59, v62);
          if ( v61 && *(_DWORD *)(*v60 + 236LL) != v55 && *((_QWORD *)v56 + 13) == GetDesktopWindow(v56, v59) )
            SetWindowGroupBand(v56, v55, 1);
          goto LABEL_10;
        }
      }
      v62 = 0;
      goto LABEL_43;
    }
  }
  return v3;
}
