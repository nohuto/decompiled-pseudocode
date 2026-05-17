/*
 * XREFs of ?RtlpFlsCloneComplete@@YAXPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x1800DF2C4
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009BA40 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009BB80 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6340 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpFlsCloneComplete(struct _RTLP_FLS_CONTEXT *a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v5; // edi
  unsigned int v6; // ecx
  unsigned int v7; // edx
  volatile signed __int64 *v8; // rcx

  v2 = RtlpFlsContext;
  v3 = (unsigned int)qword_18016D348;
  if ( a2 )
    v2 = 1LL;
  RtlpFlsContext = v2;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
  if ( (_DWORD)v3 )
  {
    v5 = v3 + 16;
    do
    {
      _BitScanReverse(&v6, v5);
      v7 = v5 ^ (1 << v6);
      v8 = (volatile signed __int64 *)*((_QWORD *)&RtlpFlsContext + v6 - 3);
      if ( v8 )
        v8 += 2 * v7 + 1;
      if ( a2 )
        *v8 = 1LL;
      RtlReleaseSRWLockExclusive(v8);
      --v5;
      --v3;
    }
    while ( v3 );
  }
}
