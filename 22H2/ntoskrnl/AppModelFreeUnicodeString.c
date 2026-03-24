/*
 * XREFs of AppModelFreeUnicodeString @ 0x14032332C
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x14069AC48 (KIsUnlockSettingEnabled.c)
 *     KIsSideloadingEnabled @ 0x14095EFF4 (KIsSideloadingEnabled.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall AppModelFreeUnicodeString(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4D707041u);
    *(_OWORD *)a1 = 0LL;
  }
}
