/*
 * XREFs of RtlStringCbCatW @ 0x1402531A8
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14026A920 (SeSetLearningModeObjectInformation.c)
 *     PnpConcatPWSTR @ 0x140607BE4 (PnpConcatPWSTR.c)
 *     WmipInsertStaticNames @ 0x14062DC80 (WmipInsertStaticNames.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x14079B414 (PerfDiagpStartPerfDiagLogger.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x1407AA7E0 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     WmipIncludeStaticNames @ 0x14093293C (WmipIncludeStaticNames.c)
 *     VhdInitialize @ 0x140A74778 (VhdInitialize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCatW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // r10
  NTSTATUS v5; // r9d
  size_t v7; // rcx
  NTSTRSAFE_PWSTR i; // rax
  size_t v9; // r8
  wchar_t *v10; // rdx
  size_t v11; // rcx
  __int64 v12; // r9
  char *v13; // r11
  wchar_t v14; // ax
  wchar_t *v15; // rax

  v3 = cbDest >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
    goto LABEL_19;
  v7 = v3;
  for ( i = pszDest; v7; --v7 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v5 = v7 == 0 ? 0xC000000D : 0;
  if ( v7 )
    v9 = v3 - v7;
  else
LABEL_19:
    v9 = 0LL;
  if ( v5 >= 0 )
  {
    v10 = &pszDest[v9];
    v11 = v3 - v9;
    if ( v3 != v9 )
    {
      v12 = 2147483646LL;
      v13 = (char *)((char *)pszSrc - (char *)v10);
      do
      {
        if ( !v12 )
          break;
        v14 = *(wchar_t *)((char *)v10 + (_QWORD)v13);
        if ( !v14 )
          break;
        *v10 = v14;
        --v12;
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    v15 = v10 - 1;
    if ( v11 )
      v15 = v10;
    v5 = v11 == 0 ? 0x80000005 : 0;
    *v15 = 0;
  }
  return v5;
}
