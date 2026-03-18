/*
 * XREFs of NVMeGetRichDeviceDescription @ 0x1C000CE44
 * Callers:
 *     NVMeHwUnitControl @ 0x1C000D170 (NVMeHwUnitControl.c)
 * Callees:
 *     NVMeGetNamespaceMetadata @ 0x1C000CC64 (NVMeGetNamespaceMetadata.c)
 *     NVMeCopyFirmwareRevision @ 0x1C000D0EC (NVMeCopyFirmwareRevision.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 *     memcmp @ 0x1C0010510 (memcmp.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeGetRichDeviceDescription(__int64 a1, char *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbp
  _BYTE Buf2[64]; // [rsp+20h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 1640);
  v3 = 0;
  if ( !a2 )
    return (unsigned int)-1056964602;
  if ( (*(_DWORD *)(a1 + 32) & 1) == 0 )
    return (unsigned int)-1056964599;
  v6 = *((_DWORD *)a2 + 1);
  if ( *(_DWORD *)a2 != 2 )
  {
    if ( v6 >= 0x6C )
    {
      memset(a2, 0, 0x6CuLL);
      *(_DWORD *)a2 = 1;
      *((_DWORD *)a2 + 1) = 108;
      goto LABEL_7;
    }
    return (unsigned int)-1056964602;
  }
  if ( v6 < 0x78 )
    return (unsigned int)-1056964602;
  v7 = *(unsigned __int8 *)(*((_QWORD *)a2 + 14) + 10LL);
  v8 = *(_QWORD *)(a1 + 8 * v7 + 1752);
  if ( !v8 )
    return (unsigned int)-1056964599;
  NVMeGetNamespaceMetadata(a1, *(_DWORD *)(v8 + 16), *(_QWORD *)(a1 + 8 * v7 + 1752));
  memset(a2, 0, 0x78uLL);
  *(_DWORD *)a2 = 2;
  *((_DWORD *)a2 + 1) = 120;
  memset(Buf2, 0, sizeof(Buf2));
  if ( memcmp((const void *)(v8 + 168), Buf2, 0x40uLL) )
  {
    *(_OWORD *)(a2 + 25) = *(_OWORD *)(v8 + 168);
    *(_OWORD *)(a2 + 41) = *(_OWORD *)(v8 + 184);
    *(_OWORD *)(a2 + 57) = *(_OWORD *)(v8 + 200);
    *(_OWORD *)(a2 + 73) = *(_OWORD *)(v8 + 216);
    goto LABEL_8;
  }
LABEL_7:
  *(_OWORD *)(a2 + 25) = *(_OWORD *)(v2 + 24);
  *(_OWORD *)(a2 + 41) = *(_OWORD *)(v2 + 40);
  *(_QWORD *)(a2 + 57) = *(_QWORD *)(v2 + 56);
LABEL_8:
  NVMeCopyFirmwareRevision(v2, a2 + 90, 16LL);
  return v3;
}
