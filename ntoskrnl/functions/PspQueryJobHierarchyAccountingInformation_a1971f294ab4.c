__int64 __fastcall PspQueryJobHierarchyAccountingInformation(char *Object, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v5; // ecx
  PVOID *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  _OWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  _QWORD v22[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23[86]; // [rsp+40h] [rbp-C0h] BYREF

  v22[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  memset(v23, 0, sizeof(v23));
  PspLockRootJobShared(Object, CurrentThread, v22);
  v5 = 0;
  v6 = (PVOID *)v22;
  while ( Object != *v6 )
  {
    ++v5;
    ++v6;
    if ( v5 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(Object + 56), 1u);
      break;
    }
  }
  PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v23, 1);
  v7 = v23[14];
  *(_QWORD *)a2 = v23[14] + *((_QWORD *)Object + 20);
  *(_QWORD *)(a2 + 16) = *((_QWORD *)Object + 23) + v7;
  v8 = v23[13];
  *(_QWORD *)(a2 + 8) = v23[13] + *((_QWORD *)Object + 21);
  *(_QWORD *)(a2 + 24) = *((_QWORD *)Object + 24) + v8;
  *(_DWORD *)(a2 + 32) = LODWORD(v23[31]) + *((_DWORD *)Object + 52);
  *(_DWORD *)(a2 + 36) = *((_DWORD *)Object + 53);
  *(_DWORD *)(a2 + 40) = *((_DWORD *)Object + 54);
  *(_DWORD *)(a2 + 44) = *((_DWORD *)Object + 55);
  *(_QWORD *)(a2 + 48) = v23[18] + *((_QWORD *)Object + 73);
  *(_QWORD *)(a2 + 56) = v23[19] + *((_QWORD *)Object + 74);
  *(_QWORD *)(a2 + 64) = v23[20] + *((_QWORD *)Object + 75);
  *(_QWORD *)(a2 + 72) = v23[21] + *((_QWORD *)Object + 76);
  *(_QWORD *)(a2 + 80) = v23[22] + *((_QWORD *)Object + 77);
  *(_QWORD *)(a2 + 88) = v23[23] + *((_QWORD *)Object + 78);
  *(_QWORD *)(a2 + 96) = v23[26] + *((_QWORD *)Object + 79);
  *(_QWORD *)(a2 + 104) = v23[27] + *((_QWORD *)Object + 80);
  *(_QWORD *)(a2 + 112) = v23[28] + *((_QWORD *)Object + 81);
  *(_QWORD *)(a2 + 120) = v23[29] + *((_QWORD *)Object + 82);
  *(_QWORD *)(a2 + 128) = v23[30] + *((_QWORD *)Object + 83);
  *(_QWORD *)(a2 + 136) = v23[17] + *((_QWORD *)Object + 25);
  *(_QWORD *)(a2 + 144) = v23[16] + *((_QWORD *)Object + 22);
  *(_QWORD *)(a2 + 152) = v23[15] + *((_QWORD *)Object + 155);
  *(_QWORD *)(a2 + 432) = v23[24] + *((_QWORD *)Object + 225);
  *(_QWORD *)(a2 + 440) = v23[25] + *((_QWORD *)Object + 226);
  v9 = *((_QWORD *)Object + 153);
  if ( v9 )
    *(_QWORD *)(a2 + 152) += KeQuerySchedulingGroupReadyTime(v9 + 128);
  v10 = *((_QWORD *)Object + 193);
  v11 = (_OWORD *)(a2 + 160);
  if ( v10 )
  {
    PsAddProcessEnergyValues(&v23[32], v10);
    v12 = 2LL;
    v13 = &v23[32];
    do
    {
      v14 = *((_OWORD *)v13 + 1);
      *v11 = *(_OWORD *)v13;
      v15 = *((_OWORD *)v13 + 2);
      v11[1] = v14;
      v16 = *((_OWORD *)v13 + 3);
      v11[2] = v15;
      v17 = *((_OWORD *)v13 + 4);
      v11[3] = v16;
      v18 = *((_OWORD *)v13 + 5);
      v11[4] = v17;
      v19 = *((_OWORD *)v13 + 6);
      v11[5] = v18;
      v20 = *((_OWORD *)v13 + 7);
      v13 += 16;
      v11[6] = v19;
      v11 += 8;
      *(v11 - 1) = v20;
      --v12;
    }
    while ( v12 );
    *v11 = *(_OWORD *)v13;
  }
  else
  {
    memset(v11, 0, 0x110uLL);
  }
  PspUnlockJobConditionally(Object, v22);
  return PspUnlockJob(v22[0], CurrentThread);
}
