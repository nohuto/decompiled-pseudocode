/*
 * XREFs of ?TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z @ 0x180028944
 * Callers:
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180007840 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     TS_SessionGetAudioProtocol @ 0x18002ACB0 (TS_SessionGetAudioProtocol.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002880C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdGetAudioProtocol(DWORD a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  struct TSSession *v7; // r8
  struct TSSession *v9; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+58h] [rbp+20h]

  *a2 = 0xFFFF;
  EnterCriticalSection(&CriticalSection);
  v10 = &CriticalSection;
  v6 = TsSessionFromSessionId(a1, 0, 0LL, &v9);
  if ( !v6 )
  {
    v7 = v9;
    *a2 = *((_DWORD *)v9 + 1);
    *a3 = *((_DWORD *)v7 + 2);
  }
  LeaveCriticalSection(&CriticalSection);
  return v6;
}
