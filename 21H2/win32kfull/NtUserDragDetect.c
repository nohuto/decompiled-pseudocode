/*
 * XREFs of NtUserDragDetect @ 0x1C01F7D10
 * Callers:
 *     <none>
 * Callees:
 *     xxxIsDragging @ 0x1C0248D98 (xxxIsDragging.c)
 */

__int64 __fastcall NtUserDragDetect(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int IsDragging; // edi
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  IsDragging = 0;
  v7 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v10 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v10;
    *((_QWORD *)&v10 + 1) = v4;
    HMLockObject(v4);
    IsDragging = xxxIsDragging(v7, a2);
    ThreadUnlock1(v8);
  }
  UserSessionSwitchLeaveCrit(v5);
  return IsDragging;
}
