/*
 * XREFs of HmgFreeDcAttr @ 0x1C0053788
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0041580 (GreSetDCOwnerEx.c)
 *     GdiThreadCallout @ 0x1C00420F0 (GdiThreadCallout.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C004EC00 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C0052474 (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C0055340 (GreCreateDisplayDC.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

_QWORD *__fastcall HmgFreeDcAttr(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rdx
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
        v8 = (_QWORD *)v6[24];
        if ( v8 == v6 + 24 || *((_DWORD *)v8 + 4) == 11 )
        {
          v8 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
                 gpLeakTrackingAllocator,
                 0x104uLL,
                 0x70uLL,
                 0x66636447u);
          if ( !v8 )
            return (_QWORD *)GreReleaseHmgrSemaphore(v9);
          v10 = *v7;
          if ( *(_QWORD **)(*v7 + 8LL) != v7 )
            __fastfail(3u);
          *v8 = v10;
          v8[1] = v7;
          *(_QWORD *)(v10 + 8) = v8;
          *v7 = v8;
          *((_DWORD *)v8 + 4) = 0;
        }
        v9 = *((unsigned int *)v8 + 4);
        *((_DWORD *)v8 + 4) = v9 + 1;
        v8[v9 + 3] = a1;
        v6[5] = a1;
        return (_QWORD *)GreReleaseHmgrSemaphore(v9);
      }
    }
  }
  return result;
}
