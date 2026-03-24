/*
 * XREFs of ObInitProcess @ 0x140607AA4
 * Callers:
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ObReferenceProcessHandleTable @ 0x1405F57B4 (ObReferenceProcessHandleTable.c)
 *     ExpFreeHandleTable @ 0x140604378 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x140604524 (ExpRemoveHandleTable.c)
 *     ExSweepHandleTable @ 0x1406045D0 (ExSweepHandleTable.c)
 *     ExDupHandleTable @ 0x1406065C0 (ExDupHandleTable.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140608B90 (SeAuditingWithTokenForSubcategory.c)
 *     ExEnumHandleTable @ 0x140665730 (ExEnumHandleTable.c)
 *     ExCreateHandleTable @ 0x1406A6B48 (ExCreateHandleTable.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, struct _KPROCESS *a2, unsigned int a3, _BYTE *a4)
{
  unsigned int *v8; // rsi
  int v9; // ebp
  PVOID HandleTable; // rbp
  _DWORD *v12; // r9
  _QWORD *v13; // rbx
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  if ( !a1 )
  {
    v8 = 0LL;
    HandleTable = (PVOID)ExCreateHandleTable(a2, 1LL);
LABEL_5:
    if ( HandleTable )
    {
      a2[1].AffinityPadding[8] = (unsigned __int64)HandleTable;
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(124LL, 0LL) )
      {
        v14[0] = a2;
        v14[1] = a1;
        ExEnumHandleTable(HandleTable, ObAuditInheritedHandleProcedure, v14, 0LL);
      }
      if ( v8 )
        ExReleaseRundownProtection(a1 + 139);
      return 0LL;
    }
    else
    {
      a2[1].AffinityPadding[8] = 0LL;
      if ( v8 )
        ExReleaseRundownProtection(a1 + 139);
      return 3221225626LL;
    }
  }
  v8 = (unsigned int *)ObReferenceProcessHandleTable(a1);
  if ( !v8 )
    return 3221225738LL;
  v9 = ExDupHandleTable(a2, v8, a3, a4, (__int64 *)&P);
  if ( v9 >= 0 )
  {
    HandleTable = P;
    goto LABEL_5;
  }
  ExReleaseRundownProtection(a1 + 139);
  v13 = P;
  if ( P )
  {
    ExSweepHandleTable(a2, (__int64)P, 0, v12);
    ExpRemoveHandleTable((__int64)v13);
    ExpFreeHandleTable(v13);
  }
  return (unsigned int)v9;
}
