/*
 * XREFs of ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C0348C78
 * Callers:
 *     DxgkCreateProtectedSession @ 0x1C0349140 (DxgkCreateProtectedSession.c)
 *     DxgkOpenProtectedSessionFromNtHandle @ 0x1C034A270 (DxgkOpenProtectedSessionFromNtHandle.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004D78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z @ 0x1C00541E4 (-AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01B3D00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::Open(DXGPROTECTEDSESSION *this, unsigned int *a2)
{
  unsigned int *Current; // rbx
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edx
  _BYTE v10[32]; // [rsp+50h] [rbp-28h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 1120LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"phHandle", 1120LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = (unsigned int *)DXGPROCESS::GetCurrent((__int64)this);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v10,
    (struct DXGPROCESS *)Current);
  v5 = HMGRTABLE::AllocHandle(Current + 70, (__int64)this, 14, 0, 0);
  *a2 = v5;
  v6 = (v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 < Current[74] )
  {
    v7 = *((_QWORD *)Current + 35);
    v8 = *(_DWORD *)(v7 + 16 * v6 + 8);
    if ( ((v5 >> 25) & 0x60) == (v8 & 0x60) && (v8 & 0x2000) == 0 && (v8 & 0x1F) != 0 )
      *(_DWORD *)(v7 + 16 * (((unsigned __int64)v5 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  DXGPROTECTEDSESSION::AddReference(this, 0);
  return 0LL;
}
