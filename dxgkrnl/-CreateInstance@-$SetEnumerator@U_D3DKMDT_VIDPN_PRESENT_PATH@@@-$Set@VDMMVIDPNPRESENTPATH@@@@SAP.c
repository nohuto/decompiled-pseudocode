/*
 * XREFs of ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@SAPEAV12@QEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0069CF4
 * Callers:
 *     ?AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C03B1CF8 (-AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>::CreateInstance(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = operator new[](0x178uLL, 0x4E506456u, 256LL);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  *(_DWORD *)v2 = 305419896;
  *(_QWORD *)(v2 + 8) = a1;
  memset((void *)(v2 + 16), 0, 0x168uLL);
  return v3;
}
