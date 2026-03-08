/*
 * XREFs of ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C0180394
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_1_ @ 0x1C01B2F70 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_1_1_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_ @ 0x1C01DB6E0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectActiveAdaptersCallback_1_0_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C01DC470 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C03B7ED0 (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014550 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C01821A4 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 */

int __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DMMVIDPN *a2,
        bool a3)
{
  char *v3; // rsi
  int v6; // ebx
  char *v7; // rdi
  struct DMMVIDPNPRESENTPATH *v8; // rdi
  __int64 v9; // rbx
  int result; // eax
  char *v11; // rcx

  v3 = (char *)a2 + 96;
  v6 = 0;
  if ( a2 == (struct DMMVIDPN *)-96LL )
    WdLogSingleEntry0(1LL);
  v7 = (char *)*((_QWORD *)v3 + 3);
  if ( v7 == v3 + 24 )
    return v6;
  v8 = (struct DMMVIDPNPRESENTPATH *)(v7 - 8);
  if ( !v8 )
    return v6;
  while ( 1 )
  {
    v9 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)(v3 + 160)) + 48);
    if ( !*(_QWORD *)(v9 + 8) )
      WdLogSingleEntry0(1LL);
    result = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(
               this,
               *(struct DXGADAPTER **)(*(_QWORD *)(v9 + 8) + 16LL),
               v8,
               1,
               a3);
    v6 = result;
    if ( result < 0 )
      break;
    v11 = (char *)*((_QWORD *)v8 + 1);
    v8 = (struct DMMVIDPNPRESENTPATH *)(v11 - 8);
    if ( v11 == v3 + 24 )
      v8 = 0LL;
    if ( !v8 )
      return v6;
  }
  return result;
}
