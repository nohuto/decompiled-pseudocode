/*
 * XREFs of MiPromoteControlAreaToStrongCode @ 0x140A385E8
 * Callers:
 *     MiLoadHotPatch @ 0x140A352A0 (MiLoadHotPatch.c)
 * Callees:
 *     MiValidateSectionCreate @ 0x14069F890 (MiValidateSectionCreate.c)
 *     MiGetSectionStrongImageReference @ 0x140A40B24 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiPromoteControlAreaToStrongCode(ULONG_PTR a1, ULONG_PTR a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rbx

  result = MiValidateSectionCreate(a2, a1, 0xFFFFFFFF, 0LL, a3 | 0x40000000u, 12, 1);
  if ( (int)result >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 96);
    result = MiGetSectionStrongImageReference(v7);
    if ( (int)result >= 0 )
    {
      *a4 = *(_QWORD *)(v7 + 56);
      return 0LL;
    }
  }
  return result;
}
