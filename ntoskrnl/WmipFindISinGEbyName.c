/*
 * XREFs of WmipFindISinGEbyName @ 0x1408688F8
 * Callers:
 *     WmipMangleInstanceName @ 0x1408687EC (WmipMangleInstanceName.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     _wtoi @ 0x1403D4230 (_wtoi.c)
 *     wcsncmp @ 0x1403D5ED0 (wcsncmp.c)
 *     WmipReferenceEntry @ 0x14069C27C (WmipReferenceEntry.c)
 *     WmipIsNumber @ 0x14079BD04 (WmipIsNumber.c)
 */

ULONG_PTR __fastcall WmipFindISinGEbyName(__int64 a1, const wchar_t *a2, unsigned int *a3)
{
  unsigned __int64 v3; // rsi
  __int64 v7; // rbp
  ULONG_PTR i; // rbx
  int v9; // r8d
  int v10; // eax
  const wchar_t *v11; // rdx
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // r10d
  const wchar_t *v16; // rdx
  size_t v17; // rdi
  wchar_t *v18; // rdi
  unsigned int v19; // eax
  unsigned int v20; // r9d
  unsigned int v21; // r10d

  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v7 = a1 + 56;
  for ( i = *(_QWORD *)(a1 + 56); ; i = *(_QWORD *)i )
  {
    if ( i == v7 )
    {
      i = 0LL;
      goto LABEL_15;
    }
    v13 = *(_DWORD *)(i + 16);
    if ( (v13 & 1) == 0 )
      break;
    v16 = (const wchar_t *)(*(_QWORD *)(i + 88) + 4LL);
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    if ( v17 < v3 && !wcsncmp(a2, v16, v17) )
    {
      v18 = (wchar_t *)&a2[v17];
      v19 = wtoi(v18);
      v20 = v19;
      v21 = **(_DWORD **)(i + 88);
      if ( v19 >= v21 && v19 < v21 + *(_DWORD *)(i + 72) && (v19 || WmipIsNumber(v18)) )
      {
        *a3 = v20 - v21;
        goto LABEL_17;
      }
    }
LABEL_8:
    ;
  }
  if ( (v13 & 2) == 0 )
    goto LABEL_8;
  v14 = *(_DWORD *)(i + 72);
  v12 = 0;
  if ( !v14 )
    goto LABEL_8;
  while ( 1 )
  {
    v11 = a2;
    do
    {
      v9 = *(const wchar_t *)((char *)v11 + *(_QWORD *)(*(_QWORD *)(i + 88) + 8LL * v12) - (_QWORD)a2);
      v10 = *v11 - v9;
      if ( v10 )
        break;
      ++v11;
    }
    while ( v9 );
    if ( !v10 )
      break;
    if ( ++v12 >= v14 )
      goto LABEL_8;
  }
  *a3 = v12;
LABEL_17:
  WmipReferenceEntry(i);
LABEL_15:
  KeReleaseMutex(&WmipSMMutex, 0);
  return i;
}
