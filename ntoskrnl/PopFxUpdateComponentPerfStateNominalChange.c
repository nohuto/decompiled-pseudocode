/*
 * XREFs of PopFxUpdateComponentPerfStateNominalChange @ 0x140589C50
 * Callers:
 *     PopPepDeviceDState @ 0x1402B9C4C (PopPepDeviceDState.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1402F2810 (PopPepCompleteComponentIdleStateChangeActivity.c)
 * Callees:
 *     PopFxQueryCurrentComponentPerfState @ 0x1405890BC (PopFxQueryCurrentComponentPerfState.c)
 *     PopDiagTraceFxPerfNominalChange @ 0x14059141C (PopDiagTraceFxPerfNominalChange.c)
 */

_BYTE *__fastcall PopFxUpdateComponentPerfStateNominalChange(__int64 a1, int a2, char a3, int a4)
{
  int v7; // edi
  _BYTE *result; // rax
  unsigned int v9; // esi
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r14
  int v13; // edx
  __int64 v14; // [rsp+20h] [rbp-48h]
  _BYTE *v15; // [rsp+70h] [rbp+8h] BYREF
  char v16; // [rsp+78h] [rbp+10h] BYREF

  v15 = 0LL;
  v16 = 0;
  v7 = 0;
  result = *(_BYTE **)(a1 + 832);
  v9 = 0;
  v10 = *(_QWORD *)&result[8 * a2];
  v11 = *(_QWORD *)(v10 + 424);
  v12 = *(_QWORD *)(v11 + 48);
  if ( *(_DWORD *)(v11 + 144) )
  {
    do
    {
      result = PopFxQueryCurrentComponentPerfState(a1, v10, v9, 1, &v15, &v16);
      if ( v16 )
      {
        result = v15;
        ++v7;
        *(_QWORD *)(v12 + 8) = v15;
        *(_DWORD *)v12 = v9;
        v12 += 16LL;
      }
      ++v9;
    }
    while ( v9 < *(_DWORD *)(v11 + 144) );
    if ( v7 )
    {
      *(_DWORD *)(v11 + 56) = v7;
      *(_QWORD *)(v11 + 64) = MEMORY[0xFFFFF78000000008];
      LOBYTE(v13) = a3;
      v14 = *(_QWORD *)(v11 + 48);
      *(_BYTE *)(v11 + 72) = 1;
      return (_BYTE *)PopDiagTraceFxPerfNominalChange(v11, v13, a4, v7, v14);
    }
  }
  return result;
}
