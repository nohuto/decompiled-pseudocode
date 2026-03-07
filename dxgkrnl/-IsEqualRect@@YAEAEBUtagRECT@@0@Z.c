bool __fastcall IsEqualRect(const struct tagRECT *a1, const struct tagRECT *a2)
{
  return a1->left == a2->left && a1->top == a2->top && a1->right == a2->right && a1->bottom == a2->bottom;
}
