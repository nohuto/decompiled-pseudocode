/*
 * XREFs of ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C016D8A0
 * Callers:
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C0062E20 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025A8C (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00266E0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x1C016B330 (-vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z.c)
 */

void __fastcall vDuplicateAndScaleRegion(__int64 a1, PSLIST_ENTRY *a2, __int64 a3)
{
  PSLIST_ENTRY v3; // rbx
  struct _SLIST_ENTRY *v6; // rcx
  struct _SLIST_ENTRY *v7; // rcx
  PSLIST_ENTRY ListEntry; // [rsp+20h] [rbp-20h] BYREF
  int v9; // [rsp+28h] [rbp-18h]
  PSLIST_ENTRY v10; // [rsp+50h] [rbp+10h] BYREF
  __int64 v11; // [rsp+58h] [rbp+18h] BYREF

  v3 = *a2;
  v10 = *a2;
  v11 = a1;
  if ( !a1 )
  {
    if ( !v3 )
      return;
    v7 = v3;
    goto LABEL_13;
  }
  if ( v3 )
    goto LABEL_16;
  v9 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&ListEntry, 0x70u);
  v6 = ListEntry;
  if ( ListEntry )
  {
    v3 = ListEntry;
    v10 = ListEntry;
    *a2 = ListEntry;
  }
  if ( v9 == 1 )
    REGION::vDeleteREGION(v6);
  if ( v3 )
  {
LABEL_16:
    if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v10, (struct RGNOBJ *)&v11) )
    {
      RGNOBJ::vScale((__int64 *)&v10, a3);
      *a2 = v10;
      return;
    }
    v7 = v10;
LABEL_13:
    REGION::vDeleteREGION(v7);
    *a2 = 0LL;
  }
}
