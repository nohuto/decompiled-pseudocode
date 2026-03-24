/*
 * XREFs of DisplayPortEscapeGetDaps @ 0x1C004FB98
 * Callers:
 *     NtDxgkDisplayPortOperation @ 0x1C004FF00 (NtDxgkDisplayPortOperation.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     CallDPDdiEscape @ 0x1C004F958 (CallDPDdiEscape.c)
 */

__int64 __fastcall DisplayPortEscapeGetDaps(struct DXGADAPTER **a1, void *a2, __int64 a3)
{
  _DWORD *v6; // rbx
  unsigned int v7; // edi
  unsigned int v8; // eax

  v6 = operator new[](0x14uLL, 0x4B677844u, PagedPool);
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    v6[4] = 0;
    *v6 = 513;
    v8 = CallDPDdiEscape(a1, a2, 0x14u, v6);
    *(_DWORD *)a3 = v6[3];
    v7 = v8;
    *(_BYTE *)(a3 + 4) = *((_BYTE *)v6 + 16) >> 4;
    *(_BYTE *)(a3 + 5) = v6[4] & 0xF;
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
