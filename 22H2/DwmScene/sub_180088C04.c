/*
 * XREFs of sub_180088C04 @ 0x180088C04
 * Callers:
 *     sub_180011AD0 @ 0x180011AD0 (sub_180011AD0.c)
 *     sub_180015B80 @ 0x180015B80 (sub_180015B80.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_180087E48 @ 0x180087E48 (sub_180087E48.c)
 *     sub_18008866C @ 0x18008866C (sub_18008866C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
unsigned __int64 __fastcall sub_180088C04(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r12
  volatile signed __int32 *v8; // rsi
  __int64 v9; // r8
  signed __int32 v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rdx
  signed __int32 v14; // eax
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 result; // rax
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  __int64 *v22; // rax
  __int64 *v23; // rax
  __int64 *v24; // rax
  __int128 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v26; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v27; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v28; // [rsp+68h] [rbp-98h]
  _QWORD *v29; // [rsp+70h] [rbp-90h]
  _QWORD v30[4]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v31[4]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v32[4]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v33[4]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v34[4]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v35[5]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v36[8]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v37[8]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD pExceptionObject[14]; // [rsp+1C0h] [rbp+C0h] BYREF

  v28 = a2;
  v29 = a3;
  if ( !*a2 )
  {
    sub_18000FD48(v31);
    v23 = sub_18000FD48(v30);
    sub_180027FF4(v36, v23, 437, (__int64)v31, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v36;
  }
  v6 = *a3;
  if ( !*a3 )
  {
    sub_18000FD48(v33);
    v24 = sub_18000FD48(v32);
    sub_180027FF4(v37, v24, 442, (__int64)v33, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v37;
  }
  v7 = 0LL;
  v8 = 0LL;
  v9 = *(_QWORD *)(v6 + 80);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
      {
        v7 = *(_QWORD *)(v6 + 72);
        v8 = *(volatile signed __int32 **)(v6 + 80);
        break;
      }
    }
  }
  v11 = *a2;
  v12 = 0LL;
  v13 = *(_QWORD *)(*a2 + 80LL);
  if ( v13 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(v13 + 8);
      if ( !v14 )
        break;
      if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14) )
      {
        v12 = *(_QWORD *)(v11 + 72);
        v15 = *(volatile signed __int32 **)(v11 + 80);
        if ( v15 )
        {
          if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
            if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          }
        }
        break;
      }
    }
  }
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  if ( v12 != v7 )
  {
    sub_18000FD48(v35);
    v22 = sub_18000FD48(v34);
    sub_180027FF4(pExceptionObject, v22, 447, (__int64)v35, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v25 = 0LL;
  v16 = a2[1];
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v16 = a2[1];
  }
  *(_QWORD *)&v25 = *a2;
  *((_QWORD *)&v25 + 1) = v16;
  sub_18008866C(a1, (__int64 *)&v25);
  v26 = 0LL;
  v17 = a3[1];
  if ( v17 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    v17 = a3[1];
  }
  *(_QWORD *)&v26 = *a3;
  *((_QWORD *)&v26 + 1) = v17;
  v27 = 0LL;
  v18 = a2[1];
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    v18 = a2[1];
  }
  *(_QWORD *)&v27 = *a2;
  *((_QWORD *)&v27 + 1) = v18;
  result = sub_180087E48(a1, (__int64 *)&v27, &v26);
  v20 = (volatile signed __int32 *)a2[1];
  if ( v20 )
  {
    result = (unsigned int)_InterlockedDecrement(v20 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      result = (unsigned int)_InterlockedDecrement(v20 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  v21 = (volatile signed __int32 *)a3[1];
  if ( v21 )
  {
    result = (unsigned int)_InterlockedDecrement(v21 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      result = (unsigned int)_InterlockedDecrement(v21 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  return result;
}
