__int64 __fastcall LdrFindResourceDirectory_U(__int64 a1, __int64 *a2, unsigned int a3, unsigned int **a4)
{
  return LdrpSearchResourceSection_U(a1, a2, a3, 2, a4);
}
