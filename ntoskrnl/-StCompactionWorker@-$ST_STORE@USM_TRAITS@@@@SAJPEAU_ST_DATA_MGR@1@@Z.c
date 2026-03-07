__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionWorker(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v5; // eax
  int v6; // edi
  __int64 v7; // r8

  v3 = *(_BYTE *)(a1 + 1904);
  if ( (v3 & 4) != 0 )
  {
    *(_BYTE *)(a1 + 1904) = v3 & 0xFB;
  }
  else
  {
    *(_BYTE *)(a1 + 1904) = v3 & 0xFC;
    v5 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL, a3);
    if ( v5 != 2 )
    {
LABEL_3:
      v6 = 0;
      goto LABEL_11;
    }
  }
  *(_BYTE *)(a1 + 1904) |= 3u;
  while ( 1 )
  {
    v6 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(a1, 1);
    v5 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL, v7);
    if ( v6 < 0 )
      break;
    if ( v5 != 2 )
      goto LABEL_3;
  }
  if ( v5 == 2 )
    v5 = 1;
LABEL_11:
  *(_BYTE *)(a1 + 1904) &= 0xFCu;
  if ( v5 )
    ST_STORE<SM_TRAITS>::StQueueCompaction(a1, v5);
  return (unsigned int)v6;
}
