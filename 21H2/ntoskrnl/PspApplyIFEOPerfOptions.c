/*
 * XREFs of PspApplyIFEOPerfOptions @ 0x14061DEC4
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     MmGetDefaultPagePriority @ 0x14027348C (MmGetDefaultPagePriority.c)
 *     PspSetProcessPriorityClass @ 0x140613150 (PspSetProcessPriorityClass.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall PspApplyIFEOPerfOptions(__int64 a1, unsigned int *a2, KPROCESSOR_MODE a3)
{
  __int64 result; // rax
  int v7; // ecx
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  int v10; // edx
  unsigned int v11; // edi
  unsigned int v12; // edi
  int v13; // edx

  result = *a2;
  if ( (result & 1) != 0 )
  {
    v11 = a2[2];
    if ( v11 < 4 )
    {
      if ( v11 <= 2 || (result = SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a3) & 1, (_DWORD)result) )
      {
        LODWORD(result) = *(_DWORD *)(a1 + 1124);
        v12 = v11 << 27;
        do
        {
          v13 = result;
          result = (unsigned int)_InterlockedCompareExchange(
                                   (volatile signed __int32 *)(a1 + 1124),
                                   v12 | result & 0xC7FFFFFF,
                                   result);
        }
        while ( (_DWORD)result != v13 );
      }
    }
  }
  v7 = *a2;
  if ( (*a2 & 2) != 0 )
  {
    result = MmGetDefaultPagePriority();
    if ( v8 < (unsigned int)result )
    {
      LODWORD(result) = *(_DWORD *)(a1 + 1120);
      v9 = v8 << 12;
      do
      {
        v10 = result;
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)(a1 + 1120),
                                 v9 | result & 0xFFFF8FFF,
                                 result);
      }
      while ( (_DWORD)result != v10 );
      v7 = *a2;
    }
  }
  if ( (v7 & 4) != 0 && a2[4] <= 0xFF )
    return PspSetProcessPriorityClass(a1, *((_BYTE *)a2 + 16), 0LL, a3);
  return result;
}
