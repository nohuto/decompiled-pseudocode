/*
 * XREFs of NtUserDestroyDCompositionHwndTarget @ 0x1C0058B80
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C0059170 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     UserSetLastStatus @ 0x1C00132A8 (UserSetLastStatus.c)
 *     ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@K@Z @ 0x1C0058BEC (-DetachWindowCompositionTarget@@YAJPEAUHWND__@@K@Z.c)
 */

unsigned __int64 __fastcall NtUserDestroyDCompositionHwndTarget(HWND a1, unsigned int a2)
{
  NTSTATUS v4; // ebx

  KeEnterCriticalRegion();
  if ( a2 >= 3 )
  {
    v4 = -1073741811;
    goto LABEL_4;
  }
  v4 = DetachWindowCompositionTarget(a1, a2);
  if ( v4 < 0 )
LABEL_4:
    UserSetLastStatus(v4, 1);
  KeLeaveCriticalRegion();
  return (unsigned __int64)(unsigned int)~v4 >> 31;
}
