/*
 * XREFs of GreCreateSemaphoreInternal @ 0x1C0045014
 * Callers:
 *     EngCreateSemaphore @ 0x1C0044EF0 (EngCreateSemaphore.c)
 *     GreCreateSemaphore @ 0x1C0044F10 (GreCreateSemaphore.c)
 *     HmgCreate @ 0x1C0055348 (HmgCreate.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C8640 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C016A304 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     EngInitializeSafeSemaphore @ 0x1C0177470 (EngInitializeSafeSemaphore.c)
 *     InitializeGre @ 0x1C02E38D0 (InitializeGre.c)
 *     bInitPALOBJ @ 0x1C02E572C (bInitPALOBJ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     MultiUserGreTrackAddEngResource @ 0x1C00450C0 (MultiUserGreTrackAddEngResource.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall GreCreateSemaphoreInternal(char a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  void *v4; // rsi
  __int64 v5; // rbp
  __int64 ThreadWin32Thread; // rax

  v2 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
         (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
         68LL,
         0x88uLL,
         1835365191);
  v3 = v2;
  if ( v2 )
  {
    v3 = v2 + 32;
    v4 = (void *)v2;
    v5 = v2;
    if ( ExInitializeResourceLite((PERESOURCE)(v2 + 32)) < 0 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v4);
      return 0LL;
    }
    else
    {
      MultiUserGreTrackAddEngResource(v5, (a1 & 1) != 0 ? 4 : 1);
      if ( v3 )
      {
        *(_QWORD *)(v3 - 8) = 0LL;
      }
      else
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        if ( ThreadWin32Thread )
        {
          *(_DWORD *)(ThreadWin32Thread + 104) = 0;
          *(_DWORD *)(ThreadWin32Thread + 108) = 0;
        }
      }
    }
  }
  return v3;
}
