__int64 __fastcall CmGetKeyLastWriteTime(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // rbp
  __int64 PrevElement; // rax
  __int64 v8; // rdi
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  if ( a2 )
  {
    v4 = *(_QWORD *)(a2 + 4);
    if ( !a1 )
      return v4;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 168);
  }
  if ( a3 )
  {
    v6 = a1 + 208;
    while ( 1 )
    {
      PrevElement = CmListGetPrevElement(v6, &v9);
      v8 = PrevElement;
      if ( !PrevElement )
        break;
      if ( CmEqualTrans(*(_QWORD *)(PrevElement + 56), a3) && *(_DWORD *)(v8 + 68) == 8 )
        return *(_QWORD *)(v8 + 88);
    }
  }
  return v4;
}
