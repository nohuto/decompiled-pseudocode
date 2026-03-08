/*
 * XREFs of ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C03BED34
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C03BE870 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000AB7C (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _CcdWriteRegistryValues @ 0x1C03BEBD4 (_CcdWriteRegistryValues.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_WritePath(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        const WCHAR *a2,
        unsigned int a3,
        const struct D3DKMT_PATHMODALITY_DESCRIPTOR *a4)
{
  __int64 v5; // rbp
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned __int16 v15; // [rsp+30h] [rbp-28h] BYREF

  v5 = a3;
  v7 = RtlStringCbPrintfW(&v15, 6uLL, L"%02x", a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1LL;
LABEL_11:
    WdLogSingleEntry4(v9, v8, a2, v5, a4);
    return (unsigned int)v8;
  }
  v10 = CcdWriteRegistryValues(a2, &v15, (__int64)&unk_1C013A120, 13, (__int64)a4);
  v8 = v10;
  if ( v10 < 0
    || (*(_DWORD *)a4 & 0x1000000) != 0
    && (v11 = CcdWriteRegistryValues(a2, &v15, (__int64)&unk_1C013A400, 4, (__int64)a4), v8 = v11, v11 < 0)
    || (*(_DWORD *)a4 & 0x100LL) != 0
    && (v12 = CcdWriteRegistryValues(a2, &v15, (__int64)&unk_1C013A4E0, 6, (__int64)a4), v8 = v12, v12 < 0)
    || (*(_DWORD *)a4 & 0x800000) != 0
    && (v13 = CcdWriteRegistryValues(a2, &v15, (__int64)&unk_1C013A000, 5, (__int64)a4), v8 = v13, v13 < 0) )
  {
    v9 = 3LL;
    goto LABEL_11;
  }
  return (unsigned int)v8;
}
