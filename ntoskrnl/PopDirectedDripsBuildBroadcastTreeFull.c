/*
 * XREFs of PopDirectedDripsBuildBroadcastTreeFull @ 0x14099CB70
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x14099CDB8 (PopDirectedDripsBuildBroadcastTreePartial.c)
 * Callees:
 *     PopFxIsDirectedPowerTransitionSupported @ 0x1405884F8 (PopFxIsDirectedPowerTransitionSupported.c)
 *     PopDirectedDripsIsPnpSoftwareDeviceNode @ 0x140980964 (PopDirectedDripsIsPnpSoftwareDeviceNode.c)
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x14099C45C (PopDirectedDripsDiagTraceProblemDevice.c)
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x14099CEBC (PopDirectedDripsBuildPs4BroadcastTree.c)
 *     PopDirectedDripsFlushDeviceQueue @ 0x14099D044 (PopDirectedDripsFlushDeviceQueue.c)
 *     PopDirectedDripsInsertQueueDevice @ 0x14099D07C (PopDirectedDripsInsertQueueDevice.c)
 *     PopDirectedDripsIsLikelySpecialDevice @ 0x14099D0BC (PopDirectedDripsIsLikelySpecialDevice.c)
 *     PopDirectedDripsMarkDfxDevice @ 0x14099D104 (PopDirectedDripsMarkDfxDevice.c)
 *     PopDirectedDripsVisitDevice @ 0x14099D230 (PopDirectedDripsVisitDevice.c)
 */

__int64 __fastcall PopDirectedDripsBuildBroadcastTreeFull(__int64 a1, __int64 a2, char a3, _DWORD *a4)
{
  int v5; // esi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // r8d
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rax
  int v22; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v23[2]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v24[3]; // [rsp+38h] [rbp-18h] BYREF
  int v25; // [rsp+80h] [rbp+30h] BYREF

  v22 = 0;
  v25 = 0;
  v23[1] = v23;
  v5 = 0;
  v23[0] = v23;
  v24[1] = v24;
  v24[0] = v24;
  if ( (*(_DWORD *)(a1 + 760) & 0x30000) == 0 )
  {
    PopDirectedDripsInsertQueueDevice(v23);
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          v8 = v23[0];
          if ( (_QWORD *)v23[0] == v23 )
            goto LABEL_24;
          if ( *(_QWORD **)(v23[0] + 8LL) != v23
            || (v9 = *(_QWORD *)v23[0], *(_QWORD *)(*(_QWORD *)v23[0] + 8LL) != v23[0]) )
          {
LABEL_31:
            __fastfail(3u);
          }
          v23[0] = *(_QWORD *)v23[0];
          *(_QWORD *)(v9 + 8) = v23;
          *(_QWORD *)(v8 + 8) = v8;
          *(_QWORD *)v8 = v8;
          v10 = *(_QWORD *)(v8 - 728 + 80);
        }
        while ( (*(_DWORD *)(v8 + 32) & 0x30000) != 0 );
        PopDirectedDripsVisitDevice(v24, v8, a2, 0LL);
        if ( (unsigned __int8)PopDirectedDripsIsLikelySpecialDevice(v8 - 728, &v22) )
        {
          v17 = v22;
          *(_DWORD *)(v8 + 32) |= 0x40000u;
          PopDirectedDripsDiagTraceProblemDevice(v11, a2, v17);
LABEL_22:
          v15 = 3221225659LL;
LABEL_23:
          PopDirectedDripsFlushDeviceQueue(v23, v13, v15);
          goto LABEL_25;
        }
        if ( (a3 & 1) != 0 )
          break;
        v12 = 8;
LABEL_17:
        PopDirectedDripsDiagTraceProblemDevice(v8 - 728, a2, v12);
        if ( (a3 & 2) == 0 )
          goto LABEL_22;
        v14 = PopDirectedDripsBuildPs4BroadcastTree(v8 - 728, v24, a2);
        v15 = (unsigned int)v14;
        if ( v14 < 0 )
          goto LABEL_23;
        v16 = *(_QWORD *)(v8 - 728 + 776);
        v5 |= 2u;
        if ( v16 )
          *(_DWORD *)(v16 + 152) |= 0x10000u;
      }
      v25 = 0;
      if ( !PopDirectedDripsIsPnpSoftwareDeviceNode(v11) )
      {
        if ( !v10 )
          goto LABEL_14;
        if ( !PopFxIsDirectedPowerTransitionSupported(v10, &v25) )
          break;
      }
      PopDirectedDripsMarkDfxDevice(v23, v24, v8, a2);
      v5 |= 1u;
    }
    if ( v25 == 2 )
    {
      v12 = 4;
      goto LABEL_17;
    }
LABEL_14:
    v12 = (4 * (*(_DWORD *)(v8 + 32) & 2)) | 1;
    goto LABEL_17;
  }
LABEL_24:
  v18 = 0;
LABEL_25:
  while ( 1 )
  {
    v19 = v24[0];
    if ( (_QWORD *)v24[0] == v24 )
      break;
    if ( *(_QWORD **)(v24[0] + 8LL) != v24 )
      goto LABEL_31;
    v20 = *(_QWORD *)v24[0];
    if ( *(_QWORD *)(*(_QWORD *)v24[0] + 8LL) != v24[0] )
      goto LABEL_31;
    v24[0] = *(_QWORD *)v24[0];
    *(_QWORD *)(v20 + 8) = v24;
    if ( v18 < 0 )
      *(_DWORD *)(v19 + 16) = *(_DWORD *)(v19 + 20);
    *(_QWORD *)(v19 + 8) = v19;
    *(_QWORD *)v19 = v19;
    *(_DWORD *)(v19 + 20) = 0;
  }
  if ( v18 >= 0 )
    *a4 |= v5;
  return (unsigned int)v18;
}
