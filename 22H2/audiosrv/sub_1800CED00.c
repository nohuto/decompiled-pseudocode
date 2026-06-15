/*
 * XREFs of sub_1800CED00 @ 0x1800CED00
 * Callers:
 *     sub_1800D0510 @ 0x1800D0510 (sub_1800D0510.c)
 * Callees:
 *     sub_180001FB0 @ 0x180001FB0 (sub_180001FB0.c)
 *     sub_180002040 @ 0x180002040 (sub_180002040.c)
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 *     sub_18002C4D0 @ 0x18002C4D0 (sub_18002C4D0.c)
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180044364 @ 0x180044364 (sub_180044364.c)
 *     sub_180045410 @ 0x180045410 (sub_180045410.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD820 @ 0x1800BD820 (sub_1800BD820.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 *     sub_1800CF46C @ 0x1800CF46C (sub_1800CF46C.c)
 *     sub_1800D0A00 @ 0x1800D0A00 (sub_1800D0A00.c)
 *     sub_1800D3C38 @ 0x1800D3C38 (sub_1800D3C38.c)
 */

__int64 __fastcall sub_1800CED00(__int64 a1, _QWORD *a2, int *a3, char **a4, _QWORD *a5)
{
  __int64 v6; // rax
  char *v8; // r14
  _BYTE *v9; // r15
  int v10; // r13d
  int v11; // r12d
  int v12; // ebx
  struct _RTL_CRITICAL_SECTION *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rsi
  int v17; // eax
  char *v18; // rax
  int *v19; // rdx
  char **v20; // rax
  _QWORD *v21; // rcx
  _BYTE *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // rsi
  _UNKNOWN **v27; // rcx
  int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  void **v32; // rdi
  __int64 v33; // rcx
  int v34; // [rsp+40h] [rbp-C0h]
  __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  int *v39; // [rsp+68h] [rbp-98h]
  char **v40; // [rsp+70h] [rbp-90h]
  _QWORD *v41; // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+80h] [rbp-80h] BYREF
  struct _RTL_CRITICAL_SECTION *v43; // [rsp+88h] [rbp-78h]
  _QWORD *v44; // [rsp+90h] [rbp-70h]
  _QWORD v45[10]; // [rsp+A0h] [rbp-60h] BYREF

  v41 = a5;
  v6 = *a2;
  v40 = a4;
  v8 = 0LL;
  v39 = a3;
  v9 = 0LL;
  v44 = a2;
  v10 = 0;
  v34 = (*(__int64 (__fastcall **)(_QWORD *))(v6 + 48))(a2);
  v42 = 0LL;
  v11 = 0;
  *v40 = 0LL;
  *v41 = 0LL;
  *v39 = 0;
  sub_180002040((__int64)v45);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 0x29u, (__int64)&unk_18015DFC8, a1, v34);
  }
  v12 = sub_1800D3C38((unsigned int)v45, (_DWORD)a2, *(_QWORD *)(a1 + 296), (unsigned int)&qword_18015B670, 1);
  if ( v12 < 0 || (v12 = sub_180019EA0(a1, (__int64)a2, (__int64)v45, 0xEu, 0, 0, &v42), v12 < 0) )
  {
    sub_180001FB0(v45);
    goto LABEL_66;
  }
  sub_180001FB0(v45);
  v13 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  v43 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v37 = a1 + 56;
  v35 = sub_18002C4D0(a1 + 56);
  if ( v35 )
  {
    v15 = v14;
    do
    {
      v16 = *(_QWORD *)sub_1800CF46C(v15, &v35);
      if ( v16 )
      {
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x2Au, (__int64)&unk_18015DFC8, 0LL);
        }
        v17 = *(_DWORD *)(v16 + 716);
        if ( (!v17 || v17 == v34) && *(_DWORD *)(v16 + 408) != 2 )
          ++v10;
      }
    }
    while ( v35 );
    v13 = v43;
    v9 = 0LL;
    v11 = 0;
  }
  v38 = v10;
  v18 = (char *)sub_180045410(8LL * v10);
  v8 = v18;
  if ( !v18 || (memset(v18, 0, 8LL * v10), v23 = (_BYTE *)sub_180045410(8LL * v10), (v9 = v23) == 0LL) )
  {
    v12 = -2147024882;
    goto LABEL_23;
  }
  memset(v23, 0, 8LL * v10);
  v35 = sub_18002C4D0(v37);
  if ( !v35 )
  {
LABEL_23:
    if ( v13 )
      LeaveCriticalSection(v13);
    goto LABEL_25;
  }
  v25 = 0LL;
  while ( 1 )
  {
    v26 = *(_QWORD *)sub_1800CF46C(v24, &v35);
    if ( !v26 )
      goto LABEL_57;
    v36 = 0LL;
    v27 = (_UNKNOWN **)off_18019C348;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x2Bu, (__int64)&unk_18015DFC8, 0LL);
      v27 = (_UNKNOWN **)off_18019C348;
    }
    v28 = *(_DWORD *)(v26 + 716);
    if ( v28 )
    {
      if ( v28 != v34 )
        goto LABEL_57;
    }
    if ( *(_DWORD *)(v26 + 408) == 2 )
      goto LABEL_57;
    if ( v27 != &off_18019C348 && (*((_BYTE *)v27 + 28) & 0x40) != 0 && *((_BYTE *)v27 + 25) >= 4u )
      sub_1800BD820((__int64)v27[2], 0x2Cu, (__int64)&unk_18015DFC8, v26, 0LL);
    v29 = (*(__int64 (__fastcall **)(_QWORD *))(*v44 + 40LL))(v44);
    v12 = sub_180044364(v30, v26, v29, 0, &v36);
    if ( v12 < 0 )
      break;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x2Eu, (__int64)&unk_18015DFC8, 0LL);
    }
    if ( v25 >= v38 )
      goto LABEL_23;
    v31 = v36;
    *(_QWORD *)&v8[8 * v25] = v36;
    v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v31 + 120LL))(v31, &v9[8 * v11]);
    if ( v12 < 0 )
      goto LABEL_63;
    ++v11;
    ++v25;
LABEL_57:
    if ( !v35 )
      goto LABEL_23;
    v24 = v37;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x2Du, (__int64)&unk_18015DFC8, v12);
  }
LABEL_63:
  if ( v13 )
    LeaveCriticalSection(v13);
  if ( v11 >= 0 )
  {
LABEL_66:
    v32 = (void **)&v9[8 * v11];
    do
    {
      if ( v8 )
      {
        v33 = *(__int64 *)((char *)v32 + v8 - v9);
        if ( v33 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      if ( v9 && *v32 )
        sub_180033A70(*v32);
      --v32;
      --v11;
    }
    while ( v11 >= 0 );
  }
  if ( v8 )
    sub_180033A70(v8);
  v8 = 0LL;
  if ( v9 )
    sub_180033A70(v9);
  v9 = 0LL;
  v11 = 0;
LABEL_25:
  v19 = v39;
  v20 = v40;
  v21 = v41;
  *v39 = v11;
  *v20 = v8;
  *v21 = v9;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800D0A00(*((_QWORD *)off_18019C348 + 2), v19, &off_18019C348, (unsigned int)v12, *v19, *v20);
  }
  if ( v12 < 0 )
    sub_18005E8F8((__int64)"CAudioSessionManager::GetAudioSessions", 1408, v12);
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  return (unsigned int)v12;
}
