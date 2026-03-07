__int64 __fastcall RtlpRemoveUCRBlock(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // r8
  __int64 result; // rax
  __int64 *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rdx

  v2 = a2 + 2;
  result = a2[2];
  v5 = (__int64 *)a2[3];
  v6 = *(_QWORD *)(result + 8);
  v7 = *v5;
  if ( *v5 == v6 && (_QWORD *)v7 == v2 )
  {
    *v5 = result;
    *(_QWORD *)(result + 8) = v5;
  }
  else
  {
    result = RtlpLogHeapFailure(13, 0, (_DWORD)v2, v6, v7, 0LL);
  }
  if ( a2[5] )
  {
    result = *a2;
    v8 = (__int64 *)a2[1];
    v9 = *(_QWORD *)(*a2 + 8);
    v10 = *v8;
    if ( *v8 == v9 && (__int64 *)v10 == a2 )
    {
      *v8 = result;
      *(_QWORD *)(result + 8) = v8;
    }
    else
    {
      return RtlpLogHeapFailure(13, 0, (_DWORD)a2, v9, v10, 0LL);
    }
  }
  return result;
}
