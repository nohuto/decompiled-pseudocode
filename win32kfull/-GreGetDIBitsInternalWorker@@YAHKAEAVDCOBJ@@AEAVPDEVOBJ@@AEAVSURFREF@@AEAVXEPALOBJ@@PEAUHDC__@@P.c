__int64 __fastcall GreGetDIBitsInternalWorker(
        unsigned int a1,
        DC **a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        __int64 *a10,
        __int64 a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14)
{
  __int64 v14; // rbx
  int v15; // r14d
  __int64 v16; // r12
  SURFOBJ *v17; // r15
  int v18; // r13d
  __int64 v19; // rsi
  unsigned int v20; // r10d
  unsigned int v21; // r9d
  int v22; // edi
  int v23; // r11d
  int v24; // edx
  bool v25; // zf
  unsigned int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // eax
  unsigned __int64 v29; // rcx
  unsigned int v30; // r14d
  int v31; // edx
  unsigned int v32; // r8d
  int v33; // ecx
  __int64 v34; // rbx
  int v35; // eax
  struct tagRGBTRIPLE *v36; // rax
  __int64 v37; // r14
  DC *v38; // rax
  int v39; // r8d
  __int64 v40; // rdi
  __int64 v41; // rax
  int v42; // edx
  __int64 v43; // rax
  char *XlateObject; // rdi
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  LONG v49; // esi
  int v50; // ebx
  int v51; // r14d
  int v52; // esi
  LONG v53; // r10d
  LONG v54; // r9d
  LONG v55; // edx
  LONG v56; // ecx
  unsigned int v57; // ebx
  LONG v58; // r14d
  __int64 v59; // r8
  LONG v60; // r11d
  LONG v61; // eax
  SURFOBJ *v62; // rdx
  unsigned int v63; // ebx
  Gre::Base *v64; // rcx
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // ebx
  __int64 v69; // rdx
  __int64 v70; // rdi
  struct tagRGBTRIPLE *v71; // r12
  unsigned int *v72; // rax
  unsigned int v73; // eax
  int IsCMYKColor; // eax
  _QWORD *v75; // rdi
  struct tagRGBTRIPLE *v76; // r10
  struct tagRGBTRIPLE *v77; // rdi
  __int64 i; // rcx
  unsigned int v79; // edi
  _QWORD *v80; // r12
  unsigned __int16 v81; // dx
  unsigned __int16 v82; // r8
  unsigned int v83; // eax
  struct tagRGBTRIPLE *v84; // r9
  struct tagRGBTRIPLE *v85; // rcx
  __int64 v86; // r8
  unsigned int v87; // ecx
  unsigned int v88; // eax
  struct tagRGBTRIPLE *v89; // r9
  struct tagRGBTRIPLE *v90; // rcx
  struct tagRGBTRIPLE *v91; // rdx
  struct tagRGBTRIPLE *v92; // rax
  unsigned int v93; // eax
  int v94; // eax
  __int64 v95; // [rsp+30h] [rbp-178h]
  __int64 v96; // [rsp+38h] [rbp-170h]
  __int64 v97; // [rsp+40h] [rbp-168h]
  bool v98; // [rsp+60h] [rbp-148h]
  unsigned int v99; // [rsp+64h] [rbp-144h]
  int v100; // [rsp+64h] [rbp-144h]
  struct tagRGBTRIPLE *v101; // [rsp+68h] [rbp-140h] BYREF
  unsigned int v102; // [rsp+70h] [rbp-138h]
  int v103; // [rsp+74h] [rbp-134h]
  int v104; // [rsp+78h] [rbp-130h]
  int v105; // [rsp+7Ch] [rbp-12Ch]
  __int64 v106; // [rsp+80h] [rbp-128h] BYREF
  int v107; // [rsp+88h] [rbp-120h]
  unsigned int v108; // [rsp+8Ch] [rbp-11Ch]
  int v109; // [rsp+90h] [rbp-118h]
  int v110; // [rsp+98h] [rbp-110h]
  unsigned int v111; // [rsp+A0h] [rbp-108h]
  __int64 v112; // [rsp+A8h] [rbp-100h] BYREF
  _QWORD *v113; // [rsp+B0h] [rbp-F8h]
  __int64 v114; // [rsp+B8h] [rbp-F0h] BYREF
  int v115; // [rsp+C0h] [rbp-E8h]
  int v116; // [rsp+C8h] [rbp-E0h]
  void **v117; // [rsp+D0h] [rbp-D8h] BYREF
  char v118; // [rsp+D8h] [rbp-D0h]
  int v119; // [rsp+DCh] [rbp-CCh]
  int v120; // [rsp+E0h] [rbp-C8h] BYREF
  LONG v121; // [rsp+E4h] [rbp-C4h]
  LONG v122; // [rsp+E8h] [rbp-C0h]
  int v123; // [rsp+ECh] [rbp-BCh]
  __int64 v124; // [rsp+F0h] [rbp-B8h]
  __int64 v125; // [rsp+F8h] [rbp-B0h]
  _QWORD *v126; // [rsp+100h] [rbp-A8h]
  __int64 *v127; // [rsp+108h] [rbp-A0h]
  unsigned int v128; // [rsp+110h] [rbp-98h]
  int v129; // [rsp+114h] [rbp-94h]
  DC **v130; // [rsp+118h] [rbp-90h]
  __int64 v131; // [rsp+120h] [rbp-88h] BYREF
  __int64 v132; // [rsp+128h] [rbp-80h]
  __int64 v133; // [rsp+130h] [rbp-78h]
  POINTL pptlSrc; // [rsp+138h] [rbp-70h] BYREF
  _QWORD *v135; // [rsp+140h] [rbp-68h]
  __int64 v136; // [rsp+148h] [rbp-60h]
  RECTL prclDest; // [rsp+150h] [rbp-58h] BYREF

  v126 = a4;
  v132 = a3;
  v130 = a2;
  v14 = a1;
  v135 = a4;
  v113 = a5;
  v15 = a8;
  v116 = a8;
  v110 = a8;
  v102 = a9;
  v111 = a9;
  v127 = a10;
  v16 = a11;
  v133 = a11;
  v136 = a11;
  v17 = 0LL;
  v131 = 0LL;
  v18 = 1;
  if ( !(unsigned int)bIsCompatible(&v131, *(_QWORD *)(*a4 + 128LL), *a4, *((_QWORD *)*a2 + 6), 1) )
    return 0LL;
  v19 = v131;
  v120 = 0;
  v123 = 0;
  v125 = 0LL;
  if ( (_DWORD)v14 == 12 )
  {
    v107 = 1;
    v101 = (struct tagRGBTRIPLE *)(a11 + 12);
    v73 = *(unsigned __int16 *)(a11 + 4);
    v108 = v73;
    v24 = *(unsigned __int16 *)(a11 + 6);
    v104 = v24;
    *(_WORD *)(a11 + 8) = 1;
    v21 = *(unsigned __int16 *)(a11 + 10);
    v99 = v21;
    v26 = ((v73 * v21 + 31) >> 3) & 0x1FFFFFFC;
    v22 = 0;
    v103 = 0;
    v105 = 0;
    if ( v73 && v24 )
    {
      v20 = a14;
      goto LABEL_16;
    }
    goto LABEL_244;
  }
  v20 = a14;
  if ( a14 < 0x28 )
    return 0LL;
  v101 = (struct tagRGBTRIPLE *)(a11 + 40);
  if ( (unsigned int)v14 > 0x28 )
  {
    memset_0((void *)(a11 + 40), 0, v14 - 40);
    v20 = a14;
  }
  v107 = 0;
  *(_DWORD *)a11 = 40;
  *(_WORD *)(a11 + 12) = 1;
  v21 = *(unsigned __int16 *)(a11 + 14);
  v99 = v21;
  v22 = *(_DWORD *)(a11 + 16);
  v103 = v22;
  v105 = v22;
  v23 = *(_DWORD *)(a11 + 4);
  v108 = v23;
  if ( v23 <= 0 )
    goto LABEL_244;
  v24 = *(_DWORD *)(a11 + 8);
  if ( !v24 )
    goto LABEL_244;
  if ( v24 >= 0 )
    goto LABEL_9;
  LODWORD(v125) = 1;
  if ( v22 )
  {
    if ( v22 != 3 )
    {
LABEL_244:
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  v24 = -v24;
LABEL_9:
  v104 = v24;
  switch ( v22 )
  {
    case 3:
      v25 = ((v21 - 16) & 0xFFFFFFEF) == 0;
      goto LABEL_11;
    case 1:
      v25 = v21 == 8;
LABEL_11:
      if ( v25 )
        break;
      goto LABEL_92;
    case 2:
      if ( v21 != 4 )
        goto LABEL_92;
      break;
    case 10:
      IsCMYKColor = DC::bIsCMYKColor(*v130);
      v24 = v104;
      if ( IsCMYKColor )
      {
        v22 = 10;
        *(_DWORD *)(a11 + 16) = 10;
        goto LABEL_93;
      }
      break;
    default:
LABEL_92:
      v22 = 0;
      *(_DWORD *)(a11 + 16) = 0;
LABEL_93:
      v103 = v22;
      v105 = v22;
      break;
  }
  v26 = ((v23 * v21 + 31) >> 3) & 0x1FFFFFFC;
  if ( !v22 || v22 == 3 )
    *(_DWORD *)(a11 + 20) = v24 * v26;
  *(_QWORD *)(a11 + 32) = 0LL;
LABEL_16:
  v98 = (unsigned int)(v22 - 1) <= 1;
  if ( v24 < a8 )
  {
    v15 = v24;
    v116 = v24;
    v110 = v24;
  }
  v129 = v15;
  v27 = v24 - v15;
  v28 = v102;
  if ( v27 < v102 )
  {
    v28 = v27;
    v102 = v27;
    v111 = v27;
  }
  v128 = v28;
  if ( (unsigned int)(v22 - 1) > 1 && a13 < v26 * v28 )
    return 0LL;
  v124 = 0LL;
  if ( v20 < 0x34 && v22 == 3 )
    return 0LL;
  if ( v21 <= 8 )
  {
    switch ( v21 )
    {
      case 1u:
        v31 = 1;
        v30 = 2;
        v29 = a12;
        goto LABEL_28;
      case 4u:
        v31 = 2;
        v30 = 16;
        v29 = a12;
        goto LABEL_28;
      case 8u:
        v31 = 3;
        v30 = 256;
        v29 = a12;
        goto LABEL_28;
    }
  }
  v29 = a12;
  if ( a12 == 1 )
    v29 = 0LL;
  v30 = 0;
  if ( v21 == 32 )
  {
    v31 = 6;
    goto LABEL_28;
  }
  if ( v21 != 16 )
  {
    if ( v21 == 24 )
    {
      v31 = 5;
      goto LABEL_28;
    }
    return 0LL;
  }
  v31 = 4;
LABEL_28:
  v120 = v31;
  v115 = 0;
  v114 = 0LL;
  if ( (_DWORD)v29 == 1 )
  {
    if ( v20 < v14 + 2 * (unsigned __int64)v30 )
    {
      EngSetLastError(0x57u);
LABEL_144:
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v114);
      return 0LL;
    }
    v112 = *((_QWORD *)Gre::Base::Globals((Gre::Base *)v30) + 5);
    GreAcquireSemaphore(v112);
    v75 = v113;
    if ( !v19 && v120 == 3 && *(_QWORD *)(*v113 + 72LL) )
    {
      v34 = 0LL;
      v106 = 0LL;
      v76 = v101;
      v77 = v101;
      for ( i = 256LL; i; --i )
      {
        *(_WORD *)&v77->rgbtBlue = 0;
        v77 = (struct tagRGBTRIPLE *)((char *)v77 + 2);
      }
      v79 = 0;
      v80 = v113;
      do
      {
        v81 = 0;
        v82 = *(_WORD *)(*v80 + 28LL);
        if ( v82 )
        {
          while ( *(unsigned __int8 *)(v81 + *(_QWORD *)(*v80 + 72LL) + 4LL) != v79 )
          {
            if ( ++v81 >= v82 )
              goto LABEL_157;
          }
          *((_WORD *)&v76->rgbtBlue + v79) = v81;
        }
LABEL_157:
        ++v79;
      }
      while ( v79 < 0x100 );
      v16 = v133;
    }
    else
    {
      if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v114, 1u, v30, 0LL, 0, 0, 0, 0x200u, 1) )
      {
        SEMOBJ::vUnlock((SEMOBJ *)&v112);
        goto LABEL_144;
      }
      v34 = v114;
      v106 = v114;
      v83 = 0;
      v84 = v101;
      if ( v30 )
      {
        v85 = v101;
        do
        {
          *(_WORD *)&v85->rgbtBlue = v83++;
          v85 = (struct tagRGBTRIPLE *)((char *)v85 + 2);
        }
        while ( v83 < v30 );
      }
      v86 = *(_QWORD *)(*(_QWORD *)v132 + 1776LL);
      if ( v19 )
        v86 = v19;
      XEPALOBJ::vGetEntriesFrom(&v106, *v75, v86, v84, v30);
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v112);
  }
  else
  {
    v32 = *(_DWORD *)(*v126 + 96LL);
    if ( (_DWORD)v29 )
    {
      if ( v31 != v32 )
        goto LABEL_144;
      v34 = v19;
      v106 = v19;
    }
    else
    {
      v33 = 0;
      if ( v32 == v31 && v19 )
      {
        v33 = 1;
        if ( v22 == 3 || ((v31 - 4) & 0xFFFFFFFD) != 0 )
        {
          if ( v31 == 5 && (*(_BYTE *)(v19 + 24) & 4) != 0 )
            v33 = 0;
        }
        else
        {
          v66 = *(_DWORD *)(v19 + 24);
          if ( (v66 & 2) != 0 )
          {
            v72 = *(unsigned int **)(v19 + 112);
            v32 = *v72;
            LODWORD(v106) = v72[1];
            LODWORD(v112) = v72[2];
          }
          else
          {
            LODWORD(v106) = 65280;
            if ( (v66 & 4) != 0 )
            {
              v32 = 255;
              LODWORD(v112) = 16711680;
            }
            else
            {
              v32 = 16711680;
              LODWORD(v112) = 255;
            }
          }
          if ( v31 == 4 )
          {
            v67 = 31744;
            v68 = 992;
            v109 = 31;
          }
          else
          {
            v67 = 16711680;
            v68 = 65280;
            v109 = 255;
          }
          if ( v32 != v67 || (_DWORD)v106 != v68 || (_DWORD)v112 != v109 )
            v33 = 0;
        }
      }
      if ( v33 )
      {
        v34 = v19;
        v106 = v19;
      }
      else
      {
        if ( v30 )
        {
          v87 = 1;
        }
        else
        {
          v87 = 8;
          if ( v31 == 4 )
            v87 = 2;
        }
        if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v114, v87, v30, 0LL, 0x7C00u, 0x3E0u, 0x1Fu, 0x200u, 1) )
          goto LABEL_144;
        v34 = v114;
        v106 = v114;
        if ( *(_DWORD *)(*v126 + 96LL) == v120 && v120 == 3 )
        {
          v88 = 0;
          v89 = v101;
          if ( v30 )
          {
            v90 = v101;
            do
            {
              *(_WORD *)&v90->rgbtBlue = v88++;
              v90 = (struct tagRGBTRIPLE *)((char *)v90 + 2);
            }
            while ( v88 < v30 );
          }
          XEPALOBJ::vGetEntriesFrom(&v106, *v113, *(_QWORD *)(*(_QWORD *)v132 + 1776LL), v89, v30);
          XEPALOBJ::vInit256Default((XEPALOBJ *)&v106);
        }
        else
        {
          switch ( v120 )
          {
            case 1:
              **(_DWORD **)(v114 + 112) = 0;
              *(_DWORD *)(*(_QWORD *)(v34 + 112) + 4LL) = 0xFFFFFF;
              break;
            case 2:
              **(_DWORD **)(v114 + 112) = 0;
              *(_DWORD *)(*(_QWORD *)(v34 + 112) + 4LL) = 128;
              *(_DWORD *)(*(_QWORD *)(v34 + 112) + 8LL) = 0x8000;
              *(_DWORD *)(*(_QWORD *)(v34 + 112) + 12LL) = 32896;
              *(_DWORD *)(*(_QWORD *)(v34 + 112) + 16LL) = 0x800000;
              *(_DWORD *)(*(_QWORD *)(v34 + 112) + 20LL) = 8388736;
              *(_DWORD *)(*(_QWORD *)(v34 + 112) + 24LL) = 8421376;
              *(_DWORD *)(*(_QWORD *)(v34 + 112) + 28LL) = 8421504;
              *(_DWORD *)(*(_QWORD *)(v34 + 112) + 32LL) = 12632256;
              *(_DWORD *)(*(_QWORD *)(v34 + 112) + 36LL) = 255;
              *(_DWORD *)(*(_QWORD *)(v34 + 112) + 40LL) = 65280;
              *(_DWORD *)(*(_QWORD *)(v34 + 112) + 44LL) = 0xFFFF;
              *(_DWORD *)(*(_QWORD *)(v34 + 112) + 48LL) = 16711680;
              *(_DWORD *)(*(_QWORD *)(v34 + 112) + 52LL) = 16711935;
              *(_DWORD *)(*(_QWORD *)(v34 + 112) + 56LL) = 16776960;
              *(_DWORD *)(*(_QWORD *)(v34 + 112) + 60LL) = 0xFFFFFF;
              break;
            case 3:
              XEPALOBJ::vInit256Rainbow((XEPALOBJ *)&v106);
              break;
          }
        }
        v21 = v99;
        v20 = a14;
      }
      if ( v107 )
      {
        v29 = 3 * v30 + 12LL;
        if ( v20 < v29 )
          goto LABEL_144;
        if ( ((v21 - 16) & 0xFFFFFFE7) != 0 || v21 == 40 )
          XEPALOBJ::vFill_triples((XEPALOBJ *)&v106, v101, v32, v30);
      }
      else
      {
        if ( v22 == 3 )
          v30 = 3;
        v29 = 4 * v30 + 40LL;
        if ( v20 < v29 )
          goto LABEL_144;
        v35 = *(_DWORD *)(v34 + 24);
        if ( (v35 & 0x4000) != 0 )
        {
          memmove(v101, *(const void **)(v34 + 112), 2LL * v30);
        }
        else if ( v22 == 3 || v21 <= 8 && (v29 = 274LL, _bittest((const int *)&v29, v21)) )
        {
          if ( (v35 & 8) != 0 )
          {
            v36 = v101;
            *(_DWORD *)&v101->rgbtBlue = 16711680;
            *(_DWORD *)&v36[1].rgbtGreen = 65280;
            *(_DWORD *)&v36[2].rgbtRed = 255;
          }
          else if ( (v35 & 2) != 0 && v30 == 3 )
          {
            v91 = v101;
            *(_DWORD *)&v101->rgbtBlue = **(_DWORD **)(v34 + 112);
            *(_DWORD *)&v91[1].rgbtGreen = *(_DWORD *)(*(_QWORD *)(v34 + 112) + 4LL);
            v29 = *(unsigned int *)(*(_QWORD *)(v34 + 112) + 8LL);
            *(_DWORD *)&v91[2].rgbtRed = v29;
          }
          else if ( (v35 & 4) != 0 )
          {
            v92 = v101;
            *(_DWORD *)&v101->rgbtBlue = 255;
            *(_DWORD *)&v92[1].rgbtGreen = 65280;
            *(_DWORD *)&v92[2].rgbtRed = 16711680;
          }
          else
          {
            if ( v30 >= *(_DWORD *)(v34 + 28) )
              v30 = *(_DWORD *)(v34 + 28);
            if ( v30 )
            {
              HIBYTE(v100) = 0;
              v69 = 0LL;
              v70 = v30;
              v71 = v101;
              do
              {
                BYTE2(v100) = *(_DWORD *)(v69 + *(_QWORD *)(v34 + 112));
                v29 = HIWORD(*(_DWORD *)(v69 + *(_QWORD *)(v34 + 112)));
                LOBYTE(v100) = BYTE2(*(_DWORD *)(v69 + *(_QWORD *)(v34 + 112)));
                BYTE1(v100) = BYTE1(*(_DWORD *)(v69 + *(_QWORD *)(v34 + 112)));
                *(_DWORD *)&v71->rgbtBlue = v100;
                v71 = (struct tagRGBTRIPLE *)((char *)v71 + 4);
                v69 += 4LL;
                --v70;
              }
              while ( v70 );
              v16 = v133;
            }
          }
        }
      }
    }
  }
  v101 = 0LL;
  v37 = *v113;
  v38 = *v130;
  v39 = *((_DWORD *)*v130 + 30);
  v109 = v39;
  v40 = *(_QWORD *)(*((_QWORD *)v38 + 122) + 248LL);
  if ( !v19
    && (!v34
     || (*(_DWORD *)(v34 + 24) & 0x800) != 0 && ((v29 = *(_QWORD *)(v37 + 80)) == 0 || v29 == *(_QWORD *)(v37 + 72)))
    || !v34
    && (*(_DWORD *)(v19 + 24) & 0x800) != 0
    && ((v29 = *(_QWORD *)(v37 + 80)) == 0 || v29 == *(_QWORD *)(v37 + 72))
    || v19
    && v34
    && ((v41 = *(_QWORD *)(v19 + 120), v41 != v19) ? (v42 = *(_DWORD *)(v41 + 32)) : (v42 = *(_DWORD *)(v19 + 32)),
        (v43 = *(_QWORD *)(v34 + 120), v43 != v34)
      ? (v29 = *(unsigned int *)(v43 + 32))
      : (v29 = *(unsigned int *)(v34 + 32)),
        v42 == (_DWORD)v29) )
  {
    XlateObject = (char *)Gre::Base::Globals((Gre::Base *)v29) + 6896;
    v101 = (struct tagRGBTRIPLE *)XlateObject;
LABEL_54:
    v45 = 1;
    goto LABEL_55;
  }
  v107 = 1;
  if ( (v39 & 7) != 0 && v40 )
  {
    v107 = 0;
  }
  else if ( v19 && v34 && (unsigned int)EXLATEOBJ::bSearchCache(&v101, v19, v34, v37, v37, 0, 0xFFFFFF, 0, 0) )
  {
    v45 = 1;
    XlateObject = (char *)v101;
    goto LABEL_55;
  }
  LODWORD(v97) = 0;
  LODWORD(v96) = 0xFFFFFF;
  LODWORD(v95) = 0;
  XlateObject = (char *)CreateXlateObject(v40, v109, v19, v34, v37, v37, v95, v96, v97, 0);
  v101 = (struct tagRGBTRIPLE *)XlateObject;
  if ( XlateObject )
  {
    if ( v107 && v19 && v34 && (*((_DWORD *)XlateObject + 19) & 0x200) == 0 )
      EXLATEOBJ::vAddToCache((Gre::Base *)&v101, v19, v34, v37, v37);
    goto LABEL_54;
  }
  v45 = 0;
