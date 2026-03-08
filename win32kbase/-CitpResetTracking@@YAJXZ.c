/*
 * XREFs of ?CitpResetTracking@@YAJXZ @ 0x1C02734F8
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C02728BC (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpCleanup@@YAXXZ @ 0x1C00B02F4 (-CitpCleanup@@YAXXZ.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00B03A4 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00B0D10 (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C00C5978 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00C5C50 (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C0272B98 (-CitpInvalidateAllWeakReferences@@YAXXZ.c)
 */

__int64 CitpResetTracking(void)
{
  struct _CIT_IMPACT_CONTEXT *v0; // rbx
  int v1; // ebx
  char IsStateSeparationEnabled; // al
  const WCHAR *v4; // rdx
  const char *v5; // rdx

  v0 = xmmword_1C02D4DA0;
  if ( !xmmword_1C02D4DA0 )
    goto LABEL_2;
  CitpContextFlush(xmmword_1C02D4DA0, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  CitpInvalidateAllWeakReferences();
  CitpContextTrackingDataCleanup(v0);
  *((_WORD *)&qword_1C02D4D94 + 2) = 0;
  IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
  v4 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
  if ( !IsStateSeparationEnabled )
    v4 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
  CitpParametersLoad((struct _CIT_PARAMETERS *)&xmmword_1C02D4D84, v4);
  if ( *((_BYTE *)&qword_1C02D4D94 + 4) )
  {
    v1 = CitpContextTrackingDataStart(v0, v5);
    if ( v1 >= 0 )
      return 0;
  }
  else
  {
LABEL_2:
    v1 = -1073741637;
  }
  CitpCleanup();
  return (unsigned int)v1;
}
