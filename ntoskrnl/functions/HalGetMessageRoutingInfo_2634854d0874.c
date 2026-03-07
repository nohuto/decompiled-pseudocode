__int64 __fastcall HalGetMessageRoutingInfo(int *a1, _DWORD *a2)
{
  bool v2; // cc
  unsigned __int16 **v5; // rcx
  unsigned __int16 *v6; // rbx
  char v7; // r14
  int IsSteerable; // r8d
  int v9; // r15d
  char v10; // r14
  int v11; // ebx
  int v12; // eax
  int v14; // r8d
  int v15; // edx
  unsigned int v16; // r8d
  int v17; // ebx
  int ProcessorIdByNtNumber; // eax
  char v19; // bl
  __int64 v20; // rcx
  int v21; // [rsp+20h] [rbp-40h]
  unsigned __int16 *v22[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 v23; // [rsp+40h] [rbp-20h]
  int v24; // [rsp+42h] [rbp-1Eh]
  __int16 v25; // [rsp+46h] [rbp-1Ah]
  __int128 v26; // [rsp+48h] [rbp-18h]
  char v27; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v28; // [rsp+A0h] [rbp+40h] BYREF

  v2 = (unsigned int)*a1 <= 1;
  v24 = 0;
  v25 = 0;
  v28 = 0;
  v27 = 0;
  v26 = 0LL;
  if ( !v2 )
  {
    v21 = 1216;
LABEL_24:
    v14 = 0;
    v15 = 20;
LABEL_59:
    HalpInterruptSetProblemEx(0, v15, v14, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", v21);
    return 3221225485LL;
  }
  v5 = (unsigned __int16 **)(a1 + 4);
  v6 = *v5;
  if ( !*v5
    || (v7 = 1, (unsigned __int16 *)((unsigned __int64)v6 & ((unsigned __int64)v6 ^ ((unsigned __int64)v6 - 1))) != v6) )
  {
    v7 = 0;
  }
  IsSteerable = HalpInterruptAffinityIsSteerable(v5, &v27);
  if ( IsSteerable < 0 )
  {
    HalpInterruptSetProblemEx(
      0,
      39,
      IsSteerable,
      (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
      1242);
    return v16;
  }
  v9 = a1[8];
  v23 = *((_WORD *)a1 + 12);
  v22[1] = v6;
  v22[0] = 0LL;
  if ( v9 != 1 )
  {
    if ( v9 == 2 )
    {
      if ( !HalpInterruptClusterModeEnabled )
      {
        v17 = 0;
        ProcessorIdByNtNumber = KeEnumerateNextProcessor(&v28, v22);
        if ( ProcessorIdByNtNumber >= 0 )
        {
          do
          {
            if ( v28 >= (unsigned int)HalpInterruptProcessorCount )
            {
              v21 = 1340;
              goto LABEL_57;
            }
            if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v28) != 5 )
            {
              v21 = 1350;
              goto LABEL_24;
            }
            v17 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v28 + 8);
            ProcessorIdByNtNumber = KeEnumerateNextProcessor(&v28, v22);
          }
          while ( ProcessorIdByNtNumber >= 0 );
          if ( v17 )
            goto LABEL_17;
        }
        return 3221225485LL;
      }
      v21 = 1329;
    }
    else if ( v9 == 3 )
    {
      if ( HalpInterruptClusterModeEnabled )
      {
        v10 = 0;
        if ( (int)KeEnumerateNextProcessor(&v28, v22) >= 0 )
        {
          v11 = DWORD2(v26);
          while ( 1 )
          {
            if ( v28 >= (unsigned int)HalpInterruptProcessorCount )
            {
              v21 = 1388;
              v14 = 0;
              goto LABEL_58;
            }
            if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v28) != 6 )
            {
              v21 = 1403;
              goto LABEL_24;
            }
            if ( !v10 )
              break;
            if ( v11 != *(_DWORD *)(HalpInterruptTargets + 24LL * v28 + 8) )
            {
              if ( !v27 )
              {
                v21 = 1448;
                goto LABEL_24;
              }
              goto LABEL_21;
            }
LABEL_16:
            if ( (int)KeEnumerateNextProcessor(&v28, v22) < 0 )
              goto LABEL_17;
          }
          v10 = 1;
LABEL_21:
          v11 = *(_DWORD *)(HalpInterruptTargets + 24LL * v28 + 8);
          goto LABEL_16;
        }
        goto LABEL_17;
      }
      v21 = 1377;
    }
    else
    {
      v21 = 1466;
    }
    goto LABEL_24;
  }
  v19 = v27;
  if ( !v7 && !v27 )
  {
    HalpInterruptSetProblemEx(
      0,
      21,
      -1073741811,
      (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
      1276);
    return v16;
  }
  ProcessorIdByNtNumber = KeEnumerateNextProcessor(&v28, v22);
  if ( ProcessorIdByNtNumber < 0 )
    goto LABEL_56;
  if ( !v19 )
  {
    v20 = v28;
    goto LABEL_53;
  }
  while ( 1 )
  {
    v20 = v28;
    if ( v28 >= (unsigned int)HalpInterruptProcessorCount )
      break;
    ProcessorIdByNtNumber = KeEnumerateNextProcessor(&v28, v22);
    if ( ProcessorIdByNtNumber < 0 )
    {
      v20 = v28;
      goto LABEL_52;
    }
  }
  ProcessorIdByNtNumber = -1073741811;
LABEL_52:
  if ( (unsigned int)v20 >= (unsigned int)HalpInterruptProcessorCount )
  {
LABEL_56:
    v21 = 1301;
LABEL_57:
    v14 = ProcessorIdByNtNumber;
LABEL_58:
    v15 = 21;
    goto LABEL_59;
  }
LABEL_53:
  ProcessorIdByNtNumber = HalGetProcessorIdByNtNumber(v20, &v27);
  if ( ProcessorIdByNtNumber < 0 )
  {
    v21 = 1312;
    goto LABEL_57;
  }
LABEL_17:
  v12 = *a1;
  *a2 = 1;
  if ( v12 )
  {
    a2[2] = 3;
    a2[20] = v9;
  }
  else
  {
    a2[2] = 1;
    a2[21] = a1[10];
    a2[20] = a1[11];
    a2[22] = a1[12];
  }
  return 0LL;
}
