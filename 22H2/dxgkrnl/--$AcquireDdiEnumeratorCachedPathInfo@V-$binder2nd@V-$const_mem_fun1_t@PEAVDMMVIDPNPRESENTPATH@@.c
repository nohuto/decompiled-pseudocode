/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0117B40
 * Callers:
 *     ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1C0117980 (-AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU.c)
 *     ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0117D20 (-AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAP.c)
 *     ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02E7E30 (-AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEB.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C005D42C (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C014429C (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4)
{
  unsigned int v4; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  char *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // rbx
  __int64 v19; // rdx
  _DWORD *v20; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION ContentRotationHw; // eax
  __int64 v22; // rcx
  int MacroVisionTriggerBits; // eax
  __int64 v24; // rax
  __int128 v25; // xmm0
  __int64 v26; // xmm1_8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  SIZE_T v32; // rbp
  PVOID v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  PVOID v38; // r14

  v4 = 0;
  if ( !a3 )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v27);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
    if ( !v11 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = a2;
      return 3223192359LL;
    }
    v13 = (char *)operator new[](0x178uLL, 0x4E506456u, PagedPool);
    v18 = v13;
    if ( v13 )
    {
      *(_DWORD *)v13 = 305419896;
      *((_QWORD *)v13 + 1) = v11;
      memset(v13 + 16, 0, 0x168uLL);
    }
    else
    {
      v18 = 0LL;
    }
    if ( v18 )
    {
      operator delete(0LL);
      v20 = v18 + 16;
      *((_DWORD *)v18 + 7) = *(_DWORD *)(v11 + 112);
      if ( a4 )
        ContentRotationHw = DMMVIDPNPRESENTPATH::GetContentRotationHw((DMMVIDPNPRESENTPATH *)v11);
      else
        ContentRotationHw = *(_DWORD *)(v11 + 116);
      *((_DWORD *)v18 + 9) = ContentRotationHw;
      *((_DWORD *)v18 + 6) = *(_DWORD *)(v11 + 104);
      *v20 = *(_DWORD *)(*(_QWORD *)(v11 + 88) + 24LL);
      *((_DWORD *)v18 + 5) = *(_DWORD *)(*(_QWORD *)(v11 + 96) + 24LL);
      *((_DWORD *)v18 + 20) = *(_DWORD *)(v11 + 164);
      v22 = *(unsigned int *)(v11 + 172);
      *((_DWORD *)v18 + 21) = v22;
      *((_DWORD *)v18 + 87) = *(_DWORD *)(v11 + 168);
      if ( (_DWORD)v22 == 2 )
        MacroVisionTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v11, v19);
      else
        MacroVisionTriggerBits = 0;
      *((_DWORD *)v18 + 22) = MacroVisionTriggerBits;
      if ( v18 == (char *)-32LL )
      {
        v30 = WdLogNewEntry5_WdAssertion(v22, v19);
        WdLogEvent5_WdAssertion(v30);
      }
      *((_DWORD *)v18 + 8) = *(_DWORD *)(v11 + 120);
      if ( v18 == (char *)-40LL )
      {
        v31 = WdLogNewEntry5_WdAssertion(v22, v19);
        WdLogEvent5_WdAssertion(v31);
      }
      *((_DWORD *)v18 + 10) = *(_DWORD *)(v11 + 124);
      v24 = *(_QWORD *)(v11 + 184);
      if ( v24 )
      {
        v25 = *(_OWORD *)(v24 + 16);
        v26 = *(_QWORD *)(v24 + 32);
      }
      else
      {
        v25 = *(_OWORD *)&g_DefaultGammaRamp.Type;
        v26 = 0LL;
      }
      *((_OWORD *)v18 + 22) = v25;
      *((_QWORD *)v18 + 46) = v26;
      if ( !*((_QWORD *)v18 + 46) )
        goto LABEL_20;
      v32 = *((_QWORD *)v18 + 45);
      v33 = operator new[](v32, 0x4E506456u, PagedPool);
      v38 = v33;
      if ( v33 )
      {
        memmove(v33, *((const void **)v18 + 46), v32);
        *((_QWORD *)v18 + 46) = v38;
LABEL_20:
        *a3 = v20;
        v18 = 0LL;
LABEL_21:
        operator delete(v18);
        return v4;
      }
      v29 = WdLogNewEntry5_WdLowResource(v35, v34, v36, v37);
      *(_QWORD *)(v29 + 24) = v32;
    }
    else
    {
      v29 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
      *(_QWORD *)(v29 + 24) = a1;
    }
    WdLogEvent5_WdLowResource(v29);
    v4 = -1073741801;
    goto LABEL_21;
  }
  v28 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v28 + 24) = a1;
  WdLogEvent5_WdError(v28);
  return 3223192375LL;
}
