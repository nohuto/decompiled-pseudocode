/*
 * XREFs of bsearch @ 0x1403D97A0
 * Callers:
 *     DownLevelLangIDToLanguageName @ 0x14037140C (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x14038AD54 (DownLevelLanguageNameToLangID.c)
 *     RtlCompareExchangePropertyStore @ 0x1405AA540 (RtlCompareExchangePropertyStore.c)
 *     RtlQueryPropertyStore @ 0x1405AA9C0 (RtlQueryPropertyStore.c)
 *     RtlRemovePropertyStore @ 0x1405AAC10 (RtlRemovePropertyStore.c)
 *     DownLevelGetParentLanguageName @ 0x140614660 (DownLevelGetParentLanguageName.c)
 *     EtwpIsGuidAllowed @ 0x1406C045C (EtwpIsGuidAllowed.c)
 *     sub_140811D1C @ 0x140811D1C (sub_140811D1C.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036DD70 (xHalTimerWatchdogStop.c)
 *     _guard_check_icall @ 0x140429510 (_guard_check_icall.c)
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
