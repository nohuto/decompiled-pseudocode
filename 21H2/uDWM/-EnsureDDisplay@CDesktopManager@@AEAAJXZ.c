/*
 * XREFs of ?EnsureDDisplay@CDesktopManager@@AEAAJXZ @ 0x180086AA8
 * Callers:
 *     ?CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ @ 0x1800860C8 (-CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CDDisplayManager@@SAJPEAPEAV1@@Z @ 0x180087D78 (-Create@CDDisplayManager@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CDesktopManager::EnsureDDisplay(CDesktopManager *this)
{
  struct CDDisplayManager **v1; // rbx
  CBaseObject *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx

  v1 = (struct CDDisplayManager **)((char *)this + 800);
  v2 = (CBaseObject *)*((_QWORD *)this + 100);
  *v1 = 0LL;
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = CDDisplayManager::Create(v1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x5B8u);
  return v4;
}
