/*
 * XREFs of ?IsUVClampingRequired@CPassthroughEffect@@UEBA_NIIPEAW4SampleEdgeMode@Composition@UI@Windows@@0@Z @ 0x180101080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CPassthroughEffect::IsUVClampingRequired(
        CPassthroughEffect *this,
        __int64 a2,
        __int64 a3,
        enum Windows::UI::Composition::SampleEdgeMode *a4,
        enum Windows::UI::Composition::SampleEdgeMode *a5)
{
  if ( a4 )
    *(_BYTE *)a4 = 1;
  if ( a5 )
    *(_BYTE *)a5 = 1;
  return 1;
}
