/*
 * XREFs of RawComputeFileSystemInformationChecksum @ 0x1409B58A0
 * Callers:
 *     RawQueryFileSystemInformation @ 0x1409B58F4 (RawQueryFileSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RawComputeFileSystemInformationChecksum(__int64 a1)
{
  unsigned __int16 v1; // r9
  unsigned __int16 i; // r8

  v1 = 0;
  for ( i = 3; i < *(_WORD *)(a1 + 20); ++i )
  {
    if ( (unsigned __int16)(i - 22) > 1u )
      v1 = (v1 << 15) + *(unsigned __int8 *)(i + a1) + (v1 >> 1);
  }
  return v1;
}
