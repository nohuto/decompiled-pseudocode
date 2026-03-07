__int64 __fastcall MiQueueCoreWorkingSetEntries(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r9
  unsigned int v5; // esi
  int v7; // eax
  __int16 v8; // ax
  char v10; // al

  v3 = *(_BYTE *)(a1 + 13);
  v5 = a2;
  if ( (v3 & 5) != 4 || (v3 & 2) != 0 )
    return 0LL;
  v7 = *(unsigned __int16 *)(a1 + 10);
  if ( (_WORD)v7 )
  {
    if ( v7 + *(unsigned __int16 *)(a1 + 8) == (((unsigned int)a2 >> 3) & 0x1FF) )
    {
      if ( *(__int64 *)(a3 + 40) >= 0 )
      {
        if ( (v3 & 0x10) != 0 )
          goto LABEL_7;
      }
      else if ( (v3 & 0x10) == 0 )
      {
        goto LABEL_7;
      }
    }
    MiEmptyDeferredWorkingSetEntries(a1, a2, a3);
  }
LABEL_7:
  v8 = *(_WORD *)(a1 + 10);
  if ( v8 )
  {
    *(_WORD *)(a1 + 10) = v8 + 1;
  }
  else
  {
    v10 = *(_BYTE *)(a1 + 13);
    *(_WORD *)(a1 + 10) = 1;
    *(_WORD *)(a1 + 8) = (v5 >> 3) & 0x1FF;
    if ( *(__int64 *)(a3 + 40) >= 0 )
      *(_BYTE *)(a1 + 13) = v10 | 0x10;
    else
      *(_BYTE *)(a1 + 13) = v10 & 0xEF;
  }
  return 1LL;
}
