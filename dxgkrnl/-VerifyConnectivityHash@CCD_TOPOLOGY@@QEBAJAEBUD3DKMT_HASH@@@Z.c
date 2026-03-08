/*
 * XREFs of ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z @ 0x1C01C1C7C
 * Callers:
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C01C1B9C (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C01C1BF8 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C03BA164 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::VerifyConnectivityHash(CCD_TOPOLOGY *this, const struct D3DKMT_HASH *a2)
{
  _DWORD *v4; // rax
  unsigned __int16 v5; // bx
  __int64 v7; // rax

  if ( *(_DWORD *)a2 != 1 )
    WdLogSingleEntry0(1LL);
  v4 = (_DWORD *)*((_QWORD *)this + 8);
  v5 = 0;
  if ( v4 && *v4 == 1 )
    return RtlCompareMemory(a2, *((const void **)this + 8), 0x14uLL) != 20 ? 0xC000022E : 0;
  WdLogSingleEntry2(3LL, this, *((_QWORD *)this + 8));
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
    v5 = *(_WORD *)(v7 + 20);
  DxgkLogCodePointPacket(0x40u, v5, 0, 0, 0LL);
  return 0LL;
}
