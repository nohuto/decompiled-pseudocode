__int64 __fastcall bInitializeEUDC(__int64 a1)
{
  __int64 v1; // rbx
  __int64 Semaphore; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  *(_WORD *)(v1 + 13336) = 0;
  Semaphore = GreCreateSemaphore();
  *(_QWORD *)(v1 + 13272) = Semaphore;
  if ( !Semaphore )
    return 0LL;
  v3 = GreCreateSemaphore();
  *(_QWORD *)(v1 + 13280) = v3;
  if ( !v3 )
    return 0LL;
  v4 = GreCreateSemaphore();
  *(_QWORD *)(v1 + 13288) = v4;
  if ( !v4 )
    return 0LL;
  result = 1LL;
  *(_QWORD *)(v1 + 13872) = 0LL;
  *(_DWORD *)(v1 + 13864) = 1;
  return result;
}
