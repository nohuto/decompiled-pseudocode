void __fastcall inv_cmap(__int64 a1, struct RGBX *a2, __int64 a3, unsigned int *a4, unsigned __int8 *a5)
{
  int v7; // edi
  __int64 v8; // rax
  int v9; // r9d

  v7 = a1;
  v8 = SGDGetSessionState(a1);
  INVCMAP::inv_cmap((INVCMAP *)(*(_QWORD *)(v8 + 32) + 19928LL), v7, a2, v9, a4, a5);
}
