/*
 * XREFs of ?SetIntegerProperty@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0261E30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReadyForMarshaling@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@AEAAJPEA_N@Z @ 0x1C0261D1C (-IsReadyForMarshaling@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@AEAAJ.c)
 */

__int64 __fastcall DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::SetIntegerProperty(
        DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  *a5 = 0;
  if ( a3 != 2 )
    return 3221225485LL;
  if ( *((_QWORD *)this + 8) != a4 )
    *((_QWORD *)this + 8) = a4;
  return DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::IsReadyForMarshaling(this, a5);
}
