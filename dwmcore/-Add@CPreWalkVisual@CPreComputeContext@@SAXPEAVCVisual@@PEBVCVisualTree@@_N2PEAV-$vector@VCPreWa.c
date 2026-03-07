void __fastcall CPreComputeContext::CPreWalkVisual::Add(__int64 a1, __int64 a2, char a3, char a4, __int64 *a5)
{
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 i; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF
  char v10; // [rsp+48h] [rbp+20h] BYREF

  if ( a1 )
  {
    v10 = a4;
    v9 = a3;
    v8 = a1;
    v5 = a1;
    v6 = a1;
    while ( v5 != *(_QWORD *)(a2 + 64) )
    {
      if ( !v6 || (v6 = *(_QWORD *)(v6 + 88)) == 0 || v5 != v6 && (v6 = *(_QWORD *)(v6 + 88), v5 != v6) )
      {
        v5 = *(_QWORD *)(v5 + 88);
        if ( v5 )
          continue;
      }
      return;
    }
    for ( i = *a5; ; i += 16LL )
    {
      if ( i == a5[1] )
      {
        std::vector<CPreComputeContext::CPreWalkVisual>::emplace_back<CVisual * &,bool &,bool &>(a5, &v8, &v9, &v10);
        return;
      }
      if ( *(_QWORD *)i == a1 )
        break;
    }
    *(_BYTE *)(i + 8) |= a3;
    *(_BYTE *)(i + 9) |= a4;
  }
}
