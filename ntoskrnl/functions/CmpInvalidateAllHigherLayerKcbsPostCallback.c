__int64 __fastcall CmpInvalidateAllHigherLayerKcbsPostCallback(ULONG_PTR a1, __int64 a2, int *a3)
{
  CmpInvalidateSubtree(a1, *a3, a3[1], a2, 0LL);
  if ( (a3[1] & 2) != 0 )
  {
    CmpMarkKeyUnbacked(a1, a2);
    CmpFlushNotifiesOnKeyBodyList(a1, (unsigned int)*a3, a2, 1);
    CmpDiscardKcb(a1);
  }
  return 0LL;
}
