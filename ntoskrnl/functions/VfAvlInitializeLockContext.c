void __fastcall VfAvlInitializeLockContext(__int64 a1, int a2)
{
  *(_OWORD *)a1 = 0LL;
  if ( !a2 )
    *(_BYTE *)(a1 + 9) = 4;
}
