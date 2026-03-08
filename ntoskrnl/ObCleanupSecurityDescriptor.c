/*
 * XREFs of ObCleanupSecurityDescriptor @ 0x14085FE80
 * Callers:
 *     ObpInitializeRootNamespace @ 0x1408093C4 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x140809994 (MiCreatePartitionNamespace.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140299320 (RtlGetDaclSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ObCleanupSecurityDescriptor(void *a1)
{
  BOOLEAN v1; // [rsp+38h] [rbp+10h] BYREF
  BOOLEAN v2; // [rsp+40h] [rbp+18h] BYREF
  PVOID P; // [rsp+48h] [rbp+20h] BYREF

  P = 0LL;
  v1 = 0;
  if ( RtlGetDaclSecurityDescriptor(a1, &v1, (PACL *)&P, &v2) >= 0 )
  {
    if ( v1 )
      ExFreePoolWithTag(P, 0);
  }
}
