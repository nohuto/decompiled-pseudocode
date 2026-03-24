/*
 * XREFs of ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C014FE00
 * Callers:
 *     ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C014FD6C (-FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C0150390 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C02F121C (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDS_JOURNAL::_FillEntry(
        struct CDS_JOURNAL::_ENTRY *a1,
        const struct D3DKMT_AUGMENT_CDSJ *a2,
        struct DXGADAPTER *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax

  *((_DWORD *)a1 + 4) = *(_DWORD *)a2;
  *(_QWORD *)((char *)a1 + 20) = *(_QWORD *)((char *)a2 + 4);
  *((_DWORD *)a1 + 7) = *((_DWORD *)a2 + 3);
  *((_DWORD *)a1 + 8) = *((_DWORD *)a2 + 4);
  *((_DWORD *)a1 + 9) = *((_DWORD *)a2 + 5);
  *((_DWORD *)a1 + 10) = *((_DWORD *)a2 + 6);
  v4 = *((_QWORD *)a2 + 4);
  if ( (*(_DWORD *)(v4 + 72) & 0x20) != 0 )
  {
    v5 = *(_QWORD *)(v4 + 76);
    *((_DWORD *)a1 + 11) |= 0x20u;
    *((_QWORD *)a1 + 6) = v5;
    v4 = *((_QWORD *)a2 + 4);
  }
  if ( (*(_DWORD *)(v4 + 72) & 0x80u) != 0 )
  {
    v6 = *(_DWORD *)(v4 + 84);
    *((_DWORD *)a1 + 11) |= 0x80u;
    *((_DWORD *)a1 + 14) = v6;
    v4 = *((_QWORD *)a2 + 4);
  }
  if ( (*(_DWORD *)(v4 + 72) & 0x20000000) != 0 )
  {
    v12 = *(_DWORD *)(v4 + 88);
    *((_DWORD *)a1 + 11) |= 0x20000000u;
    *((_DWORD *)a1 + 15) = v12;
    v4 = *((_QWORD *)a2 + 4);
  }
  if ( (*(_DWORD *)(v4 + 72) & 0x40000) != 0 )
  {
    v7 = *(_DWORD *)(v4 + 168);
    *((_DWORD *)a1 + 11) |= 0x40000u;
    *((_DWORD *)a1 + 16) = v7;
    v4 = *((_QWORD *)a2 + 4);
  }
  if ( (*(_DWORD *)(v4 + 72) & 0x80000) != 0 )
  {
    v8 = *(_DWORD *)(v4 + 172);
    *((_DWORD *)a1 + 11) |= 0x80000u;
    *((_DWORD *)a1 + 17) = v8;
    v4 = *((_QWORD *)a2 + 4);
  }
  if ( (*(_DWORD *)(v4 + 72) & 0x100000) != 0 )
  {
    v9 = *(_DWORD *)(v4 + 176);
    *((_DWORD *)a1 + 11) |= 0x100000u;
    *((_DWORD *)a1 + 18) = v9;
    v4 = *((_QWORD *)a2 + 4);
  }
  if ( (*(_DWORD *)(v4 + 72) & 0x400000) != 0 )
  {
    v10 = *(_DWORD *)(v4 + 184);
    *((_DWORD *)a1 + 11) |= 0x400000u;
    *((_DWORD *)a1 + 19) = v10;
    v4 = *((_QWORD *)a2 + 4);
  }
  if ( (*(_DWORD *)(v4 + 72) & 0x200000) != 0 )
  {
    v11 = *(_DWORD *)(v4 + 180);
    *((_DWORD *)a1 + 11) |= 0x200000u;
    *((_DWORD *)a1 + 20) = v11;
  }
}
