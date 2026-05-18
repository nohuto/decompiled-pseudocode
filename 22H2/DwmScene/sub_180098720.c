/*
 * XREFs of sub_180098720 @ 0x180098720
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013E28 @ 0x180013E28 (sub_180013E28.c)
 *     sub_1800EB130 @ 0x1800EB130 (sub_1800EB130.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180098720(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rbx
  __int128 v8; // [rsp+20h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-10h] BYREF

  v9 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v9 = *a2;
  *((_QWORD *)&v9 + 1) = v4;
  sub_1800EB130(a1, &v9);
  v8 = 0LL;
  sub_180013E28((__int64 *)&v8, a2);
  result = v8;
  *(_OWORD *)(v8 + 88) = *(_OWORD *)(a1 + 88);
  *(_QWORD *)(result + 104) = *(_QWORD *)(a1 + 104);
  if ( *((_QWORD *)&v8 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v6 = *((_QWORD *)&v8 + 1);
      (***((void (__fastcall ****)(_QWORD))&v8 + 1))(*((_QWORD *)&v8 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v8 + 1) + 8LL))(*((_QWORD *)&v8 + 1));
    }
  }
  v7 = (volatile signed __int32 *)a2[1];
  if ( v7 )
  {
    result = (unsigned int)_InterlockedDecrement(v7 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
