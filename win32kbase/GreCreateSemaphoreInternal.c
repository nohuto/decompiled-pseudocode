/*
 * XREFs of GreCreateSemaphoreInternal @ 0x1C002B04C
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0025090 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     GreCreateSemaphore @ 0x1C002AF10 (GreCreateSemaphore.c)
 *     EngCreateSemaphore @ 0x1C002B030 (EngCreateSemaphore.c)
 *     HmgCreate @ 0x1C002CDD0 (HmgCreate.c)
 *     ?bInitPathAlloc@@YAHXZ @ 0x1C002D4D4 (-bInitPathAlloc@@YAHXZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C0181D80 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     EngInitializeSafeSemaphore @ 0x1C0196F10 (EngInitializeSafeSemaphore.c)
 *     InitializeGre @ 0x1C031D988 (InitializeGre.c)
 *     bInitPALOBJ @ 0x1C031DE4C (bInitPALOBJ.c)
 * Callees:
 *     MultiUserGreTrackAddEngResource @ 0x1C002B0F0 (MultiUserGreTrackAddEngResource.c)
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

char *__fastcall GreCreateSemaphoreInternal(char a1)
{
  char *v2; // rax
  char *v3; // rbx
  char *v4; // rsi
  char *v5; // rbp
  __int64 ThreadWin32Thread; // rax

  v2 = (char *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                 gpLeakTrackingAllocator,
                 0x44uLL,
                 0x88uLL,
                 0x6D657347u);
  v3 = v2;
  if ( v2 )
  {
    v3 = v2 + 32;
    v4 = v2;
    v5 = v2;
    if ( ExInitializeResourceLite((PERESOURCE)(v2 + 32)) < 0 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
      return 0LL;
    }
    else
    {
      MultiUserGreTrackAddEngResource(v5, (a1 & 1) != 0 ? 4 : 1);
      if ( v3 )
      {
        *((_QWORD *)v3 - 1) = 0LL;
      }
      else
      {
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
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
