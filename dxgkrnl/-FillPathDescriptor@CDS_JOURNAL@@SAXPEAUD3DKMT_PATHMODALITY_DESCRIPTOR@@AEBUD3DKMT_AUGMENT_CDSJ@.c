/*
 * XREFs of ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C03BA9CC
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C03BA400 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C03BB460 (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C03BB5D4 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 */

void __fastcall CDS_JOURNAL::FillPathDescriptor(
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        const struct D3DKMT_AUGMENT_CDSJ *a2,
        struct DXGADAPTER *a3,
        __int64 a4,
        struct DXGADAPTER *a5)
{
  bool v6; // di
  _DWORD v7[9]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v8; // [rsp+54h] [rbp-54h]
  __int128 v9; // [rsp+5Ch] [rbp-4Ch]
  __int128 v10; // [rsp+6Ch] [rbp-3Ch]
  __int64 v11; // [rsp+7Ch] [rbp-2Ch]
  int v12; // [rsp+84h] [rbp-24h]

  *(_OWORD *)v7 = 0LL;
  v6 = (char)a3;
  *(_OWORD *)&v7[5] = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v7, a2, a3);
  CDS_JOURNAL::_FillPathDescriptor(a1, (const struct CDS_JOURNAL::_ENTRY *)v7, v6, 0, a5);
}
