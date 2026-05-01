/*
 * XREFs of ?IsViewVisible@MultitaskingViewVisibilityService@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAW42@@Z @ 0x1803F1D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MultitaskingViewVisibilityService::IsViewVisible(__int64 a1, int a2, int *a3)
{
  RTL_SRWLOCK *v3; // rbp

  v3 = (RTL_SRWLOCK *)(a1 + 56);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 56));
  *a3 = a2 & *(_DWORD *)(a1 + 64);
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return 0LL;
}
