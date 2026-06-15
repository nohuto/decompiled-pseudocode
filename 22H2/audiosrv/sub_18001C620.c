/*
 * XREFs of sub_18001C620 @ 0x18001C620
 * Callers:
 *     <none>
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_1800183C0 @ 0x1800183C0 (sub_1800183C0.c)
 *     sub_1800184B0 @ 0x1800184B0 (sub_1800184B0.c)
 *     sub_1800188D0 @ 0x1800188D0 (sub_1800188D0.c)
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 *     sub_18001B550 @ 0x18001B550 (sub_18001B550.c)
 *     sub_18001B6A0 @ 0x18001B6A0 (sub_18001B6A0.c)
 *     sub_18002C26C @ 0x18002C26C (sub_18002C26C.c)
 *     sub_18003447C @ 0x18003447C (sub_18003447C.c)
 *     sub_1800448E4 @ 0x1800448E4 (sub_1800448E4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800BD820 @ 0x1800BD820 (sub_1800BD820.c)
 */

__int64 __fastcall sub_18001C620(__int64 **a1, _QWORD *a2, int a3, volatile signed __int32 **a4, void **a5)
{
  int v8; // r13d
  __int64 v9; // rbx
  __int64 v10; // rdi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 *v13; // rdi
  int v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  int v21; // esi
  int v22; // r14d
  int OwningThread; // ebx
  bool v24; // zf
  int v25; // ebx
  unsigned int v26; // esi
  __int64 v27; // r12
  __int64 v28; // rdi
  __int64 (__fastcall *v29)(__int64 *); // rax
  __int64 v30; // rax
  __int64 (__fastcall *v31)(__int64 *); // rax
  __int64 v32; // r14
  __int64 v33; // rax
  __int128 v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // r8
  __int64 v38; // rbx
  __int64 v39; // rdi
  _WORD *v40; // rax
  void **v41; // r13
  __int64 v42; // rdx
  __int64 v43; // rbx
  __int16 v44; // cx
  __int64 v45; // rax
  unsigned int v46; // ebx
  int v47; // eax
  unsigned int v48; // eax
  volatile signed __int32 *v49; // rbx
  unsigned int v50; // esi
  _QWORD *v51; // rcx
  __int64 v52; // rax
  volatile signed __int32 *v53; // rdi
  __int64 v54; // r8
  volatile signed __int32 *v55; // rdi
  _QWORD *v56; // rdx
  _QWORD *v57; // rdx
  _QWORD *v58; // rdx
  _QWORD *v59; // rdx
  char *v60; // rdx
  _QWORD *v61; // rdx
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rdi
  __int64 v70; // rbx
  _DWORD *v71; // r10
  unsigned __int64 v72; // rsi
  int v73; // eax
  __int64 v74; // rcx
  unsigned __int64 v75; // r12
  __int64 v76; // r15
  char *v77; // r10
  unsigned __int64 v78; // rsi
  int v79; // eax
  __int64 v80; // rcx
  unsigned __int64 v81; // r15
  __int64 v82; // rdx
  __int64 v83; // rcx
  char *v84; // rdx
  __int64 v85; // rcx
  void *v86; // rbx
  HANDLE ProcessHeap; // rax
  void **v88; // rdi
  void *v89; // rbx
  HANDLE v90; // rax
  int v92; // [rsp+40h] [rbp-C0h]
  unsigned int v93; // [rsp+44h] [rbp-BCh]
  int v94; // [rsp+48h] [rbp-B8h]
  __int64 v95; // [rsp+50h] [rbp-B0h] BYREF
  void **v96; // [rsp+58h] [rbp-A8h]
  WINBOOL fPending; // [rsp+60h] [rbp-A0h] BYREF
  int v98; // [rsp+64h] [rbp-9Ch] BYREF
  LPVOID Context; // [rsp+68h] [rbp-98h] BYREF
  __int64 v100; // [rsp+70h] [rbp-90h] BYREF
  __int64 v101; // [rsp+78h] [rbp-88h] BYREF
  __int64 v102; // [rsp+80h] [rbp-80h] BYREF
  __int64 v103; // [rsp+88h] [rbp-78h] BYREF
  __int64 v104; // [rsp+90h] [rbp-70h]
  struct _FILETIME pftDueTime; // [rsp+98h] [rbp-68h] BYREF
  __int64 v106; // [rsp+A0h] [rbp-60h]
  _QWORD *v107; // [rsp+A8h] [rbp-58h]
  volatile signed __int32 **v108; // [rsp+B0h] [rbp-50h]
  _QWORD pv[2]; // [rsp+B8h] [rbp-48h] BYREF
  DWORD v110; // [rsp+C8h] [rbp-38h]
  const wchar_t *v111; // [rsp+D0h] [rbp-30h]
  __int64 v112; // [rsp+D8h] [rbp-28h]
  char v113; // [rsp+E0h] [rbp-20h]
  __int64 v114; // [rsp+E4h] [rbp-1Ch]
  char *v115; // [rsp+F0h] [rbp-10h] BYREF
  GUID v116; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v117; // [rsp+108h] [rbp+8h]
  __int64 v118; // [rsp+118h] [rbp+18h]
  int v119; // [rsp+120h] [rbp+20h]
  int v120; // [rsp+128h] [rbp+28h]
  int v121; // [rsp+12Ch] [rbp+2Ch]
  int v122; // [rsp+130h] [rbp+30h]
  __int64 v123; // [rsp+138h] [rbp+38h]
  void *retaddr; // [rsp+188h] [rbp+88h]

  v108 = a4;
  v107 = a2;
  v96 = a5;
  v8 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&InitOnce, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18019E828;
    qword_18019E828 = (__int64)off_1801462A0;
    qword_18019E840 = (__int64)&unk_18019C388;
    atexit(sub_1800B6240);
    sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
    InitOnceComplete(&InitOnce, 0, &qword_18019E828);
  }
  v9 = qword_18019E5F0;
  v10 = (unsigned int)dword_18019D9F4;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v112 = v9;
  v110 = CurrentThreadId;
  v111 = L"AudioSessionManagerGetCurrentSession";
  v113 = 0;
  v114 = 0LL;
  if ( (unsigned int)v10 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(pfnti, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v10 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v10 / 3, 0);
    }
  }
  *a5 = 0LL;
  *a4 = 0LL;
  v13 = *a1;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 60LL, &unk_18015DFC8, *v13);
  }
  v103 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
          qword_18019E618,
          0LL,
          &v103);
  v15 = v14;
  if ( v14 < 0 )
  {
    sub_18004BD84(
      retaddr,
      2111LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (unsigned int)v14);
    goto LABEL_100;
  }
  v102 = 0LL;
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&dwCreationFlags + 40LL))(
          *(_QWORD *)&dwCreationFlags,
          *(_QWORD *)(*v13 + 296),
          &v102);
  v15 = v16;
  if ( v16 >= 0 )
  {
    v101 = 0LL;
    v17 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v102)(v102, &unk_18015B660, &v101);
    v15 = v17;
    if ( v17 < 0 )
    {
      sub_18004BD84(retaddr, 1249LL, "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h", (unsigned int)v17);
      sub_18004BD84(
        retaddr,
        2117LL,
        "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (unsigned int)v15);
    }
    else
    {
      v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v101 + 24LL))(v101, &v98);
      v15 = v18;
      if ( v18 >= 0 )
      {
        v19 = a3;
        if ( (a3 & 0x80000) != 0 )
          v20 = 0;
        else
          v20 = 2;
        v21 = v20 | ((a3 & 0x10000000) != 0);
        v22 = a3 & 0x60000000;
        v94 = a3 & 0x60000000;
        if ( lpCriticalSection )
        {
          OwningThread = (int)lpCriticalSection[2].OwningThread;
          v24 = OwningThread == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13[1] + 40LL))(v13[1]);
          v19 = a3;
          if ( v24 )
          {
            v22 = a3 & 0x40000000 | 0x20000000;
            v94 = v22;
          }
        }
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13[1] + 88LL))(v13[1]) )
        {
          v94 = v22 | 0x200000;
          v21 |= 0x40000000u;
        }
        v25 = v19 & 0x10000;
        v92 = v25;
        if ( v98 == 1 )
          v26 = v21 & 0xFFFFFFFD;
        else
          v26 = v21 | 8;
        v27 = v103;
        v28 = *v13;
        v93 = v26;
        LOBYTE(v8) = v25 != 0;
        v29 = *(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24);
        v106 = v103;
        v104 = v28;
        v100 = v29(&qword_18019F818) + 24;
        v115 = (char *)((*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24);
        *(_QWORD *)&v116.Data1 = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
        *(_QWORD *)v116.Data4 = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
        v30 = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818);
        v121 = -1;
        v118 = v30 + 24;
        v117 = xmmword_18015B730;
        v119 = 0;
        v120 = 0;
        v31 = *(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24);
        v122 = 0;
        v95 = 0LL;
        v32 = 0LL;
        v123 = v31(&qword_18019F818) + 24;
        *v96 = 0LL;
        v15 = sub_1800183C0(&v115, *(char **)(v28 + 296));
        if ( v15 < 0 )
          goto LABEL_154;
        if ( v25 )
        {
          if ( !a2 )
          {
            v15 = -2147024809;
            goto LABEL_131;
          }
          v33 = *a2;
          if ( !*a2 )
            v33 = a2[1];
          if ( !v33 )
          {
            v15 = -2147024809;
            goto LABEL_131;
          }
        }
        if ( a2 )
          v34 = *(_OWORD *)a2;
        else
          v34 = xmmword_18015B730;
        v117 = v34;
        if ( v25 )
        {
LABEL_31:
          v119 = v8;
          v15 = sub_1800184B0(&v116);
          if ( v15 >= 0 )
          {
LABEL_32:
            if ( v15 >= 0 )
            {
              v35 = *(_QWORD *)v27;
              v36 = v27;
              v122 = v8;
              if ( v25 )
              {
                v120 = 0;
              }
              else
              {
                v120 = (*(__int64 (__fastcall **)(__int64))(v35 + 40))(v27);
                v36 = v27;
                v35 = *(_QWORD *)v27;
              }
              v121 = (*(__int64 (__fastcall **)(__int64))(v35 + 48))(v36);
              v15 = sub_1800188D0((__int64)&v115);
              if ( v15 >= 0 )
              {
LABEL_36:
                if ( v15 < 0 )
                  goto LABEL_183;
                v15 = sub_18001B6A0((__int64)&v115, &v100);
                if ( v15 < 0 )
                  goto LABEL_183;
                v38 = v100;
                v39 = (unsigned int)(*(_DWORD *)(v100 - 16) + 1);
                if ( (unsigned __int64)(2 * v39) > 0x40000 )
                {
                  *v96 = 0LL;
                }
                else
                {
                  v40 = (_WORD *)sub_18006A1B0(2 * v39, &unk_18019F848);
                  v41 = v96;
                  *v96 = v40;
                  if ( v40 )
                  {
                    v15 = 0;
                    if ( (unsigned __int64)(v39 - 1) > 0x7FFFFFFE )
                      v15 = -2147024809;
                    if ( v15 < 0 )
                    {
                      if ( !v39 )
                      {
LABEL_50:
                        if ( v15 < 0 )
                        {
                          v86 = *v41;
                          ProcessHeap = GetProcessHeap();
                          HeapFree(ProcessHeap, 0, v86);
                          *v41 = 0LL;
LABEL_80:
                          if ( v15 < 0 )
                            sub_18005E8F8("CAudioSessionManager::GetCurrentSession", 1939LL, (unsigned int)v15);
                          v56 = (_QWORD *)(v123 - 24);
                          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v123 - 24 + 16), 0xFFFFFFFF) <= 1 )
                            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v56 + 8LL))(*v56);
                          v57 = (_QWORD *)(v118 - 24);
                          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v118 - 24 + 16), 0xFFFFFFFF) <= 1 )
                            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v57 + 8LL))(*v57);
                          v58 = (_QWORD *)(*(_QWORD *)v116.Data4 - 24LL);
                          if ( _InterlockedExchangeAdd(
                                 (volatile signed __int32 *)(*(_QWORD *)v116.Data4 - 24LL + 16),
                                 0xFFFFFFFF) <= 1 )
                            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v58 + 8LL))(*v58);
                          v59 = (_QWORD *)(*(_QWORD *)&v116.Data1 - 24LL);
                          if ( _InterlockedExchangeAdd(
                                 (volatile signed __int32 *)(*(_QWORD *)&v116.Data1 - 24LL + 16),
                                 0xFFFFFFFF) <= 1 )
                            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v59 + 8LL))(*v59);
                          v60 = v115 - 24;
                          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v115 - 2, 0xFFFFFFFF) <= 1 )
                            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v60 + 8LL))(*(_QWORD *)v60);
                          v61 = (_QWORD *)(v100 - 24);
                          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v100 - 24 + 16), 0xFFFFFFFF) <= 1 )
                            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v61 + 8LL))(*v61);
                          if ( v15 < 0 )
                            sub_18004BD84(
                              retaddr,
                              2159LL,
                              "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                              (unsigned int)v15);
                          else
                            v15 = 0;
                          goto LABEL_96;
                        }
                        if ( v92 )
                        {
                          v45 = *v107 - 0x455E4240A9EF3FD9LL;
                          if ( *v107 == 0x455E4240A9EF3FD9LL )
                            v45 = v107[1] + 0x4D78E7CF4C0D2A5CLL;
                          v46 = v93;
                          if ( !v45 )
                            v46 = v93 | 4;
                        }
                        else
                        {
                          v46 = v93;
                        }
                        v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 40LL))(v27);
                        v15 = sub_180019EA0(v104, v27, (__int64)&v115, v46, v94, v47, &v95);
                        if ( v15 < 0 )
                        {
                          v32 = v95;
                          goto LABEL_183;
                        }
                        v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 40LL))(v27);
                        v49 = 0LL;
                        v50 = v48;
                        v104 = 0LL;
                        v51 = off_18019C348;
                        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348 )
                        {
                          if ( (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0 && *((_BYTE *)off_18019C348 + 25) >= 4u )
                          {
                            sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 13LL, &unk_18015DFC8, v48);
                            v51 = off_18019C348;
                          }
                          if ( v51 != &off_18019C348 )
                          {
                            if ( (*((_BYTE *)v51 + 28) & 0x40) != 0 && *((_BYTE *)v51 + 25) >= 4u )
                            {
                              sub_1800BB524(v51[2], 14LL, &unk_18015DFC8, 0LL);
                              v51 = off_18019C348;
                            }
                            if ( v51 != &off_18019C348
                              && (*((_BYTE *)v51 + 28) & 0x40) != 0
                              && *((_BYTE *)v51 + 25) >= 4u )
                            {
                              sub_1800BB524(v51[2], 11LL, &unk_18015DFC8, 0LL);
                            }
                          }
                        }
                        v52 = sub_18006A18C(88LL, &unk_18019F848);
                        v53 = (volatile signed __int32 *)v52;
                        if ( v52 )
                        {
                          *(_DWORD *)(v52 + 16) = 1;
                          *(_DWORD *)(v52 + 24) = 0;
                          *(_QWORD *)v52 = off_1801467B0;
                          *(_QWORD *)(v52 + 8) = off_180146918;
                          InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v52 + 32), 0, 0);
                          *((_QWORD *)v53 + 9) = 0LL;
                          *((_BYTE *)v53 + 84) = 0;
                          if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
                            && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
                            && *((_BYTE *)off_18019C348 + 25) >= 4u )
                          {
                            sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 10LL, &unk_18015DF00, 0LL);
                          }
                          LOBYTE(v54) = 1;
                          v32 = v95;
                          v15 = (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD, __int64, __int64))(*(_QWORD *)v53 + 256LL))(
                                  v53,
                                  v50,
                                  v54,
                                  v95);
                          if ( v15 >= 0 )
                          {
                            if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
                              && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
                              && *((_BYTE *)off_18019C348 + 25) >= 4u )
                            {
                              sub_1800BD820(
                                *((_QWORD *)off_18019C348 + 2),
                                12,
                                (unsigned int)&unk_18015DFC8,
                                (_DWORD)v53,
                                0LL);
                            }
                            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
                            _InterlockedIncrement(v53 + 6);
                            v49 = v53;
                            v104 = (__int64)v53;
                            v32 = v95;
