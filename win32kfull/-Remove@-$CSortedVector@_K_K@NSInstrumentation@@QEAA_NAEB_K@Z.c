/*
 * XREFs of ?Remove@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z @ 0x1C0121ECC
 * Callers:
 *     UmfdUnloadFontFileInternal @ 0x1C0121FD8 (UmfdUnloadFontFileInternal.c)
 * Callees:
 *     ?LowerBound@?$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z @ 0x1C0120078 (-LowerBound@-$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ??1?$CAutoExclusiveCReaderWriterLock@VCPrioritizedWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C026D138 (--1-$CAutoExclusiveCReaderWriterLock@VCPrioritizedWriterLock@NSInstrumentation@@@NSInstrumentati.c)
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C0307DAC (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Remove(__int64 a1, _QWORD *a2)
{
  char v4; // di
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  _QWORD *v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  v4 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), 0, 1);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 28), 1u);
  if ( *(_DWORD *)(a1 + 24) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPlatformSingleWatierSignal *)(a1 + 8));
  v5 = NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LowerBound(a1, a2);
  v6 = *(_QWORD *)(a1 + 40);
  if ( !v6 || v5 >= v6 )
  {
    v4 = 0;
    goto LABEL_7;
  }
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v5);
  if ( *v7 == *a2 )
  {
    memmove(v7, v7 + 2, 16 * (v6 - v5) - 16);
    --*(_QWORD *)(a1 + 40);
LABEL_7:
    NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>(&v9);
    return v4;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 28));
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return 0;
}
