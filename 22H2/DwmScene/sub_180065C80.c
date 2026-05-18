/*
 * XREFs of sub_180065C80 @ 0x180065C80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006AA58 @ 0x18006AA58 (sub_18006AA58.c)
 *     sub_18006AB04 @ 0x18006AB04 (sub_18006AB04.c)
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_1800D00A8 @ 0x1800D00A8 (sub_1800D00A8.c)
 *     sub_1800D1310 @ 0x1800D1310 (sub_1800D1310.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180065C80(_QWORD *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  char v11; // bl
  char v12; // r15
  char v13; // r12
  char v14; // r13
  char v15; // al
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  char v20; // [rsp+20h] [rbp-50h]
  char v21; // [rsp+21h] [rbp-4Fh]
  char v22; // [rsp+22h] [rbp-4Eh]
  __int128 v23; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v24[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v25; // [rsp+48h] [rbp-28h]
  __int128 v26; // [rsp+50h] [rbp-20h]

  result = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 376LL))(a1, v24);
  v5 = (__int64 *)result;
  v26 = 0LL;
  v6 = *(_QWORD *)(result + 8);
  if ( v6 )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(v6 + 8);
      if ( !(_DWORD)result )
        break;
      if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), result + 1, result) )
      {
        v7 = *v5;
        *(_QWORD *)&v26 = *v5;
        result = v5[1];
        *((_QWORD *)&v26 + 1) = result;
        goto LABEL_3;
      }
    }
  }
  v7 = v26;
LABEL_3:
  v8 = v25;
  if ( v25 )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 12));
    if ( !(_DWORD)result )
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v8 + 8LL))(v8, v6, v5);
    v7 = v26;
  }
  if ( v7 )
  {
    v9 = sub_18006AB04(v7);
    v10 = sub_1800752B4(v9, a2);
    v11 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180208D08, 0LL);
    v12 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180208D28, 0LL);
    v13 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180208C48, 0LL);
    v14 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180208C68, 0LL);
    v20 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180208C88, 0LL);
    v21 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180208CA8, 0LL);
    v22 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180208CC8, 0LL);
    v15 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180208CE8, 0LL);
    v16 = v11 && !v12;
    if ( v13 )
      v16 = (unsigned int)v16 | 2;
    if ( v14 )
      v16 = (unsigned int)v16 | 4;
    if ( v20 )
      v16 = (unsigned int)v16 | 8;
    if ( v21 )
      v16 = (unsigned int)v16 | 0x40;
    if ( v22 )
      v16 = (unsigned int)v16 | 0x10;
    if ( v15 )
      v16 = (unsigned int)v16 | 0x20;
    sub_1800D1310(a1[57], v7, v16);
    v17 = sub_18006AA58(v7);
    v23 = 0LL;
    v18 = *(_QWORD *)(v17 + 8);
    if ( v18 )
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    v23 = *(_OWORD *)v17;
    result = sub_1800D00A8(a1[55], &v23, a1[60]);
  }
  if ( *((_QWORD *)&v26 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v26 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v19 = *((_QWORD *)&v26 + 1);
      (***((void (__fastcall ****)(_QWORD, __int64, __int64 *))&v26 + 1))(*((_QWORD *)&v26 + 1), v6, v5);
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v26 + 1) + 8LL))(*((_QWORD *)&v26 + 1));
    }
  }
  return result;
}
