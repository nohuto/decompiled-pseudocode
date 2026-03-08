/*
 * XREFs of NtUserSetMirrorRendering @ 0x1C01DD3A0
 * Callers:
 *     <none>
 * Callees:
 *     GreDisableMirrorRendering @ 0x1C02860A8 (GreDisableMirrorRendering.c)
 *     GreEnableMirrorRendering @ 0x1C02861C4 (GreEnableMirrorRendering.c)
 */

__int64 __fastcall NtUserSetMirrorRendering(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v13;
      *((_QWORD *)&v13 + 1) = v4;
      HMLockObject(v4);
      v7 = *(_QWORD *)(gpDispInfo + 40LL);
      if ( a2 )
        v8 = GreEnableMirrorRendering(v7, a1);
      else
        v8 = GreDisableMirrorRendering(v7, a1);
      v6 = v8;
      ThreadUnlock1(v10, v9, v11);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
