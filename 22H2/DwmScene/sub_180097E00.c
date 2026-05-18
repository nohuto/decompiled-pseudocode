/*
 * XREFs of sub_180097E00 @ 0x180097E00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008CE5C @ 0x18008CE5C (sub_18008CE5C.c)
 *     sub_180095AEC @ 0x180095AEC (sub_180095AEC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180097E00(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int128 v10; // [rsp+20h] [rbp-50h] BYREF
  __int128 v11; // [rsp+30h] [rbp-40h] BYREF
  __int128 v12; // [rsp+40h] [rbp-30h]
  __int128 v13; // [rsp+50h] [rbp-20h]

  v11 = 0LL;
  result = (__int64)sub_180095AEC((__int64)a1, &v11, 0LL);
  if ( (_QWORD)v11 )
  {
    v13 = 0LL;
    v3 = a1[8];
    if ( v3 )
    {
      while ( 1 )
      {
        result = *(unsigned int *)(v3 + 8);
        if ( !(_DWORD)result )
          break;
        if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), result + 1, result) )
        {
          *(_QWORD *)&v13 = a1[7];
          result = a1[8];
          *((_QWORD *)&v13 + 1) = result;
          break;
        }
      }
    }
    v4 = (__int64 *)a1[13];
    if ( v4[9] )
    {
      v12 = 0LL;
      v5 = a1[18];
      if ( v5 )
      {
        while ( 1 )
        {
          result = *(unsigned int *)(v5 + 8);
          if ( !(_DWORD)result )
            break;
          if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), result + 1, result) )
          {
            *(_QWORD *)&v12 = a1[17];
            result = a1[18];
            *((_QWORD *)&v12 + 1) = result;
            break;
          }
        }
      }
      if ( (_QWORD)v12 )
      {
        sub_18008CE5C(*v4, (__int64)aSkinning, 1);
        v10 = 0LL;
        v6 = v4[10];
        if ( v6 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
          v6 = v4[10];
        }
        *(_QWORD *)&v10 = v4[9];
        *((_QWORD *)&v10 + 1) = v6;
        result = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v12 + 8LL))(v12, &v10);
      }
      if ( *((_QWORD *)&v12 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          v7 = *((_QWORD *)&v12 + 1);
          (***((void (__fastcall ****)(_QWORD))&v12 + 1))(*((_QWORD *)&v12 + 1));
          result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v12 + 1) + 8LL))(*((_QWORD *)&v12 + 1));
        }
      }
    }
    if ( *((_QWORD *)&v13 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v8 = *((_QWORD *)&v13 + 1);
        (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
      }
    }
  }
  if ( *((_QWORD *)&v11 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v9 = *((_QWORD *)&v11 + 1);
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  return result;
}
