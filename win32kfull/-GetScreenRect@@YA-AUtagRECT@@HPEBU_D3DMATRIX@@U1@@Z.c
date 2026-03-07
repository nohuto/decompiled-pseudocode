struct tagRECT *__fastcall GetScreenRect(
        struct tagRECT *__return_ptr retstr,
        int a2,
        const struct _D3DMATRIX *a3,
        struct tagRECT *a4)
{
  struct tagRECT *result; // rax

  if ( a2 && a3 )
    TransformRect(a3, a4, 0);
  result = retstr;
  *retstr = *a4;
  return result;
}
