/*
 * XREFs of ?IsBetterRotationMatch@CCursorState@@CA_NW4DXGI_MODE_ROTATION@@00@Z @ 0x180276EE8
 * Callers:
 *     _lambda_4f96f9abf6f4efc73c76f9e3716c5312_::operator()_std::shared_ptr_CCursorState::ShapeData__std::shared_ptr_CCursorState::ShapeData___ @ 0x1802748D8 (_lambda_4f96f9abf6f4efc73c76f9e3716c5312_--operator()_std--shared_ptr_CCursorState--ShapeData__s.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCursorState::IsBetterRotationMatch(
        enum DXGI_MODE_ROTATION a1,
        enum DXGI_MODE_ROTATION a2,
        enum DXGI_MODE_ROTATION a3)
{
  return a1 == a3 || a2 != a3 && (a1 - a3 + 4) % 4 == 2;
}
