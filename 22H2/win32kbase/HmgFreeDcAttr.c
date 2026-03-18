/*
 * XREFs of HmgFreeDcAttr @ 0x1C008AE88
 * Callers:
 *     GreCreateDisplayDC @ 0x1C003BFE0 (GreCreateDisplayDC.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C0044560 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 *     GdiThreadCallout @ 0x1C008AB80 (GdiThreadCallout.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C008ADF8 (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 */

_QWORD *__fastcall HmgFreeDcAttr(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax

  v2 = 0LL;
  result = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( result )
    v2 = *result;
  if ( a1 && v2 )
  {
    if ( !*(_QWORD *)(v2 + 24) )
    {
      *(_QWORD *)(v2 + 24) = a1;
      return result;
    }
    result = (_QWORD *)PsGetCurrentProcessWin32Process(v4);
    v6 = result;
    if ( result )
    {
      if ( *result )
      {
        GreAcquireHmgrSemaphore(v5);
        v7 = v6 + 24;
        v8 = v6[24];
        if ( (_QWORD *)v8 == v6 + 24 || *(_DWORD *)(v8 + 16) == 11 )
        {
          v8 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 260LL, 0x70uLL, 0x66636447u);
          if ( !v8 )
            return (_QWORD *)GreReleaseHmgrSemaphore(v9);
          v10 = *v7;
          if ( *(__int64 **)(*v7 + 8) != v7 )
            __fastfail(3u);
          *(_QWORD *)v8 = v10;
          *(_QWORD *)(v8 + 8) = v7;
          *(_QWORD *)(v10 + 8) = v8;
          *v7 = v8;
          *(_DWORD *)(v8 + 16) = 0;
        }
        v9 = *(unsigned int *)(v8 + 16);
        *(_DWORD *)(v8 + 16) = v9 + 1;
        *(_QWORD *)(v8 + 8 * v9 + 24) = a1;
        v6[5] = a1;
        return (_QWORD *)GreReleaseHmgrSemaphore(v9);
      }
    }
  }
  return result;
}
