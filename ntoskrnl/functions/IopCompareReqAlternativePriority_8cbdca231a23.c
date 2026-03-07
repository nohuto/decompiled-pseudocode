__int64 __fastcall IopCompareReqAlternativePriority(_DWORD **a1, _DWORD **a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rcx
  unsigned int v4; // edx

  v2 = *a1;
  v3 = *a2;
  if ( **a2 != *v2 )
    return *v3 < *v2 ? 1 : -1;
  v4 = v2[1];
  if ( v4 > v3[1] || v4 >= v3[1] && v2 >= v3 )
    return 1LL;
  else
    return 0xFFFFFFFFLL;
}
