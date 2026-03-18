/*
 * XREFs of MmGetLowestPhysicalPage @ 0x14036E5A8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetLowestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C674C8 + 8LL * a1) + 17024LL);
}
