/*
 * XREFs of ?TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0017C30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ValidateUserEvent@CTokenManager@@CAJPEAXPEAPEAX@Z @ 0x1C0017CFC (-ValidateUserEvent@CTokenManager@@CAJPEAXPEAPEAX@Z.c)
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0017DB0 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::TokenThread(
        CTokenManager *this,
        void *a2,
        struct CSM_TOKEN_ADAPTER_INFO *a3,
        unsigned int a4)
{
  int v7; // ebx
  struct DXGGLOBAL *Global; // rax
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF
  HANDLE v11; // [rsp+38h] [rbp-10h] BYREF

  v11 = 0LL;
  Handle = 0LL;
  v7 = CTokenManager::ValidateUserEvent(a2, &v11);
  if ( v7 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v7 = (*(__int64 (__fastcall **)(HANDLE *))(*((_QWORD *)Global + 38069) + 440LL))(&Handle);
    if ( v7 >= 0 )
      v7 = CTokenManager::ProcessTokens(this, v11, Handle, a3, a4);
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v11 )
    ObCloseHandle(v11, 0);
  return (unsigned int)v7;
}
