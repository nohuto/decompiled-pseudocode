/*
 * XREFs of ?CopyPathModalityDescriptor@CCD_TOPOLOGY@@AEAAJPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBU2@@Z @ 0x1C03B6500
 * Callers:
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C03B6674 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CopyPathModalityDescriptor(
        CCD_TOPOLOGY *this,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        const struct D3DKMT_PATHMODALITY_DESCRIPTOR *a3)
{
  __int64 *v3; // rbx
  _OWORD *v4; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v6; // rax
  __int64 v7; // r8
  __int128 v8; // xmm1
  __int64 v9; // rax
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int128 v13; // xmm1

  v3 = (__int64 *)((char *)a2 + 248);
  v4 = (_OWORD *)*((_QWORD *)a2 + 31);
  v6 = a3;
  v7 = 2LL;
  do
  {
    *(_OWORD *)a2 = *(_OWORD *)v6;
    *((_OWORD *)a2 + 1) = *((_OWORD *)v6 + 1);
    *((_OWORD *)a2 + 2) = *((_OWORD *)v6 + 2);
    *((_OWORD *)a2 + 3) = *((_OWORD *)v6 + 3);
    *((_OWORD *)a2 + 4) = *((_OWORD *)v6 + 4);
    *((_OWORD *)a2 + 5) = *((_OWORD *)v6 + 5);
    *((_OWORD *)a2 + 6) = *((_OWORD *)v6 + 6);
    a2 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)a2 + 128);
    v8 = *((_OWORD *)v6 + 7);
    v6 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v6 + 128);
    *((_OWORD *)a2 - 1) = v8;
    --v7;
  }
  while ( v7 );
  *(_OWORD *)a2 = *(_OWORD *)v6;
  *((_OWORD *)a2 + 1) = *((_OWORD *)v6 + 1);
  *((_QWORD *)a2 + 4) = *((_QWORD *)v6 + 4);
  if ( *((_QWORD *)a3 + 31) )
  {
    if ( v4 )
    {
      *v3 = (__int64)v4;
    }
    else
    {
      v9 = operator new[](0xF4uLL, 0x63644356u, 256LL);
      *v3 = v9;
      v4 = (_OWORD *)v9;
      if ( !v9 )
      {
        WdLogSingleEntry0(6LL);
        return 3221225626LL;
      }
    }
    v11 = (_OWORD *)*((_QWORD *)a3 + 31);
    *v4 = *v11;
    v4[1] = v11[1];
    v4[2] = v11[2];
    v4[3] = v11[3];
    v4[4] = v11[4];
    v4[5] = v11[5];
    v4[6] = v11[6];
    v12 = v4 + 8;
    v13 = v11[7];
    v11 += 8;
    *(v12 - 1) = v13;
    *v12 = *v11;
    v12[1] = v11[1];
    v12[2] = v11[2];
    v12[3] = v11[3];
    v12[4] = v11[4];
    v12[5] = v11[5];
    v12[6] = v11[6];
    *((_DWORD *)v12 + 28) = *((_DWORD *)v11 + 28);
  }
  return 0LL;
}
