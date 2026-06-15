/*
 * XREFs of sub_1800E7678 @ 0x1800E7678
 * Callers:
 *     sub_1800E9090 @ 0x1800E9090 (sub_1800E9090.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memcmp @ 0x180074433 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB468 @ 0x1800CB468 (sub_1800CB468.c)
 *     sub_1800E921C @ 0x1800E921C (sub_1800E921C.c)
 *     sub_1800E9288 @ 0x1800E9288 (sub_1800E9288.c)
 *     sub_1800E9310 @ 0x1800E9310 (sub_1800E9310.c)
 */

char __fastcall sub_1800E7678(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  _DWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // edi
  __int64 v16; // rbx
  __int64 v17; // rbx
  unsigned __int16 *v18; // rdi
  __int64 v19; // rbx
  const void *v20; // rax
  __int64 v22; // rsi
  int v23; // edi
  int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // [rsp+20h] [rbp-48h]
  int v29; // [rsp+28h] [rbp-40h]
  _BYTE v30[16]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*a1 + 32);
  if ( v4 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) )
  {
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 40LL))(a2, v30);
    v9 = *a1;
    v10 = *(_QWORD *)(*a1 + 48) - *v8;
    if ( !v10 )
      v10 = *(_QWORD *)(v9 + 56) - v8[1];
    if ( v10 )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        v11 = *(_DWORD *)(v9 + 48);
        v12 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 40LL))(a2, v30);
        sub_1800E921C(*((_QWORD *)off_18019C348 + 2), v13, v14, a2, *v12, v11);
      }
    }
    else
    {
      v15 = *(_DWORD *)(v9 + 8);
      v16 = *a1;
      if ( v15 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2) )
      {
        v17 = *(_QWORD *)(v16 + 16);
        if ( *(_WORD *)(v17 + 16) == *(_WORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) + 16) )
        {
          v18 = *(unsigned __int16 **)(*a1 + 16);
          v19 = v18[8];
          v20 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
          if ( !memcmp(v18, v20, v19 + 18) )
            return 1;
        }
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          v22 = *(_QWORD *)(*a1 + 16);
          v23 = *(unsigned __int16 *)(v22 + 2);
          v24 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) + 2);
          v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
          sub_1800E9288(
            *((_QWORD *)off_18019C348 + 2),
            v26,
            v27,
            a2,
            *(_DWORD *)(v25 + 4),
            v24,
            *(_DWORD *)(v22 + 4),
            v23);
        }
      }
      else if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
             && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
             && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        v29 = v15;
        v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
        sub_1800CB468(*((_QWORD *)off_18019C348 + 2), 0xCu, (__int64)&unk_180171578, a2, v28, v29);
      }
    }
  }
  else if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
         && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
         && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
    sub_1800E9310(*((_QWORD *)off_18019C348 + 2), v6, v7, a2, v5, v4);
  }
  return 0;
}
