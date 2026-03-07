char __fastcall HsaFindDevice(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  if ( *(_DWORD *)a2 != 1 || *(_DWORD *)(a1 + 160) != *(unsigned __int16 *)(a2 + 8) )
    return 0;
  if ( a4 )
    *a4 = *(unsigned __int16 *)(a2 + 12);
  return 1;
}
