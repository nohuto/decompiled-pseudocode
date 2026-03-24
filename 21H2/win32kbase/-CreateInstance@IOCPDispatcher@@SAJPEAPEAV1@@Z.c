/*
 * XREFs of ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C00B358C
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C00879A8 (UserActivateMITInputProcessing.c)
 * Callees:
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C00B3654 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 *     ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C00B3688 (-InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ.c)
 *     CreateKernelIocp @ 0x1C00B3780 (CreateKernelIocp.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

__int64 __fastcall IOCPDispatcher::CreateInstance(struct IOCPDispatcher **a1)
{
  __int64 v1; // rbx
  __int64 KernelIocp; // rax
  unsigned int v3; // edx

  gpIOCPDispatcher = 0LL;
  v1 = Win32AllocPool(2760LL, 0x70694843u);
  if ( v1 )
  {
    *(_QWORD *)v1 = &IOCPDispatcher::`vftable';
    memset((void *)(v1 + 8), 0, 0xA00uLL);
    *(_DWORD *)(v1 + 2568) = 0;
    memset((void *)(v1 + 2576), 0, 0xA0uLL);
    *(_DWORD *)(v1 + 2736) = 0;
    *(_QWORD *)(v1 + 2744) = 0LL;
    *(_QWORD *)(v1 + 2752) = 0LL;
  }
  else
  {
    v1 = 0LL;
  }
  if ( !v1 )
    return 3221225495LL;
  KernelIocp = CreateKernelIocp(1u);
  *(_QWORD *)(v1 + 2744) = KernelIocp;
  if ( KernelIocp && IOCPDispatcher::InitializeUserModeHandleDuplicate((IOCPDispatcher *)v1) )
  {
    gpIOCPDispatcher = (struct IRegisterInputDispatcherObjects *)v1;
    return 0LL;
  }
  else
  {
    IOCPDispatcher::`scalar deleting destructor'((IOCPDispatcher *)v1, v3);
    return 3221225473LL;
  }
}
