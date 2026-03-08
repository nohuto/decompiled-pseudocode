/*
 * XREFs of ?IsValidCloneGroup@@YAEPEAUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C02F77A8
 * Callers:
 *     ?IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C02F7714 (-IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?IsVirtualModeSupported@@YAEAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C02F7878 (-IsVirtualModeSupported@@YAEAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

char __fastcall IsValidCloneGroup(struct D3DKMT_GETPATHSMODALITY *a1, unsigned int a2)
{
  char v3; // di
  unsigned __int8 v4; // al
  _DWORD *v5; // r11
  int v6; // r9d
  unsigned int v7; // r10d
  char v8; // r8
  unsigned __int8 i; // si
  char *v10; // r9
  __int64 v11; // r9

  v3 = 1;
  v4 = IsVirtualModeSupported((struct D3DKMT_GETPATHSMODALITY *)((char *)a1 + 296 * a2 + 56));
  v7 = v6 + 1;
  v8 = 0;
  for ( i = v4; v7 < *((unsigned __int16 *)a1 + 10); ++v7 )
  {
    v10 = (char *)a1 + 296 * v7;
    if ( v5[60] == *((_DWORD *)v10 + 60) )
    {
      i &= -(IsVirtualModeSupported((struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v10 + 56)) != 0);
      if ( v5[20] != *(_DWORD *)(v11 + 80) || v5[18] != *(_DWORD *)(v11 + 72) || v5[19] != *(_DWORD *)(v11 + 76) )
        v3 = v8;
      *(_QWORD *)(v11 + 56) |= 0x2000000000uLL;
    }
  }
  if ( i || v3 )
    return 1;
  return v8;
}
