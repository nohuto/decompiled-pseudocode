/*
 * XREFs of TtmpUpdateTerminalState @ 0x1408FE43C
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x1408FDA90 (TtmiSessionTerminalListWorker.c)
 * Callees:
 *     TtmpResetEvaluationTimer @ 0x1408FE124 (TtmpResetEvaluationTimer.c)
 *     TtmpTsmIterate @ 0x1408FE350 (TtmpTsmIterate.c)
 *     TtmiLogTerminalStateMachine @ 0x140905260 (TtmiLogTerminalStateMachine.c)
 */

void __fastcall TtmpUpdateTerminalState(__int64 a1, __int64 a2, char *a3, char *a4)
{
  int v7; // eax
  int v8; // eax
  int v9; // r8d
  unsigned int v10; // edx
  BOOL v11; // ecx
  char v12; // al
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  char v16; // dl
  __int128 v17; // [rsp+20h] [rbp-60h] BYREF
  __int128 v18; // [rsp+30h] [rbp-50h]
  _DWORD v19[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+48h] [rbp-38h]
  __int64 v21; // [rsp+50h] [rbp-30h]
  __int64 v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  char v24; // [rsp+68h] [rbp-18h]
  bool v25; // [rsp+69h] [rbp-17h]
  __int16 v26; // [rsp+6Ah] [rbp-16h]
  int v27; // [rsp+6Ch] [rbp-14h]
  int v28; // [rsp+70h] [rbp-10h]
  int v29; // [rsp+74h] [rbp-Ch]

  v19[0] = *(_DWORD *)(a2 + 40);
  v20 = *(_QWORD *)(a2 + 80);
  v19[1] = 0;
  v26 = 0;
  v29 = 0;
  v17 = 0LL;
  v21 = MEMORY[0xFFFFF78000000008];
  v22 = *(_QWORD *)(a2 + 64);
  v23 = *(_QWORD *)(a2 + 72);
  v7 = *(_DWORD *)(a2 + 36);
  v18 = 0LL;
  if ( *(_DWORD *)(a2 + 32) || (v24 = 0, (v7 & 8) != 0) )
    v24 = 1;
  v25 = (v7 & 0x60) != 0;
  *(_DWORD *)(a2 + 36) = v7 & 0xFFFFFF9F;
  v27 = *(_DWORD *)(a2 + 52);
  v8 = *(_DWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 52) = 0LL;
  v28 = v8;
  TtmpTsmIterate((__int64)v19, (__int64)&v17);
  TtmiLogTerminalStateMachine(*(unsigned int *)(a2 + 28), v19, &v17);
  v9 = v17;
  *(_QWORD *)(a2 + 80) = v18;
  *(_DWORD *)(a2 + 40) = v9;
  if ( !BYTE4(v17)
    || (v10 = *(_DWORD *)(a2 + 36), *(_DWORD *)(a2 + 44) = DWORD2(v17), v11 = v9 != 1, ((v10 >> 4) & 1) == v11) )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    *(_DWORD *)(a2 + 36) = v10 & 0xFFFFFFEF | (16 * v11);
  }
  *a3 = v12;
  v13 = *(_DWORD *)(a2 + 44);
  if ( (*(_DWORD *)(a2 + 36) & 8) != 0 )
    v14 = 0;
  else
    v14 = *(_DWORD *)(a2 + 40);
  v15 = *(_DWORD *)(a2 + 276);
  if ( v15 == v14 )
  {
    v16 = 0;
  }
  else
  {
    if ( !v15 || !v14 )
      v13 = 22;
    *(_DWORD *)(a2 + 280) = v13;
    v15 = v14;
    *(_DWORD *)(a2 + 276) = v14;
    v16 = 1;
  }
  *a4 = v16;
  if ( v15 )
  {
    if ( v15 == 1 )
      *(_DWORD *)(a2 + 48) = 2;
    else
      *(_DWORD *)(a2 + 48) = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 48) = 1;
  }
  TtmpResetEvaluationTimer((PADAPTER_OBJECT)a2, *((__int64 *)&v18 + 1));
}
