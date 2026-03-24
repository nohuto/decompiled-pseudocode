/*
 * XREFs of DisplayPortEscapeGetAddress @ 0x1C004FAE4
 * Callers:
 *     NtDxgkDisplayPortOperation @ 0x1C004FF00 (NtDxgkDisplayPortOperation.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     CallDPDdiEscape @ 0x1C004F958 (CallDPDdiEscape.c)
 */

__int64 __fastcall DisplayPortEscapeGetAddress(struct DXGADAPTER **a1, void *a2, __int64 a3)
{
  char *v6; // rax
  char *v7; // rbx
  unsigned int v8; // edi
  unsigned int v9; // eax

  v6 = (char *)operator new[](0x20uLL, 0x4B677844u, PagedPool);
  v7 = v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    *((_OWORD *)v6 + 1) = 0LL;
    *(_DWORD *)v6 = 514;
    *((_DWORD *)v6 + 3) = *(_DWORD *)a3;
    v9 = CallDPDdiEscape(a1, a2, 0x20u, v6);
    *(_DWORD *)(a3 + 4) = *((_DWORD *)v7 + 2);
    v8 = v9;
    *(_DWORD *)(a3 + 8) = *((_DWORD *)v7 + 4);
    *(_BYTE *)(a3 + 12) = v7[20];
    *(_QWORD *)(a3 + 13) = *(_QWORD *)(v7 + 21);
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v8;
}
