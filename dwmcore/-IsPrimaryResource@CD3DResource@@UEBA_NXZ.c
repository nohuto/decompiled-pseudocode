/*
 * XREFs of ?IsPrimaryResource@CD3DResource@@UEBA_NXZ @ 0x180107620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CD3DResource::IsPrimaryResource(CD3DResource *this)
{
  return *((_BYTE *)this + 68);
}
