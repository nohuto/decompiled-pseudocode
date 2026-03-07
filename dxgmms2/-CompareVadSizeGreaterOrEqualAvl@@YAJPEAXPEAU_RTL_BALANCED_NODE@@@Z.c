_BOOL8 __fastcall CompareVadSizeGreaterOrEqualAvl(_QWORD *a1, struct _RTL_BALANCED_NODE *a2)
{
  return *a1 > (char *)a2[1].Children[1] - (char *)a2[1].Children[0];
}
