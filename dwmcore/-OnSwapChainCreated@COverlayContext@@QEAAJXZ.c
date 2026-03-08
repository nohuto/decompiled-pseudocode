/*
 * XREFs of ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x1800C8744
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x1800C84D0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801E63B4 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z @ 0x1801EE000 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x1800C8D58 (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::OnSwapChainCreated(COverlayContext *this)
{
  __int64 v2; // rbx
  __int64 (__fastcall ***v3)(_QWORD, _BYTE *); // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  char v11; // al
  int v12; // eax
  _DWORD *v13; // rax
  unsigned int v14; // ecx
  char v15; // al
  int updated; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v22[16]; // [rsp+38h] [rbp-20h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 176LL))(*(_QWORD *)this);
  v3 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(int *)(*(_QWORD *)(v2 + 8) + 8LL) + v2 + 8);
  *((_DWORD *)this + 2) = *(_DWORD *)((**v3)(v3, v22) + 4);
  v4 = v2 + 8 + *(int *)(*(_QWORD *)(v2 + 8) + 12LL);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v6 = *(_QWORD *)this;
  v7 = v5;
  v21 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 176LL))(v6);
  v9 = v8 + *(int *)(*(_QWORD *)(v8 + 8) + 4LL);
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))(v9 + 8))(
         v9 + 8,
         &GUID_cf12c0b8_aae0_4ef0_b8e3_97cd3b4d6f91,
         &v21) >= 0 )
  {
    *((_BYTE *)this + 11297) = 1;
    v11 = 0;
  }
  else
  {
    v10 = *(_QWORD *)this;
    *((_BYTE *)this + 11297) = 0;
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 168LL))(v10);
  }
  *((_BYTE *)this + 11308) = v11;
  *((_DWORD *)this + 2821) = *(_DWORD *)(v7 + 588);
  *((_BYTE *)this + 11299) = 0;
  v12 = *(_DWORD *)(v7 + 856);
  if ( v12 == 32902 )
  {
    if ( *(__int64 *)(v7 + 592) <= 0x140013000F112DLL )
      *((_BYTE *)this + 11298) = 1;
    v13 = &`IsIntelFullDesktopClipRequired'::`2'::s_deviceIds;
    v14 = 0;
    while ( *(_DWORD *)(v7 + 860) != *v13 )
    {
      ++v14;
      ++v13;
      if ( v14 >= 0x2B )
      {
        v15 = 0;
        goto LABEL_11;
      }
    }
    v15 = 1;
LABEL_11:
    *((_BYTE *)this + 11299) = v15;
  }
  else if ( v12 == 1297040209 && *(_DWORD *)(v7 + 860) == 1177957426 && *(__int64 *)(v7 + 592) <= 0xB001204360026LL )
  {
    *((_BYTE *)this + 11300) = 1;
  }
  if ( CCommonRegistryData::m_customRefreshRateMode == 1
    && *((int *)this + 2821) >= 2200
    && (*(_DWORD *)(v7 + 856) != 32902 || (unsigned __int16)(*(_WORD *)(v7 + 592) - 7011) > 0x139u) )
  {
    *((_BYTE *)this + 11301) = 1;
  }
  updated = COverlayContext::UpdateMPOCaps(this);
  v18 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, updated, 0x6Cu, 0LL);
  }
  else
  {
    **((_DWORD **)this + 1397) = 0;
    *((_DWORD *)this + 2818) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 11248, 16LL);
  }
  if ( v21 )
  {
    v20 = *(int *)(*(_QWORD *)(v21 + 8) + 4LL) + v21 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return v18;
}
