void __fastcall PoolLeakCaptureLiveDump(__int64 a1, unsigned int *a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned int *v6; // rax
  unsigned int *v7; // [rsp+50h] [rbp-18h] BYREF
  int v8; // [rsp+58h] [rbp-10h]
  int v9; // [rsp+5Ch] [rbp-Ch]

  v9 = 0;
  v4 = 8;
  v7 = a2;
  if ( a3 <= 8 )
    v4 = a3;
  v8 = 4 * v4;
  v6 = (unsigned int *)SGDGetUserSessionState(a1, a2, a3, a4);
  DbgkWerCaptureLiveKernelDump(L"win32k.sys", 171LL, *v6, 0LL, 0LL, a1, &v7, PoolLeakLiveDumpCallback, 0);
}
