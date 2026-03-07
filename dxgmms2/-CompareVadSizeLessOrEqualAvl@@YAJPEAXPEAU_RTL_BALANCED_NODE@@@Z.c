__int64 __fastcall CompareVadSizeLessOrEqualAvl(_QWORD *a1, struct _RTL_BALANCED_NODE *a2)
{
  return (unsigned int)-(*a1 < (char *)a2[1].Children[1] - (char *)a2[1].Children[0]);
}
