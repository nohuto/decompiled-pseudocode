__int64 __fastcall PpmIdlePrepare(
        __int64 a1,
        char a2,
        bool *a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned __int64 *a6,
        __int64 a7)
{
  __int64 v7; // r13
  _QWORD *v8; // r12
  unsigned __int64 v10; // r14
  bool v11; // bl
  __int64 v12; // rsi
  _QWORD *v13; // rbp
  __int64 v15; // rbp
  unsigned int v16; // r9d
  __int64 v17; // r8
  unsigned int v18; // ecx
  bool v19; // zf
  unsigned int v20; // edx
  char v21; // cl
  __int64 v22; // rax
  __int64 result; // rax
  unsigned int *v24; // r12
  char v25; // al
  unsigned int v26; // [rsp+20h] [rbp-68h]
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 i; // [rsp+38h] [rbp-50h]
  char v30; // [rsp+90h] [rbp+8h]
  unsigned int v32; // [rsp+A0h] [rbp+18h]

  v7 = *(_QWORD *)(a1 + 33600);
  v8 = a5;
  v10 = 0LL;
  v11 = 0;
  v12 = v7 + 688;
  v13 = a4;
  v28 = PpmPlatformStates;
  v26 = PpmDripsStateIndex;
  if ( *(_BYTE *)(a1 + 33) && PopDeepSleepIsEnabled && PopDeepSleepIsEngaged && !PopDeepSleepEvaluateWorkItemQueued )
  {
    if ( PpmPlatformStates )
      v11 = 1;
    else
      v11 = *(_DWORD *)(v7 + 40) > 1u;
  }
  while ( 1 )
  {
    *v13 = PpmIdleEvaluateConstraints(a1, v8);
    if ( v11 && !*(_BYTE *)(v12 + 52) )
    {
      v11 = 0;
      *(_WORD *)(v7 + 56) = 0;
      *v13 = PpmIdleEvaluateConstraints(a1, v8);
    }
    PpmComputeIdleDurationHint(a1, v11, *v8, a2);
    (*(void (__fastcall **)(__int64))(v7 + 608))(v12);
    v15 = *(unsigned int *)(v12 + 76);
    v16 = *(_DWORD *)(v12 + 72);
    v32 = v16;
    if ( (_DWORD)v15 == -2 || (_DWORD)v15 == -1 )
      break;
    v17 = *(_QWORD *)(a1 + 33608);
    v18 = *(_DWORD *)(v12 + 80);
    v19 = !_BitScanForward(&v20, v18);
    for ( i = v17; !v19; v19 = !_BitScanForward(&v20, v18) )
    {
      *(_DWORD *)(v12 + 80) = v18 & (v18 - 1);
      ++*(_DWORD *)(1008LL * v20 + v17 + 52);
      v18 = *(_DWORD *)(v12 + 80);
    }
    v21 = 0;
    v22 = *(unsigned int *)(v12 + 60);
    if ( (_DWORD)v22 )
    {
      v24 = *(unsigned int **)(v12 + 64);
      v27 = *(unsigned int *)(v12 + 60);
      do
      {
        if ( *((_BYTE *)v24 + 4) == 0xFF )
        {
          v25 = v21;
          if ( !v21 )
            v25 = 1;
          v30 = v25;
          KeAddProcessorAffinityEx(a7, *v24);
          v21 = v30;
          v22 = v27;
        }
        v24 += 2;
        v27 = --v22;
      }
      while ( v22 );
      v8 = a5;
      v12 = v7 + 688;
      v16 = v32;
      if ( v21 && *(_BYTE *)(v7 + 740) && v10 < *(_QWORD *)(v7 + 712) )
        v10 = *(_QWORD *)(v7 + 712);
    }
    if ( !v11 )
      goto LABEL_10;
    if ( v28 )
    {
      if ( v16 != -1 && v16 >= v26 )
        goto LABEL_10;
    }
    else if ( (_DWORD)v15 == *(_DWORD *)(v7 + 40) - 1 )
    {
      goto LABEL_10;
    }
    v11 = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v7 + 664))(*(_QWORD *)v12, 0LL);
    ++*(_DWORD *)(1008 * v15 + i + 48);
    if ( v32 != -1 && v28 )
      ++*(_DWORD *)(1016LL * v32 + *(_QWORD *)(v28 + 48) + 24);
    v13 = a4;
    *(_WORD *)(v7 + 56) = 2;
  }
  v11 = 0;
LABEL_10:
  result = (unsigned int)v15;
  *a3 = v11;
  *a6 = v10;
  return result;
}
