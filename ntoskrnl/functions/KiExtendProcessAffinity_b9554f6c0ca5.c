__int64 __fastcall KiExtendProcessAffinity(__int64 a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  char v5; // r9
  unsigned __int16 v6; // bx
  unsigned __int16 v7; // ax
  __int64 v8; // r8
  __int64 v9; // rdx

  result = *a2;
  v5 = 0;
  v6 = 0;
  if ( (_WORD)result )
  {
    while ( v6 >= (unsigned __int16)result
         || !*(_QWORD *)&a2[4 * v6 + 4]
         || v6 >= LOWORD(KeActiveProcessors[0])
         || !*(_QWORD *)&KeActiveProcessors[2 * v6 + 2] )
    {
LABEL_18:
      result = *a2;
      if ( ++v6 >= (unsigned __int16)result )
      {
        if ( v5 )
        {
          result = KiComputeGroupMask((unsigned __int16 *)(a1 + 80));
          *(_DWORD *)(a1 + 636) = result;
        }
        return result;
      }
    }
    v7 = *(_WORD *)(a1 + 80);
    if ( v6 >= v7 )
      v8 = 0LL;
    else
      v8 = *(_QWORD *)(a1 + 8LL * v6 + 88);
    if ( v6 >= LOWORD(KeActiveProcessors[0]) )
      v9 = 0LL;
    else
      v9 = *(_QWORD *)&KeActiveProcessors[2 * v6 + 2];
    if ( v7 <= v6 )
    {
      if ( *(_WORD *)(a1 + 82) <= v6 )
        goto LABEL_16;
      *(_WORD *)(a1 + 80) = v6 + 1;
    }
    *(_QWORD *)(a1 + 8LL * v6 + 88) |= v9;
LABEL_16:
    if ( !v8 )
    {
      KiSetIdealNodeProcessByGroup(a1, 0LL, v6);
      v5 = 1;
    }
    goto LABEL_18;
  }
  return result;
}
