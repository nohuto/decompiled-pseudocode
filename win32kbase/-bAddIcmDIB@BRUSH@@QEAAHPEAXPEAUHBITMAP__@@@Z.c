/*
 * XREFs of ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C017E290
 * Callers:
 *     <none>
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x1C0046970 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1C017E390 (-hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z.c)
 */

__int64 __fastcall BRUSH::bAddIcmDIB(BRUSH *this, void *a2, HBITMAP a3)
{
  unsigned int v6; // edi
  int *v8; // rbx
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi

  v6 = 0;
  if ( BRUSH::hFindIcmDIB(this, a2) )
    return 0LL;
  v8 = (int *)HmgShareLockCheck((unsigned int)a3, 5);
  if ( v8 )
  {
    v9 = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                     gpLeakTrackingAllocator,
                     260LL,
                     0x18uLL,
                     0x6C646247u);
    if ( v9 )
    {
      HmgIncrementShareReferenceCount(v8);
      ++v8[42];
      *v9 = a2;
      v9[1] = a3;
      v10 = *((_QWORD *)this + 11);
      v9[2] = v10;
      v11 = *(_QWORD *)(SGDGetSessionState(v10) + 24);
      KeAcquireGuardedMutex(*(PKGUARDED_MUTEX *)(v11 + 144));
      *((_QWORD *)this + 11) = v9;
      KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v11 + 144));
      v6 = 1;
    }
    HmgDecrementShareReferenceCountEx(v8, 0LL);
  }
  return v6;
}
