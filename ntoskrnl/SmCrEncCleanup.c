/*
 * XREFs of SmCrEncCleanup @ 0x140770FE4
 * Callers:
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E6DD8 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     BCryptCloseAlgorithmProvider @ 0x1403892D4 (BCryptCloseAlgorithmProvider.c)
 *     BCryptDestroyKey @ 0x1405B52AC (BCryptDestroyKey.c)
 */

void __fastcall SmCrEncCleanup(__int64 a1, ULONG a2)
{
  struct _PRIVILEGE_SET *v3; // rcx
  void *v4; // rcx
  struct _PRIVILEGE_SET *v5; // rcx
  struct _PRIVILEGE_SET *v6; // rcx

  v3 = *(struct _PRIVILEGE_SET **)(a1 + 16);
  if ( v3 )
    CmSiFreeMemory(v3);
  v4 = *(void **)(a1 + 32);
  if ( v4 )
    BCryptDestroyKey(v4);
  v5 = *(struct _PRIVILEGE_SET **)(a1 + 40);
  if ( v5 )
    CmSiFreeMemory(v5);
  v6 = *(struct _PRIVILEGE_SET **)(a1 + 48);
  if ( v6 )
    CmSiFreeMemory(v6);
  if ( *(_QWORD *)a1 )
    BCryptCloseAlgorithmProvider(*(BCRYPT_ALG_HANDLE *)a1, a2);
}