LABEL_70:
                            if ( v53 )
                              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
                            if ( v15 )
                            {
                              if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
                                && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
                                && *((_BYTE *)off_18019C348 + 25) >= 4u )
                              {
                                sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 15LL, &unk_18015DFC8, (unsigned int)v15);
                              }
                              v55 = 0LL;
                              if ( v15 < 0 )
                                sub_18005E8F8("CAudioSessionManager::GetAudioSessionControl", 562LL, (unsigned int)v15);
                              if ( v49 )
                                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
                            }
                            else
                            {
                              if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
                                && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
                                && *((_BYTE *)off_18019C348 + 25) >= 4u )
                              {
                                sub_1800BD820(
                                  *((_QWORD *)off_18019C348 + 2),
                                  16,
                                  (unsigned int)&unk_18015DFC8,
                                  (_DWORD)v49,
                                  0LL);
                              }
                              v55 = v49;
                            }
                            if ( v15 >= 0 )
                            {
                              *v108 = v55;
LABEL_78:
                              if ( v32 )
                                (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
                              goto LABEL_80;
                            }
LABEL_183:
                            v88 = v96;
                            v89 = *v96;
                            if ( *v96 )
                            {
                              v90 = GetProcessHeap();
                              HeapFree(v90, 0, v89);
                              *v88 = 0LL;
                            }
                            goto LABEL_78;
                          }
                        }
                        else
                        {
                          v53 = 0LL;
                          v15 = -2147024882;
                          v32 = v95;
                        }
                        sub_18005E8F8("CAudioSessionManager::CreateAudioSessionControl", 510LL, (unsigned int)v15);
                        goto LABEL_70;
                      }
                    }
                    else
                    {
                      v15 = 0;
                      if ( v39 )
                      {
                        v42 = 2147483646 - v39;
                        v43 = v38 - (_QWORD)v40;
                        while ( v39 + v42 )
                        {
                          v44 = *(_WORD *)((char *)v40 + v43);
                          if ( !v44 )
                            break;
                          *v40++ = v44;
                          if ( !--v39 )
                            goto LABEL_156;
                        }
                      }
                      else
                      {
LABEL_156:
                        --v40;
                        v15 = -2147024774;
                      }
                    }
                    *v40 = 0;
                    goto LABEL_50;
                  }
                }
                v15 = -2147024882;
                goto LABEL_183;
              }
            }
