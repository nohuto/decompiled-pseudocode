/*
 * XREFs of sub_180031350 @ 0x180031350
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002910 @ 0x180002910 (sub_180002910.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18000F730 @ 0x18000F730 (sub_18000F730.c)
 *     sub_180020090 @ 0x180020090 (sub_180020090.c)
 *     sub_180031C90 @ 0x180031C90 (sub_180031C90.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180051B0C @ 0x180051B0C (sub_180051B0C.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_18006E5E0 @ 0x18006E5E0 (sub_18006E5E0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B4E2C @ 0x1800B4E2C (sub_1800B4E2C.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800D1BD0 @ 0x1800D1BD0 (sub_1800D1BD0.c)
 *     sub_1800D672C @ 0x1800D672C (sub_1800D672C.c)
 *     sub_1800DC664 @ 0x1800DC664 (sub_1800DC664.c)
 */

__int64 __fastcall sub_180031350(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, _OWORD *a7)
{
  __int64 v8; // r15
  __int64 v10; // rbx
  unsigned __int64 CurrentThreadId; // rsi
  __int64 v12; // rcx
  signed __int64 *v13; // rbx
  __int64 *v14; // rcx
  unsigned int v15; // ecx
  __int64 v16; // rbx
  int v17; // r8d
  std::_Ref_count_base *v18; // rcx
  std::_Ref_count_base *v19; // rax
  _QWORD *v20; // rcx
  int v21; // eax
  int v22; // esi
  __int64 v23; // rbx
  unsigned int v24; // edx
  void *v25; // rdx
  int v26; // eax
  void *v27; // rcx
  int v28; // eax
  __int64 v29; // r13
  int v30; // edx
  int v31; // ecx
  int v32; // eax
  __int64 v33; // r15
  int v34; // eax
  __int64 v35; // rsi
  HANDLE Event; // r14
  __int64 v37; // r15
  _OWORD *v38; // rsi
  __int128 *v39; // rcx
  _OWORD *v40; // rax
  __int64 v41; // rdx
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int64 v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // rsi
  unsigned int v60; // eax
  __int64 v61; // rbx
  int v62; // eax
  unsigned __int8 v63; // bl
  __int64 v64; // rcx
  __int64 v65; // r8
  _QWORD *v66; // rcx
  _QWORD *v67; // rax
  _QWORD *v68; // rcx
  HANDLE ProcessHeap; // rax
  _QWORD *v71; // r15
  signed __int64 v72; // rax
  HANDLE v73; // rax
  __int64 v74; // rdx
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // r9
  __int64 v78; // rdx
  int v79; // r8d
  int v80; // edx
  int v81; // ecx
  int v82; // eax
  __int64 v83; // r8
  __int64 v84; // rdx
  __int64 v85; // rdx
  void *v86; // rdx
  __int64 v87; // r9
  void *v88; // rcx
  void *v89; // rcx
  void *v90; // rcx
  DWORD LastError; // ebx
  int v92; // eax
  __int64 v93; // r8
  int v94; // eax
  _QWORD **v95; // [rsp+20h] [rbp-140h]
  __int64 v96; // [rsp+28h] [rbp-138h]
  __int64 v97; // [rsp+38h] [rbp-128h]
  char v98; // [rsp+E0h] [rbp-80h] BYREF
  __int64 v99; // [rsp+E8h] [rbp-78h]
  _QWORD *v100; // [rsp+F0h] [rbp-70h] BYREF
  LPVOID v101; // [rsp+F8h] [rbp-68h] BYREF
  LPVOID pv; // [rsp+100h] [rbp-60h] BYREF
  _OWORD *v103; // [rsp+108h] [rbp-58h]
  __int64 v104; // [rsp+110h] [rbp-50h]
  __int64 v105; // [rsp+118h] [rbp-48h] BYREF
  __int64 v106; // [rsp+120h] [rbp-40h]
  _QWORD v107[3]; // [rsp+130h] [rbp-30h] BYREF
  _QWORD v108[2]; // [rsp+148h] [rbp-18h] BYREF
  __int64 v109; // [rsp+158h] [rbp-8h]
  DWORD v110; // [rsp+160h] [rbp+0h]
  __int64 v111; // [rsp+168h] [rbp+8h]
  LPVOID *p_pv; // [rsp+170h] [rbp+10h]
  void *v113; // [rsp+178h] [rbp+18h] BYREF
  char v114; // [rsp+180h] [rbp+20h]
  LPVOID *v115; // [rsp+188h] [rbp+28h]
  void *v116; // [rsp+190h] [rbp+30h]
  char v117; // [rsp+198h] [rbp+38h]
  __int64 v118[2]; // [rsp+1A0h] [rbp+40h] BYREF
  __int128 v119; // [rsp+1B0h] [rbp+50h] BYREF
  __int128 v120; // [rsp+1C0h] [rbp+60h] BYREF
  __int128 v121; // [rsp+1D0h] [rbp+70h] BYREF
  __int128 v122; // [rsp+1E0h] [rbp+80h] BYREF
  __int128 v123; // [rsp+1F0h] [rbp+90h] BYREF
  _QWORD v124[158]; // [rsp+200h] [rbp+A0h] BYREF
  char v125[16]; // [rsp+6F0h] [rbp+590h] BYREF
  void *retaddr; // [rsp+748h] [rbp+5E8h]

  v8 = a2;
  v118[1] = a6;
  v103 = a7;
  v106 = a4;
  v104 = a2;
  if ( (byte_18019F980 & 0x20) != 0 )
    sub_180002910(
      a1,
      (int)&unk_18015BD88,
      *(const wchar_t **)(a1 + 208),
      *(_DWORD *)(a1 + 328),
      *(_DWORD *)(a1 + 336),
      *(_DWORD *)(a1 + 348),
      *(_DWORD *)(a1 + 332));
  v10 = qword_18019E3A0;
  v107[0] = off_180147F68;
  v100 = 0LL;
  v107[1] = &v98;
  v107[2] = &v100;
  v108[1] = v107;
  v98 = 0;
  v108[0] = 0LL;
  v109 = 0LL;
  v110 = 0;
  v111 = 0LL;
  if ( !qword_18019E3A0 )
    goto LABEL_86;
  CurrentThreadId = GetCurrentThreadId();
  v12 = *(_QWORD *)(v10 + 8 * (CurrentThreadId % 0xA));
  v13 = (signed __int64 *)(v10 + 8 * (CurrentThreadId % 0xA));
  if ( !v12 )
  {
LABEL_75:
    ProcessHeap = GetProcessHeap();
    v71 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    if ( qword_18019E3A8 )
    {
      v73 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, _QWORD *))qword_18019E3A8)(v73, v71);
    }
    if ( v71 )
    {
      *(_DWORD *)v71 = CurrentThreadId;
      v14 = v71 + 2;
      v71[1] = 0LL;
      v71[2] = 0LL;
      _m_prefetchw(v13);
      do
      {
        v72 = *v13;
        v71[1] = *v13;
      }
      while ( v72 != _InterlockedCompareExchange64(v13, (signed __int64)v71, v72) );
      v8 = v104;
      goto LABEL_7;
    }
    v8 = v104;
