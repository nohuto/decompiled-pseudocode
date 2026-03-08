/*
 * XREFs of MiLogRetpolineImageLoadEvents @ 0x140784A44
 * Callers:
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MiApplyBootLoadedDriversFixups @ 0x140B3ACB4 (MiApplyBootLoadedDriversFixups.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x1402F4538 (RtlIsImageFullyRetpolined.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140850640 (MiLogNonRetpolineImageLoadEvent.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x140A31548 (MiConstructNonRetpolineImageLoadRecord.c)
 */

_QWORD *__fastcall MiLogRetpolineImageLoadEvents(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx

  result = (_QWORD *)RtlIsImageFullyRetpolined(*(_QWORD *)(a1 + 48));
  if ( !(_DWORD)result )
  {
    if ( *(_QWORD *)&qword_140C69568 )
    {
      return (_QWORD *)MiLogNonRetpolineImageLoadEvent(
                         a1 + 88,
                         *(unsigned int *)(a1 + 120),
                         *(unsigned int *)(a1 + 156));
    }
    else
    {
      result = (_QWORD *)MiConstructNonRetpolineImageLoadRecord(a1);
      if ( result )
      {
        v3 = (_QWORD *)qword_140C654F8;
        if ( *(PVOID **)qword_140C654F8 != &qword_140C654F0 )
          __fastfail(3u);
        *result = &qword_140C654F0;
        result[1] = v3;
        *v3 = result;
        qword_140C654F8 = (__int64)result;
      }
    }
  }
  return result;
}
