__int64 __fastcall AlpcpExposeContextAttribute32(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  _QWORD *v4; // rax
  int v6; // r8d
  int v7; // eax
  __int64 result; // rax

  v4 = (_QWORD *)(a2 + 64);
  if ( *(_QWORD *)(a2 + 56) == a1 || *v4 == a1 )
    v6 = *(_DWORD *)(a2 + 128);
  else
    v6 = *(_DWORD *)(a2 + 120);
  *a3 = v6;
  if ( *(_QWORD *)(a2 + 56) == a1 || *v4 == a1 )
    v7 = *(_DWORD *)(a2 + 72);
  else
    v7 = *(_DWORD *)(a2 + 44);
  a3[2] = v7;
  if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
    result = *(unsigned int *)(a2 + 104);
  else
    result = *(unsigned int *)(a2 + 112);
  a3[1] = result;
  if ( v6 )
    *a4 |= 0x20000000u;
  return result;
}
