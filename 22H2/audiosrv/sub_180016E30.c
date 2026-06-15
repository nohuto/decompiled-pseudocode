/*
 * XREFs of sub_180016E30 @ 0x180016E30
 * Callers:
 *     sub_1800192D0 @ 0x1800192D0 (sub_1800192D0.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180017690 @ 0x180017690 (sub_180017690.c)
 *     sub_1800183C0 @ 0x1800183C0 (sub_1800183C0.c)
 *     sub_1800184B0 @ 0x1800184B0 (sub_1800184B0.c)
 *     sub_1800188D0 @ 0x1800188D0 (sub_1800188D0.c)
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 *     sub_18001B6A0 @ 0x18001B6A0 (sub_18001B6A0.c)
 *     sub_18002AD80 @ 0x18002AD80 (sub_18002AD80.c)
 *     sub_18002B930 @ 0x18002B930 (sub_18002B930.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800D0B30 @ 0x1800D0B30 (sub_1800D0B30.c)
 *     sub_1800D6A04 @ 0x1800D6A04 (sub_1800D6A04.c)
 *     sub_1800D6BCC @ 0x1800D6BCC (sub_1800D6BCC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180016E30(__int64 a1, __int64 a2, _OWORD *a3, unsigned int a4, void **a5)
{
  __int64 v9; // rdi
  __int128 v10; // xmm0
  int OwningThread; // ebx
  __int64 v12; // r12
  int v13; // ebx
  int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rax
  BOOL v17; // r14d
  __int64 v18; // rbx
  int v19; // r13d
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rbx
  _WORD *v27; // rdx
  void **v28; // r14
  __int64 v29; // r8
  __int64 v30; // rcx
  __int16 v31; // ax
  _WORD *v32; // rax
  void *v33; // rbx
  HANDLE ProcessHeap; // rax
  void **v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // r14
  int v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rbx
  unsigned int v44; // eax
  int v45; // ebx
  int v46; // eax
  unsigned int v47; // eax
  int v48; // [rsp+40h] [rbp-61h]
  __int64 v49; // [rsp+48h] [rbp-59h] BYREF
  __int64 v50; // [rsp+50h] [rbp-51h] BYREF
  __int64 v51; // [rsp+58h] [rbp-49h]
  __int64 v52; // [rsp+60h] [rbp-41h] BYREF
  void **v53; // [rsp+68h] [rbp-39h] BYREF
  int v54; // [rsp+70h] [rbp-31h] BYREF
  int v55; // [rsp+74h] [rbp-2Dh]
  __int64 v56; // [rsp+78h] [rbp-29h] BYREF
  __int64 v57; // [rsp+80h] [rbp-21h] BYREF
  __int128 v58; // [rsp+88h] [rbp-19h] BYREF
  _QWORD *v59; // [rsp+98h] [rbp-9h]
  __int128 v60; // [rsp+A0h] [rbp-1h]
  void *retaddr; // [rsp+F8h] [rbp+57h]

  v59 = a3;
  v51 = a1;
  v53 = a5;
  v9 = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
  v56 = v9;
  v10 = *a3;
  v58 = v10;
  v60 = v10;
  v57 = 0LL;
  v52 = 0LL;
  if ( lpCriticalSection )
  {
    OwningThread = (int)lpCriticalSection[2].OwningThread;
    *(_QWORD *)&v10 = v58;
    if ( OwningThread == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2) )
      a4 |= 0x20000000u;
  }
  v12 = *((_QWORD *)&v60 + 1);
  if ( (_QWORD)v10 != 0x455E4240A9EF3FD9LL || *((_QWORD *)&v60 + 1) != 0xB2871830B3F2D5A4uLL )
    a4 |= (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2) != 0 ? 0x40200000 : 0;
  LODWORD(v49) = a4 & 0x10000;
  v55 = a4 & 0x60000000;
  v13 = (a4 >> 28) & 1 | 2;
  if ( (a4 & 0xA0000) != 0 )
    v13 = (a4 >> 28) & 1;
  v48 = v13;
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&dwCreationFlags + 40LL))(
          *(_QWORD *)&dwCreationFlags,
          *(_QWORD *)(a1 + 208),
          &v57);
  if ( v14 < 0 )
    goto LABEL_52;
  v15 = v52;
  if ( v52 != v57 )
  {
    v15 = 0LL;
    v52 = 0LL;
    if ( v57 )
    {
      (**(void (__fastcall ***)(__int64, void *, __int64 *))v57)(v57, &unk_18015B660, &v52);
      v15 = v52;
    }
  }
  if ( !v15 )
  {
    v14 = -2147467262;
LABEL_52:
    sub_18005E8F8("CVADServer::InitializePolicy", 1288LL, (unsigned int)v14);
    goto LABEL_53;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 24LL))(v15, &v54);
  if ( v14 < 0 )
    goto LABEL_52;
  if ( !v54 )
  {
    v13 |= 8u;
LABEL_20:
    v48 = v13;
    goto LABEL_21;
  }
  if ( v54 == 1 )
  {
    v13 &= ~2u;
    goto LABEL_20;
  }
LABEL_21:
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL))(a2) && (a4 & 0x2000000) != 0 )
    v48 = v13 | 0x20;
  v16 = v51;
  *(_DWORD *)(v51 + 268) = a4;
  v17 = v49 != 0;
  v18 = v16 + 72;
  v14 = sub_1800183C0(v16 + 72, *(_QWORD *)(v16 + 208));
  if ( v14 < 0 )
    goto LABEL_46;
  if ( (_DWORD)v49 && !(_QWORD)v10 && !v12 )
  {
    v14 = -2147024809;
    v19 = v49;
LABEL_40:
    sub_18005E8F8("CAppAudioSessionId::Initialize", 371LL, (unsigned int)v14);
    goto LABEL_41;
  }
  *(_OWORD *)(v18 + 24) = v58;
  v19 = v49;
  if ( !(_DWORD)v49 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    if ( v20 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( *(_WORD *)(v20 + 2 * v21) );
    }
    else
    {
      LODWORD(v21) = 0;
    }
    sub_18002BB70(v18 + 16, v20, (unsigned int)v21);
    v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
    if ( v22 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( *(_WORD *)(v22 + 2 * v23) );
    }
    else
    {
      LODWORD(v23) = 0;
    }
    sub_18002BB70(v18 + 8, v22, (unsigned int)v23);
  }
  *(_DWORD *)(v18 + 48) = v17;
  v14 = sub_1800184B0(v18 + 8);
  if ( v14 < 0 )
    goto LABEL_40;
LABEL_41:
  if ( v14 < 0
    || ((*(_DWORD *)(v18 + 64) = v17, v24 = a2, !v19)
      ? (*(_DWORD *)(v18 + 56) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2), v24 = a2)
      : (*(_DWORD *)(v18 + 56) = 0),
        *(_DWORD *)(v18 + 60) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(v24),
        v14 = sub_1800188D0(v18),
        v14 < 0) )
  {
LABEL_46:
    sub_18005E8F8("CAudioSessionInstanceId::Initialize", 911LL, (unsigned int)v14);
    v19 = v49;
  }
  if ( v14 < 0 )
    goto LABEL_52;
  v14 = sub_18001B6A0(v18, &v56);
  v9 = v56;
  if ( v14 < 0 )
    goto LABEL_52;
  v25 = (unsigned int)(*(_DWORD *)(v56 - 16) + 1);
  if ( (unsigned __int64)(2 * v25) > 0x40000 )
  {
    *v53 = 0LL;
LABEL_51:
    v14 = -2147024882;
    goto LABEL_52;
  }
  v27 = (_WORD *)sub_18006A1B0(2 * v25, &unk_18019F848);
  v28 = v53;
  *v53 = v27;
  if ( !v27 )
    goto LABEL_51;
  v14 = 0;
  if ( (unsigned __int64)(v25 - 1) > 0x7FFFFFFE )
    v14 = -2147024809;
  if ( v14 < 0 )
  {
    if ( v25 )
      *v27 = 0;
  }
  else
  {
    if ( v25 )
    {
      v29 = 2147483646 - v25;
      v30 = v9 - (_QWORD)v27;
      do
      {
        if ( !(v29 + v25) )
          break;
        v31 = *(_WORD *)((char *)v27 + v30);
        if ( !v31 )
          break;
        *v27++ = v31;
        --v25;
      }
      while ( v25 );
    }
    v32 = v27 - 1;
    if ( v25 )
      v32 = v27;
    *v32 = 0;
    v14 = -2147024774;
    if ( v25 )
      v14 = 0;
  }
  if ( v14 < 0 )
  {
    v33 = *v28;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v33);
    *v28 = 0LL;
    goto LABEL_52;
  }
  v35 = 0LL;
  v53 = 0LL;
  EnterCriticalSection(&CriticalSection);
  if ( qword_18019EF58 )
  {
    sub_1800D0B30(qword_18019EF58, v36, &v53);
    v35 = v53;
  }
  LeaveCriticalSection(&CriticalSection);
  if ( !v35 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 20LL, &unk_18015E3E8);
    }
    v14 = -2004287487;
    goto LABEL_52;
  }
  if ( off_18019C348 == (_UNKNOWN *)&off_18019C348 || (*((_BYTE *)off_18019C348 + 28) & 0x40) == 0 )
  {
    v37 = v51;
  }
  else
  {
    v37 = v51;
    if ( *((_BYTE *)off_18019C348 + 25) >= 4u )
      sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 19LL, &unk_18015E3E8, *(_QWORD *)(v51 + 208));
  }
  v38 = *(_QWORD *)(v37 + 208);
  if ( !v38 )
  {
    v14 = -2147024809;
    sub_18004BD84(
      retaddr,
      163LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      2147942487LL);
    sub_18002AD80(v35);
    goto LABEL_52;
  }
  v50 = 0LL;
  v39 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)&dwCreationFlags + 40LL))(
          *(_QWORD *)&dwCreationFlags,
          v38,
          &v50);
  v14 = v39;
  if ( v39 >= 0 )
  {
    v49 = 0LL;
    v40 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v50)(v50, &unk_18015B660, &v49);
    v14 = v40;
    if ( v40 >= 0 )
    {
      v40 = sub_180017690(v35, v38, &v58);
      v14 = v40;
      if ( v40 >= 0 )
      {
        if ( v49 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
        if ( v50 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
        goto LABEL_101;
      }
      v41 = 174LL;
    }
    else
    {
      v41 = 172LL;
    }
    sub_18004BD84(
      retaddr,
      v41,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (unsigned int)v40);
    sub_18000F708(&v49);
  }
  else
  {
    sub_18004BD84(
      retaddr,
      169LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (unsigned int)v39);
  }
  sub_18000F708(&v50);
  if ( v14 < 0 )
  {
    sub_18002AD80(v35);
    goto LABEL_52;
  }
LABEL_101:
  v42 = v51;
  if ( *(_QWORD *)(v51 + 152) )
    sub_18002B930();
  *(_QWORD *)(v42 + 152) = v58;
  if ( !(unsigned int)sub_18006D208((char *)v35 + 12) )
  {
    (*((void (__fastcall **)(void **, __int64))*v35 + 3))(v35, 1LL);
    if ( qword_18019E418 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
  }
  if ( qword_18019E610 )
  {
    v43 = *(_QWORD *)qword_18019E610;
    v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
    (*(void (__fastcall **)(__int64, _QWORD))(v43 + 48))(qword_18019E610, v44);
  }
  v45 = v48;
  if ( v19 && *v59 == 0x455E4240A9EF3FD9LL && v59[1] == 0xB2871830B3F2D5A4uLL )
    v45 = v48 | 4;
  v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E618 + 216LL))(qword_18019E618);
  if ( v46 == 1 )
  {
    v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
    sub_1800D6BCC(v47);
  }
  else if ( v46 == 2 )
  {
    sub_1800D6A04();
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 21LL, &unk_18015E3E8, v42);
  }
  v14 = sub_180019EA0(*(_QWORD *)(v42 + 152), a2, (int)v42 + 72, v45, v55, *(_DWORD *)(v42 + 64), v42 + 168);
  if ( v14 < 0 )
    goto LABEL_52;
LABEL_53:
  if ( v52 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  if ( v57 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v9 - 24) + 8LL))(*(_QWORD *)(v9 - 24));
  return (unsigned int)v14;
}
