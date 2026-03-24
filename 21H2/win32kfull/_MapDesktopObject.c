/*
 * XREFs of _MapDesktopObject @ 0x1C0118920
 * Callers:
 *     <none>
 * Callees:
 *     GetDesktopView @ 0x1C004F040 (GetDesktopView.c)
 *     HMValidateHandle @ 0x1C00670E0 (HMValidateHandle.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall MapDesktopObject(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *DesktopView; // rax

  gbValidateHandleForIL = 0;
  v1 = HMValidateHandle(a1, 0xFFu);
  v2 = v1;
  if ( v1
    && (v4 = _HMPheFromObject(v1), (*(_BYTE *)(v4 + 25) & 0x40) == 0)
    && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3),
        (DesktopView = GetDesktopView(CurrentProcessWin32Process, *(_QWORD *)(v2 + 24))) != 0LL) )
  {
    return *(_QWORD *)v4 + DesktopView[2];
  }
  else
  {
    return 0LL;
  }
}
