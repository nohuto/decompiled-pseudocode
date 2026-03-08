/*
 * XREFs of ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C00CE140
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1C00CE1E0 (-Initialize@CInputManager@@IEAAJXZ.c)
 *     ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C00D189C (--_GCInputManager@@IEAAPEAXI@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 CInputManager::CreateSessionGlobal(void)
{
  __int64 v0; // rax
  CInputManager *v1; // rbx
  unsigned int v2; // edx
  int v3; // edi

  v0 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 260LL, 0x80uLL, 0x67734D49u);
  v1 = (CInputManager *)v0;
  if ( v0 )
  {
    *(_QWORD *)v0 = 0LL;
    *(_QWORD *)(v0 + 8) = 0LL;
    *(_QWORD *)(v0 + 88) = &CIgnoreInputQueue::`vftable';
    *(_QWORD *)(v0 + 96) = &CDiscardInputQueue::`vftable';
    *(_QWORD *)(v0 + 104) = 0LL;
    *(_DWORD *)(v0 + 112) = 0;
    *(_DWORD *)(v0 + 116) = 0;
    memset((void *)(v0 + 16), 0, 0x48uLL);
    v3 = CInputManager::Initialize(v1);
    if ( v3 < 0 )
      CInputManager::`scalar deleting destructor'(v1, v2);
    else
      g_pInputManager = v1;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
