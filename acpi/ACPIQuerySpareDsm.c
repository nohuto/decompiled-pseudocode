__int64 __fastcall ACPIQuerySpareDsm(__int64 a1, void *a2)
{
  _QWORD *v2; // rcx
  __int64 *v4; // rax
  volatile signed __int32 *v5; // rdi
  int v6; // ebx
  __int64 v7; // rdx
  size_t v8; // r8
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  size_t Size[2]; // [rsp+30h] [rbp-28h]
  void *Src; // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD **)(a1 + 760);
  Src = 0LL;
  v10 = 0LL;
  *(_OWORD *)Size = 0LL;
  v4 = AMLIGetNamedChild(v2, 1297302623);
  v5 = (volatile signed __int32 *)v4;
  if ( v4 )
  {
    v6 = ACPIEvaluateSpareDsm(v4, 0, 0LL, (__int64)&v10);
    AMLIDereferenceHandleEx(v5, v7);
    if ( v6 >= 0 )
    {
      if ( WORD1(v10) == 3 && Src )
      {
        v8 = 4LL;
        if ( LODWORD(Size[1]) < 4 )
          v8 = LODWORD(Size[1]);
        memmove(a2, Src, v8);
        v6 = 0;
      }
      else
      {
        v6 = -1073741701;
      }
    }
  }
  else
  {
    v6 = -1073741275;
  }
  AMLIFreeDataBuffs((__int64)&v10);
  return (unsigned int)v6;
}
