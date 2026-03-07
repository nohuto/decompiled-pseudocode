__int64 __fastcall CmpSearchForOpenSubKeys(__int64 a1, int a2, __int64 a3)
{
  char v3; // bl
  int v5; // edx
  __int64 (__fastcall *v6)(__int64); // rdi
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF

  v3 = 0;
  v8 = a1;
  v9[0] = 0LL;
  v9[1] = a3;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        __fastfail(5u);
      v6 = CmpSearchAndTagNoDelayCloseWorker;
    }
    else
    {
      v6 = (__int64 (__fastcall *)(__int64))CmpSearchAndRehashWorker;
    }
  }
  else
  {
    v3 = 1;
    v6 = (__int64 (__fastcall *)(__int64))CmpSearchAndCountWorker;
    CmpDumpKeyBodyList(a1, v9);
  }
  CmpEnumerateAllOpenSubKeys(a1, v3, (__int64)v6, (__int64)&v8);
  return LODWORD(v9[0]);
}
