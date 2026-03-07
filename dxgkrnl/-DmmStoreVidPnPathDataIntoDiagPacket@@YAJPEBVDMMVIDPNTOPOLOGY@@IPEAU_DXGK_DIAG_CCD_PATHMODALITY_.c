__int64 __fastcall DmmStoreVidPnPathDataIntoDiagPacket(
        const struct DMMVIDPNTOPOLOGY *a1,
        unsigned int a2,
        struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *a3)
{
  char *v3; // rbp
  __int64 v4; // rdi
  __int64 v7; // rsi
  __int64 v8; // r15
  unsigned int v9; // eax
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 Container; // rax
  _QWORD *v14; // rbx
  unsigned int v15; // ebp
  _QWORD *v16; // rsi
  int v17; // ecx
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  _QWORD *v26; // rax
  _OWORD v27[10]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = (char *)a1 + 160;
  v4 = a2;
  v7 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160) + 48);
  if ( !*(_QWORD *)(v7 + 8) )
    WdLogSingleEntry0(1LL);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL);
  v9 = *((_DWORD *)a1 + 10);
  if ( v9 <= (unsigned int)v4 )
  {
    v14 = (_QWORD *)((char *)a1 + 24);
    v15 = 0;
    if ( (_QWORD *)*v14 != v14 )
    {
      v16 = (_QWORD *)(*v14 - 8LL);
      while ( v16 && v15 < (unsigned int)v4 )
      {
        *((_DWORD *)a3 + 6) = *(_DWORD *)(v16[11] + 24LL);
        v17 = *(_DWORD *)(v16[12] + 24LL);
        *(_QWORD *)a3 |= 0x600000000000uLL;
        *((_DWORD *)a3 + 7) = v17;
        *((_QWORD *)a3 + 2) = *(_QWORD *)(v8 + 404);
        *(_QWORD *)a3 |= 0x100000000000uLL;
        memset(v27, 0, sizeof(v27));
        _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR3>((__int64)v16, (__int64)v27);
        v18 = *(_QWORD *)&v27[8];
        v19 = v27[1];
        *(_OWORD *)a3 = v27[0];
        v20 = v27[2];
        *((_OWORD *)a3 + 1) = v19;
        v21 = v27[3];
        *((_OWORD *)a3 + 2) = v20;
        v22 = v27[4];
        *((_OWORD *)a3 + 3) = v21;
        v23 = v27[5];
        *((_OWORD *)a3 + 4) = v22;
        v24 = v27[6];
        *((_OWORD *)a3 + 5) = v23;
        v25 = v27[7];
        *((_OWORD *)a3 + 6) = v24;
        *((_OWORD *)a3 + 7) = v25;
        *((_QWORD *)a3 + 16) = v18;
        *((_DWORD *)a3 + 34) = DWORD2(v27[8]);
        v26 = (_QWORD *)v16[1];
        v16 = v26 - 1;
        if ( v26 == v14 )
          v16 = 0LL;
        a3 = (struct _DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2 *)((char *)a3 + 144);
        ++v15;
      }
    }
    return 0LL;
  }
  else
  {
    v10 = v4;
    v11 = v9;
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v3);
    WdLogSingleEntry3(2LL, Container, v11, v10);
    return 3221225507LL;
  }
}
