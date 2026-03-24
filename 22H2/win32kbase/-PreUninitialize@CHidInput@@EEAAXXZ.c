/*
 * XREFs of ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C0005E90
 * Callers:
 *     <none>
 * Callees:
 *     RIMRemoveInputOfType @ 0x1C0005EB0 (RIMRemoveInputOfType.c)
 */

void __fastcall CHidInput::PreUninitialize(CHidInput *this)
{
  RIMRemoveInputOfType(*((_QWORD *)this + 1), 60LL);
}
