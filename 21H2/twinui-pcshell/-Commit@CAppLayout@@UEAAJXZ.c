/*
 * XREFs of ?Commit@CAppLayout@@UEAAJXZ @ 0x1804F1100
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CommitGutters@CAppLayout@@AEAAJXZ @ 0x1804F33A4 (-_CommitGutters@CAppLayout@@AEAAJXZ.c)
 *     ?_CommitLayoutItems@CAppLayout@@AEAAJXZ @ 0x1804F35EC (-_CommitLayoutItems@CAppLayout@@AEAAJXZ.c)
 *     ?_RemoveItemsByType@CAppLayout@@AEAAXW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x1804F39E0 (-_RemoveItemsByType@CAppLayout@@AEAAXW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::Commit(RTL_SRWLOCK *this)
{
  CAppLayout *v1; // rsi
  RTL_SRWLOCK *v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (CAppLayout *)&this[-5];
  v2 = this + 2;
  AcquireSRWLockExclusive(this + 2);
  CAppLayout::_RemoveItemsByType(v1, 2LL);
  v3 = CAppLayout::_CommitLayoutItems(v1);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 1206LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_7;
  }
  v3 = CAppLayout::_CommitGutters(v1);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 1209LL;
    goto LABEL_3;
  }
  v4 = 0;
LABEL_7:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v4;
}
