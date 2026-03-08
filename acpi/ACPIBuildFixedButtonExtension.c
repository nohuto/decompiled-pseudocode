/*
 * XREFs of ACPIBuildFixedButtonExtension @ 0x1C000D3DC
 * Callers:
 *     ACPIFixedFeatureButtonInitialize @ 0x1C003CBA8 (ACPIFixedFeatureButtonInitialize.c)
 * Callees:
 *     ACPIBuildDeviceExtension @ 0x1C000C314 (ACPIBuildDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildFixedButtonExtension(__int64 a1, __int64 *a2)
{
  int v3; // esi
  __int64 result; // rax
  __int64 v5; // rbx
  char *Pool2; // rax

  if ( AcpiBuildFixedButtonEnumerated )
    goto LABEL_12;
  AcpiBuildFixedButtonEnumerated = 1;
  v3 = HIBYTE(*((unsigned __int16 *)AcpiInformation + 56)) & 1 | 2;
  if ( (*((_WORD *)AcpiInformation + 56) & 0x200) == 0 )
    v3 = HIBYTE(*((unsigned __int16 *)AcpiInformation + 56)) & 1;
  if ( !v3 || (AcpiOverrideAttributes & 0x400000) != 0 )
  {
LABEL_12:
    *a2 = 0LL;
  }
  else
  {
    result = ACPIBuildDeviceExtension(0LL, RootDeviceExtension, a2);
    if ( (int)result < 0 )
      goto LABEL_10;
    v5 = *a2;
    if ( !*a2 )
      goto LABEL_10;
    _InterlockedOr64((volatile signed __int64 *)(v5 + 8), 0x18000000360000uLL);
    KeInitializeSpinLock((PKSPIN_LOCK)(v5 + 184));
    *(_DWORD *)(v5 + 200) = v3 | 0x80000000;
    Pool2 = (char *)ExAllocatePool2(64LL, 17LL, 1399874369LL);
    *(_QWORD *)(v5 + 608) = Pool2;
    if ( !Pool2 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v5 + 8), 0x2000000000000uLL);
      result = 3221225626LL;
LABEL_10:
      *a2 = 0LL;
      return result;
    }
    strcpy(Pool2, "ACPI\\FixedButton");
    _InterlockedOr64((volatile signed __int64 *)(v5 + 8), 0xA00000000000uLL);
  }
  return 0LL;
}
