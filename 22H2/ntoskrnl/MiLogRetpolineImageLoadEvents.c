/*
 * XREFs of MiLogRetpolineImageLoadEvents @ 0x14075C4B0
 * Callers:
 *     MiFinalizeImageRetpolineState @ 0x14075C478 (MiFinalizeImageRetpolineState.c)
 *     MiReloadBootLoadedDrivers @ 0x140A4F9F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x140372608 (RtlIsImageFullyRetpolined.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x14075F41C (MiLogNonRetpolineImageLoadEvent.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x1407D021C (MiConstructNonRetpolineImageLoadRecord.c)
 */

_QWORD *__fastcall MiLogRetpolineImageLoadEvents(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx

  result = (_QWORD *)RtlIsImageFullyRetpolined(*(void **)(a1 + 48));
  if ( !(_DWORD)result )
  {
    if ( *(_QWORD *)&qword_140C4EEE0 )
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
        v3 = (_QWORD *)qword_140C4CC80;
        if ( *(PVOID **)qword_140C4CC80 != &qword_140C4CC78 )
          __fastfail(3u);
        *result = &qword_140C4CC78;
        result[1] = v3;
        *v3 = result;
        qword_140C4CC80 = (__int64)result;
      }
    }
  }
  return result;
}
