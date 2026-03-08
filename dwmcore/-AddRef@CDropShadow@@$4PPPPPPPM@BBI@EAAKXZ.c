/*
 * XREFs of ?AddRef@CDropShadow@@$4PPPPPPPM@BBI@EAAKXZ @ 0x180119C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDropShadow::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - *(int *)(a1 - 4) - 280));
}
