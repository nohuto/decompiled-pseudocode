/*
 * XREFs of MiInitializeColorBase @ 0x14020FE2C
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14020F130 (MiMakeZeroedPageTablesEx.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038B664 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x14080B624 (MmCreateShadowMapping.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiGetSessionVm @ 0x14036C17C (MiGetSessionVm.c)
 */

__int64 __fastcall MiInitializeColorBase(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 *SessionVm; // rcx

  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
  {
    SessionVm = (unsigned __int64 *)MiGetSessionVm();
  }
  else if ( a1 <= 0x7FFFFFFEFFFFLL
         || a1 <= qword_140C66CF0 && a1 >= qword_140C6A1D8
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