LABEL_86:
    v14 = 0LL;
    goto LABEL_7;
  }
  while ( *(_DWORD *)v12 != (_DWORD)CurrentThreadId )
  {
    v12 = *(_QWORD *)(v12 + 8);
    if ( !v12 )
      goto LABEL_75;
  }
  v14 = (__int64 *)(v12 + 16);
LABEL_7:
  v108[0] = v14;
  if ( v14 )
  {
    v109 = *v14;
    *v14 = (__int64)v108;
    v110 = GetCurrentThreadId();
  }
  memset(a7, 0, 0x4F0uLL);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  if ( !*(_DWORD *)(a1 + 184) )
  {
    v22 = -2004287487;
    v74 = 1727LL;
    goto LABEL_98;
  }
  if ( *(_QWORD *)(a1 + 192) )
  {
    v22 = -2004287486;
    v74 = 1728LL;
    goto LABEL_98;
  }
  v15 = *(_DWORD *)(a1 + 328);
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      if ( v15 <= 0x12 )
      {
        v75 = 264969;
        if ( _bittest(&v75, v15) )
          goto LABEL_12;
      }
    }
    else if ( a3 == 2 && !v15 )
    {
      goto LABEL_12;
    }
    v22 = -2147024809;
    v74 = 1731LL;
    goto LABEL_98;
  }
