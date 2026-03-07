__int64 __fastcall DxgkCleanupPresentHistoryInternal(int a1)
{
  int PresentHistoryInternal; // esi
  unsigned int v4; // edx
  _BYTE *v5; // rbx
  unsigned int v6; // edi
  char *v7; // rcx
  _DWORD v8[2]; // [rsp+20h] [rbp-838h] BYREF
  __int64 v9; // [rsp+28h] [rbp-830h]
  _BYTE *v10; // [rsp+30h] [rbp-828h]
  unsigned int v11; // [rsp+38h] [rbp-820h]
  int v12; // [rsp+3Ch] [rbp-81Ch]
  _BYTE v13[2048]; // [rsp+40h] [rbp-818h] BYREF

  v9 = 0LL;
  v12 = 0;
  do
  {
    v11 = 0;
    v10 = v13;
    v8[0] = a1;
    v8[1] = 2048;
    PresentHistoryInternal = DxgkGetPresentHistoryInternal(v8, 0LL);
    if ( PresentHistoryInternal < 0 )
      break;
    v4 = v11;
    v5 = v13;
    v6 = 0;
    if ( !v11 )
      break;
    do
    {
      if ( *(_DWORD *)v5 == 9 && (*((_DWORD *)v5 + 8) & 4) != 0 )
      {
        v7 = (char *)*((_QWORD *)v5 + 2);
        if ( v7 )
        {
          FlipManagerConsumerAdapterCleanupTokenDiscard(v7);
          v4 = v11;
        }
      }
      ++v6;
      v5 += *((unsigned int *)v5 + 1);
    }
    while ( v6 < v4 );
  }
  while ( v4 );
  return (unsigned int)PresentHistoryInternal;
}
