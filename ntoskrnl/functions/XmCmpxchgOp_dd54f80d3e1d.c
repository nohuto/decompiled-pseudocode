__int64 __fastcall XmCmpxchgOp(__int64 a1)
{
  int v1; // eax
  int v3; // edx
  unsigned __int16 *v4; // rcx
  int v5; // r10d
  int v6; // eax
  unsigned int v7; // eax
  _DWORD *v8; // r9
  int v9; // r10d

  v1 = *(_DWORD *)(a1 + 120);
  v3 = *(_DWORD *)(a1 + 104);
  v4 = (unsigned __int16 *)(a1 + 24);
  if ( v1 )
  {
    if ( v1 == 3 )
      v5 = *(_DWORD *)v4;
    else
      v5 = *v4;
  }
  else
  {
    v5 = *(unsigned __int8 *)v4;
  }
  v6 = *(_DWORD *)(a1 + 16);
  if ( v3 == v5 )
  {
    v3 = *(_DWORD *)(a1 + 108);
    v7 = v6 | 0x40;
  }
  else
  {
    *(_QWORD *)(a1 + 88) = v4;
    v7 = v6 & 0xFFFFFFBF;
  }
  *(_DWORD *)(a1 + 16) = v7;
  XmStoreResult(a1, v3);
  v8[27] = v8[26];
  v8[26] = v9;
  return XmSubOperands(v8, 0);
}
