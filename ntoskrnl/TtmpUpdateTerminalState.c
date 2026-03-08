/*
 * XREFs of TtmpUpdateTerminalState @ 0x1409A8CC8
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x1409A82BC (TtmiSessionTerminalListWorker.c)
 * Callees:
 *     TtmiLogTerminalStateMachine @ 0x1409A7B44 (TtmiLogTerminalStateMachine.c)
 *     TtmiResetInactivityTimer @ 0x1409A8198 (TtmiResetInactivityTimer.c)
 *     TtmpResetEvaluationTimer @ 0x1409A8964 (TtmpResetEvaluationTimer.c)
 *     TtmpTsmIterate @ 0x1409A8BDC (TtmpTsmIterate.c)
 */

char __fastcall TtmpUpdateTerminalState(__int64 a1, __int64 a2, char *a3, char *a4)
{
  __int64 v7; // r14
  int v8; // eax
  int v9; // esi
  int v10; // eax
  __int64 v11; // rax
  int v12; // r8d
  unsigned int v13; // edx
  BOOL v14; // ecx
  char v15; // al
  int v16; // r8d
  int v17; // eax
  int v18; // ecx
  char v19; // dl
  __int128 v21; // [rsp+20h] [rbp-60h] BYREF
  __int128 v22; // [rsp+30h] [rbp-50h]
  int v23[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24; // [rsp+48h] [rbp-38h]
  __int64 v25; // [rsp+50h] [rbp-30h]
  __int64 v26; // [rsp+58h] [rbp-28h]
  __int64 v27; // [rsp+60h] [rbp-20h]
  char v28; // [rsp+68h] [rbp-18h]
  bool v29; // [rsp+69h] [rbp-17h]
  __int16 v30; // [rsp+6Ah] [rbp-16h]
  int v31; // [rsp+6Ch] [rbp-14h]
  int v32; // [rsp+70h] [rbp-10h]

  v23[0] = *(_DWORD *)(a2 + 40);
  v24 = *(_QWORD *)(a2 + 80);
  v23[1] = 0;
  v30 = 0;
  v7 = MEMORY[0xFFFFF78000000008];
  v26 = *(_QWORD *)(a2 + 64);
  v27 = *(_QWORD *)(a2 + 72);
  v8 = *(_DWORD *)(a2 + 36);
  v32 = 0;
  v21 = 0LL;
  v25 = MEMORY[0xFFFFF78000000008];
  v22 = 0LL;
  if ( *(_DWORD *)(a2 + 32) || (v28 = 0, (v8 & 8) != 0) )
    v28 = 1;
  v9 = *(_DWORD *)(a2 + 56);
  v32 = v9;
  v29 = (v8 & 0x60) != 0;
  *(_DWORD *)(a2 + 36) = v8 & 0xFFFFFF9F;
  v10 = *(_DWORD *)(a2 + 52);
  *(_QWORD *)(a2 + 52) = 0LL;
  v31 = v10;
  TtmpTsmIterate((__int64)v23, (__int64)&v21);
  TtmiLogTerminalStateMachine(*(_DWORD *)(a2 + 28), v23, (int *)&v21);
  v11 = v22;
  *(_QWORD *)(a2 + 80) = v22;
  if ( v11 == v7 )
    TtmiResetInactivityTimer(v9);
  v12 = v21;
  *(_DWORD *)(a2 + 40) = v21;
  if ( !BYTE4(v21)
    || (v13 = *(_DWORD *)(a2 + 36), *(_DWORD *)(a2 + 44) = DWORD2(v21), v14 = v12 != 1, ((v13 >> 4) & 1) == v14) )
  {
    v15 = 0;
  }
  else
  {
    v15 = 1;
    *(_DWORD *)(a2 + 36) = v13 & 0xFFFFFFEF | (16 * v14);
  }
  *a3 = v15;
  v16 = *(_DWORD *)(a2 + 44);
  if ( (*(_DWORD *)(a2 + 36) & 8) != 0 )
    v17 = 0;
  else
    v17 = *(_DWORD *)(a2 + 40);
  v18 = *(_DWORD *)(a2 + 276);
  if ( v18 == v17 )
  {
    v19 = 0;
  }
  else
  {
    if ( !v18 || !v17 )
      v16 = 22;
    v19 = 1;
    *(_DWORD *)(a2 + 280) = v16;
    v18 = v17;
    *(_DWORD *)(a2 + 276) = v17;
  }
  *a4 = v19;
  if ( v18 )
  {
    if ( v18 == 1 )
      *(_DWORD *)(a2 + 48) = 2;
    else
      *(_DWORD *)(a2 + 48) = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 48) = 1;
  }
  return TtmpResetEvaluationTimer((char *)a2, *((__int64 *)&v22 + 1));
}
