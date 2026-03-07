void __fastcall MiRewritePteWithLockBit(__int64 a1, __int64 *a2, __int64 a3)
{
  MiLockPageTableInternal(a1, (unsigned __int64)a2, 0);
  MiUnlockNestedPageTableWritePte(a1, a2, a3, 0);
}
