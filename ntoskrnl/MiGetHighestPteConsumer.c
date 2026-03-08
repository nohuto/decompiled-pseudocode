/*
 * XREFs of MiGetHighestPteConsumer @ 0x14065EC5C
 * Callers:
 *     MiIssueNoPtesBugcheck @ 0x14062CC28 (MiIssueNoPtesBugcheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetHighestPteConsumer(unsigned __int64 *a1)
{
  unsigned int v2; // eax
  _QWORD *v3; // rdx
  __int64 v4; // r10
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  void **v8; // r14
  char *v9; // rbx
  __int64 v10; // r12
  char *i; // rcx
  int v12; // r11d
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbp
  __int64 v16; // rax

  *a1 = 0LL;
  if ( (dword_140D1D1CC & 1) == 0 || byte_140C6813D )
    return 0LL;
  v2 = 0;
  v3 = &unk_140C69EB0;
  do
  {
    if ( (_QWORD *)*v3 != v3 )
      break;
    ++v2;
    v3 += 2;
  }
  while ( v2 < 0x10 );
  if ( v2 == 16 || !PsLoadedModuleList )
    return 0LL;
  v4 = (__int64)*(&PsLoadedModuleList + 1);
  v5 = 0LL;
  v6 = 0LL;
  while ( (PVOID *)v4 != &PsLoadedModuleList )
  {
    v7 = 0LL;
    v8 = (void **)&unk_140C69EB0;
    v9 = (char *)&unk_140C69EB0;
    v10 = 16LL;
    do
    {
      for ( i = (char *)*v8; i != v9; i = *(char **)i )
      {
        v12 = *((_DWORD *)i + 16);
        v13 = *((_QWORD *)i + 10);
        if ( (v12 & 2) == 0 )
        {
          if ( (v14 = *(_QWORD *)(v4 + 48), v13 >= v14) && v13 < v14 + *(unsigned int *)(v4 + 64)
            || (v15 = *((_QWORD *)i + 11), v15 >= v14) && v15 < v14 + *(unsigned int *)(v4 + 64) )
          {
            v7 += *((_QWORD *)i + 3);
            *((_DWORD *)i + 16) = v12 | 2;
          }
        }
      }
      v9 += 16;
      v8 += 2;
      --v10;
    }
    while ( v10 );
    v16 = v4;
    v4 = *(_QWORD *)(v4 + 8);
    if ( v7 <= v5 )
    {
      v16 = v6;
      v7 = v5;
    }
    v6 = v16;
    v5 = v7;
  }
  *a1 = v5;
  return v6;
}
