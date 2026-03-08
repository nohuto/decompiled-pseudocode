/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C01CCA10
 * Callers:
 *     ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01CC8F0 (-AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEA.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::const_mem_fun_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rbx
  _DWORD *v14; // rdi
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int64 v20; // xmm1_8
  unsigned __int64 v22; // rsi
  void *v23; // rax
  void *v24; // r15

  if ( !a3 )
    WdLogSingleEntry0(1LL);
  v6 = 0;
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
    if ( v9 )
    {
      v12 = operator new[](0x178uLL, 0x4E506456u, 256LL);
      v13 = v12;
      if ( v12 )
      {
        *(_DWORD *)v12 = 305419896;
        *(_QWORD *)(v12 + 8) = v9;
        memset((void *)(v12 + 16), 0, 0x168uLL);
        operator delete(0LL);
        v14 = (_DWORD *)(v13 + 16);
        *(_DWORD *)(v13 + 28) = *(_DWORD *)(v9 + 112);
        v15 = *(_DWORD *)(v9 + 116);
        if ( (unsigned int)(v15 - 254) > 1 && v15 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 96) + 96LL) + 407LL) )
          v15 = 1;
        *(_DWORD *)(v13 + 36) = v15;
        *(_DWORD *)(v13 + 24) = *(_DWORD *)(v9 + 104);
        *v14 = *(_DWORD *)(*(_QWORD *)(v9 + 88) + 24LL);
        *(_DWORD *)(v13 + 20) = *(_DWORD *)(*(_QWORD *)(v9 + 96) + 24LL);
        *(_DWORD *)(v13 + 80) = *(_DWORD *)(v9 + 164);
        v16 = *(_DWORD *)(v9 + 172);
        *(_DWORD *)(v13 + 84) = v16;
        *(_DWORD *)(v13 + 348) = *(_DWORD *)(v9 + 168);
        if ( v16 == 2 )
        {
          if ( *(_DWORD *)(v9 + 172) != 2 )
            WdLogSingleEntry0(1LL);
          v17 = *(_DWORD *)(v9 + 176);
        }
        else
        {
          v17 = 0;
        }
        *(_DWORD *)(v13 + 88) = v17;
        if ( v13 == -32 )
          WdLogSingleEntry0(1LL);
        *(_DWORD *)(v13 + 32) = *(_DWORD *)(v9 + 120);
        if ( v13 == -40 )
          WdLogSingleEntry0(1LL);
        *(_DWORD *)(v13 + 40) = *(_DWORD *)(v9 + 124);
        v18 = *(_QWORD *)(v9 + 184);
        if ( v18 )
        {
          v19 = *(_OWORD *)(v18 + 16);
          v20 = *(_QWORD *)(v18 + 32);
        }
        else
        {
          v19 = *(_OWORD *)&g_DefaultGammaRamp.Type;
          v20 = 0LL;
        }
        *(_OWORD *)(v13 + 352) = v19;
        *(_QWORD *)(v13 + 368) = v20;
        if ( !*(_QWORD *)(v13 + 368) )
          goto LABEL_16;
        v22 = *(_QWORD *)(v13 + 360);
        v23 = (void *)operator new[](v22, 0x4E506456u, 256LL);
        v24 = v23;
        if ( v23 )
        {
          memmove(v23, *(const void **)(v13 + 368), v22);
          *(_QWORD *)(v13 + 368) = v24;
LABEL_16:
          *a3 = v14;
          v13 = 0LL;
LABEL_17:
          operator delete((void *)v13);
          return v6;
        }
        WdLogSingleEntry1(6LL, v22);
      }
      else
      {
        v13 = 0LL;
        WdLogSingleEntry1(6LL, a1);
      }
      v6 = -1073741801;
      goto LABEL_17;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v10, v11) + 24) = a2;
    return 3223192359LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192375LL;
  }
}
