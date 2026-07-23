/*
 * XREFs of PopIsSystemIdle @ 0x1408F1064
 * Callers:
 *     PopSystemIdleWorker @ 0x1408F1260 (PopSystemIdleWorker.c)
 * Callees:
 *     PopDiagTraceSystemIdleAssessment @ 0x1408EB964 (PopDiagTraceSystemIdleAssessment.c)
 *     PopAssessSystemIdleEvent @ 0x1408F0EC0 (PopAssessSystemIdleEvent.c)
 */

bool __fastcall PopIsSystemIdle(__int64 a1, unsigned int a2, unsigned __int64 *a3, __int64 a4)
{
  int v4; // esi
  unsigned __int64 v5; // rbx
  unsigned int i; // edi
  unsigned __int128 v11; // rax
  unsigned __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0LL;
  v4 = 0;
  v5 = -1LL;
  for ( i = 0; i < 4; ++i )
  {
    if ( (unsigned int)PopAssessSystemIdleEvent(a1, a2, &v13) )
      v4 |= 1 << i;
    if ( v5 >= v13 )
      v5 = v13;
    a1 += 56LL;
  }
  *a3 = v5;
  v11 = MEMORY[0xFFFFF78000000008] * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
  *(_DWORD *)(a4 + 8) = a2;
  *(_QWORD *)a4 = *((_QWORD *)&v11 + 1) >> 23;
  *(_DWORD *)(a4 + 12) = v4;
  *(_BYTE *)(a4 + 16) = v4 == 0;
  PopDiagTraceSystemIdleAssessment(a2, v4, v4 == 0);
  return v4 == 0;
}
