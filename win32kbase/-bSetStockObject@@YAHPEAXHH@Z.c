__int64 __fastcall bSetStockObject(unsigned __int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // rcx

  v3 = 0;
  v4 = a2;
  if ( a1 )
  {
    v7 = SGDGetSessionState(a1);
    v8 = a1 | 0x800000;
    v9 = *(_QWORD *)(v7 + 24);
    if ( a3 )
    {
      *(_QWORD *)(*(_QWORD *)(v9 + 3176) + 8 * v4) = v8;
      v10 = *(_QWORD *)(v9 + 3176);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(v9 + 3168) + 8 * v4) = v8;
      v10 = *(_QWORD *)(v9 + 3168);
    }
    HmgModifyHandleType(*(_QWORD *)(v10 + 8 * v4));
  }
  LOBYTE(v3) = a1 != 0;
  return v3;
}