LABEL_12:
  v16 = sub_18006A18C(480LL, &unk_18019F848);
  if ( v16 )
  {
    LOBYTE(v17) = *(_DWORD *)(a1 + 264) == 1;
    sub_180031C90(v16, v8, v17, *(_DWORD *)(a1 + 268), a1 + 280, a3);
    *(_QWORD *)(v16 + 448) = 0LL;
    *(_QWORD *)v16 = off_180147EC0;
    *(_QWORD *)(v16 + 8) = off_180147E00;
    *(_QWORD *)(v16 + 16) = off_180147DA8;
    *(_QWORD *)(v16 + 24) = off_180147D78;
    *(_QWORD *)(v16 + 32) = off_180147D50;
    *(_QWORD *)(v16 + 440) = 0LL;
    *(_BYTE *)(v16 + 456) = 0;
    *(_QWORD *)(v16 + 464) = 0LL;
    *(_QWORD *)(v16 + 472) = 0LL;
    if ( !a3 )
    {
      v18 = qword_18019EAF0;
      if ( qword_18019EAF0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)qword_18019EAF0 + 2);
        v18 = qword_18019EAF0;
      }
      *(_QWORD *)(v16 + 464) = qword_18019EAE8;
      v19 = *(std::_Ref_count_base **)(v16 + 472);
      *(_QWORD *)(v16 + 472) = v18;
      if ( v19 )
        sub_180052600(v19);
    }
  }
  else
  {
    v16 = 0LL;
  }
  v99 = v16;
  if ( v16 )
  {
    v20 = v100;
    v100 = 0LL;
    if ( v20 )
      (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
    v95 = &v100;
    v21 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD))(*(_QWORD *)::pv + 24LL))(
            ::pv,
            *(_QWORD *)(a1 + 216),
            0LL,
            0LL);
    v22 = v21;
    if ( v21 < 0 )
    {
      v76 = 1746LL;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 264) != 1 )
      {
        v118[0] = v100[2];
        v23 = v118[0];
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
        v24 = *(_DWORD *)(a1 + 552);
        v120 = *(_OWORD *)(a1 + 440);
        pv = 0LL;
        p_pv = &pv;
        v113 = 0LL;
        v114 = 1;
        v22 = sub_180020090((__int64)v100, v24, (__int64 *)&v120, &v113);
        if ( v114 )
        {
          v25 = *p_pv;
          *p_pv = v113;
          if ( v25 )
            CoTaskMemFree(v25);
        }
        if ( v22 < 0 )
        {
          v77 = (unsigned int)v22;
          v78 = 1761LL;
LABEL_123:
          sub_18004BD84(retaddr, v78, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v77);
LABEL_124:
          v90 = pv;
          pv = 0LL;
          if ( v90 )
            CoTaskMemFree(v90);
          sub_18000F708(v118);
          goto LABEL_60;
        }
        if ( *(_DWORD *)(a1 + 348) )
        {
          v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v99 + 136LL))(v99, *(_QWORD *)(a1 + 176));
          v22 = v26;
          if ( v26 >= 0 )
            goto LABEL_30;
          v78 = 1768LL;
