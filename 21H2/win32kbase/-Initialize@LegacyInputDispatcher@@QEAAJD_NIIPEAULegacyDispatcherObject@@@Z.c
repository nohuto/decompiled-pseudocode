/*
 * XREFs of ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z @ 0x1C00B0320
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     Win32AllocPoolNonPaged @ 0x1C005B490 (Win32AllocPoolNonPaged.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

__int64 __fastcall LegacyInputDispatcher::Initialize(
        LegacyInputDispatcher *this,
        char a2,
        char a3,
        unsigned int a4,
        unsigned int a5,
        struct LegacyDispatcherObject *a6)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v11; // rax
  void *v12; // rcx
  struct LegacyDispatcherObject *v13; // r8
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 result; // rax

  v6 = 0LL;
  v7 = a4;
  if ( *((_DWORD *)this + 11) )
    return 3221225473LL;
  if ( *((_QWORD *)this + 1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2813LL);
  if ( *((_QWORD *)this + 3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2814LL);
  if ( *((_QWORD *)this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2815LL);
  *((_QWORD *)this + 1) = Win32AllocPoolNonPaged(8 * v7, 0x79737355u);
  *((_QWORD *)this + 3) = Win32AllocPoolNonPaged(48 * v7, 0x774B7355u);
  v11 = Win32AllocPool(16 * v7, 0x70694843u);
  *((_QWORD *)this + 4) = v11;
  *((_DWORD *)this + 12) = 1;
  if ( !*((_QWORD *)this + 3) )
    return 3221225495LL;
  v12 = (void *)*((_QWORD *)this + 1);
  if ( !v12 || !v11 )
    return 3221225495LL;
  memset(v12, 0, 8 * v7);
  memset(*((void **)this + 4), 0, 16 * v7);
  if ( a5 )
  {
    v13 = a6;
    v14 = a5;
    do
    {
      v15 = v13 - a6;
      *(_QWORD *)(v6 + *((_QWORD *)this + 1)) = *(_QWORD *)v13;
      v6 += 8LL;
      v16 = *((_QWORD *)v13 + 1);
      v13 = (struct LegacyDispatcherObject *)((char *)v13 + 16);
      *(_QWORD *)(v15 + *((_QWORD *)this + 4)) = v16;
      --v14;
    }
    while ( v14 );
  }
  *((_DWORD *)this + 11) = v7;
  result = 0LL;
  *((_DWORD *)this + 13) = a5;
  *((_BYTE *)this + 56) = a2;
  *((_BYTE *)this + 57) = a3;
  return result;
}
