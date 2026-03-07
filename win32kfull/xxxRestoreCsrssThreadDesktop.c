__int64 __fastcall xxxRestoreCsrssThreadDesktop(__int64 *a1, char a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned int v6; // edi
  void *v7; // rcx
  _OWORD v9[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(v9, 0, sizeof(v9));
  v5 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( *a1 == v5 )
  {
    v6 = 0;
  }
  else
  {
    if ( v5 )
    {
      while ( (unsigned int)xxxInternalGetMessage((unsigned int)v9, 0, 0, 0, 3, 0) )
        xxxDispatchMessage((__int64 *)v9);
      if ( (a2 & 1) != 0 )
        SendMsgCleanup(gptiCurrent);
    }
    v6 = xxxSetThreadDesktop(0LL, *a1, a3);
  }
  if ( *a1 )
  {
    ObfDereferenceObject((PVOID)*a1);
    *a1 = 0LL;
  }
  v7 = (void *)a1[1];
  if ( v7 )
  {
    CloseProtectedHandle(v7);
    a1[1] = 0LL;
  }
  return v6;
}
