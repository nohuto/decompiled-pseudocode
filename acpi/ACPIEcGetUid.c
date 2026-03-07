__int64 *__fastcall ACPIEcGetUid(__int64 a1)
{
  __int64 *result; // rax
  volatile signed __int32 *v3; // rsi
  int v4; // ebx
  __int64 v5; // rdx
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-18h]

  *(_DWORD *)(a1 + 16) = 0;
  result = AMLIGetNamedChild(*(_QWORD **)(a1 + 56), 1145656671);
  v3 = (volatile signed __int32 *)result;
  if ( result )
  {
    v8 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    v4 = AMLIEvalNameSpaceObject(result, (__int64)&v6, 0, 0LL);
    result = (__int64 *)AMLIDereferenceHandleEx(v3, v5);
    if ( v4 >= 0 )
    {
      if ( WORD1(v6) == 1 )
        *(_DWORD *)(a1 + 16) = (unsigned __int8)v7;
      return (__int64 *)AMLIFreeDataBuffs((__int64)&v6);
    }
  }
  return result;
}
