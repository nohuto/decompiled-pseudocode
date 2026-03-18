/*
 * XREFs of MiInitializeColorBase @ 0x140211FB4
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x140214330 (MiMakeZeroedPageTablesEx.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038DB24 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x140820130 (MmCreateShadowMapping.c)
 * Callees:
 *     MiGetSessionVm @ 0x14020B13C (MiGetSessionVm.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MiInitializePageColorBase @ 0x1402E1690 (MiInitializePageColorBase.c)
 */

__int64 __fastcall MiInitializeColorBase(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 *SessionVm; // rcx

  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
  {
    SessionVm = (unsigned __int64 *)MiGetSessionVm();
  }
  else if ( a1 <= 0x7FFFFFFEFFFFLL
         || a1 <= qword_140C67170 && a1 >= qword_140C6A658
         || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    SessionVm = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  }
  else
  {
    SessionVm = 0LL;
  }
  return MiInitializePageColorBase(SessionVm, a2, a3);
}
