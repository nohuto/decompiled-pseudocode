/*
 * XREFs of sub_180004B00 @ 0x180004B00
 * Callers:
 *     sub_1800CE808 @ 0x1800CE808 (sub_1800CE808.c)
 * Callees:
 *     sub_180005310 @ 0x180005310 (sub_180005310.c)
 *     sub_1800053AC @ 0x1800053AC (sub_1800053AC.c)
 *     sub_18000543C @ 0x18000543C (sub_18000543C.c)
 *     sub_180005564 @ 0x180005564 (sub_180005564.c)
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18002B430 @ 0x18002B430 (sub_18002B430.c)
 *     sub_18003447C @ 0x18003447C (sub_18003447C.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BABDC @ 0x1800BABDC (sub_1800BABDC.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BEA04 @ 0x1800BEA04 (sub_1800BEA04.c)
 *     sub_1800CD21C @ 0x1800CD21C (sub_1800CD21C.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180004B00(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, __int64 *, _QWORD *),
        int a3,
        unsigned int a4)
{
  __int64 v6; // r12
  _QWORD *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 (__fastcall ***v10)(_QWORD, _QWORD, __int64); // rax
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, __int64); // rax
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 (__fastcall ***v16)(_QWORD, _QWORD, __int64); // rax
  __int64 v17; // r14
  __int64 v18; // rbx
  __int64 (__fastcall ***v19)(_QWORD, _QWORD, __int64); // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 (__fastcall ***v22)(_QWORD, _QWORD, __int64); // rax
  __int64 v23; // r13
  unsigned int v24; // r15d
  __int64 v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // r10
  _WORD *v29; // rcx
  __int64 v30; // rax
  int v31; // edx
  _QWORD *v32; // r15
  unsigned int v33; // ebx
  unsigned int v34; // esi
  unsigned int v35; // edi
  unsigned int *v36; // rax
  unsigned int *v37; // r14
  unsigned int v38; // r11d
  _WORD *v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r8
  __int64 v42; // r9
  __int16 v43; // ax
  _WORD *v44; // rcx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r10
  __int64 v47; // r8
  __int16 v48; // ax
  HANDLE ProcessHeap; // rax
  _QWORD *v50; // rdx
  _QWORD *v51; // rdx
  _QWORD *v52; // rdx
  _QWORD *v53; // rdx
  _QWORD *v54; // rdx
  __int64 v55; // rcx
  _DWORD *v57; // r12
  __int64 v58; // rax
  _DWORD *v59; // r12
  __int64 v60; // rax
  _DWORD *v61; // r12
  __int64 v62; // rax
  _DWORD *v63; // r12
  __int64 v64; // rax
  _DWORD *v65; // r14
  __int64 v66; // rax
  __int64 v67; // r13
  struct _RTL_CRITICAL_SECTION *v68; // rbx
  _QWORD *v69; // [rsp+30h] [rbp-148h] BYREF
  unsigned int v70; // [rsp+38h] [rbp-140h]
  unsigned int v71; // [rsp+40h] [rbp-138h]
  __int64 v72; // [rsp+48h] [rbp-130h]
  struct _RTL_CRITICAL_SECTION *v73; // [rsp+50h] [rbp-128h]
  _QWORD v74[2]; // [rsp+58h] [rbp-120h] BYREF
  _DWORD v75[2]; // [rsp+68h] [rbp-110h] BYREF
  __int64 v76; // [rsp+70h] [rbp-108h]
  __int64 (__fastcall **v77)(); // [rsp+78h] [rbp-100h]
  unsigned int *v78; // [rsp+80h] [rbp-F8h]
  _QWORD *v79; // [rsp+88h] [rbp-F0h]
  struct _RTL_CRITICAL_SECTION *v80; // [rsp+90h] [rbp-E8h]
  __int64 v81; // [rsp+A0h] [rbp-D8h]
  __int64 v82; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-C0h] BYREF
  __int64 v84; // [rsp+C0h] [rbp-B8h]
  __int128 v85; // [rsp+C8h] [rbp-B0h]
  __int64 v86; // [rsp+D8h] [rbp-A0h]
  int v87; // [rsp+E0h] [rbp-98h]
  __int64 v88; // [rsp+E8h] [rbp-90h]
  int v89; // [rsp+F0h] [rbp-88h]
  __int64 v90; // [rsp+F8h] [rbp-80h]
  unsigned __int16 *v91; // [rsp+100h] [rbp-78h]
  int v92; // [rsp+108h] [rbp-70h]
  int v93; // [rsp+10Ch] [rbp-6Ch]
  void *v94; // [rsp+110h] [rbp-68h]
  int v95; // [rsp+118h] [rbp-60h]
  int v96; // [rsp+11Ch] [rbp-5Ch]
  _WORD *v97; // [rsp+120h] [rbp-58h]
  int v98; // [rsp+128h] [rbp-50h]
  int v99; // [rsp+12Ch] [rbp-4Ch]

  v72 = a1;
  v74[1] = a1;
  v70 = a4;
  v6 = 0LL;
  v74[0] = 0LL;
  v69 = 0LL;
  if ( (**a2)(a2, &qword_18015AB78, v74) < 0
    || (*(int (__fastcall **)(_QWORD, _QWORD **))(*(_QWORD *)v74[0] + 24LL))(v74[0], &v69) < 0 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 25LL, &unk_18015DFC8);
    }
    v55 = v74[0];
    if ( v74[0] )
LABEL_75:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  }
  else
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BEA04(*((_QWORD *)off_18019C348 + 2), 26, (unsigned int)&unk_18015DFC8, 0, a4);
    }
    v7 = v69;
    v8 = v69[82];
    v9 = v8 - 24;
    v10 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 - 24)
                                                                                               + 32LL))(*(_QWORD *)(v8 - 24));
    if ( *(int *)(v8 - 24 + 16) >= 0 && v10 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 16));
    }
    else
    {
      v57 = (_DWORD *)(v9 + 8);
      v58 = (**v10)(v10, *(unsigned int *)(v9 + 8), 2LL);
      v9 = v58;
      if ( !v58 )
        sub_1800BABDC();
      *(_DWORD *)(v58 + 8) = *v57;
      sub_18003447C(v58 + 24, 2LL * (*v57 + 1), v8, 2LL * (*v57 + 1));
      v6 = 0LL;
    }
    v82 = v9 + 24;
    v73 = (struct _RTL_CRITICAL_SECTION *)&v83;
    v11 = v7[83];
    v12 = v11 - 24;
    v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v11 - 24)
                                                                                               + 32LL))(*(_QWORD *)(v11 - 24));
    if ( *(int *)(v11 - 24 + 16) >= 0 && v13 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 16));
    }
    else
    {
      v59 = (_DWORD *)(v12 + 8);
      v60 = (**v13)(v13, *(unsigned int *)(v12 + 8), 2LL);
      v12 = v60;
      if ( !v60 )
        sub_1800BABDC();
      *(_DWORD *)(v60 + 8) = *v59;
      sub_18003447C(v60 + 24, 2LL * (*v59 + 1), v11, 2LL * (*v59 + 1));
      v6 = 0LL;
    }
    v83 = v12 + 24;
    v14 = v7[84];
    v15 = v14 - 24;
    v16 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v14 - 24)
                                                                                               + 32LL))(*(_QWORD *)(v14 - 24));
    if ( *(int *)(v14 - 24 + 16) >= 0 && v16 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 16));
    }
    else
    {
      v61 = (_DWORD *)(v15 + 8);
      v62 = (**v16)(v16, *(unsigned int *)(v15 + 8), 2LL);
      v15 = v62;
      if ( !v62 )
        sub_1800BABDC();
      *(_DWORD *)(v62 + 8) = *v61;
      sub_18003447C(v62 + 24, 2LL * (*v61 + 1), v14, 2LL * (*v61 + 1));
      v6 = 0LL;
    }
    v84 = v15 + 24;
    v85 = *(_OWORD *)(v7 + 85);
    v17 = v7[87];
    v18 = v17 - 24;
    v19 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v17 - 24)
                                                                                               + 32LL))(*(_QWORD *)(v17 - 24));
    if ( *(int *)(v17 - 24 + 16) >= 0 && v19 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 16));
    }
    else
    {
      v63 = (_DWORD *)(v18 + 8);
      v64 = (**v19)(v19, *(unsigned int *)(v18 + 8), 2LL);
      v18 = v64;
      if ( !v64 )
        sub_1800BABDC();
      *(_DWORD *)(v64 + 8) = *v63;
      sub_18003447C(v64 + 24, 2LL * (*v63 + 1), v17, 2LL * (*v63 + 1));
      v6 = 0LL;
    }
    v86 = v18 + 24;
    v87 = *((_DWORD *)v7 + 176);
    v88 = v7[89];
    v89 = *((_DWORD *)v7 + 180);
    v20 = v7[91];
    v21 = v20 - 24;
    v22 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v20 - 24)
                                                                                               + 32LL))(*(_QWORD *)(v20 - 24));
    if ( *(int *)(v20 - 24 + 16) >= 0 && v22 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v21 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v21 + 16));
    }
    else
    {
      v65 = (_DWORD *)(v21 + 8);
      v66 = (**v22)(v22, *(unsigned int *)(v21 + 8), 2LL);
      v21 = v66;
      if ( !v66 )
        sub_1800BABDC();
      *(_DWORD *)(v66 + 8) = *v65;
      sub_18003447C(v66 + 24, 2LL * (*v65 + 1), v20, 2LL * (*v65 + 1));
    }
    v90 = v21 + 24;
    if ( a3 == 2 )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 27LL, &unk_18015DFC8, a4);
      }
      v67 = v72;
      v68 = (struct _RTL_CRITICAL_SECTION *)(v72 + 16);
      v73 = v68;
      v72 += 16LL;
      EnterCriticalSection(v68);
      v80 = v68;
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800CD21C(*((_QWORD *)off_18019C348 + 2), 28, (unsigned int)&unk_18015DFC8, 0, v90);
      }
      sub_18002B430(v67 + 56, &v82, &v69);
      JUMPOUT(0x18007E551LL);
    }
    v23 = v72;
    if ( a4 == 1 )
    {
      v32 = v69;
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 40LL, &unk_18015DFC8, 0LL);
      }
      v33 = 2 * *(_DWORD *)(v32[91] - 16LL) + 2;
      v34 = 2 * *(_DWORD *)(*(_QWORD *)(v23 + 296) - 16LL) + 2;
      v35 = v34 + 2 * *(_DWORD *)(v32[91] - 16LL) + 74;
      v36 = (unsigned int *)sub_18006A1B0(v35, &unk_18019F848);
      v37 = v36;
      if ( v36 )
      {
        *v36 = v35;
        v36[1] = 64;
        v36[6] = v33;
        v36[12] = v34;
        v38 = v33 + 72;
        v36[13] = v33 + 72;
        v39 = v36 + 18;
        v40 = (unsigned __int64)v33 >> 1;
        if ( v40 )
        {
          v41 = 2147483646 - v40;
          v42 = v32[91] - (_QWORD)v39;
          while ( v41 + v40 )
          {
            v43 = *(_WORD *)((char *)v39 + v42);
            if ( !v43 )
              break;
            *v39++ = v43;
            if ( !--v40 )
            {
              --v39;
              break;
            }
          }
          *v39 = 0;
          v38 = v37[13];
        }
        v44 = (_WORD *)((char *)v37 + v38);
        v45 = (unsigned __int64)v34 >> 1;
        if ( v45 )
        {
          v46 = 2147483646 - v45;
          v47 = *(_QWORD *)(v23 + 296) - (_QWORD)v44;
          while ( v46 + v45 )
          {
            v48 = *(_WORD *)((char *)v44 + v47);
            if ( !v48 )
              break;
            *v44++ = v48;
            if ( !--v45 )
            {
              --v44;
              break;
            }
          }
          *v44 = 0;
        }
        v77 = off_180154B60;
        v78 = v37;
        v79 = v32;
        sub_180005310((LPCRITICAL_SECTION)(v23 + 192));
      }
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v37);
    }
    else if ( a4 == 2 )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 30LL, &unk_18015DFC8, 0LL);
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(v23 + 16));
      v81 = v23 + 16;
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800CD21C(*((_QWORD *)off_18019C348 + 2), 34, (unsigned int)&unk_18015DFC8, 0, v90);
      }
      v24 = sub_18000543C(&v82);
      v25 = *(_QWORD *)(v23 + 56);
      if ( v25 && (v26 = *(_QWORD *)(v25 + 8LL * (v24 % *(_DWORD *)(v23 + 72)))) != 0 )
      {
        while ( *(_DWORD *)(v26 + 96) != v24 || !(unsigned __int8)sub_1800053AC(v26, &v82) )
        {
          v6 = v26;
          v26 = *(_QWORD *)(v26 + 88);
          if ( !v26 )
            goto LABEL_111;
        }
        sub_180005564(v23 + 56, v26, v6);
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 35LL, &unk_18015DFC8);
        }
        (*(void (__fastcall **)(_QWORD *, __int64))(*v69 + 232LL))(v69, v23);
        (*(void (__fastcall **)(_QWORD *, __int64))(*v69 + 232LL))(v69, qword_18019E5F8);
        v28 = *(_QWORD *)(sub_180008448(v27, sub_1800B6240) + 8);
        if ( *(_DWORD *)v28 > 4u )
        {
          v29 = (_WORD *)v69[91];
          if ( v29 )
          {
            v30 = -1LL;
            do
              ++v30;
            while ( v29[v30] );
            v31 = 2 * v30 + 2;
          }
          else
          {
            v29 = &unk_18015C744;
            v31 = 2;
          }
          v97 = v29;
          v98 = v31;
          v99 = 0;
          v75[0] = 184549376;
          v75[1] = 4;
          v76 = 0LL;
          v91 = *(unsigned __int16 **)(v28 + 8);
          v92 = *v91;
          v93 = 2;
          v94 = &unk_180166BF2;
          v95 = 37;
          v96 = 1;
          v71 = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
          EtwEventWriteTransfer(*(_QWORD *)(v28 + 32), v75, 0LL);
        }
        (*(void (__fastcall **)(_QWORD *))(*v69 + 16LL))(v69);
      }
      else
      {
LABEL_111:
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 36LL, &unk_18015DFC8, v90);
        }
      }
      if ( v23 != -16 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v23 + 16));
    }
    if ( v69 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v69 + 16LL))(v69);
      v69 = 0LL;
    }
    v50 = (_QWORD *)(v90 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v90 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v50 + 8LL))(*v50);
    v51 = (_QWORD *)(v86 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v86 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v51 + 8LL))(*v51);
    v52 = (_QWORD *)(v84 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v84 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v52 + 8LL))(*v52);
    v53 = (_QWORD *)(v83 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v83 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v53 + 8LL))(*v53);
    v54 = (_QWORD *)(v82 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v82 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v54 + 8LL))(*v54);
    v55 = v74[0];
    if ( v74[0] )
      goto LABEL_75;
  }
  return 0LL;
}
