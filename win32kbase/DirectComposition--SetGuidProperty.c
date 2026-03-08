/*
 * XREFs of DirectComposition::SetGuidProperty @ 0x1C0261DEC
 * Callers:
 *     ?SetBufferProperty@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0261D90 (-SetBufferProperty@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAAJPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::SetGuidProperty(_OWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax

  if ( a2 != 16 )
    return 3221225485LL;
  result = *a3;
  if ( !*a3 )
    result = a3[1];
  if ( result )
    return 3221225485LL;
  *(_OWORD *)a3 = *a1;
  return result;
}
