/*
 * XREFs of ACPIBuildIssueInvalidateRelationsWorker @ 0x1C000D554
 * Callers:
 *     ACPIBuildIssueInvalidateRelations @ 0x1C000D510 (ACPIBuildIssueInvalidateRelations.c)
 *     ACPIBuildIssueInvalidateRelationsWorker @ 0x1C000D554 (ACPIBuildIssueInvalidateRelationsWorker.c)
 *     ACPITableUnloadCallBack @ 0x1C003F960 (ACPITableUnloadCallBack.c)
 * Callees:
 *     ACPIBuildIssueInvalidateRelationsWorker @ 0x1C000D554 (ACPIBuildIssueInvalidateRelationsWorker.c)
 *     ACPIPendingInvalidate @ 0x1C00145A4 (ACPIPendingInvalidate.c)
 */

void __fastcall ACPIBuildIssueInvalidateRelationsWorker(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( (v2 & 0x208) == 0x200 )
  {
    if ( (v2 & 0x40000000000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFBFFFFFFFFFFuLL);
      if ( !(unsigned __int8)ACPIPendingInvalidate(a1) )
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v3 + 784), BusRelations);
    }
    else
    {
      v4 = (_QWORD *)(a1 + 800);
      v5 = *(_QWORD **)(a1 + 800);
      while ( v5 != v4 )
      {
        v6 = v5 - 102;
        v5 = (_QWORD *)*v5;
        if ( (v6[1] & 0x208) == 0x200LL )
          ACPIBuildIssueInvalidateRelationsWorker(v6);
      }
    }
  }
}
