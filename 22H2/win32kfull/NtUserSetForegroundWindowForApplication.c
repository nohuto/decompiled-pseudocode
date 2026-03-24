/*
 * XREFs of NtUserSetForegroundWindowForApplication @ 0x1C012A4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0037624 (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003AFFC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 */

__int64 __fastcall NtUserSetForegroundWindowForApplication(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  const struct tagWND *v5; // rbx
  int IsPartOfCompositeApplication; // eax
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v9 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = (const struct tagWND *)v2;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 40);
    if ( (((*(_WORD *)(v3 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v9 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v9;
      *((_QWORD *)&v9 + 1) = v2;
      HMLockObject(v2);
      IsPartOfCompositeApplication = CoreWindowProp::IsPartOfCompositeApplication(v5);
      v4 = (unsigned __int8)xxxSetForegroundWindowWithOptions(
                              (__int64)v5,
                              2LL,
                              IsPartOfCompositeApplication != 0 ? 0x40 : 0,
                              1LL);
      ThreadUnlock1(v7);
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
