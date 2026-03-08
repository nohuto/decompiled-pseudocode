/*
 * XREFs of EmonConfigurePebsBuffer @ 0x14051ACA8
 * Callers:
 *     EmonMarkCountersReserved @ 0x14051AFC0 (EmonMarkCountersReserved.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EmonConfigurePebsBuffer(unsigned int a1, int a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax

  v3 = EmonDsManagementAreas + 160LL * a1;
  if ( EmonPebs64Bit )
  {
    v4 = *(_QWORD *)(v3 + 32);
    v5 = *(_QWORD *)(v3 + 48);
  }
  else
  {
    v4 = *(unsigned int *)(v3 + 16);
    v5 = *(unsigned int *)(v3 + 24);
  }
  v6 = v4 + (unsigned int)(EmonPebsEntrySizeInUse * a2);
  if ( v6 >= v5 )
    return 3221225485LL;
  if ( !EmonPebs64Bit )
    v6 = (unsigned int)v6;
  *(_QWORD *)(v3 + 56) = v6;
  return 0LL;
}
