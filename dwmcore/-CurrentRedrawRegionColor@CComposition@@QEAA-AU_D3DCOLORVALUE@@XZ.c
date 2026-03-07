struct _D3DCOLORVALUE *__fastcall CComposition::CurrentRedrawRegionColor(
        CComposition *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  struct CComposition *v2; // r8
  __int64 v3; // rax
  int *v4; // rcx
  struct _D3DCOLORVALUE *result; // rax

  v2 = g_pComposition;
  v3 = *((_QWORD *)g_pComposition + 62);
  v4 = (int *)((char *)g_pComposition + 1208);
  if ( v3 != *((_QWORD *)g_pComposition + 152) )
  {
    *((_QWORD *)g_pComposition + 152) = v3;
    *v4 = ((unsigned __int8)*v4 + 1) & 3;
  }
  result = retstr;
  *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)((char *)v2 + 16 * (unsigned int)*v4 + 1144);
  return result;
}
