/*
 * XREFs of ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C001B9FC
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0017DB0 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C00129C0 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ @ 0x1C001BB08 (-EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ.c)
 *     ?GetCurrentBufferPointer@CLegacyTokenBuffer@@QEAAJPEAPEAEPEAII@Z @ 0x1C001BB44 (-GetCurrentBufferPointer@CLegacyTokenBuffer@@QEAAJPEAPEAEPEAII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::ProcessGdiSysmemTokens(HANDLE *this)
{
  int CurrentBufferPointer; // ebx
  CLegacyTokenBuffer *v3; // rcx
  struct DXGGLOBAL *Global; // rax
  int v5; // eax
  _QWORD *v6; // r8
  unsigned int v7; // edx
  int v9; // [rsp+40h] [rbp+20h] BYREF
  LONG PreviousState; // [rsp+48h] [rbp+28h] BYREF
  unsigned __int8 *v11; // [rsp+50h] [rbp+30h] BYREF

  CTokenManager::AcquireTokenManagerLock((CTokenManager *)this);
  CurrentBufferPointer = CTokenManager::EnsureCurrentLegacyTokenBuffer((CTokenManager *)this);
  if ( CurrentBufferPointer >= 0 )
  {
    v3 = (CLegacyTokenBuffer *)this[24];
    v11 = 0LL;
    PreviousState = 0;
    CurrentBufferPointer = CLegacyTokenBuffer::GetCurrentBufferPointer(v3, &v11, (unsigned int *)&PreviousState, 0x280u);
    if ( CurrentBufferPointer >= 0 )
    {
      v9 = 0;
      Global = DXGGLOBAL::GetGlobal();
      v5 = (*(__int64 (__fastcall **)(_QWORD, int *, unsigned __int8 *))(*((_QWORD *)Global + 38069) + 424LL))(
             (unsigned int)PreviousState,
             &v9,
             v11);
      v6 = this[24];
      CurrentBufferPointer = v5;
      v7 = 40 * v9;
      *(_DWORD *)(v6[261] + 16LL) += v9;
      *(_DWORD *)(v6[261] + 2068LL) += v7;
      *((_DWORD *)v6 + 526) -= v7;
      v6[262] += v7;
      if ( v5 == -1073741789 )
      {
        CurrentBufferPointer = 0;
      }
      else if ( v5 < 0 )
      {
        goto LABEL_7;
      }
      if ( v9 )
      {
        PreviousState = 0;
        ZwSetEvent(this[8], &PreviousState);
      }
    }
  }
LABEL_7:
  this[13] = 0LL;
  ExReleasePushLockExclusiveEx(this + 12, 0LL);
  return (unsigned int)CurrentBufferPointer;
}
