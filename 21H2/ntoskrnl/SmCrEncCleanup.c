/*
 * XREFs of SmCrEncCleanup @ 0x1406BD804
 * Callers:
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14029FCBC (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     BCryptCloseAlgorithmProvider @ 0x1403B8354 (BCryptCloseAlgorithmProvider.c)
 *     BCryptDestroyKey @ 0x140595C80 (BCryptDestroyKey.c)
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
