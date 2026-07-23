/*
 * XREFs of PpmAllocateQueryTable @ 0x1408F5BC0
 * Callers:
 *     PpmRegisterSpmSettings @ 0x1408F6250 (PpmRegisterSpmSettings.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char *__fastcall PpmAllocateQueryTable(__int64 a1)
{
  char *PoolWithTag; // rax
  char *v3; // rbx
  char *v4; // rdx
  __int64 v5; // r9
  wchar_t **v6; // r8
  char *v7; // rcx
  wchar_t *v8; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x4E8uLL, 0x704D5053u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x4E8uLL);
    v4 = v3 + 1176;
    v5 = 20LL;
    v6 = &PpmPolicyAliasList;
    v7 = v3 + 24;
    do
    {
      v8 = *v6;
      v6 += 2;
      *(_QWORD *)v7 = v4;
      v4 += 4;
      *((_QWORD *)v7 - 1) = v8;
      *((_QWORD *)v7 + 2) = a1;
      *((_DWORD *)v7 + 6) = 4;
      *((_DWORD *)v7 + 2) = 67108868;
      *((_DWORD *)v7 - 4) = 288;
      v7 += 56;
      --v5;
    }
    while ( v5 );
  }
  return v3;
}
