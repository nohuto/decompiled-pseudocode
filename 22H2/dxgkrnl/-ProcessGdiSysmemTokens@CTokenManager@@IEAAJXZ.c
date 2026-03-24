/*
 * XREFs of ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C001E364
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0003A70 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C001C908 (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 *     ?EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ @ 0x1C001E49C (-EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::ProcessGdiSysmemTokens(CTokenManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // edi
  __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // rsi
  struct DXGGLOBAL *Global; // rax
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // r8d
  void *v12; // rcx
  int v14; // eax
  int v15; // [rsp+50h] [rbp+8h] BYREF
  LONG PreviousState; // [rsp+58h] [rbp+10h] BYREF

  ExAcquirePushLockExclusiveEx((char *)this + 88, 0LL);
  *((_QWORD *)this + 12) = KeGetCurrentThread();
  v4 = CTokenManager::EnsureCurrentLegacyTokenBuffer(this);
  if ( v4 >= 0 )
  {
    v5 = *((_QWORD *)this + 23);
    v4 = 0;
    v6 = *(_DWORD *)(v5 + 2104);
    if ( v6 < 0x280 )
    {
      v14 = CLegacyTokenBuffer::Grow(*((CLegacyTokenBuffer **)this + 23));
      v6 = *(_DWORD *)(v5 + 2104);
      v4 = v14;
    }
    v7 = *(_QWORD *)(v5 + 2096);
    if ( v4 >= 0 )
    {
      v15 = 0;
      Global = DXGGLOBAL::GetGlobal(v3, v2);
      v9 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64))(*((_QWORD *)Global + 38048) + 160LL))(v6, &v15, v7);
      v10 = *((_QWORD *)this + 23);
      v4 = v9;
      v11 = 40 * v15;
      *(_DWORD *)(*(_QWORD *)(v10 + 2088) + 16LL) += v15;
      *(_DWORD *)(*(_QWORD *)(v10 + 2088) + 2068LL) += v11;
      *(_DWORD *)(v10 + 2104) -= v11;
      *(_QWORD *)(v10 + 2096) += v11;
      if ( v9 == -1073741789 )
        v4 = 0;
      if ( v4 >= 0 && v15 )
      {
        v12 = (void *)*((_QWORD *)this + 7);
        PreviousState = 0;
        ZwSetEvent(v12, &PreviousState);
      }
    }
  }
  *((_QWORD *)this + 12) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
  return (unsigned int)v4;
}
