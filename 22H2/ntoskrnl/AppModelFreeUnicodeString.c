/*
 * XREFs of AppModelFreeUnicodeString @ 0x14036713C
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x1407E237C (KIsUnlockSettingEnabled.c)
 *     KIsSideloadingEnabled @ 0x140A0A4A0 (KIsSideloadingEnabled.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
