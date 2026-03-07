__int64 __fastcall RtlpFreeAllAtom(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rbx
  _QWORD **v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v8 = a1;
  v9 = 0LL;
  result = RtlpHashStringToAtom(a2, (char *)a1 + 42, 0LL, &v9, 0LL, &v10, &v8);
  if ( (int)result >= 0 )
  {
    v4 = v8;
    if ( v8 )
    {
      if ( v9 )
        *v9 = *v8;
      v5 = (_QWORD **)(v4 + 2);
      while ( 1 )
      {
        v6 = *v5;
        if ( *v5 == v5 )
          break;
        if ( (_QWORD **)v6[1] != v5 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
          __fastfail(3u);
        *v5 = v7;
        v7[1] = v5;
        RtlpFreeAtom(v6);
      }
      RtlpFreeHandleForAtom(a2, v4);
      return RtlpFreeAtom(v4);
    }
  }
  return result;
}
