void __fastcall DmmLogDriverRecommendVidPnPacket(
        const struct DMMVIDPNTOPOLOGY *a1,
        enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON a2)
{
  char *v2; // rbx
  struct _LUID *v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rbx
  __int64 v11; // rax
  struct _DXGK_DIAG_HEADER *v12; // rdi
  signed int v13; // eax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = (char *)a1 + 160;
  v6 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160) + 48);
  if ( !*(_QWORD *)(v6 + 8) )
    WdLogSingleEntry0(1LL);
  v7 = *(_QWORD *)(v6 + 8);
  v15 = 0LL;
  DXGADAPTER::IsAdapterSessionized(*(DXGADAPTER **)(v7 + 16), v5, 0LL, &v15);
  v8 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)v2) + 48);
  if ( !*(_QWORD *)(v8 + 8) )
    WdLogSingleEntry0(1LL);
  v9 = *((_DWORD *)a1 + 10);
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL) + 404LL);
  v11 = operator new[](144 * v9 + 56, 0x4E506456u, 256LL);
  v12 = (struct _DXGK_DIAG_HEADER *)v11;
  if ( !v11 )
  {
    DxgkLogCodePointPacketForSession(0x38u, v15, 0xC0000017, 0, 0, v10);
    return;
  }
  *(_DWORD *)(v11 + 40) = 0;
  *(_QWORD *)(v11 + 32) = 0LL;
  *(_DWORD *)v11 = 34;
  *(_DWORD *)(v11 + 4) = 144 * v9 + 56;
  *(_OWORD *)(v11 + 8) = 0LL;
  *(_QWORD *)(v11 + 24) = 0LL;
  *(_DWORD *)(v11 + 48) = a2;
  *(_DWORD *)(v11 + 52) = v9;
  v13 = DmmStoreVidPnPathDataIntoDiagPacket(a1, v9, (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)(v11 + 56));
  v14 = v15;
  if ( v13 < 0 )
    goto LABEL_10;
  v13 = DxgkWriteDiagEntry(v12, v15);
  if ( v13 < 0 )
  {
    v14 = v15;
LABEL_10:
    DxgkLogCodePointPacketForSession(0x38u, v14, v13, 0, 0, v10);
  }
  operator delete(v12);
}
