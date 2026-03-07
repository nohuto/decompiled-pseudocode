__int64 __fastcall DxgkWslCreateSynchronizationObject(ULONG64 a1, UINT64 a2)
{
  return DxgkCreateSynchronizationObjectImpl(a1, 1u, 1LL, 0LL, a2);
}
