__int64 __fastcall EtwpReenableStackWalkApc(int a1)
{
  struct _KTHREAD *CurrentThread; // r8
  int v2; // ecx
  __int64 result; // rax
  signed __int32 v4; // ett

  CurrentThread = KeGetCurrentThread();
  v2 = (a1 << 23) | 0x7FFFFF;
  _m_prefetchw((char *)&CurrentThread->116 + 4);
  do
  {
    v4 = *(&CurrentThread->MiscFlags + 1);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)&CurrentThread->116 + 1, v4 & v2, v4);
  }
  while ( v4 != (_DWORD)result );
  return result;
}
