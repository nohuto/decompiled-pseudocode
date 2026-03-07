struct tagRECT *__fastcall WindowMargins::ReduceRect(
        struct tagRECT *this,
        struct tagRECT *__return_ptr retstr,
        const struct tagWND *a3,
        const struct tagRECT *a4)
{
  __int64 WindowMargins; // rax
  int v7; // edx
  struct tagRECT *result; // rax

  WindowMargins = WindowMargins::_anonymous_namespace_::GetWindowMargins(retstr, (unsigned int)a4);
  this->left = *(_DWORD *)a3 + (__int16)WindowMargins;
  v7 = *((_DWORD *)a3 + 2) - SWORD1(WindowMargins);
  this->top = *((_DWORD *)a3 + 1) + SWORD2(WindowMargins);
  this->bottom = *((_DWORD *)a3 + 3) - SHIWORD(WindowMargins);
  result = this;
  this->right = v7;
  return result;
}
