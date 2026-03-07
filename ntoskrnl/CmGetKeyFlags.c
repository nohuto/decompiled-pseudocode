__int64 __fastcall CmGetKeyFlags(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v4; // ebx
  __int64 v6; // rbp
  __int64 PrevElement; // rax
  __int64 v8; // rdi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 184);
  v9 = 0LL;
  v4 = v2 & 0xF;
  if ( a2 )
  {
    v6 = a1 + 208;
    while ( 1 )
    {
      PrevElement = CmListGetPrevElement(v6, &v9);
      v8 = PrevElement;
      if ( !PrevElement )
        break;
      if ( CmEqualTrans(*(_QWORD *)(PrevElement + 56), a2) && *(_DWORD *)(v8 + 68) == 7 )
        return *(unsigned int *)(v8 + 88);
    }
  }
  return v4;
}
