/*
 * XREFs of ?GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z @ 0x180157C30
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158470 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?IsExpiredTombstone@@YA_NPEFBU_ITEMIDLIST@@@Z @ 0x1801594A4 (-IsExpiredTombstone@@YA_NPEFBU_ITEMIDLIST@@@Z.c)
 *     ?_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z @ 0x18015E8AC (-_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?_PhysicalPositionFromLogicalPosition@CPinList@@AEAAHH@Z @ 0x18015EB3C (-_PhysicalPositionFromLogicalPosition@CPinList@@AEAAHH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1800995EC (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 */

__int64 __fastcall GetTimestampFromPidl(const ITEMIDLIST *a1, int a2, _QWORD *a3)
{
  const struct _HIDDENITEMID *v4; // rax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  v4 = ILFindHiddenIDOn(a1, a2);
  if ( !v4 )
    return 2147943568LL;
  if ( *(_WORD *)v4 < 0x10u )
  {
    v6 = 18LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"internal\\shell\\private\\inc\\PinningTimeHelpers.h",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  if ( *((_WORD *)v4 + 1) )
  {
    v6 = 19LL;
    goto LABEL_5;
  }
  *a3 = *((_QWORD *)v4 + 1);
  return 0LL;
}
