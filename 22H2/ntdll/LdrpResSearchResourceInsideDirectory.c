/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x180056708
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180055BD4 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E45FC (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrpResCompareResourceNames @ 0x180057770 (LdrpResCompareResourceNames.c)
 *     RtlULongLongSub @ 0x180057BA0 (RtlULongLongSub.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x1800585F4 (LdrpSectionTableFromVirtualAddress.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E1624 (LdrpTraceLoadMUIDll.c)
 *     LdrpResReadFile @ 0x1800E4548 (LdrpResReadFile.c)
 */

__int64 __fastcall LdrpResSearchResourceInsideDirectory(
        __int64 a1,
        char *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        unsigned __int64 *a10,
        _QWORD *a11,
        int a12,
        _WORD *a13)
{
  unsigned __int64 v13; // r15
  __int64 v16; // r14
  int v17; // r13d
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  int v20; // r8d
  int v21; // edi
  int v22; // r12d
  int v23; // r11d
  int v24; // ecx
  unsigned __int64 v25; // rbx
  unsigned int *v26; // rsi
  int v27; // eax
  int v28; // ecx
  unsigned __int64 v29; // r10
  unsigned int v30; // r13d
  char *v31; // rdx
  char *v32; // rcx
  unsigned int *v33; // r12
  unsigned int *v34; // rcx
  int v35; // edi
  int v36; // eax
  int v37; // r15d
  __int64 result; // rax
  __int64 v39; // rax
  int v40; // edi
  int v41; // r8d
  char *Heap; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  bool v46; // zf
  char v47; // di
  __int64 v48; // rax
  unsigned int *v49; // r14
  __int64 v50; // rax
  int v51; // r8d
  unsigned __int64 v52; // rbx
  __int64 v53; // rdi
  unsigned __int64 v54; // r13
  int v55; // r10d
  unsigned __int64 v56; // r11
  unsigned __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned __int64 *v59; // r9
  unsigned __int64 v60; // r8
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rdx
  int v63; // r8d
  __int64 v64; // rax
  unsigned int v65; // r10d
  __int64 v66; // r11
  __int64 v67; // r14
  __int64 v68; // r15
  __int64 v69; // rax
  __int64 v70; // r14
  __int64 v71; // rax
  __int64 v72; // r11
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  int v75; // eax
  __int64 v76; // r14
  __int64 v77; // rcx
  unsigned __int64 v78; // r14
  unsigned __int64 v79; // rdx
  __int64 v80; // rcx
  unsigned int v81; // [rsp+40h] [rbp-188h]
  char *BaseAddress; // [rsp+48h] [rbp-180h]
  unsigned __int64 v83; // [rsp+50h] [rbp-178h] BYREF
  char v84; // [rsp+58h] [rbp-170h]
  unsigned __int16 v85; // [rsp+5Ch] [rbp-16Ch]
  int v86; // [rsp+60h] [rbp-168h]
  char v87; // [rsp+64h] [rbp-164h]
  int v88; // [rsp+68h] [rbp-160h]
  unsigned int *v89; // [rsp+70h] [rbp-158h]
  int v90; // [rsp+78h] [rbp-150h]
  __int64 v91; // [rsp+80h] [rbp-148h]
  signed __int16 v92; // [rsp+88h] [rbp-140h]
  int v93; // [rsp+8Ch] [rbp-13Ch]
  unsigned __int64 v94; // [rsp+90h] [rbp-138h]
  __int64 v95; // [rsp+98h] [rbp-130h]
  unsigned __int64 v96; // [rsp+A0h] [rbp-128h]
  int v97; // [rsp+A8h] [rbp-120h]
  int v98; // [rsp+ACh] [rbp-11Ch]
  unsigned __int64 v99; // [rsp+B0h] [rbp-118h]
  int v100; // [rsp+B8h] [rbp-110h]
  unsigned __int64 v101; // [rsp+C0h] [rbp-108h]
  char *v102; // [rsp+C8h] [rbp-100h]
  HANDLE Handle; // [rsp+D0h] [rbp-F8h]
  __int64 v104; // [rsp+D8h] [rbp-F0h]
  __int64 v105; // [rsp+E0h] [rbp-E8h]
  __int64 v106; // [rsp+E8h] [rbp-E0h]
  int v107; // [rsp+F0h] [rbp-D8h]
  __int64 v108; // [rsp+F8h] [rbp-D0h]
  __int64 v109; // [rsp+100h] [rbp-C8h]
  unsigned int *v110; // [rsp+108h] [rbp-C0h]
  unsigned int *v111; // [rsp+110h] [rbp-B8h]
  _QWORD *v112; // [rsp+118h] [rbp-B0h]
  _WORD *v113; // [rsp+120h] [rbp-A8h]
  __int64 v114; // [rsp+128h] [rbp-A0h]
  unsigned __int64 *v115; // [rsp+130h] [rbp-98h]
  _QWORD v116[2]; // [rsp+138h] [rbp-90h] BYREF
  _QWORD *v117; // [rsp+148h] [rbp-80h]
  int v118; // [rsp+150h] [rbp-78h] BYREF
  const wchar_t *v119; // [rsp+158h] [rbp-70h]
  __int128 v120; // [rsp+160h] [rbp-68h]
  _BYTE v121[16]; // [rsp+170h] [rbp-58h] BYREF

  v13 = a4;
  v94 = a4;
  v96 = a3;
  Handle = a2;
  v16 = a1;
  v95 = a1;
  v104 = a5;
  v109 = a6;
  v106 = a7;
  v108 = a9;
  v115 = a10;
  v117 = a11;
  v113 = a13;
  v120 = 0LL;
  v92 = 0;
  LOWORD(v17) = 0;
  v91 = 0LL;
  BaseAddress = 0LL;
  v90 = 0;
  v85 = 0;
  LODWORD(v116[0]) = 5636180;
  v116[1] = L"LdrpResSearchResourceInsideDirectory Enter";
  v118 = 5505106;
  v119 = L"LdrpResSearchResourceInsideDirectory Exit";
  if ( RtlGetCurrentServiceSessionId() )
  {
    v18 = (__int64)NtCurrentPeb()->SharedData + 555;
    v90 = v85;
    LOWORD(v17) = v91;
  }
  else
  {
    v18 = 2147353477LL;
  }
  if ( (*(_BYTE *)v18 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v80 = (__int64)NtCurrentPeb()->SharedData + 554;
      v90 = v85;
      LOWORD(v17) = v91;
    }
    else
    {
      v80 = 2147353476LL;
    }
    LdrpTraceLoadMUIDll(v116, *(unsigned __int8 *)v80);
  }
  if ( !v13 )
    return 3221225485LL;
  if ( !v104 )
    return 3221225485LL;
  v19 = (_QWORD *)v106;
  if ( !v106 )
    return 3221225485LL;
  v20 = a8;
  if ( (unsigned int)(a8 - 1) > 3 )
    return 3221225485LL;
  LOBYTE(v21) = a12;
  v86 = a12;
  if ( (a12 & 0x8000) != 0 && ((unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || !a6) )
    return 3221225485LL;
  v22 = a12 & 0x1000;
  v88 = v22;
  v84 = v22 != 0;
  v23 = a12 & 0x8800;
  v97 = v23;
  if ( (a12 & 0x1000) != 0 && !a3 )
    return 3221225485LL;
  if ( v23 != 34816 )
  {
    if ( v16 )
      goto LABEL_13;
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
LABEL_13:
  v112 = (_QWORD *)v106;
  v24 = a8;
  v98 = a8;
  v25 = v13;
  v26 = 0LL;
  v89 = 0LL;
  v101 = 0LL;
  if ( v113 )
    *v113 = 0;
LABEL_15:
  if ( !v25 )
    goto LABEL_48;
  v27 = v24;
  v28 = v24 - 1;
  v98 = v28;
  v107 = v28;
  if ( !v27 )
    goto LABEL_48;
  v91 = *v19;
  if ( !v28 && v20 == 3 )
  {
    v101 = v25;
    if ( !v108 )
      goto LABEL_179;
    v92 = *(_WORD *)v108;
    v90 = 0;
    v85 = 0;
    if ( (~(_BYTE)v21 & 4) != 0 )
      v91 = *(unsigned __int16 *)(v108 + 4);
  }
  if ( v23 == 34816 )
  {
    result = LdrpResReadFile(Handle);
    if ( (int)result < 0 )
      return result;
    v20 = a8;
    v23 = v97;
    if ( v97 == 34816 )
      goto LABEL_176;
  }
  if ( !v22 )
  {
LABEL_176:
    v29 = v96;
  }
  else
  {
    if ( v25 + 24 < v25 )
      goto LABEL_185;
    v83 = v25 + 24;
    v29 = v96;
    if ( v25 + 24 > v96 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
      goto LABEL_184;
  }
  v30 = WORD6(v120);
  if ( v23 != 34816 )
    v30 = *(unsigned __int16 *)(v25 + 12);
  v93 = v30;
  if ( v30 && v22 )
  {
    v105 = 8LL * v30;
    v45 = 8 * v30;
    if ( v45 + v25 + 16 < v25 )
      goto LABEL_185;
    v83 = v45 + v25 + 16;
    if ( v83 > v29 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
      goto LABEL_184;
  }
  v31 = (char *)(v25 + 16);
  v105 = v25 + 16;
  v102 = (char *)(v25 + 16);
  if ( (v91 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( v30 )
    {
      if ( v22 )
      {
        if ( &v31[v30] < v31 )
          goto LABEL_185;
        v83 = (unsigned __int64)&v31[v30];
      }
      v31 += 8 * (int)v30;
      v105 = (__int64)v31;
      v102 = v31;
    }
    v30 = HIWORD(v120);
    if ( v23 != 34816 )
      v30 = *(unsigned __int16 *)(v25 + 14);
    v93 = v30;
    if ( v22 )
    {
      v116[0] = 8LL * v30;
      v32 = &v31[8 * v30];
      if ( v32 < v31 )
        goto LABEL_185;
      v83 = (unsigned __int64)&v31[8 * v30];
      if ( (unsigned __int64)v32 > v29 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
        goto LABEL_184;
    }
  }
  if ( !v30 )
  {
    v99 = 0LL;
    goto LABEL_50;
  }
  if ( v23 != 34816 )
    goto LABEL_34;
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v30);
  BaseAddress = Heap;
  if ( !Heap )
  {
    v81 = -1073741801;
    goto LABEL_53;
  }
  result = LdrpResReadFile(Handle);
  if ( (int)result >= 0 )
  {
    v31 = Heap;
    v105 = (__int64)Heap;
    v102 = Heap;
    LOBYTE(v21) = a12;
    v86 = a12;
    v90 = v85;
    v106 = (__int64)v112;
    v98 = v107;
    v26 = v89;
LABEL_34:
    if ( v101 && (v21 & 0x20) != 0 )
    {
      v25 = 0LL;
      v99 = 0LL;
      v39 = *((unsigned int *)v31 + 1);
      if ( v22 )
      {
        v26 = (unsigned int *)(v13 + v39);
        if ( v13 + v39 < v13 )
          goto LABEL_185;
        v83 = v13 + v39;
      }
      else
      {
        v26 = (unsigned int *)(v39 + v13);
      }
      v89 = v26;
      v17 = *(_DWORD *)v31;
      v91 = *(unsigned int *)v31;
      v20 = a8;
      goto LABEL_48;
    }
LABEL_35:
    v25 = 0LL;
    v99 = 0LL;
    v33 = (unsigned int *)v31;
    v102 = v31;
    v34 = (unsigned int *)&v31[8 * v30 - 8];
    v111 = v34;
    LOBYTE(v35) = v30;
    v93 = v30;
    v36 = v30;
    while ( 1 )
    {
      if ( v33 > v34 )
      {
        v16 = v95;
        v21 = v86;
        goto LABEL_41;
      }
      v37 = v36 >> 1;
      if ( !(v36 >> 1) )
      {
        v21 = v86;
        v13 = v94;
        v16 = v95;
        if ( v36 )
        {
          result = LdrpResCompareResourceNames(v95, Handle, v96);
          if ( (int)result < 0 )
            return result;
          if ( !v100 )
          {
            v50 = v33[1];
            v22 = v88;
            if ( (int)v50 >= 0 )
            {
              if ( v88 )
              {
                if ( !v101 )
                  goto LABEL_184;
                v26 = (unsigned int *)(v94 + v50);
                if ( v94 + v50 < v94 )
                  goto LABEL_185;
                v83 = v94 + v50;
              }
              else
              {
                v26 = (unsigned int *)(v94 + v50);
              }
              v89 = v26;
            }
            else
            {
              if ( v88 )
              {
                if ( v101 )
                  goto LABEL_184;
                LODWORD(v50) = v50 & 0x7FFFFFFF;
                v25 = v94 + v50;
                if ( v94 + v50 < v94 )
                  goto LABEL_185;
                v83 = v94 + v50;
              }
              else
              {
                v25 = v94 + (v50 & 0xFFFFFFFF7FFFFFFFuLL);
              }
              v99 = v25;
            }
            goto LABEL_42;
          }
        }
LABEL_41:
        v22 = v88;
        goto LABEL_42;
      }
      v110 = v33;
      v47 = v35 & 1;
      v46 = v47 == 0;
      v87 = v47;
      v35 = v37 - 1;
      v48 = v37;
      if ( v46 )
        v48 = v35;
      v49 = &v33[2 * v48];
      v110 = v49;
      result = LdrpResCompareResourceNames(v95, Handle, v96);
      if ( (int)result < 0 )
        return result;
      if ( !v100 )
      {
        v64 = v49[1];
        v22 = v88;
        if ( (int)v64 >= 0 )
        {
          v25 = 0LL;
          v99 = 0LL;
          if ( v88 )
          {
            if ( !v101 )
              goto LABEL_184;
            v13 = v94;
            v26 = (unsigned int *)(v94 + v64);
            if ( v94 + v64 < v94 )
              goto LABEL_185;
            v83 = v94 + v64;
          }
          else
          {
            v13 = v94;
            v26 = (unsigned int *)(v94 + v64);
          }
          v89 = v26;
        }
        else
        {
          if ( v88 )
          {
            if ( !v101 )
            {
              LODWORD(v64) = v64 & 0x7FFFFFFF;
              v13 = v94;
              v25 = v94 + v64;
              if ( v94 + v64 >= v94 )
              {
                v83 = v94 + v64;
                goto LABEL_136;
              }
LABEL_185:
              v83 = -1LL;
            }
LABEL_184:
            v81 = -1073741701;
LABEL_52:
            Heap = BaseAddress;
LABEL_53:
            if ( Heap )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
            if ( RtlGetCurrentServiceSessionId() )
              v43 = (__int64)NtCurrentPeb()->SharedData + 555;
            else
              v43 = 2147353477LL;
            if ( (*(_BYTE *)v43 & 1) != 0 )
            {
              if ( RtlGetCurrentServiceSessionId() )
                v44 = (__int64)NtCurrentPeb()->SharedData + 554;
              else
                v44 = 2147353476LL;
              LdrpTraceLoadMUIDll(&v118, *(unsigned __int8 *)v44);
            }
            return v81;
          }
          v13 = v94;
          v25 = v94 + (v64 & 0xFFFFFFFF7FFFFFFFuLL);
LABEL_136:
          v99 = v25;
        }
        v16 = v95;
        v21 = v86;
LABEL_42:
        if ( !v101 || v26 )
          goto LABEL_43;
        if ( (v21 & 4) == 0 )
        {
          HIWORD(v51) = HIWORD(v90);
          LOWORD(v51) = v90 + 1;
          v90 = v51;
          v85 = v51;
          if ( (unsigned __int16)v51 < v92 )
          {
            v91 = *(unsigned __int16 *)(v108 + 8LL * (unsigned __int16)v51 + 4);
            v31 = (char *)v105;
            goto LABEL_35;
          }
          if ( !*(_BYTE *)(v108 + 516) )
          {
            v21 |= 0x20u;
            v86 = v21;
            a12 = v21;
            v31 = (char *)v105;
            goto LABEL_34;
          }
LABEL_43:
          v19 = (_QWORD *)(v106 + 8);
          v106 = (__int64)v19;
          v112 = v19;
          v20 = a8;
          LOWORD(v17) = v91;
          v23 = v97;
          v24 = v98;
          goto LABEL_15;
        }
        v20 = a8;
        LOWORD(v17) = v91;
LABEL_48:
        v40 = v21 & 2;
        if ( v26 && !v40 )
        {
          if ( v22
            && ((unsigned __int64)v26 <= v13 || (unsigned __int64)(v26 + 4) > v96 + (v16 & 0xFFFFFFFFFFFFFFFCuLL)) )
          {
            v89 = 0LL;
            goto LABEL_184;
          }
          if ( v113 )
            *v113 = v17;
          v52 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (v16 & 1) == 0 && v97 != 34816 )
          {
            v53 = 0LL;
            v114 = 0LL;
            v54 = v96;
            goto LABEL_99;
          }
          if ( *(_WORD *)(v104 + 24) == 267 )
          {
            v65 = *(_DWORD *)(v104 + 136);
          }
          else if ( *(_WORD *)(v104 + 24) == 523 )
          {
            v65 = *(_DWORD *)(v104 + 152);
          }
          else
          {
            v65 = 0;
          }
          if ( !v65 )
          {
            v89 = 0LL;
            v81 = -1073741687;
            goto LABEL_52;
          }
          v66 = v65;
          if ( v22 )
          {
            if ( v52 + v65 < v52 )
              goto LABEL_185;
            v83 = v52 + v65;
            if ( (int)RtlULongLongSub(v83, v13, &v83) < 0 )
              goto LABEL_184;
          }
          v53 = v66 + v52 - v13;
          v114 = v53;
          v54 = v96;
          v67 = LdrpSectionTableFromVirtualAddress((unsigned int)v16 & 0xFFFFFFFC, v96, v104, v109, v65, v84);
          if ( !v67 )
            goto LABEL_210;
          if ( v97 == 34816 )
          {
            result = LdrpResReadFile(Handle);
            if ( (int)result < 0 )
              return result;
            v26 = (unsigned int *)v121;
            v89 = (unsigned int *)v121;
          }
          if ( *v26 > *(_DWORD *)(v67 + 8) )
          {
            v68 = *(unsigned int *)(v67 + 12);
            v69 = LdrpSectionTableFromVirtualAddress(v52, v54, v104, v109, *v26, v84);
            if ( v69 )
            {
              v70 = *(unsigned int *)(v69 + 12);
              v71 = LdrpSectionTableFromVirtualAddress(v52, v54, v104, v109, *(_DWORD *)(v69 + 12), v84);
              v72 = v71;
              v55 = -1073741675;
              if ( v71 )
              {
                if ( v22 )
                {
                  v73 = (unsigned int)v70 - (unsigned __int64)*(unsigned int *)(v71 + 12);
                  v74 = v73 + v52;
                  if ( v73 + v52 < v52 )
                  {
                    v83 = -1LL;
                    v75 = -1073741675;
                    v74 = -1LL;
                  }
                  else
                  {
                    v83 = v73 + v52;
                    v75 = 0;
                  }
                  if ( v75 < 0 )
                    goto LABEL_184;
                  if ( v74 + *(unsigned int *)(v72 + 20) < v74 )
                    goto LABEL_185;
                  v83 = v74 + *(unsigned int *)(v72 + 20);
                }
                v76 = v52 + *(unsigned int *)(v72 + 20) - (unsigned __int64)*(unsigned int *)(v72 + 12) + v70;
              }
              else
              {
                v76 = 0LL;
              }
              if ( v22
                && ((int)RtlULongLongSub(*(unsigned int *)(v72 + 12), v68, &v83) < 0
                 || (int)RtlULongLongSub(v83, v76 - v94, &v83) < 0) )
              {
                goto LABEL_184;
              }
              v77 = *(unsigned int *)(v72 + 12) - v68 - v76;
              v13 = v94;
              v53 += v94 + v77;
              v114 = v53;
              v16 = v95;
              goto LABEL_100;
            }
            goto LABEL_210;
          }
          v16 = v95;
LABEL_99:
          v55 = -1073741675;
LABEL_100:
          if ( v22 )
          {
            if ( (int)RtlULongLongSub(*v26, v53, &v83) < 0 )
              goto LABEL_184;
            v57 = v83;
            if ( v83 >= v13 - v16 && v83 <= v54 )
            {
              if ( (_DWORD)v56 )
              {
                v58 = (unsigned int)v56;
                if ( v56 <= v54 && v83 + v56 <= v54 )
                  goto LABEL_107;
              }
            }
LABEL_210:
            v89 = 0LL;
            goto LABEL_184;
          }
          v57 = 0LL;
          v58 = v26[1];
LABEL_107:
          v59 = v115;
          if ( v115 )
          {
            if ( v22 )
            {
              v60 = v57 + v52;
              if ( v57 + v52 < v52 )
              {
                v83 = -1LL;
                v61 = -1LL;
              }
              else
              {
                v83 = v57 + v52;
                v55 = 0;
                v61 = v57 + v52;
              }
              if ( v55 < 0 || v61 < v52 || v61 > v54 + (v52 & 0xFFFFFFFFFFFFFFFCuLL) )
                goto LABEL_184;
              *v115 = v60;
            }
            else
            {
              *v115 = v52 + *v26 - v53;
            }
          }
          if ( v117 )
          {
            if ( v22 && v59 )
            {
              v62 = *v59 + v58;
              if ( v62 < *v59 )
                goto LABEL_185;
              v83 = *v59 + v58;
              if ( v62 > v52 + v54 )
                goto LABEL_184;
            }
            *v117 = v58;
          }
LABEL_121:
          v81 = 0;
          goto LABEL_52;
        }
        if ( v25 && v40 )
        {
          if ( v22 )
          {
            if ( v25 + 24 < v25 )
            {
              v83 = -1LL;
              v99 = 0LL;
              goto LABEL_184;
            }
            v83 = v25 + 24;
            v78 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
            v79 = v96;
            if ( v25 + 24 > v96 + v78 )
            {
              v99 = 0LL;
              goto LABEL_184;
            }
          }
          else
          {
            v78 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
            v79 = v96;
          }
          if ( v115 )
          {
            if ( v22 && (v25 < v78 || v25 > v78 + v79) )
              goto LABEL_184;
            *v115 = v25;
          }
          goto LABEL_121;
        }
LABEL_50:
        v41 = v20 - v98 - 1;
        if ( !v41 )
        {
          v81 = -1073741686;
          goto LABEL_52;
        }
        v63 = v41 - 1;
        if ( !v63 )
        {
          v81 = -1073741685;
          goto LABEL_52;
        }
        if ( v63 == 1 )
        {
          v81 = -1073741308;
          goto LABEL_52;
        }
LABEL_179:
        v81 = -1073741811;
        goto LABEL_52;
      }
      if ( v100 >= 0 )
        break;
      v34 = v49 - 2;
      v111 = v49 - 2;
      if ( v87 )
      {
        v93 = v37;
        goto LABEL_74;
      }
      v93 = v37 - 1;
      v36 = v37 - 1;
LABEL_75:
      v13 = v94;
    }
    v33 = v49 + 2;
    v102 = (char *)(v49 + 2);
    v93 = v37;
    v34 = v111;
LABEL_74:
    v36 = v37;
    LOBYTE(v35) = v37;
    goto LABEL_75;
  }
  return result;
}