LABEL_154:
            sub_18005E8F8("CAudioSessionInstanceId::Initialize", 911LL, (unsigned int)v15);
            goto LABEL_36;
          }
LABEL_131:
          sub_18005E8F8("CAppAudioSessionId::Initialize", 371LL, (unsigned int)v15);
          goto LABEL_32;
        }
        v63 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 72LL))(v27);
        v64 = v63;
        if ( !v63 )
          goto LABEL_107;
        v65 = -1LL;
        do
          ++v65;
        while ( *(_WORD *)(v63 + 2 * v65) );
        if ( (_DWORD)v65 )
        {
          v77 = *(char **)v116.Data4;
          v78 = (v63 - *(_QWORD *)v116.Data4) >> 1;
          v79 = *(_DWORD *)(*(_QWORD *)v116.Data4 - 12LL) - v65;
          v80 = v79 | (unsigned int)(1 - *(_DWORD *)(*(_QWORD *)v116.Data4 - 8LL));
          v81 = *(unsigned int *)(*(_QWORD *)v116.Data4 - 16LL);
          if ( (v79 | (1 - *(_DWORD *)(*(_QWORD *)v116.Data4 - 8LL))) < 0 )
          {
            sub_18001B550((__int64 *)v116.Data4, v65);
            v77 = *(char **)v116.Data4;
          }
          v82 = 2LL * (int)v65;
          if ( v78 > v81 )
          {
            sub_18003447C(v77, v82, v64, 2LL * (int)v65);
          }
          else if ( v82 )
          {
            if ( v77 && &v77[2 * v78] )
            {
              memmove(v77, &v77[2 * v78], 2LL * (int)v65);
            }
            else
            {
              *(_DWORD *)o__errno(v80) = 22;
              o__invalid_parameter_noinfo(v83);
            }
          }
          sub_1800448E4(v116.Data4, (unsigned int)v65);
        }
        else
        {
LABEL_107:
          v66 = *(_QWORD *)v116.Data4 - 24LL;
          v67 = *(_QWORD *)(*(_QWORD *)v116.Data4 - 24LL);
          if ( *(_DWORD *)(*(_QWORD *)v116.Data4 - 24LL + 8) )
          {
            if ( *(int *)(v66 + 16) >= 0 )
            {
              sub_180006A30((volatile signed __int32 *)v66);
              *(_QWORD *)v116.Data4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 24LL))(v67) + 24;
            }
            else
            {
              sub_1800448E4(v116.Data4, 0LL);
            }
          }
        }
        v68 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 80LL))(v27);
        v69 = v68;
        if ( !v68 )
          goto LABEL_153;
        v70 = -1LL;
        do
          ++v70;
        while ( *(_WORD *)(v68 + 2 * v70) );
        if ( !(_DWORD)v70 )
        {
LABEL_153:
          sub_18002C26C(&v116);
          v25 = v92;
          goto LABEL_31;
        }
        v71 = *(_DWORD **)&v116.Data1;
        v72 = (v68 - *(_QWORD *)&v116.Data1) >> 1;
        v73 = *(_DWORD *)(*(_QWORD *)&v116.Data1 - 12LL) - v70;
        v74 = v73 | (unsigned int)(1 - *(_DWORD *)(*(_QWORD *)&v116.Data1 - 8LL));
        v75 = *(unsigned int *)(*(_QWORD *)&v116.Data1 - 16LL);
        if ( (v73 | (1 - *(_DWORD *)(*(_QWORD *)&v116.Data1 - 8LL))) < 0 )
        {
          sub_18001B550((__int64 *)&v116, v70);
          v71 = *(_DWORD **)&v116.Data1;
        }
        v76 = 2LL * (int)v70;
        if ( v72 <= v75 )
        {
          v84 = (char *)v71 + 2 * v72;
          if ( !v76 )
          {
LABEL_117:
            if ( (int)v70 < 0 || (int)v70 > *(v71 - 3) )
              sub_1800B8610(2147942487LL);
            v27 = v106;
            *(v71 - 4) = v70;
            v25 = v92;
            *(_WORD *)(*(_QWORD *)&v116.Data1 + v76) = 0;
            goto LABEL_31;
          }
          if ( v71 && v84 )
          {
            memmove(v71, v84, 2LL * (int)v70);
          }
          else
          {
            *(_DWORD *)o__errno(v74) = 22;
            o__invalid_parameter_noinfo(v85);
          }
        }
        else
        {
          sub_18003447C(v71, 2LL * (int)v70, v69, 2LL * (int)v70);
        }
        v71 = *(_DWORD **)&v116.Data1;
        goto LABEL_117;
      }
      sub_18004BD84(
        retaddr,
        2120LL,
        "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (unsigned int)v18);
    }
LABEL_96:
    if ( v101 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v101 + 16LL))(v101);
    goto LABEL_98;
  }
  sub_18004BD84(retaddr, 2114LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp", (unsigned int)v16);
LABEL_98:
  if ( v102 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v102 + 16LL))(v102);
LABEL_100:
  if ( v103 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 16LL))(v103);
  sub_18000F690((__int64)pv, (__int64)v61, v37);
  return (unsigned int)v15;
}
