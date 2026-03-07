__int64 __fastcall CompareVadAddressInsideAvl(struct _RTL_BALANCED_NODE **a1, struct _RTL_BALANCED_NODE *a2)
{
  if ( *a1 >= a2[1].Children[0] )
    return *a1 >= a2[1].Children[1];
  else
    return 0xFFFFFFFFLL;
}
