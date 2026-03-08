/*
 * XREFs of AppModelFreeUnicodeString @ 0x1402FBD4C
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x140792C9C (KIsUnlockSettingEnabled.c)
 *     KIsSideloadingEnabled @ 0x140A077B0 (KIsSideloadingEnabled.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
