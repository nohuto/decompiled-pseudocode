__int64 __fastcall CmpFileRead(__int64 a1, unsigned int a2, ULONG a3, char *a4, ULONG a5)
{
  void *v5; // rdx
  int v7; // [rsp+28h] [rbp-20h]

  v5 = *(void **)(a1 + 8LL * a2 + 1544);
  if ( v5 )
    return CmpDoFileRead(v5, (__int64)v5, a3, a4, a5, v7, *(_QWORD *)(a1 + 56));
  else
    return 0LL;
}
