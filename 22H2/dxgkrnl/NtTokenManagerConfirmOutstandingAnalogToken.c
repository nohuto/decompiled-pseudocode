/*
 * XREFs of NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C0062FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkGetSessionTokenManager @ 0x1C000ED40 (DxgkGetSessionTokenManager.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 NtTokenManagerConfirmOutstandingAnalogToken()
{
  __int64 v0; // rdx
  int SessionTokenManager; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned int v5; // edi
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  KeEnterCriticalRegion();
  SessionTokenManager = DxgkGetSessionTokenManager(&v8, v0);
  v4 = v8;
  v5 = SessionTokenManager;
  if ( SessionTokenManager >= 0
    && (Global = DXGGLOBAL::GetGlobal(v3, v2), (*(unsigned int (**)(void))(*((_QWORD *)Global + 38048) + 296LL))()) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 128LL))(v4);
  }
  else
  {
    v5 = -1073741790;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  KeLeaveCriticalRegion();
  return v5;
}
