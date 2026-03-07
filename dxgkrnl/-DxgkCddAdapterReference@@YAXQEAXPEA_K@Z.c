void __fastcall DxgkCddAdapterReference(volatile signed __int64 *a1, unsigned __int64 *a2)
{
  _InterlockedIncrement64(a1 + 3);
  *a2 = -1LL;
}
