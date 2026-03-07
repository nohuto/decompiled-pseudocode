__int64 __fastcall DbgkLkmdRegisterCallback(__int64 a1, __int64 a2, int a3)
{
  unsigned int i; // ebx
  union _RTL_RUN_ONCE *v7; // rdi
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rdi
  unsigned int j; // ebx

  if ( (a3 & 3) == 3 )
    return 3221225485LL;
  for ( i = 0; i < 8; ++i )
  {
    v7 = &RunOnce + 2 * i;
    v8 = ExReferenceCallBackBlock((signed __int64 *)v7);
    if ( v8 )
    {
      if ( a1 == v8[1].Count )
      {
        ExDereferenceCallBackBlock((signed __int64 *)v7, v8);
        return 3221227288LL;
      }
      ExDereferenceCallBackBlock((signed __int64 *)v7, v8);
    }
  }
  v9 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, a2);
  if ( !v9 )
    return 3221225495LL;
  for ( j = 0; j < 8; ++j )
  {
    if ( ExCompareExchangeCallBack((signed __int64 *)&RunOnce + 2 * j, v9, 0LL) )
    {
      *((_DWORD *)&RunOnce + 4 * j + 2) = a3;
      return 0LL;
    }
  }
  ExFreePoolWithTag(v9, 0);
  return 3221226539LL;
}
