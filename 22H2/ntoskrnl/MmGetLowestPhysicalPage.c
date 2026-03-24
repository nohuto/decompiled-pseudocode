/*
 * XREFs of MmGetLowestPhysicalPage @ 0x14032CF4C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetLowestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E648 + 8LL * a1) + 6912LL);
}
