/*
 * XREFs of ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C00BF9BC
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0057B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

void __fastcall W32PIDLOCK::vInit(W32PIDLOCK *this)
{
  struct _KSEMAPHORE *v2; // rax

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_QWORD *)this + 4) = 0LL;
  v2 = (struct _KSEMAPHORE *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                               gpLeakTrackingAllocator,
                               68LL,
                               0x78uLL,
                               0x6C323357u);
  *((_QWORD *)this + 5) = v2;
  if ( v2 )
  {
    KeInitializeSemaphore(v2, 0, 0x7FFFFFFF);
    KeInitializeSemaphore((PRKSEMAPHORE)(*((_QWORD *)this + 5) + 32LL), 0, 0x7FFFFFFF);
    KeInitializeMutex((PRKMUTEX)(*((_QWORD *)this + 5) + 64LL), 0);
  }
}
