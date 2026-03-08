/*
 * XREFs of ACPIDetectPdoMatch @ 0x1C00826E0
 * Callers:
 *     ACPIDetectPdoDevices @ 0x1C001AE34 (ACPIDetectPdoDevices.c)
 * Callees:
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C00824A0 (ACPIDetectCouldExtensionBeInRelation.c)
 */

char __fastcall ACPIDetectPdoMatch(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  char v3; // bl
  int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  v6 = 0LL;
  if ( (v2 & 0x200000000000008LL) != 8 || *(_QWORD *)(a1 + 768) )
    return 1;
  v4 = ACPIDetectCouldExtensionBeInRelation(a1, a2, 0, 1, &v6);
  if ( v6 || v4 < 0 )
    return 1;
  return v3;
}
