/*
 * XREFs of sub_180097440 @ 0x180097440
 * Callers:
 *     sub_180096B80 @ 0x180096B80 (sub_180096B80.c)
 * Callees:
 *     sub_180013E28 @ 0x180013E28 (sub_180013E28.c)
 *     sub_180013F64 @ 0x180013F64 (sub_180013F64.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_1800959C0 @ 0x1800959C0 (sub_1800959C0.c)
 *     sub_1800EB364 @ 0x1800EB364 (sub_1800EB364.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180097440(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 result; // rax
  __int64 v6; // rdi
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdx
  signed __int32 v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int *v12; // rax
  __int64 v13; // rbx
  __int64 *v14; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-98h]
  __int64 v17; // [rsp+78h] [rbp-90h] BYREF
  int v18; // [rsp+80h] [rbp-88h]
  __int64 *v19; // [rsp+1C8h] [rbp+C0h]
  __int64 *v20; // [rsp+1D0h] [rbp+C8h]
  __int64 v21; // [rsp+1D8h] [rbp+D0h]
  volatile signed __int32 *v22; // [rsp+1E0h] [rbp+D8h]
  __int128 v23; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v24; // [rsp+1F8h] [rbp+F0h] BYREF
  __int128 v25; // [rsp+368h] [rbp+260h] BYREF
  __int64 v26; // [rsp+378h] [rbp+270h] BYREF
  int v27; // [rsp+380h] [rbp+278h] BYREF
  __int64 v28; // [rsp+384h] [rbp+27Ch]
  int v29; // [rsp+38Ch] [rbp+284h]

  v4 = a1;
  result = 8454144LL;
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 440LL) & 0x810000) == 0x810000 )
  {
    v25 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(v8 + 8);
        if ( !v9 )
          break;
        if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
        {
          v6 = *(_QWORD *)(a1 + 56);
          v7 = *(volatile signed __int32 **)(a1 + 64);
          break;
        }
      }
    }
    v21 = v6;
    v22 = v7;
    sub_1800839A4(v6);
    v14 = 0LL;
    v19 = *(__int64 **)(v6 + 384);
    v20 = *(__int64 **)(v6 + 376);
    result = (__int64)sub_180013F64(&v14, v20, v19, 0);
    if ( v14 == *(__int64 **)(v6 + 384) )
      v25 = 0LL;
    else
      result = (__int64)sub_180013E28((__int64 *)&v25, v14);
    if ( v7 )
    {
      result = (unsigned int)_InterlockedDecrement(v7 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        result = (unsigned int)_InterlockedDecrement(v7 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    v10 = v25;
    if ( (_QWORD)v25 )
    {
      v11 = 8LL;
      v12 = &v27;
      do
      {
        *(v12 - 2) = 0;
        *(v12 - 1) = 0;
        *v12 = 0;
        v12 += 3;
        --v11;
      }
      while ( v11 );
      sub_1800959C0((unsigned __int64 *)(v10 + 88), &v26);
      v23 = xmmword_1801D0050;
      v24 = xmmword_1801D0050;
      v15 = v28;
      LODWORD(v16) = v29;
      v17 = v26;
      v18 = v27;
      sub_1800EB364(v4, (unsigned int)&v17, (unsigned int)&v15, (unsigned int)&v24, (__int64)&v23, 1077936128);
    }
    if ( *((_QWORD *)&v25 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v13 = *((_QWORD *)&v25 + 1);
        (***((void (__fastcall ****)(_QWORD))&v25 + 1))(*((_QWORD *)&v25 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v25 + 1) + 8LL))(*((_QWORD *)&v25 + 1));
      }
    }
  }
  return result;
}
