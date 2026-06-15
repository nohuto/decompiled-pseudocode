/*
 * XREFs of sub_18002CA40 @ 0x18002CA40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800024A4 @ 0x1800024A4 (sub_1800024A4.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002E440 @ 0x18002E440 (sub_18002E440.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800C6158 @ 0x1800C6158 (sub_1800C6158.c)
 *     sub_1800CB39C @ 0x1800CB39C (sub_1800CB39C.c)
 *     sub_1800CB5A0 @ 0x1800CB5A0 (sub_1800CB5A0.c)
 *     sub_18013CB58 @ 0x18013CB58 (sub_18013CB58.c)
 */

__int64 __fastcall sub_18002CA40(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rsi
  int v5; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  __int64 v10; // r9
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // rax
  unsigned int v15; // r14d
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdi
  char v29; // [rsp+50h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v31; // [rsp+A0h] [rbp+8h] BYREF

  v2 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CB5A0(*((_QWORD *)off_18019C348 + 2), 50LL, &unk_18015DEF0, a1, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v9 = *(_QWORD *)(a1 + 104);
  v10 = 0LL;
  if ( v9 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      v12 = *(_QWORD *)(a1 + 96);
      v8 = *(_QWORD *)(v12 + 8 * v11);
      if ( v8 == a2 )
        break;
      v10 = (unsigned int)(v10 + 1);
      v11 = (unsigned int)v10;
      if ( (unsigned int)v10 >= v9 )
        goto LABEL_24;
    }
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800CB39C(*((_QWORD *)off_18019C348 + 2), 51LL, v8, v10, *(_QWORD *)(v12 + 8 * v11));
    }
    if ( v11 >= *(_QWORD *)(a1 + 104) )
      goto LABEL_67;
    _mm_lfence();
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v11);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v4 + 80LL))(v4, v7, v8, v10);
    v13 = (*(_DWORD *)(a1 + 272))-- == 1;
    if ( v13 )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 52LL, &unk_18015DEF0, *(unsigned int *)(a1 + 272));
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 136LL))(a1, 0LL);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v4 + 8) + 64LL))(v4 + 8) )
      v5 = 1;
    v8 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 80) + 120LL))(*(_QWORD *)(v4 + 80));
    v14 = *(unsigned int *)(v4 + 336);
    if ( v5 )
      v7 = (unsigned int)dword_180160610[v14];
    else
      v7 = (unsigned int)dword_1801605B0[v14];
    v15 = *(_DWORD *)(v4 + 228);
    v10 = 16LL;
    v16 = 0;
    if ( (_DWORD)v8 )
      v16 = 16;
    v17 = (*(_BYTE *)(v4 + 224) == 0) + 2 * (v7 + v16);
    if ( v17 == v15 )
      goto LABEL_23;
    v18 = *(_QWORD *)(v4 + 64);
    *(_DWORD *)(v4 + 228) = v17;
    v31 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 80LL))(v18, &v31);
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v31 + 200LL))(v31, 1LL, v17, v15);
    v5 = v19;
    if ( v19 >= 0 )
    {
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
LABEL_23:
      v5 = 0;
      goto LABEL_24;
    }
    sub_18004BD84(retaddr, 746LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v19);
    sub_18000F708(&v31);
  }
LABEL_24:
  if ( a1 != -48 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, v7, v8, v10);
    v21 = *(unsigned int *)(v4 + 296);
    if ( !(_DWORD)v21 )
    {
      sub_18013CB58(v20, 0LL, 0LL);
      v21 = *(unsigned int *)(v4 + 296);
    }
    if ( (_DWORD)v21 != 1 )
      sub_18013CB58(v20, 0LL, v21);
    *(_DWORD *)(v4 + 296) = 0;
    *(_QWORD *)(v4 + 304) = L"CAudioSession::StopStream: in _Streams";
    sub_18002E440((LPCRITICAL_SECTION)(a1 + 496));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    goto LABEL_32;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  v23 = off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 53LL, &unk_18015DEF0);
    v23 = off_18019C348;
  }
  if ( *(_QWORD *)(a1 + 176) )
  {
    v24 = *(_QWORD *)(a1 + 176);
    v25 = 0LL;
    if ( v24 )
    {
      while ( 1 )
      {
        v26 = *(_QWORD *)(a1 + 168);
        v27 = *(_QWORD *)(v26 + 8 * v25);
        if ( v27 == a2 )
          break;
        v25 = ++v2;
        if ( v2 >= v24 )
          goto LABEL_53;
      }
      if ( v23 != &off_18019C348 && (*((_BYTE *)v23 + 28) & 0x40) != 0 && *((_BYTE *)v23 + 25) >= 4u )
        sub_1800CB39C(v23[2], 54LL, v27, v2, *(_QWORD *)(v26 + 8 * v25));
      if ( v25 < *(_QWORD *)(a1 + 176) )
      {
        _mm_lfence();
        v28 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v25);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 80LL))(v28);
        v13 = (*(_DWORD *)(a1 + 272))-- == 1;
        if ( v13 )
        {
          if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
            && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
            && *((_BYTE *)off_18019C348 + 25) >= 4u )
          {
            sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 55LL, &unk_18015DEF0, *(unsigned int *)(a1 + 272));
          }
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 136LL))(a1, 0LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
          sub_1800C6158(
            (unsigned int)&v29,
            a1,
            1,
            0,
            v28,
            (__int64)L"CAudioSession::StopStream: in _DisconnectedStreams");
          sub_18002E440((LPCRITICAL_SECTION)(a1 + 496));
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
        }
        v5 = sub_1800024A4(v28);
        goto LABEL_53;
      }
    }
LABEL_67:
    sub_1800B8610(2147942487LL);
  }
LABEL_53:
  if ( a1 != -128 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
LABEL_32:
  if ( v5 < 0 )
    sub_18005E8F8("CAudioSession::StopStream", 3113LL, (unsigned int)v5);
  return (unsigned int)v5;
}