LABEL_122:
          v77 = (unsigned int)v26;
          goto LABEL_123;
        }
        if ( (*(_BYTE *)(a1 + 268) & 1) == 0 )
        {
          v26 = (*(__int64 (__fastcall **)(__int64, LPVOID))(*(_QWORD *)v99 + 136LL))(v99, pv);
          v22 = v26;
          if ( v26 >= 0 )
          {
LABEL_30:
            v27 = pv;
            pv = 0LL;
            if ( v27 )
              CoTaskMemFree(v27);
            if ( v23 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
LABEL_34:
            v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 120LL))(v8);
            v29 = *(unsigned int *)(a1 + 328);
            v30 = v28;
            if ( (unsigned int)(a3 - 1) <= 1 )
              v31 = dword_180160610[v29];
            else
              v31 = dword_1801605B0[v29];
            v32 = 0;
            if ( v30 )
              v32 = 16;
            LODWORD(v101) = 2 * (v31 + v32) + 1;
            memset(v124, 0, sizeof(v124));
            if ( v99 )
              v33 = v99 + 8;
            else
              v33 = 0LL;
            LODWORD(v96) = *(_DWORD *)(a1 + 408);
            LODWORD(v95) = *(_DWORD *)(a1 + 336);
            v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)qword_18019EE58 + 24LL))(
                    qword_18019EE58,
                    v104,
                    v33,
                    (unsigned int)v29);
            if ( v22 >= 0 )
            {
              if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
                && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
                && *((_BYTE *)off_18019C348 + 25) >= 4u )
              {
                sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 33LL, &unk_18015E3E8, v124[4]);
              }
              v34 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 168) + 288LL))(
                      *(_QWORD *)(a1 + 168),
                      v99);
              v22 = v34;
              if ( v34 >= 0 )
              {
                v35 = v99;
                Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
                if ( Event )
                {
                  GetLastError();
                  v37 = *(_QWORD *)(v35 + 312);
                  if ( v37 )
                  {
                    LastError = GetLastError();
                    sub_180051B0C(v37);
                    SetLastError(LastError);
                  }
                  *(_QWORD *)(v35 + 312) = Event;
LABEL_48:
                  v38 = v103;
                  v39 = (__int128 *)v124;
                  v40 = v103;
                  v41 = 9LL;
                  do
                  {
                    v40 += 8;
                    v42 = *v39;
                    v43 = v39[1];
                    v39 += 8;
                    *(v40 - 8) = v42;
                    v44 = *(v39 - 6);
                    *(v40 - 7) = v43;
                    v45 = *(v39 - 5);
                    *(v40 - 6) = v44;
                    v46 = *(v39 - 4);
                    *(v40 - 5) = v45;
                    v47 = *(v39 - 3);
                    *(v40 - 4) = v46;
                    v48 = *(v39 - 2);
                    *(v40 - 3) = v47;
                    v49 = *(v39 - 1);
                    *(v40 - 2) = v48;
                    *(v40 - 1) = v49;
                    --v41;
                  }
                  while ( v41 );
                  v50 = *v39;
                  v51 = v39[1];
                  v105 = 0LL;
                  *v40 = v50;
                  v52 = v39[2];
                  v40[1] = v51;
                  v53 = v39[3];
                  v40[2] = v52;
                  v54 = v39[4];
                  v40[3] = v53;
                  v55 = v39[5];
                  v40[4] = v54;
                  v56 = v39[6];
                  v57 = v99;
                  v40[5] = v55;
                  v58 = v57 + 8;
                  v40[6] = v56;
                  *((_QWORD *)v38 + 5) = *(_QWORD *)(v57 + 328);
                  *(_QWORD *)(a1 + 544) = *(_QWORD *)(v57 + 328);
                  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v58 + 24LL))(v58, &v105) >= 0 )
                  {
                    v59 = v105;
                    v60 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 48LL))(v58);
                    v61 = v60;
                    if ( v60 >= 0x15 )
                    {
                      v38 = v103;
                    }
                    else
                    {
                      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v59 + 96LL))(v59) )
                      {
                        if ( dword_180171390[v61] )
                        {
                          v94 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 136LL))(v59);
                          if ( !v94 && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v59 + 376LL))(v59) )
                            LODWORD(v61) = 0;
                        }
                      }
                      v62 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_18019E618 + 80LL))(
                              qword_18019E618,
                              (unsigned int)v61);
                      v38 = v103;
                      if ( v62 )
                      {
                        v63 = 1;
                        goto LABEL_55;
                      }
                    }
                  }
                  v63 = 0;
LABEL_55:
                  if ( v105 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v105 + 16LL))(v105);
                  v64 = v99;
                  *(_BYTE *)(a1 + 488) = v63;
                  *((_DWORD *)v38 + 237) = v63;
                  *(_QWORD *)(a1 + 528) = v106;
                  *(_QWORD *)(a1 + 536) = a5;
                  *(_QWORD *)(a1 + 192) = v64;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 56LL))(v64);
                  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
                    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
                    && *((_BYTE *)off_18019C348 + 25) >= 4u )
                  {
                    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 34LL, &unk_18015E3E8);
                  }
                  v22 = 0;
                  goto LABEL_60;
                }
                v92 = sub_1800B4E2C();
                v22 = v92;
                if ( v92 >= 0 )
                  goto LABEL_48;
                sub_18004BD84(
                  retaddr,
                  1341LL,
                  "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                  (unsigned int)v92);
                sub_18004BD84(
                  retaddr,
                  1865LL,
                  "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                  (unsigned int)v22);
                LOBYTE(v93) = 1;
                (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 168) + 312LL))(
                  *(_QWORD *)(a1 + 168),
                  v99,
                  v93);
