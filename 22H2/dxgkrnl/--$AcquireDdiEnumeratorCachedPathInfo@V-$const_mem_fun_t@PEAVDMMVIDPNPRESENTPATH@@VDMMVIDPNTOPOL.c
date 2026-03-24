/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0158B10
 * Callers:
 *     ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01589F0 (-AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEA.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C005D42C (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0130824 (-IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::const_mem_fun_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // rbx
  _DWORD *v16; // rbp
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rcx
  int MacroVisionTriggerBits; // eax
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int64 v23; // xmm1_8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  SIZE_T v30; // rdi
  PVOID v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  PVOID v36; // r15

  if ( !a3 )
  {
    v25 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v25);
  }
  v6 = 0;
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
    if ( v9 )
    {
      v10 = (char *)operator new[](0x178uLL, 0x4E506456u, PagedPool);
      v15 = v10;
      if ( v10 )
      {
        *(_DWORD *)v10 = 305419896;
        *((_QWORD *)v10 + 1) = v9;
        memset(v10 + 16, 0, 0x168uLL);
        operator delete(0LL);
      }
      else
      {
        v15 = 0LL;
      }
      if ( v15 )
      {
        v16 = v15 + 16;
        *((_DWORD *)v15 + 7) = *(_DWORD *)(v9 + 112);
        v17 = *(_DWORD *)(v9 + 116);
        if ( (unsigned int)(v17 - 254) > 1
          && v17
          && DMMVIDPNPRESENTPATH::IsPathSupportVirtualMode((DMMVIDPNPRESENTPATH *)v9, v11) )
        {
          v18 = 1;
        }
        else
        {
          v18 = *(_DWORD *)(v9 + 116);
        }
        *((_DWORD *)v15 + 9) = v18;
        *((_DWORD *)v15 + 6) = *(_DWORD *)(v9 + 104);
        *v16 = *(_DWORD *)(*(_QWORD *)(v9 + 88) + 24LL);
        *((_DWORD *)v15 + 5) = *(_DWORD *)(*(_QWORD *)(v9 + 96) + 24LL);
        *((_DWORD *)v15 + 20) = *(_DWORD *)(v9 + 164);
        v19 = *(unsigned int *)(v9 + 172);
        *((_DWORD *)v15 + 21) = v19;
        *((_DWORD *)v15 + 87) = *(_DWORD *)(v9 + 168);
        if ( (_DWORD)v19 == 2 )
          MacroVisionTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v9, v11);
        else
          MacroVisionTriggerBits = 0;
        *((_DWORD *)v15 + 22) = MacroVisionTriggerBits;
        if ( v15 == (char *)-32LL )
        {
          v28 = WdLogNewEntry5_WdAssertion(v19, v11);
          WdLogEvent5_WdAssertion(v28);
        }
        *((_DWORD *)v15 + 8) = *(_DWORD *)(v9 + 120);
        if ( v15 == (char *)-40LL )
        {
          v29 = WdLogNewEntry5_WdAssertion(v19, v11);
          WdLogEvent5_WdAssertion(v29);
        }
        *((_DWORD *)v15 + 10) = *(_DWORD *)(v9 + 124);
        v21 = *(_QWORD *)(v9 + 184);
        if ( v21 )
        {
          v22 = *(_OWORD *)(v21 + 16);
          v23 = *(_QWORD *)(v21 + 32);
        }
        else
        {
          v22 = *(_OWORD *)&g_DefaultGammaRamp.Type;
          v23 = 0LL;
        }
        *((_OWORD *)v15 + 22) = v22;
        *((_QWORD *)v15 + 46) = v23;
        if ( !*((_QWORD *)v15 + 46) )
          goto LABEL_19;
        v30 = *((_QWORD *)v15 + 45);
        v31 = operator new[](v30, 0x4E506456u, PagedPool);
        v36 = v31;
        if ( v31 )
        {
          memmove(v31, *((const void **)v15 + 46), v30);
          *((_QWORD *)v15 + 46) = v36;
LABEL_19:
          *a3 = v16;
          v15 = 0LL;
LABEL_20:
          operator delete(v15);
          return v6;
        }
        v27 = WdLogNewEntry5_WdLowResource(v33, v32, v34, v35);
        *(_QWORD *)(v27 + 24) = v30;
      }
      else
      {
        v27 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
        *(_QWORD *)(v27 + 24) = a1;
      }
      WdLogEvent5_WdLowResource(v27);
      v6 = -1073741801;
      goto LABEL_20;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7) + 24) = a2;
    return 3223192359LL;
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v26 + 24) = a1;
    WdLogEvent5_WdError(v26);
    return 3223192375LL;
  }
}
