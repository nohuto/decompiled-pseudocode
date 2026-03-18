/*
 * XREFs of HmgFreeObjectAttr @ 0x1C00C4E90
 * Callers:
 *     bDeleteRegion @ 0x1C003DA20 (bDeleteRegion.c)
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     GreSetBrushOwner @ 0x1C00601D0 (GreSetBrushOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00605C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C008A780 (NtGdiCreateRectRgn.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008AFB0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     bDeleteBrush @ 0x1C00C64F0 (bDeleteBrush.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0046340 (W32GetThreadWin32Thread.c)
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