LABEL_60:
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v99 + 64LL))(v99);
                goto LABEL_61;
              }
              sub_18004BD84(
                retaddr,
                1860LL,
                "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (unsigned int)v34);
            }
            if ( v124[4] )
              sub_1800D1BD0(v99);
            goto LABEL_60;
          }
          v78 = 1800LL;
          goto LABEL_122;
        }
        v79 = *(_DWORD *)(a1 + 408);
        v80 = *(_DWORD *)(a1 + 336);
        v81 = *(_DWORD *)(a1 + 328);
        v97 = *(_QWORD *)(a1 + 472);
        v122 = xmmword_18015B730;
        v101 = 0LL;
        v119 = xmmword_18015B730;
        v121 = xmmword_18015B730;
        v82 = sub_18006E5E0(
                v81,
                v80,
                v79,
                (_DWORD)v100,
                0,
                0,
                1,
                v97,
                0,
                1,
                (__int64)&v122,
                (__int64)&v119,
                (__int64)&v121,
                0LL,
                0LL);
        v22 = v82;
        if ( v82 >= 0 )
        {
          v85 = *(_QWORD *)(a1 + 176);
          v115 = &v101;
          LODWORD(v96) = *(_DWORD *)(a1 + 328);
          v123 = v119;
          v116 = 0LL;
          v117 = 1;
          v22 = sub_1800D672C(v100, v85, v83, &v123);
          if ( v117 )
          {
            v86 = *v115;
            *v115 = v116;
            if ( v86 )
              CoTaskMemFree(v86);
          }
          if ( v22 < 0 )
          {
            v87 = (unsigned int)v22;
            v84 = 1793LL;
            goto LABEL_117;
          }
          v82 = (*(__int64 (__fastcall **)(__int64, LPVOID))(*(_QWORD *)v99 + 136LL))(v99, v101);
          v22 = v82;
          if ( v82 >= 0 )
          {
            v89 = v101;
            v101 = 0LL;
            if ( v89 )
              CoTaskMemFree(v89);
            goto LABEL_30;
          }
          v84 = 1795LL;
        }
        else
        {
          v84 = 1791LL;
        }
        v87 = (unsigned int)v82;
LABEL_117:
        sub_18004BD84(retaddr, v84, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v87);
        v88 = v101;
        v101 = 0LL;
        if ( v88 )
          CoTaskMemFree(v88);
        goto LABEL_124;
      }
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v99 + 136LL))(v99, *(_QWORD *)(a1 + 176));
      v22 = v21;
      if ( v21 >= 0 )
        goto LABEL_34;
      v76 = 1752LL;
    }
    sub_18004BD84(retaddr, v76, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v21);
    goto LABEL_60;
  }
  v22 = -2147024882;
  v74 = 1739LL;
LABEL_98:
  sub_18004BD84(retaddr, v74, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v22);
LABEL_61:
  if ( a1 != -224 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  if ( v110 )
  {
    if ( v110 != GetCurrentThreadId() )
      sub_1800DC664(
        retaddr,
        944LL,
        "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        2147943068LL,
        (_DWORD)v95,
        v96);
    v66 = (_QWORD *)v108[0];
    v110 = 0;
    v67 = *(_QWORD **)v108[0];
    if ( *(_QWORD *)v108[0] )
    {
      while ( v67 != v108 )
      {
        v66 = v67 + 2;
        v108[0] = v67 + 2;
        v67 = (_QWORD *)v67[2];
        if ( !v67 )
          goto LABEL_69;
      }
      *v66 = v109;
    }
LABEL_69:
    v108[0] = 0LL;
  }
  v68 = v100;
  if ( v100 )
    (*(void (__fastcall **)(_QWORD *))(*v100 + 16LL))(v100);
  if ( (byte_18019F980 & 0x20) != 0 )
    sub_18000F730((__int64)v68, (__int64)&unk_18015BD78, v65, 1LL, (__int64)v125);
  return (unsigned int)v22;
}
