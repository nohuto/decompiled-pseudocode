/*
 * XREFs of SepConvertTokenPrivilegesToLuidAndAttributes @ 0x140298FAC
 * Callers:
 *     SepConvertTokenPrivileges @ 0x140298F88 (SepConvertTokenPrivileges.c)
 *     NtQueryInformationToken @ 0x1406D6780 (NtQueryInformationToken.c)
 *     SepCopyTokenAccessInformation @ 0x14077104C (SepCopyTokenAccessInformation.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepConvertTokenPrivilegesToLuidAndAttributes(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int i; // r10d
  __int64 v4; // r9

  v2 = 0LL;
  for ( i = 0; i <= 0x24; ++i )
  {
    if ( ((1LL << i) & a1[8]) != 0 )
    {
      v4 = 3 * v2;
      *(_QWORD *)(a2 + 4 * v4) = (int)i;
      *(_DWORD *)(a2 + 4 * v4 + 8) = (((1LL << i) & a1[9]) != 0 ? 2 : 0) | (((1LL << i) & a1[10]) != 0);
      v2 = (unsigned int)(v2 + 1);
    }
  }
  return (unsigned int)v2;
}
