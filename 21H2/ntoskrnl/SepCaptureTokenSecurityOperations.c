/*
 * XREFs of SepCaptureTokenSecurityOperations @ 0x14023B028
 * Callers:
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140600E20 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 * Callees:
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall SepCaptureTokenSecurityOperations(_DWORD *a1, unsigned int a2, char a3, _QWORD *a4)
{
  unsigned int v5; // esi
  unsigned int v7; // ebx
  NTSTATUS result; // eax
  SIZE_T v9; // rcx
  _DWORD *PoolWithTag; // rdx
  SIZE_T NumberOfBytes[2]; // [rsp+28h] [rbp-10h] BYREF

  v5 = a2;
  v7 = 0;
  NumberOfBytes[0] = 0LL;
  if ( !a3 )
  {
    *a4 = a1;
    return 0;
  }
  if ( *a1 == 1 )
  {
    v9 = 4LL;
    NumberOfBytes[0] = 4LL;
    v5 = 1;
  }
  else
  {
    if ( !a2 )
      return -1073741811;
    result = RtlULongLongMult(4uLL, a2, NumberOfBytes);
    if ( result < 0 )
      return result;
    v9 = NumberOfBytes[0];
  }
  if ( v9 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a1 + v9 > 0x7FFFFFFF0000LL || (_DWORD *)((char *)a1 + v9) < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x704F6553u);
  NumberOfBytes[0] = (SIZE_T)PoolWithTag;
  if ( PoolWithTag )
  {
    while ( v7 < v5 )
    {
      PoolWithTag[v7] = a1[v7];
      ++v7;
    }
    *a4 = PoolWithTag;
    return 0;
  }
  return -1073741801;
}
