char __fastcall tagTHREADINFO::RemoveThreadFromListWorker(__int64 a1, __int64 a2, int a3, int a4)
{
  char v4; // bl
  __int64 *v5; // r10
  __int64 v6; // rax

  v4 = 0;
  v5 = (__int64 *)(a2 + a3);
  v6 = *v5;
  if ( *v5 )
  {
    while ( v6 != a1 )
    {
      v5 = (__int64 *)(a4 + v6);
      v6 = *v5;
      if ( !*v5 )
        return v4;
    }
    v4 = 1;
    *v5 = *(_QWORD *)(a4 + a1);
    *(_QWORD *)(a4 + a1) = 0LL;
  }
  return v4;
}
