struct OUTPUTDUPL_CONTEXT **__fastcall OUTPUTDUPL_MGR::FindContextForProcess(
        OUTPUTDUPL_MGR *this,
        struct _KTHREAD **a2,
        struct _EPROCESS *a3,
        unsigned int *a4)
{
  OUTPUTDUPL_MGR *v7; // rbp
  struct _KTHREAD *v8; // rsi
  unsigned int v9; // edi
  bool v10; // zf

  v7 = this;
  if ( a2[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1696LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pContextList->Mutex.IsOwner()", 1696LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a4 )
    *a4 = -1;
  v8 = a2[6];
  v9 = 0;
  if ( !*((_DWORD *)v7 + 2) )
    return 0LL;
  while ( 1 )
  {
    if ( *(_QWORD *)v8 )
    {
      this = (OUTPUTDUPL_MGR *)PsGetCurrentProcess(this);
      v10 = *(_QWORD *)(*(_QWORD *)v8 + 24LL) == (_QWORD)this;
    }
    else
    {
      v10 = a3 == 0LL;
    }
    if ( v10 )
      break;
    ++v9;
    v8 = (struct _KTHREAD *)((char *)v8 + 8);
    if ( v9 >= *((_DWORD *)v7 + 2) )
      return 0LL;
  }
  if ( a4 )
    *a4 = v9;
  return (struct OUTPUTDUPL_CONTEXT **)v8;
}
