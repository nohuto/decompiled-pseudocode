__int64 __fastcall CmGetKCBCacheSecurity(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rbp
  __int64 PrevElement; // rsi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 88);
  if ( !a2 )
    return *(_QWORD *)(a1 + 88);
  v5 = a1 + 208;
  v7 = 0LL;
  PrevElement = CmListGetPrevElement(a1 + 208, &v7);
  if ( !PrevElement )
    return v2;
  while ( !CmEqualTrans(*(_QWORD *)(PrevElement + 56), a2) || *(_DWORD *)(PrevElement + 68) != 9 )
  {
    PrevElement = CmListGetPrevElement(v5, &v7);
    if ( !PrevElement )
      return v2;
  }
  return *(_QWORD *)(PrevElement + 88);
}
