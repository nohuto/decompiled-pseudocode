/*
 * XREFs of bsearch @ 0x1403D4280
 * Callers:
 *     DownLevelLangIDToLanguageName @ 0x1402BEE08 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x14036F74C (DownLevelLanguageNameToLangID.c)
 *     RtlCompareExchangePropertyStore @ 0x1405A8090 (RtlCompareExchangePropertyStore.c)
 *     RtlQueryPropertyStore @ 0x1405A8510 (RtlQueryPropertyStore.c)
 *     RtlRemovePropertyStore @ 0x1405A8760 (RtlRemovePropertyStore.c)
 *     DownLevelGetParentLanguageName @ 0x140612240 (DownLevelGetParentLanguageName.c)
 *     EtwpIsGuidAllowed @ 0x140695F94 (EtwpIsGuidAllowed.c)
 *     sub_14081A50C @ 0x14081A50C (sub_14081A50C.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     _guard_check_icall @ 0x140421180 (_guard_check_icall.c)
 */

void *__cdecl bsearch(
        const void *Key,
        const void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  size_t v6; // rsi
  char *v7; // rdi
  char *v8; // rbx
  size_t v10; // rbp
  bool v11; // zf
  char *v12; // r14
  int v13; // eax

  v6 = NumOfElements;
  v7 = (char *)Base + SizeOfElements * (NumOfElements - 1);
  v8 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    while ( v8 <= v7 )
    {
      v10 = v6 >> 1;
      if ( !(v6 >> 1) )
      {
        if ( !v6 )
          return 0LL;
        if ( ((unsigned int (__fastcall *)(const void *, char *))PtFuncCompare)(Key, v8) )
          return 0LL;
        return v8;
      }
      v11 = (v6 & 1) == 0;
      v6 = v10 - 1;
      if ( !v11 )
        v6 = v10;
      v12 = &v8[SizeOfElements * v6];
      v13 = ((__int64 (__fastcall *)(const void *, char *))PtFuncCompare)(Key, v12);
      if ( !v13 )
        return &v8[SizeOfElements * v6];
      if ( v13 >= 0 )
      {
        v8 = &v12[SizeOfElements];
        v6 = v10;
      }
      else
      {
        v7 = &v12[-SizeOfElements];
      }
    }
  }
  else
  {
    xHalTimerWatchdogStop();
  }
  return 0LL;
}
