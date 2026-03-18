/*
 * XREFs of HmgFreeDcAttr @ 0x1C002655C
 * Callers:
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C0024CD8 (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 *     GdiThreadCallout @ 0x1C00934E0 (GdiThreadCallout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall HmgFreeDcAttr(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rdx
  __int64 v12; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a1 && result )
  {
    if ( !*(_QWORD *)(result + 24) )
    {
      *(_QWORD *)(result + 24) = a1;
      return result;
    }
    result = PsGetCurrentProcessWin32Process(v4, v3, v5, v6);
    v8 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore(v7);
      v10 = v8 + 192;
      v11 = *(_QWORD **)(v8 + 192);
      if ( v11 == (_QWORD *)(v8 + 192) || *((_DWORD *)v11 + 4) == 11 )
      {
        v11 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
                (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                0x104uLL,
                0x70uLL,
                0x66636447u);
        if ( !v11 )
          return GreReleaseHmgrSemaphore(v9);
        v12 = *(_QWORD *)v10;
        if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
          __fastfail(3u);
        *v11 = v12;
        v11[1] = v10;
        *(_QWORD *)(v12 + 8) = v11;
        *(_QWORD *)v10 = v11;
        *((_DWORD *)v11 + 4) = 0;
      }
      v11[(unsigned int)(*((_DWORD *)v11 + 4))++ + 3] = a1;
      *(_QWORD *)(v8 + 40) = a1;
      return GreReleaseHmgrSemaphore(v9);
    }
  }
  return result;
}
