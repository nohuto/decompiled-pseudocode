/*
 * XREFs of AcpiUpdatePciRootFromDsmEvaluation @ 0x1C0089FDC
 * Callers:
 *     PciGetRootBusCapability @ 0x1C008A1F0 (PciGetRootBusCapability.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiUpdatePciRootFromDsmEvaluation(__int64 a1)
{
  const char *v2; // rcx
  const char *v3; // rcx
  const char *v4; // rcx
  unsigned __int8 v5; // cl

  *(_DWORD *)(a1 + 220) = 0;
  *(_BYTE *)(a1 + 216) = 0;
  v2 = *(const char **)(a1 + 608);
  if ( !v2 || !strstr(v2, "PNP0A08") )
  {
    v3 = *(const char **)(a1 + 192);
    if ( !v3 || !strstr(v3, "PNP0A08") )
    {
      v4 = *(const char **)(a1 + 200);
      if ( !v4 || !strstr(v4, "PNP0A08") )
        goto LABEL_13;
    }
  }
  if ( *(_BYTE *)(a1 + 224) )
  {
    v5 = *(_BYTE *)(a1 + 231);
    if ( v5 < 8u )
    {
      *(_DWORD *)(a1 + 220) = v5 >= 2u;
      goto LABEL_13;
    }
    *(_DWORD *)(a1 + 220) = 2;
  }
  else
  {
    *(_DWORD *)(a1 + 220) = 3;
  }
  *(_BYTE *)(a1 + 216) = 1;
LABEL_13:
  if ( !*(_BYTE *)(a1 + 216)
    && (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1195787085LL, 0LL, 0LL) )
  {
    *(_BYTE *)(a1 + 216) = 1;
  }
  return 0LL;
}
