/*
 * XREFs of RtlQueryProcessBackTraceInformation @ 0x1800D75B0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800D7740 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     memmove @ 0x1800A4340 (memmove.c)
 *     RtlpCommitQueryDebugInfo @ 0x1800D88C8 (RtlpCommitQueryDebugInfo.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x1800D8B1C (RtlpDeCommitQueryDebugInfo.c)
 */

__int64 __fastcall RtlQueryProcessBackTraceInformation(__int64 a1)
{
  __int64 v2; // rbx
  __int64 DebugInfo; // rax
  __int64 v5; // r14
  int v6; // eax
  __int64 v7; // r12
  int v8; // edi
  int v9; // esi
  _QWORD *v10; // r13
  _WORD *v12; // rdx

  v2 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
    return 0LL;
  DebugInfo = RtlpCommitQueryDebugInfo(a1, 24LL);
  v5 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  *(_BYTE *)(v2 + 129) = 1;
  *(_QWORD *)DebugInfo = *(_QWORD *)(v2 + 152) - *(_QWORD *)(v2 + 136);
  *(_QWORD *)(DebugInfo + 8) = *(_QWORD *)(v2 + 184) - *(_QWORD *)(v2 + 136);
  *(_DWORD *)(DebugInfo + 16) = *(_DWORD *)(v2 + 176);
  v6 = *(_DWORD *)(v2 + 180);
  *(_DWORD *)(v5 + 20) = v6;
  v7 = RtlpCommitQueryDebugInfo(a1, (unsigned int)(272 * v6));
  if ( v7 )
  {
    v8 = 0;
    v9 = *(_DWORD *)(v2 + 180);
    v10 = *(_QWORD **)(v2 + 184);
    while ( v9-- )
    {
      v12 = (_WORD *)*--v10;
      *(_QWORD *)v7 = 0LL;
      *(_DWORD *)(v7 + 8) = v12[4] & 0x7FF;
      *(_WORD *)(v7 + 12) = v12[6];
      *(_WORD *)(v7 + 14) = v12[7];
      memmove((void *)(v7 + 16), v12 + 8, 8LL * (unsigned __int16)v12[7]);
      v7 += 272LL;
    }
  }
  else
  {
    v8 = -1073741801;
    RtlpDeCommitQueryDebugInfo(a1, v5, 24LL);
  }
  *(_BYTE *)(v2 + 129) = 0;
  if ( v8 >= 0 )
    *(_QWORD *)(a1 + 104) = v5;
  return (unsigned int)v8;
}
