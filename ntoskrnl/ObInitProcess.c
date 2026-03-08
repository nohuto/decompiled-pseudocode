/*
 * XREFs of ObInitProcess @ 0x140707D3C
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ExpFreeHandleTable @ 0x140704400 (ExpFreeHandleTable.c)
 *     ExDupHandleTable @ 0x140705D54 (ExDupHandleTable.c)
 *     ExCreateHandleTable @ 0x140706274 (ExCreateHandleTable.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14070F610 (SeAuditingWithTokenForSubcategory.c)
 *     ExEnumHandleTable @ 0x14070F670 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x140711794 (ObReferenceProcessHandleTable.c)
 *     ExSweepHandleTable @ 0x1407D8110 (ExSweepHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1407DCE80 (ExpRemoveHandleTable.c)
 */

__int64 __fastcall ObInitProcess(struct _EX_RUNDOWN_REF *a1, __int64 a2, unsigned int a3, _BYTE *a4)
{
  volatile __int64 *v8; // rdi
  __int64 HandleTable; // rbp
  int v11; // ebp
  _QWORD *v12; // rbx
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  v13 = 0LL;
  if ( !a1 )
  {
    v8 = 0LL;
    HandleTable = ExCreateHandleTable(a2, 1LL);
    goto LABEL_3;
  }
  v8 = (volatile __int64 *)ObReferenceProcessHandleTable(a1);
  if ( !v8 )
    return 3221225738LL;
  v11 = ExDupHandleTable(a2, v8, a3, a4, (__int64 *)&P);
  if ( v11 >= 0 )
  {
    HandleTable = (__int64)P;
LABEL_3:
    if ( HandleTable )
    {
      *(_QWORD *)(a2 + 1392) = HandleTable;
      if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(123LL, 0LL) )
      {
        *(_QWORD *)&v13 = a2;
        *((_QWORD *)&v13 + 1) = a1;
        ExEnumHandleTable(HandleTable, ObAuditInheritedHandleProcedure, &v13, 0LL);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 139);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a2 + 1392) = 0LL;
      if ( v8 )
        ExReleaseRundownProtection_0(a1 + 139);
      return 3221225626LL;
    }
  }
  ExReleaseRundownProtection_0(a1 + 139);
  v12 = P;
  if ( P )
  {
    ExSweepHandleTable(a2, P, 0LL);
    ExpRemoveHandleTable(v12);
    ExpFreeHandleTable(v12);
  }
  return (unsigned int)v11;
}
