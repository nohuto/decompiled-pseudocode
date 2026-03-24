/*
 * XREFs of NtUserSetMirrorRendering @ 0x1C0202040
 * Callers:
 *     <none>
 * Callees:
 *     GreDisableMirrorRendering @ 0x1C0285078 (GreDisableMirrorRendering.c)
 *     GreEnableMirrorRendering @ 0x1C0285188 (GreEnableMirrorRendering.c)
 */

__int64 __fastcall NtUserSetMirrorRendering(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v11 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v11;
      *((_QWORD *)&v11 + 1) = v4;
      HMLockObject(v4);
      v7 = *(_QWORD *)(gpDispInfo + 40LL);
      if ( a2 )
        v8 = GreEnableMirrorRendering(v7, a1);
      else
        v8 = GreDisableMirrorRendering(v7, a1);
      v6 = v8;
      ThreadUnlock1(v9);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
