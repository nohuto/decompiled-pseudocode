/*
 * XREFs of RtlpCompareKnownObjectAces @ 0x140913F2C
 * Callers:
 *     RtlpIsDuplicateAce @ 0x14064F3B0 (RtlpIsDuplicateAce.c)
 * Callees:
 *     RtlEqualSid @ 0x14026A980 (RtlEqualSid.c)
 */

bool __fastcall RtlpCompareKnownObjectAces(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  _DWORD *v6; // r9
  int v7; // esi
  unsigned __int8 *v8; // r8
  unsigned int v9; // edi
  _DWORD *v10; // rdx
  unsigned __int8 *v11; // rcx

  v4 = *a2;
  if ( *((_BYTE *)&RtlBaseAceType + v4) != *((_BYTE *)&RtlBaseAceType + *a1)
    || *((_BYTE *)&RtlIsSystemAceType + v4) && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
  {
    return 0;
  }
  v5 = *((_DWORD *)a2 + 2) & 1;
  v6 = (_DWORD *)((unsigned __int64)(a2 + 12) & -(__int64)(v5 != 0));
  v7 = *((_DWORD *)a2 + 2) & 2;
  if ( v7 )
    v8 = &a2[16 * v5 + 12];
  else
    v8 = 0LL;
  v9 = *((_DWORD *)a1 + 2) & 1;
  v10 = (_DWORD *)((unsigned __int64)(a1 + 12) & -(__int64)(v9 != 0));
  if ( (*((_DWORD *)a1 + 2) & 2) != 0 )
    v11 = &a1[16 * v9 + 12];
  else
    v11 = 0LL;
  if ( v8 )
  {
    if ( !v11
      || *(_DWORD *)v8 != *(_DWORD *)v11
      || *((_DWORD *)v8 + 1) != *((_DWORD *)v11 + 1)
      || *((_DWORD *)v8 + 2) != *((_DWORD *)v11 + 2)
      || *((_DWORD *)v8 + 3) != *((_DWORD *)v11 + 3) )
    {
      return 0;
    }
  }
  else if ( v11 )
  {
    return 0;
  }
  if ( v6 )
  {
    if ( !v10
      || *v6 != *v10
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 4) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 4)
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 8) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 8)
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 0xC) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 0xC) )
    {
      return 0;
    }
  }
  else if ( v10 )
  {
    return 0;
  }
  return RtlEqualSid(
           &a2[16 * v5 + 12 + (v7 != 0 ? 0x10 : 0)],
           &a1[16 * v9 + 12 + ((*((_DWORD *)a1 + 2) & 2) != 0 ? 0x10 : 0)]) != 0;
}
