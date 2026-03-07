__int64 __fastcall AlpcpRegisterCompletionListDatabase(__int64 **a1)
{
  __int64 *v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 **v4; // rax
  unsigned int v5; // ebx

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpCompletionListDatabase, 0LL);
  v2 = (__int64 *)qword_140C40310;
  if ( (__int64 *)qword_140C40310 != &qword_140C40310 )
  {
    v3 = (unsigned __int64)a1[2];
    while ( v2[2] <= v3 )
    {
      if ( v2[2] == v3 )
      {
        if ( v2[5] >= (unsigned __int64)a1[6] )
          break;
        if ( v2[6] > (unsigned __int64)a1[5] )
        {
          v5 = 0;
          goto LABEL_12;
        }
      }
      v2 = (__int64 *)*v2;
      if ( v2 == &qword_140C40310 )
        break;
    }
  }
  v4 = (__int64 **)v2[1];
  if ( *v4 != v2 )
    __fastfail(3u);
  *a1 = v2;
  a1[1] = (__int64 *)v4;
  *v4 = (__int64 *)a1;
  v2[1] = (__int64)a1;
  v5 = 1;
  ++dword_140C40308;
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpCompletionListDatabase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpCompletionListDatabase);
  KeAbPostRelease((ULONG_PTR)&AlpcpCompletionListDatabase);
  return v5;
}
