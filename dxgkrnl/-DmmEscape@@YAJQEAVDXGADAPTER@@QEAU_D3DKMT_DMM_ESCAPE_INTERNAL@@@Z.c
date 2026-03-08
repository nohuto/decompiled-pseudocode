/*
 * XREFs of ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C03A82C8
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C02B3618 (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C03A61F8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA?AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z @ 0x1C03AA9FC (-MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA-AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z.c)
 */

__int64 __fastcall DmmEscape(struct DXGADAPTER *const this, struct _D3DKMT_DMM_ESCAPE_INTERNAL *const a2)
{
  struct _LUID *v4; // rdx
  __int64 v5; // rax
  VIDPN_MGR *v7; // rbp
  int v8; // ecx
  __int64 v9; // rbx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  bool v13; // zf
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // esi
  char *v18; // r14
  __int128 v19; // xmm3
  __int64 v20; // xmm0_8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int CurrentProcessSessionId; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    WdLogSingleEntry0(1LL);
  v5 = *((_QWORD *)this + 365);
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v7 = *(VIDPN_MGR **)(v5 + 104);
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, this);
    return 3223192373LL;
  }
  v8 = *(_DWORD *)a2;
  v9 = 0LL;
  if ( *(int *)a2 > 7 )
  {
    v15 = v8 - 8;
    if ( !v15 )
      goto LABEL_25;
    v16 = v15 - 1;
    if ( !v16 )
      goto LABEL_25;
    v14 = v16 - 3;
    v13 = v14 == 0;
  }
  else
  {
    if ( v8 == 7 )
      goto LABEL_25;
    v10 = v8 - 1;
    if ( !v10 )
      goto LABEL_25;
    v11 = v10 - 1;
    if ( !v11 )
      goto LABEL_25;
    v12 = v11 - 1;
    if ( !v12 )
      goto LABEL_25;
    v14 = v12 - 1;
    v13 = v14 == 0;
  }
  if ( v13 || (unsigned int)(v14 - 1) < 2 )
  {
LABEL_25:
    v18 = (char *)a2 + 24;
LABEL_26:
    if ( DXGADAPTER::IsDiagnosticAllowed(this, v4) )
    {
      v26 = VIDPN_MGR::MapEscapeCodeToDiagInfoType(*(unsigned int *)a2);
      v27 = VIDPN_MGR::AcquireDiagInfo(v7, v18, *((_QWORD *)a2 + 1), v26, (int *)v9, (size_t *)a2 + 2);
      v17 = v27;
      if ( v27 == -2147483643 )
      {
        WdLogSingleEntry2(3LL, *((_QWORD *)a2 + 1), *(int *)a2);
        v17 = 1075707914;
      }
      else if ( v27 >= 0 )
      {
        v32 = WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
        v17 = 0;
        *(_QWORD *)(v32 + 24) = *((_QWORD *)a2 + 1);
        *(_QWORD *)(v32 + 32) = *(int *)a2;
      }
    }
    else
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v22, v21, v23, v24);
      WdLogSingleEntry2(3LL, *(int *)a2, CurrentProcessSessionId);
      v17 = -1073741790;
    }
    goto LABEL_32;
  }
  v9 = operator new[](0x2CuLL, 0x4E506456u, 256LL);
  if ( !v9 )
  {
    WdLogSingleEntry1(6LL, 44LL);
    v17 = -1073741801;
    goto LABEL_32;
  }
  operator delete(0LL);
  v4 = (struct _LUID *)*(int *)a2;
  if ( *(_DWORD *)a2 == 10 )
  {
    v18 = (char *)a2 + 24;
    *(_DWORD *)v9 = *((_DWORD *)a2 + 6);
    goto LABEL_26;
  }
  if ( *(_DWORD *)a2 == 11 )
  {
    v18 = (char *)a2 + 24;
    *(_DWORD *)v9 = *((_DWORD *)a2 + 6);
    v19 = *(_OWORD *)((char *)a2 + 44);
    v20 = *(_QWORD *)((char *)a2 + 60);
    *(_OWORD *)(v9 + 4) = *(_OWORD *)((char *)a2 + 28);
    *(_OWORD *)(v9 + 20) = v19;
    *(_QWORD *)(v9 + 36) = v20;
    goto LABEL_26;
  }
  WdLogSingleEntry1(2LL, v4);
  v17 = -1073741811;
LABEL_32:
  operator delete((void *)v9);
  return v17;
}
