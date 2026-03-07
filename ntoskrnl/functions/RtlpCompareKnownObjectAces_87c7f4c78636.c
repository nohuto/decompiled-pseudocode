bool __fastcall RtlpCompareKnownObjectAces(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 v3; // rdx
  unsigned int v5; // edi
  _DWORD *v6; // r9
  unsigned __int8 *v7; // r8
  _DWORD *v8; // rcx
  unsigned int v9; // ebx
  _DWORD *v10; // rdx
  bool v12; // zf

  v3 = *a2;
  if ( *((_BYTE *)&RtlBaseAceType + v3) != *((_BYTE *)&RtlBaseAceType + *a1)
    || *((_BYTE *)RtlIsSystemAceType + v3) && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
  {
    return 0;
  }
  v5 = *((_DWORD *)a2 + 2) & 1;
  v6 = (_DWORD *)((unsigned __int64)(a2 + 12) & -(__int64)(v5 != 0));
  if ( (*((_DWORD *)a2 + 2) & 2) != 0 )
    v7 = &a2[16 * v5 + 12];
  else
    v7 = 0LL;
  v8 = a1 + 12;
  v9 = *((_DWORD *)a1 + 2) & 1;
  v10 = (_DWORD *)((unsigned __int64)(a1 + 12) & -(__int64)(v9 != 0));
  if ( (*((_DWORD *)a1 + 2) & 2) != 0 )
  {
    if ( v9 )
      v8 = a1 + 28;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v7 )
  {
    if ( !v8
      || *(_DWORD *)v7 != *v8
      || *((_DWORD *)v7 + 1) != v8[1]
      || *((_DWORD *)v7 + 2) != v8[2]
      || *((_DWORD *)v7 + 3) != v8[3] )
    {
      return 0;
    }
  }
  else if ( v8 )
  {
    return 0;
  }
  if ( v6 )
  {
    if ( !v10
      || *v6 != *v10
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 4) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 4)
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 8) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 8) )
    {
      return 0;
    }
    v12 = *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 0xC) == *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 0xC);
  }
  else
  {
    v12 = v10 == 0LL;
  }
  return v12
      && RtlEqualSid(
           &a2[16 * v5 + 12 + ((*((_DWORD *)a2 + 2) & 2) != 0 ? 0x10 : 0)],
           &a1[16 * v9 + 12 + ((*((_DWORD *)a1 + 2) & 2) != 0 ? 0x10 : 0)]);
}
