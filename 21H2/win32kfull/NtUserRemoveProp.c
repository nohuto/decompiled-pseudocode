/*
 * XREFs of NtUserRemoveProp @ 0x1C00FE5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserRemoveProp(HWND a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  struct tagWND *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  v4 = 0LL;
  EnterCrit(0LL, 1LL);
  CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v9, a1, 1, 1, 1, 1);
  if ( CHMRefHwndByHandle::bValid((CHMRefHwndByHandle *)v9) )
  {
    v5 = CHMRefHwndByHandle::rpwnd((CHMRefHwndByHandle *)v9);
    v6 = *((_QWORD *)v5 + 18);
    if ( (_WORD)v2 == word_1C033AF44 )
      *(_QWORD *)(*((_QWORD *)v5 + 5) + 312LL) = 0LL;
    v4 = RealInternalRemoveProp(v6, v2, 0LL);
  }
  CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v9);
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
