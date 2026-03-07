__int64 __fastcall HvpInpageErrorFilter(ULONG_PTR *a1, int *a2)
{
  ULONG_PTR v2; // rax
  int v3; // r8d

  v2 = *a1;
  v3 = -1073741818;
  if ( *(_DWORD *)*a1 != -1073741818 )
    CmSiBugCheck(0x21uLL, *(int *)*a1, *a1, a1[1]);
  if ( *(_DWORD *)(v2 + 24) >= 2u )
    v3 = *(_DWORD *)(v2 + 48);
  *a2 = v3;
  return 1LL;
}
