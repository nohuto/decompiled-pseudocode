/*
 * XREFs of ?Insert@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z @ 0x1C011FF68
 * Callers:
 *     UmfdLoadFontFile @ 0x1C011D7E0 (UmfdLoadFontFile.c)
 * Callees:
 *     ?LowerBound@?$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z @ 0x1C0120078 (-LowerBound@-$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ??1?$CAutoExclusiveCReaderWriterLock@VCPrioritizedWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C026D138 (--1-$CAutoExclusiveCReaderWriterLock@VCPrioritizedWriterLock@NSInstrumentation@@@NSInstrumentati.c)
 *     ?ReAllocate@?$CSortedVector@_K_K@NSInstrumentation@@AEAA_N_K@Z @ 0x1C02A9A28 (-ReAllocate@-$CSortedVector@_K_K@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C0307DAC (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Insert(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  char v6; // si
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  v6 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), 0, 1);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 28), 1u);
  if ( *(_DWORD *)(a1 + 24) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPlatformSingleWatierSignal *)(a1 + 8));
  v7 = NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LowerBound(a1, a2);
  v8 = *(_QWORD *)(a1 + 40);
  v9 = 16 * v7;
  v10 = v7;
  if ( v7 < v8 )
  {
    v11 = *(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(v11 + 16 * v7) == *a2 )
    {
      *(_QWORD *)(v11 + v9 + 8) = *a3;
LABEL_11:
      NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>(&v15);
      return v6;
    }
  }
  v12 = *(_QWORD *)(a1 + 32);
  if ( v8 == v12
    && !(unsigned __int8)NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::ReAllocate(a1, 2 * v12) )
  {
    v6 = 0;
    goto LABEL_11;
  }
  memmove(
    (void *)(v9 + *(_QWORD *)(a1 + 48) + 16),
    (const void *)(v9 + *(_QWORD *)(a1 + 48)),
    16 * (*(_QWORD *)(a1 + 40) - v10));
  v13 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(v9 + v13) = *a2;
  *(_QWORD *)(v9 + v13 + 8) = *a3;
  ++*(_QWORD *)(a1 + 40);
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 28));
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
