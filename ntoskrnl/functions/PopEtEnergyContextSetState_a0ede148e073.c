__int64 __fastcall PopEtEnergyContextSetState(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  __int64 v3; // rbp
  __int64 v4; // rbx
  char v7; // r14
  int v8; // ecx
  int v9; // edi
  unsigned int v10; // edi
  _DWORD *v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // rbx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2[3];
  v3 = *(_QWORD *)(a1 + 2280);
  v4 = 0LL;
  v16 = 0LL;
  v7 = 0;
  if ( (v2 & 1) == 0 )
    goto LABEL_2;
  v12 = a2 + 4;
  v13 = -1LL;
  do
    ++v13;
  while ( *((_WORD *)v12 + v13) );
  if ( !v13 || (v14 = PopEtStringIntern(v12, v13, &v16), v4 = v16, v10 = v14, v14 >= 0) )
  {
    if ( *(_QWORD *)(v3 + 456) != v4 )
    {
      PopEtStringSet(v3 + 456, v4);
      v7 = 1;
    }
LABEL_2:
    v8 = *(_DWORD *)(v3 + 464);
    v9 = a2[1] | (unsigned __int16)(v8 & ~(unsigned __int16)*a2);
    if ( (unsigned __int16)v8 == v9 )
    {
      if ( !v7 )
      {
LABEL_5:
        v10 = 0;
        goto LABEL_6;
      }
    }
    else
    {
      v15 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlStateDurationUpdate((unsigned __int64 *)(v3 + 120), (v9 & 4) != 0, v15);
      RtlStateDurationUpdate((unsigned __int64 *)(v3 + 416), (v9 & 8) != 0, v15);
      v4 = v16;
      *(_WORD *)(v3 + 464) = v9;
    }
    PopEtEnergyContextProcessStateUpdate(a1);
    goto LABEL_5;
  }
LABEL_6:
  if ( v4 )
    RtlInternEntryDereference(PopEtGlobals + 56, v4);
  return v10;
}
