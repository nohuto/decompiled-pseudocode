/*
 * XREFs of ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C03A990C
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C03A767C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007F3C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C03AA4CC (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 */

void __fastcall DmmLogCommitVidPnFailedPacket(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  const struct DMMVIDPNTOPOLOGY *v8; // rbp
  unsigned int v9; // r15d
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // r8d
  int v14; // r8d
  int v15; // eax
  signed int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int CurrentProcessSessionId; // eax

  v6 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)a1);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 48);
    v8 = (const struct DMMVIDPNTOPOLOGY *)(v6 + 96);
    if ( !*(_QWORD *)(v7 + 8) )
      WdLogSingleEntry0(1LL);
    v9 = *((_DWORD *)v8 + 10);
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL) + 404LL);
    v11 = operator new[](144 * v9 + 80, 0x4E506456u, 256LL);
    v12 = v11;
    if ( v11 )
    {
      *(_DWORD *)(v11 + 40) = 0;
      *(_QWORD *)(v11 + 32) = 0LL;
      *(_DWORD *)v11 = 33;
      *(_DWORD *)(v11 + 4) = 144 * v9 + 80;
      *(_OWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 24) = 0LL;
      v13 = *(_DWORD *)(v11 + 68);
      *(_DWORD *)(v11 + 48) = a2;
      *(_QWORD *)(v11 + 52) = v10;
      *(_DWORD *)(v11 + 60) = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(v11 + 64) = *(_DWORD *)(a1 + 12);
      v14 = *(_DWORD *)(v11 + 68) ^ (*(_DWORD *)(a1 + 24) ^ v13) & 1;
      *(_DWORD *)(v11 + 68) = v14;
      v15 = (*(_DWORD *)(a1 + 24) ^ v14) & 2;
      *(_DWORD *)(v12 + 72) = a3;
      *(_DWORD *)(v12 + 76) = v9;
      *(_DWORD *)(v12 + 68) = v14 ^ v15;
      v16 = DmmStoreVidPnPathDataIntoDiagPacket(v8, v9, (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)(v12 + 80));
      if ( v16 < 0
        || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18, v17, v19, v20),
            v16 = DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v12, CurrentProcessSessionId),
            v16 < 0) )
      {
        DxgkLogCodePointPacket(0x37u, v16, 0, 0, v10);
      }
      operator delete((void *)v12);
    }
    else
    {
      DxgkLogCodePointPacket(0x37u, 0xC0000017, 0, 0, v10);
    }
  }
  else
  {
    DxgkLogCodePointPacket(0x37u, 0xC000000D, 0, 0, 0LL);
  }
}
