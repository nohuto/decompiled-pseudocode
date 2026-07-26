/*
 * XREFs of NdisFreeBuffer @ 0x1C00BD4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisFreeBuffer(PMDL Mdl)
{
  IoFreeMdl(Mdl);
}
