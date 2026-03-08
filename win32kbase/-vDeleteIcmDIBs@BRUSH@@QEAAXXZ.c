/*
 * XREFs of ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C017E448
 * Callers:
 *     bDeleteBrush @ 0x1C00D59D0 (bDeleteBrush.c)
 * Callees:
 *     bDeleteSurface @ 0x1C0029640 (bDeleteSurface.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C0046684 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall BRUSH::vDeleteIcmDIBs(BRUSH *this)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rbp
  SURFACE *v4; // rax
  int *v5; // rbx
  __int64 v6; // rdx

  v1 = *((_QWORD *)this + 11);
  v2 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  KeAcquireGuardedMutex(*(PKGUARDED_MUTEX *)(v2 + 144));
  if ( v1 )
  {
    do
    {
      v3 = *(_QWORD *)(v1 + 16);
      v4 = (SURFACE *)HmgShareLockCheck(*(_QWORD *)(v1 + 8), 5);
      v5 = (int *)v4;
      if ( v4 )
      {
        SURFACE::vDec_cRef(v4);
        HmgDecrementShareReferenceCountEx(v5, 0LL);
        bDeleteSurface(*(_QWORD *)(v1 + 8), v6);
      }
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v1);
      v1 = v3;
    }
    while ( v3 );
  }
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v2 + 144));
}
