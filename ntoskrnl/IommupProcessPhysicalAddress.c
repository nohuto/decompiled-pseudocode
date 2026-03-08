/*
 * XREFs of IommupProcessPhysicalAddress @ 0x140524798
 * Callers:
 *     IommuMapIdentityRangeEx @ 0x140523AE0 (IommuMapIdentityRangeEx.c)
 *     IommuMapLogicalRangeEx @ 0x140523D00 (IommuMapLogicalRangeEx.c)
 *     IommuMapReservedLogicalRange @ 0x140523E20 (IommuMapReservedLogicalRange.c)
 *     IommuUnmapIdentityRangeEx @ 0x1405243D0 (IommuUnmapIdentityRangeEx.c)
 * Callees:
 *     IommupValidateMdl @ 0x140524838 (IommupValidateMdl.c)
 */

__int64 __fastcall IommupProcessPhysicalAddress(__int64 a1, _QWORD *a2, _BYTE *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v9; // rcx
  _BYTE *v10; // r8
  _QWORD *v11; // r11
  unsigned __int64 v12; // rax

  if ( !*(_DWORD *)a1 )
  {
    if ( (unsigned __int8)IommupValidateMdl(*(_QWORD *)(a1 + 8)) )
    {
      v12 = (unsigned __int64)*(unsigned int *)(v9 + 44) >> 12;
      *v10 = 0;
      v6 = *(unsigned int *)(v9 + 40);
      *v11 = v6;
      v5 = v9 + 8 * (v12 + 6);
      goto LABEL_9;
    }
    return 3221225485LL;
  }
  if ( *(_DWORD *)a1 != 1 )
  {
    if ( *(_DWORD *)a1 == 2 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      *a3 = 0;
      v6 = *(_QWORD *)(a1 + 16) << 12;
      *a2 = v6;
LABEL_9:
      *a4 = v5;
      return v6 == 0 ? 0xC000000D : 0;
    }
    return 3221225485LL;
  }
  v7 = *(_QWORD *)(a1 + 8);
  *a3 = 1;
  v6 = *(_QWORD *)(a1 + 16);
  *a2 = v6;
  *a5 = v7;
  if ( v7 % 4096 )
    return 3221225485LL;
  return v6 == 0 ? 0xC000000D : 0;
}
