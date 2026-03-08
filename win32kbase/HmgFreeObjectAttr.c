/*
 * XREFs of HmgFreeObjectAttr @ 0x1C00D43C0
 * Callers:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0019970 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     GreSetBrushOwner @ 0x1C001BD80 (GreSetBrushOwner.c)
 *     NtGdiCreateRectRgn @ 0x1C001C0B0 (NtGdiCreateRectRgn.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001C2B0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     GreDeleteObject @ 0x1C0043CD0 (GreDeleteObject.c)
 *     bDeleteRegion @ 0x1C0053FA0 (bDeleteRegion.c)
 *     bDeleteBrush @ 0x1C00D59D0 (bDeleteBrush.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

_QWORD *__fastcall HmgFreeObjectAttr(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax

  result = (_QWORD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a1 && result )
  {
    if ( !result[4] )
    {
      result[4] = a1;
      return result;
    }
    result = (_QWORD *)PsGetCurrentProcessWin32Process(v3);
    v5 = result;
    if ( result )
    {
      if ( *result )
      {
        GreAcquireHmgrSemaphore(v4);
        v6 = v5 + 26;
        v7 = v5[26];
        if ( (_QWORD *)v7 == v5 + 26 || *(_DWORD *)(v7 + 16) == 170 )
        {
          v7 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
                 gpLeakTrackingAllocator,
                 260LL,
                 0x568uLL,
                 0x66616247u);
          if ( !v7 )
            return (_QWORD *)GreReleaseHmgrSemaphore(v8);
          v9 = *v6;
          if ( *(__int64 **)(*v6 + 8) != v6 )
            __fastfail(3u);
          *(_QWORD *)v7 = v9;
          *(_QWORD *)(v7 + 8) = v6;
          *(_QWORD *)(v9 + 8) = v7;
          *v6 = v7;
          *(_DWORD *)(v7 + 16) = 0;
        }
        v8 = *(unsigned int *)(v7 + 16);
        *(_DWORD *)(v7 + 16) = v8 + 1;
        *(_QWORD *)(v7 + 8 * v8 + 24) = a1;
        v5[6] = a1;
        return (_QWORD *)GreReleaseHmgrSemaphore(v8);
      }
    }
  }
  return result;
}