LABEL_55:
  if ( !v45 )
  {
LABEL_143:
    EXLATEOBJ::vAltUnlock((Gre::Base **)&v101);
    goto LABEL_144;
  }
  v46 = *v127;
  if ( !*v127 && !v98 )
  {
    if ( XlateObject )
    {
      v47 = *((_DWORD *)XlateObject + 9);
      if ( v47 >= 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(0LL) + 8 * *((int *)XlateObject + 9) + 1658);
      }
      else if ( v47 == -1 )
      {
        FreeThreadBufferWithTag(XlateObject);
      }
    }
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v114);
    return 1LL;
  }
  v121 = v108;
  v49 = v102;
  v122 = v102;
  v117 = 0LL;
  v118 = 0;
  v119 = 0;
  if ( v98 )
  {
    v50 = v104;
    if ( !v102 )
      v49 = v104;
    v122 = v49;
    SURFMEM::bCreateDIB((SURFMEM *)&v117, (struct _DEVBITMAPINFO *)&v120, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    v51 = 0;
    if ( v128 )
      v51 = v129;
    v110 = v51;
    v93 = v50;
    if ( v128 )
      v93 = v128;
    v102 = v93;
    v111 = v93;
  }
  else
  {
    SURFMEM::bCreateDIB(
      (SURFMEM *)&v117,
      (struct _DEVBITMAPINFO *)&v120,
      (void *)(v46 + v127[2]),
      0LL,
      0,
      0LL,
      0LL,
      0,
      1,
      0,
      0);
    v50 = v104;
    v51 = v116;
  }
  if ( !v117 )
    goto LABEL_142;
  SURFACE::hdev((SURFACE *)v117, *((HDEV *)*v130 + 6));
  memset_0(v117[9], 0, *((unsigned int *)v117 + 16));
  v52 = v103;
  v53 = 0;
  *(_QWORD *)&prclDest.left = 0LL;
  v54 = 0;
  v55 = v121;
  prclDest.right = v121;
  v56 = v122;
  prclDest.bottom = v122;
  pptlSrc.x = 0;
  v57 = v50 - v102;
  pptlSrc.y = v57 - v51;
  v58 = v51 - v57;
  v59 = *v126;
  v60 = *(_DWORD *)(*v126 + 56LL);
  v61 = v58 + *(_DWORD *)(*v126 + 60LL);
  if ( v58 > 0 )
  {
    v54 = v58;
    prclDest.top = v58;
  }
  if ( v60 < v121 )
  {
    v55 = v60;
    prclDest.right = v60;
  }
  if ( v61 < v122 )
  {
    v56 = v61;
    prclDest.bottom = v61;
  }
  if ( v55 < 0 )
  {
    v53 = v55;
    prclDest.left = v55;
  }
  else if ( v56 < v54 )
  {
    v54 = v56;
    prclDest.top = v56;
  }
  if ( v53 != v55 && v54 != v56 )
    v18 = 0;
  if ( v18 )
  {
LABEL_142:
    SURFMEM::~SURFMEM((SURFMEM *)&v117);
    goto LABEL_143;
  }
  if ( v59 )
    v62 = (SURFOBJ *)(v59 + 24);
  else
    v62 = 0LL;
  if ( v117 )
    v17 = (SURFOBJ *)(v117 + 3);
  EngCopyBits(v17, v62, 0LL, (XLATEOBJ *)XlateObject, &prclDest, &pptlSrc);
  if ( !v98 )
    goto LABEL_84;
  if ( v52 == 2 )
  {
    v94 = EncodeRLE4(v117[9], *v127 + v127[2], v108, v102, *(_DWORD *)(v16 + 20));
  }
  else
  {
    if ( v52 != 1 )
      goto LABEL_241;
    v94 = EncodeRLE8(v117[9], *v127 + v127[2], v108, v102, *(_DWORD *)(v16 + 20));
  }
  *(_DWORD *)(v16 + 20) = v94;
LABEL_241:
  if ( !*(_DWORD *)(v16 + 20) )
    goto LABEL_142;
LABEL_84:
  v63 = prclDest.bottom - prclDest.top;
  SURFMEM::~SURFMEM((SURFMEM *)&v117);
  if ( XlateObject )
  {
    v65 = *((_DWORD *)XlateObject + 9);
    if ( v65 >= 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v64) + 8 * *((int *)XlateObject + 9) + 1658);
    }
    else if ( v65 == -1 )
    {
      FreeThreadBufferWithTag(XlateObject);
    }
  }
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v114);
  return v63;
}
