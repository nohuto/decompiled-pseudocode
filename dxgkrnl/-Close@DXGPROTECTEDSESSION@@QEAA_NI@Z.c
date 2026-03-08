/*
 * XREFs of ?Close@DXGPROTECTEDSESSION@@QEAA_NI@Z @ 0x1C0343A0C
 * Callers:
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0343F1C (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000A070 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

bool __fastcall DXGPROTECTEDSESSION::Close(DXGPROTECTEDSESSION *this, unsigned int a2)
{
  DXGPROCESS *Current; // rax

  if ( a2 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)this);
    DXGPROCESS::FreeHandleSafe(Current, a2);
  }
  if ( !*((_DWORD *)this + 20) )
  {
    WdLogSingleEntry1(1LL, 1172LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 != m_cReference", 1172LL, 0LL, 0LL, 0LL, 0LL);
  }
  return _InterlockedAdd((volatile signed __int32 *)this + 20, 0xFFFFFFFF) == 0;
}
