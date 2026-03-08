/*
 * XREFs of NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C0075680
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkGetSessionTokenManager @ 0x1C000DB30 (DxgkGetSessionTokenManager.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 NtTokenManagerConfirmOutstandingAnalogToken()
{
  int SessionTokenManager; // eax
  __int64 v1; // rbx
  unsigned int v2; // edi
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  KeEnterCriticalRegion();
  SessionTokenManager = DxgkGetSessionTokenManager(&v5);
  v1 = v5;
  v2 = SessionTokenManager;
  if ( SessionTokenManager >= 0
    && (Global = DXGGLOBAL::GetGlobal(), (*(unsigned int (**)(void))(*((_QWORD *)Global + 38069) + 560LL))()) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 136LL))(v1);
  }
  else
  {
    v2 = -1073741790;
  }
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  KeLeaveCriticalRegion();
  return v2;
}
