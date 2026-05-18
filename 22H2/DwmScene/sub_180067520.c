/*
 * XREFs of sub_180067520 @ 0x180067520
 * Callers:
 *     sub_18002B470 @ 0x18002B470 (sub_18002B470.c)
 * Callees:
 *     sub_180066384 @ 0x180066384 (sub_180066384.c)
 *     sub_1800673E0 @ 0x1800673E0 (sub_1800673E0.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_1800D77BC @ 0x1800D77BC (sub_1800D77BC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ceilf @ 0x18011F754 (ceilf.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180067520(float *a1, float a2, float a3, float a4, float a5)
{
  __int64 result; // rax
  _QWORD *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  int v11; // r14d
  int v12; // ebx
  int v13; // eax
  _QWORD *v14; // rbx
  __int64 v15; // rbx
  volatile signed __int32 *v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // [rsp+28h] [rbp-61h]
  _BYTE v21[8]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v22; // [rsp+40h] [rbp-49h]
  __int128 v23; // [rsp+48h] [rbp-41h]
  _DWORD v24[6]; // [rsp+58h] [rbp-31h] BYREF

  result = (*(__int64 (__fastcall **)(float *, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v21);
  v7 = (_QWORD *)result;
  v23 = 0LL;
  v8 = *(_QWORD *)(result + 8);
  if ( v8 )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(v8 + 8);
      if ( !(_DWORD)result )
        break;
      if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), result + 1, result) )
      {
        *(_QWORD *)&v23 = *v7;
        result = v7[1];
        *((_QWORD *)&v23 + 1) = result;
        break;
      }
    }
  }
  v9 = v22;
  if ( v22 )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 12));
    if ( !(_DWORD)result )
      result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v9 + 8LL))(v9, v8, v7);
  }
  if ( (_QWORD)v23 )
  {
    v10 = *((_DWORD *)a1 + 41);
    v11 = *((_DWORD *)a1 + 42);
    v12 = (int)ceilf(a2 * a4);
    v13 = (int)ceilf(a3 * a5);
    if ( v12 < 1 )
      v12 = 1;
    *((_DWORD *)a1 + 41) = v12;
    if ( v13 < 1 )
      v13 = 1;
    *((_DWORD *)a1 + 42) = v13;
    if ( v10 != v12 || v11 != v13 )
      *((_DWORD *)a1 + 50) = 3;
    a1[46] = a4;
    a1[47] = a5;
    a1[44] = a2;
    a1[45] = a3;
    result = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 280LL))(a1);
    if ( (_BYTE)result )
    {
      *(float *)v24 = a1[41];
      *(float *)&v24[1] = a1[42];
      v24[2] = (*(__int64 (__fastcall **)(float *, _QWORD))(*(_QWORD *)a1 + 264LL))(a1, 0LL);
      v24[3] = (*(__int64 (__fastcall **)(float *, __int64))(*(_QWORD *)a1 + 264LL))(a1, 1LL);
      v24[4] = (*(__int64 (__fastcall **)(float *, __int64))(*(_QWORD *)a1 + 264LL))(a1, 2LL);
      v24[5] = 0;
      v14 = (_QWORD *)(*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 152LL))(a1);
      sub_1800D77BC(*v14, v23, v24);
      sub_1800673E0((__int64)a1);
      v15 = *v14;
      v16 = *(volatile signed __int32 **)(v15 + 464);
      if ( v16 )
      {
        _InterlockedAdd(v16 + 2, 1u);
        v16 = *(volatile signed __int32 **)(v15 + 464);
      }
      v20 = *(_QWORD *)(v15 + 456);
      v17 = sub_18006AB3C(v23);
      v18 = *(_QWORD *)(v20 + 136);
      if ( v18 )
        result = sub_180066384(v18, v17);
      else
        result = 0LL;
      *((_DWORD *)a1 + 43) = result;
      if ( v16 )
      {
        result = (unsigned int)_InterlockedDecrement(v16 + 2);
        if ( !(_DWORD)result )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
          result = (unsigned int)_InterlockedDecrement(v16 + 3);
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        }
      }
    }
    else
    {
      *((_DWORD *)a1 + 43) = 1;
    }
  }
  if ( *((_QWORD *)&v23 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v19 = *((_QWORD *)&v23 + 1);
      (***((void (__fastcall ****)(_QWORD, __int64, _QWORD *))&v23 + 1))(*((_QWORD *)&v23 + 1), v8, v7);
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v23 + 1) + 8LL))(*((_QWORD *)&v23 + 1));
    }
  }
  return result;
}
