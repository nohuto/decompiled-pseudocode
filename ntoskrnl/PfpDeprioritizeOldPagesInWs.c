/*
 * XREFs of PfpDeprioritizeOldPagesInWs @ 0x14097AC7C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1407E2A94 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MmUpdateOldWorkingSetPages @ 0x1406332BC (MmUpdateOldWorkingSetPages.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfpDeprioritizeOldPagesInWs(__int64 a1, char a2)
{
  __int64 v3; // rax
  int updated; // ebx
  unsigned __int64 v5; // rdx
  unsigned int v6; // esi
  int v7; // edi
  char v8; // r8
  ULONG_PTR BugCheckParameter1[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+50h] [rbp-18h]
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  *(_OWORD *)BugCheckParameter1 = 0LL;
  v11 = 0;
  Object = 0LL;
  v3 = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)v3 == 24 )
  {
    if ( a2 )
    {
      v5 = *(_QWORD *)(a1 + 16);
      if ( (v5 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v5 + v3 > 0x7FFFFFFF0000LL || v5 + v3 < v5 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(BugCheckParameter1, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
    if ( LODWORD(BugCheckParameter1[0]) != 3
      || (v11 & 0xFFFFFFC0) != 0
      || (v6 = v11 & 0xF, v6 > 8)
      || (v7 = (v11 >> 4) & 3, v7 == 3)
      || v6 == 8 && !v7 )
    {
      updated = -1073741811;
    }
    else
    {
      updated = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1[1],
                  0x2000,
                  (__int64)PsProcessType,
                  a2,
                  0x73576650u,
                  &Object,
                  0LL,
                  0LL);
      if ( updated >= 0 )
      {
        v8 = 0;
        if ( v7 )
        {
          v8 = 1;
          if ( v7 == 1 )
            v8 = 3;
        }
        updated = MmUpdateOldWorkingSetPages((ULONG_PTR)Object, v6, v8);
      }
    }
  }
  else
  {
    updated = -1073741306;
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x73576650u);
  return (unsigned int)updated;
}
