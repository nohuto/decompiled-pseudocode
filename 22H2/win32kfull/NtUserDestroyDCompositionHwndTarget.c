/*
 * XREFs of NtUserDestroyDCompositionHwndTarget @ 0x1C00EC2F0
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C00EC8B0 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C00EC350 (-DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z.c)
 *     UserSetLastStatus @ 0x1C00EC46C (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserDestroyDCompositionHwndTarget(HWND a1, int a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rbx
  NTSTATUS v6; // edi

  KeEnterCriticalRegion();
  v4 = DetachWindowCompositionTarget(a1, a2);
  v5 = 0LL;
  v6 = v4;
  if ( v4 < 0 )
    UserSetLastStatus(v4);
  KeLeaveCriticalRegion();
  LOBYTE(v5) = v6 >= 0;
  return v5;
}
