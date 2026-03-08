/*
 * XREFs of RtlStdInitializeStackDatabase @ 0x1409B76AC
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x1409B77E8 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     InitializeSListHead @ 0x1402A8B90 (InitializeSListHead.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall RtlStdInitializeStackDatabase(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  union _SLIST_HEADER *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx

  if ( a2 && (a2 != a3 || !a1) )
    return 3221225485LL;
  v6 = 24LL * (a3 < 0x1000000 ? 5569 : 9551) + 752;
  if ( a3 <= v6 || !a1 || a2 != a3 )
    return 3221225485LL;
  *(_DWORD *)(a1 + 720) = a3 < 0x1000000 ? 5569 : 9551;
  *(_QWORD *)(a1 + 168) = a1 + a3;
  *(_QWORD *)(a1 + 184) = a1 + a3;
  *(_BYTE *)(a1 + 128) = 1;
  *(_QWORD *)(a1 + 136) = a1;
  memset((void *)(a1 + 728), 0, 24LL * (a3 < 0x1000000 ? 5569 : 9551));
  v7 = 32LL;
  v8 = (v6 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = (union _SLIST_HEADER *)(a1 + 208);
  v10 = a1 + v8;
  *(_QWORD *)(a1 + 160) = v10;
  *(_QWORD *)(a1 + 120) = v10;
  do
  {
    InitializeSListHead(v9++);
    --v7;
  }
  while ( v7 );
  *(_QWORD *)a1 = 0LL;
  v11 = 0LL;
  for ( *(_BYTE *)(a1 + 8) = 0; (unsigned int)v11 < *(_DWORD *)(a1 + 720); *(_BYTE *)(a1 + 8 * v12 + 744) = 0 )
  {
    v12 = 3 * v11;
    v11 = (unsigned int)(v11 + 1);
    *(_QWORD *)(a1 + 8 * v12 + 736) = 0LL;
  }
  *a4 = a1;
  return 0LL;
}
