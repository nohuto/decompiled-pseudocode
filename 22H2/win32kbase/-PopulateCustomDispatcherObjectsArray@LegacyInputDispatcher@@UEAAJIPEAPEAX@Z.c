/*
 * XREFs of ?PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z @ 0x1C01A4540
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C005C490 (Win32AllocPoolNonPaged.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::PopulateCustomDispatcherObjectsArray(
        LegacyInputDispatcher *this,
        unsigned int a2,
        void **a3)
{
  __int64 v3; // rdi
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax

  v3 = a2;
  v6 = a2 + 1;
  if ( *((_DWORD *)this + 11) < a2 + 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2956);
  if ( !*((_QWORD *)this + 2) )
  {
    v7 = Win32AllocPoolNonPaged(8LL * *((unsigned int *)this + 11), 0x79737355u);
    *((_QWORD *)this + 2) = v7;
    if ( !v7 )
      return 3221225506LL;
  }
  if ( (_DWORD)v3 )
  {
    v9 = 8LL;
    v10 = v3;
    do
    {
      v11 = (__int64)*a3++;
      *(_QWORD *)(v9 + *((_QWORD *)this + 2)) = v11;
      v9 += 8LL;
      --v10;
    }
    while ( v10 );
  }
  *((_DWORD *)this + 12) = v6;
  return 0LL;
}
