char __fastcall I_MinCryptIsCertificateHashRevokedV2(int a1, const void *a2, unsigned int a3, _QWORD *a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // r10
  unsigned int v11; // eax
  __int64 v12; // rdi
  char *v13; // rax

  if ( !qword_140D530E0 )
    return 0;
  v5 = a1 - 32771;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 8;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 != 1 )
            return 0;
          v9 = 144LL;
          v10 = 152LL;
        }
        else
        {
          v9 = 128LL;
          v10 = 136LL;
        }
      }
      else
      {
        v9 = 112LL;
        v10 = 120LL;
      }
    }
    else
    {
      v9 = 96LL;
      v10 = 104LL;
    }
  }
  else
  {
    v9 = 80LL;
    v10 = 88LL;
  }
  v11 = *(_DWORD *)(v9 + qword_140D530E0);
  if ( !v11 )
    return 0;
  v12 = a3;
  v13 = (char *)bsearch_s(
                  a2,
                  *(const void **)(v10 + qword_140D530E0),
                  v11 / (a3 + 12),
                  a3 + 12,
                  I_MinCryptHashSearchCompare,
                  (void *)a3);
  if ( !v13 )
    return 0;
  if ( a4 )
    *a4 = *(_QWORD *)&v13[v12];
  return 1;
}
