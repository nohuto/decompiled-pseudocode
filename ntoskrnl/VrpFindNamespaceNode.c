__int64 __fastcall VrpFindNamespaceNode(
        unsigned __int64 *a1,
        __int64 a2,
        int a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // rbp
  _QWORD *v13; // rcx
  __int64 v14; // rsi
  int v15; // eax
  unsigned __int64 v16; // rax
  unsigned __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h]

  v5 = a1[6];
  v6 = 0LL;
  v18 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      v13 = 0LL;
      if ( v6 < v5 )
      {
        v19 = 0LL;
        if ( !is_mul_ok(a1[5], v6) || (v16 = a1[9], v13 = (_QWORD *)(v16 + a1[5] * v6), (unsigned __int64)v13 < v16) )
          v13 = 0LL;
      }
      v14 = *v13;
      v15 = VrpComparePath(a2, *v13, &v18);
      if ( !v15 )
        break;
      if ( v18 > v7 && a3 == 1 )
      {
        v7 = v18;
        v8 = v14;
      }
      if ( v15 >= 0 )
      {
        v5 = a1[6];
        if ( ++v6 < v5 )
          continue;
      }
      goto LABEL_15;
    }
    v7 = v18;
    v8 = v14;
  }
LABEL_15:
  if ( a5 )
    *a5 = v7;
  if ( a4 )
    *a4 = v6;
  return v8;
}
