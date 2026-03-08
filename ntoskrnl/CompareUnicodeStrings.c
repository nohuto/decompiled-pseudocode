/*
 * XREFs of CompareUnicodeStrings @ 0x140752340
 * Callers:
 *     RtlInsertUnicodePrefix @ 0x1407520F0 (RtlInsertUnicodePrefix.c)
 *     RtlFindUnicodePrefix @ 0x140752230 (RtlFindUnicodePrefix.c)
 * Callees:
 *     NLS_UPCASE @ 0x140267AD0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall CompareUnicodeStrings(__int64 a1, unsigned __int16 *a2)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 *v4; // rdx
  unsigned int v5; // r8d
  __int64 v6; // rbx
  __int64 Flink; // r13
  unsigned int v8; // edi
  unsigned int v9; // esi
  unsigned int v10; // r12d
  unsigned __int16 v11; // r10
  unsigned __int16 v12; // r11
  unsigned int i; // r9d
  unsigned __int16 *v14; // r14
  unsigned __int16 *v15; // r15
  unsigned __int16 v16; // r11

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v6 = *v4 >> 1;
  Flink = (__int64)CurrentServerSiloGlobals[77].Flink;
  v8 = *a2 >> 1;
  if ( (_DWORD)v6 == 1 && **((_WORD **)v4 + 1) == 92 && v8 > 1 && **((_WORD **)a2 + 1) == 92 )
    return 1LL;
  v9 = *v4 >> 1;
  if ( (unsigned int)v6 >= v8 )
    v9 = *a2 >> 1;
  if ( v5 > v9 )
    v5 = v9;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  for ( i = 0; i < v5; ++i )
  {
    v11 = *(_WORD *)(*((_QWORD *)v4 + 1) + 2LL * i);
    v12 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * i);
    if ( v11 != v12 )
      break;
  }
  if ( i == v5 )
  {
    v14 = (unsigned __int16 *)(*((_QWORD *)v4 + 1) + 2LL * i);
    v15 = (unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * i);
    if ( i >= v9 )
      goto LABEL_19;
    do
    {
      v11 = *v14++;
      v12 = *v15++;
      if ( v11 != v12 )
      {
        NLS_UPCASE(Flink, v11);
        v12 = NLS_UPCASE(Flink, v16);
        if ( v11 != v12 )
          break;
      }
      ++i;
    }
    while ( i < v9 );
  }
  if ( i < v9 )
  {
    if ( v11 == 92 )
      return 0LL;
    if ( v12 == 92 )
      return 3LL;
    if ( v11 < v12 )
      return 0LL;
    if ( v11 > v12 )
      return 3LL;
  }
LABEL_19:
  if ( v8 <= (unsigned int)v6 )
    return (unsigned int)(v8 < (unsigned int)v6) + 2;
  LOBYTE(v10) = *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * v6) == 92;
  return v10;
}
