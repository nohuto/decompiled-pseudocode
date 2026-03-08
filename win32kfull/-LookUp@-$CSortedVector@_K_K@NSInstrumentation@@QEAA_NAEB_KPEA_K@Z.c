/*
 * XREFs of ?LookUp@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_KPEA_K@Z @ 0x1C029BB4C
 * Callers:
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C029C3B8 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00D7674 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?LowerBound@?$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z @ 0x1C0120078 (-LowerBound@-$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LookUp(
        NSInstrumentation::CPrioritizedWriterLock *this,
        _QWORD *a2,
        _QWORD *a3)
{
  char v6; // di
  int i; // eax
  __int64 v8; // r8
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rdx

  v6 = 1;
  _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
  for ( i = *((_DWORD *)this + 7); i; i = *((_DWORD *)this + 7) )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(this, 0LL);
    ExReleasePushLockSharedEx(this, 0LL, v8);
    KeLeaveCriticalRegion();
    _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
  }
  v9 = *((_QWORD *)this + 5);
  if ( v9
    && (v10 = NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LowerBound((__int64)this, a2),
        v10 < v9)
    && (v11 = (_QWORD *)(16 * v10 + *((_QWORD *)this + 6)), *v11 == *a2)
    && v11 )
  {
    *a3 = v11[1];
  }
  else
  {
    v6 = 0;
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v6;
}
