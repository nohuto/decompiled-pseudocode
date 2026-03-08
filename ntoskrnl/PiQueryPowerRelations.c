/*
 * XREFs of PiQueryPowerRelations @ 0x14086CB24
 * Callers:
 *     PnpDeviceActionWorker @ 0x140203020 (PnpDeviceActionWorker.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1406819F4 (PipProcessRebuildPowerRelationsQueue.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PnpQueryDeviceRelations @ 0x140688584 (PnpQueryDeviceRelations.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 *     PiQueryPowerDependencyRelations @ 0x14086CD28 (PiQueryPowerDependencyRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14086CE8C (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PiValidatePowerRelations @ 0x14086CF08 (PiValidatePowerRelations.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiQueryPowerRelations(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  int DeviceRelations; // edi
  int PowerDependencyRelations; // eax
  PVOID *v6; // rax
  int v7; // ecx
  _QWORD *v9; // r13
  _QWORD *v10; // rsi
  _DWORD *v11; // r8
  unsigned int v12; // r12d
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 Pool2; // rax
  __int64 *v16; // rcx
  __int64 v17; // r15
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // r8
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  _WORD *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  PVOID P; // [rsp+60h] [rbp+30h] BYREF

  v2 = 0;
  DeviceRelations = 0;
  P = 0LL;
  if ( !*(_QWORD *)(a1 + 16) )
    return 3221225865LL;
  if ( !a2 )
  {
    DeviceRelations = PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 2, 0LL, (__int64)&P);
    if ( DeviceRelations >= 0 )
    {
      v9 = (_QWORD *)(a1 + 192);
      v10 = *(_QWORD **)(a1 + 192);
      while ( v10 != v9 )
      {
        v20 = *v10;
        v21 = v10;
        v10 = (_QWORD *)v20;
        if ( *(_QWORD **)(v20 + 8) != v21
          || (v22 = (_QWORD *)v21[1], (_QWORD *)*v22 != v21)
          || (*v22 = v20, *(_QWORD *)(v20 + 8) = v22, v23 = v21[3], *(_QWORD **)(v23 + 8) != v21 + 3)
          || (v24 = (_QWORD *)v21[4], (_QWORD *)*v24 != v21 + 3) )
        {
LABEL_37:
          __fastfail(3u);
        }
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        ExFreePoolWithTag(v21, 0x72775044u);
      }
      v11 = P;
      if ( !P || !*(_DWORD *)P )
      {
        DeviceRelations = 0;
        goto LABEL_3;
      }
      v12 = 0;
      while ( 1 )
      {
        v13 = *(_QWORD *)&v11[2 * v12 + 2];
        if ( !v13 )
          goto LABEL_72;
        v14 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL);
        if ( !v14 || (*(_DWORD *)(v14 + 396) & 0x20000) != 0 )
        {
          IoAddTriageDumpDataBlock(v13, (PVOID)*(unsigned __int16 *)(v13 + 2));
          v11 = P;
          v25 = *(_QWORD *)(*((_QWORD *)P + v12 + 1) + 8LL);
          if ( v25 )
          {
            IoAddTriageDumpDataBlock(v25, (PVOID)(unsigned int)*(__int16 *)(v25 + 2));
            v11 = P;
            v26 = (_WORD *)(*(_QWORD *)(*((_QWORD *)P + v12 + 1) + 8LL) + 56LL);
            if ( *v26 )
            {
              IoAddTriageDumpDataBlock((ULONG)v26, (PVOID)2);
              v27 = *(_QWORD *)(*((_QWORD *)P + v12 + 1) + 8LL);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v27 + 64), (PVOID)*(unsigned __int16 *)(v27 + 56));
              v11 = P;
            }
          }
          v28 = *(_QWORD *)&v11[2 * v12 + 2];
          if ( v28 )
          {
            v29 = *(_QWORD *)(v28 + 312);
            if ( *(_QWORD *)(v29 + 40) )
            {
              v30 = *(_QWORD *)(v29 + 40);
              IoAddTriageDumpDataBlock(v30, (PVOID)0x388);
              if ( *(_WORD *)(v30 + 40) )
              {
                IoAddTriageDumpDataBlock(v30 + 40, (PVOID)2);
                IoAddTriageDumpDataBlock(*(_QWORD *)(v30 + 48), (PVOID)*(unsigned __int16 *)(v30 + 40));
              }
              v11 = P;
              v31 = *((_QWORD *)P + v12 + 1);
              v32 = v31 + 312;
              if ( v31 )
                v33 = *(_QWORD *)(*(_QWORD *)v32 + 40LL);
              else
                v33 = 0LL;
              if ( *(_WORD *)(v33 + 56) )
              {
                if ( v31 )
                  v34 = *(_QWORD *)(*(_QWORD *)v32 + 40LL);
                else
                  LODWORD(v34) = 0;
                IoAddTriageDumpDataBlock(v34 + 56, (PVOID)2);
                v35 = *((_QWORD *)P + v12 + 1);
                if ( v35 )
                {
                  v36 = *(_QWORD *)(*(_QWORD *)(v35 + 312) + 40LL);
                  v37 = v36;
                }
                else
                {
                  v36 = 0LL;
                  v37 = 0LL;
                }
                IoAddTriageDumpDataBlock(*(_QWORD *)(v36 + 64), (PVOID)*(unsigned __int16 *)(v37 + 56));
                v11 = P;
              }
              v38 = *(_QWORD *)&v11[2 * v12 + 2];
              v39 = v38 + 312;
              if ( v38 )
                v40 = *(_QWORD *)(*(_QWORD *)v39 + 40LL);
              else
                v40 = 0LL;
              if ( *(_QWORD *)(v40 + 16) )
              {
                v41 = v38 ? *(_QWORD *)(*(_QWORD *)v39 + 40LL) : 0LL;
                if ( *(_WORD *)(*(_QWORD *)(v41 + 16) + 56LL) )
                {
                  if ( v38 )
                    v42 = *(_QWORD *)(*(_QWORD *)v39 + 40LL);
                  else
                    v42 = 0LL;
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v42 + 16) + 56, (PVOID)2);
                  v43 = *((_QWORD *)P + v12 + 1);
                  if ( v43 )
                  {
                    v44 = *(_QWORD *)(*(_QWORD *)(v43 + 312) + 40LL);
                    v45 = v44;
                  }
                  else
                  {
                    v44 = 0LL;
                    v45 = 0LL;
                  }
                  IoAddTriageDumpDataBlock(
                    *(_QWORD *)(*(_QWORD *)(v44 + 16) + 64LL),
                    (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v45 + 16) + 56LL));
                  v11 = P;
                }
              }
            }
          }
LABEL_72:
          KeBugCheckEx(0xCAu, 2uLL, *(_QWORD *)&v11[2 * v12 + 2], 0LL, 0LL);
        }
        if ( *(_QWORD *)(v14 + 16) )
        {
          Pool2 = ExAllocatePool2(64LL, 56LL, 1920421956LL);
          if ( !Pool2 )
          {
            DeviceRelations = -1073741670;
            goto LABEL_3;
          }
          *(_BYTE *)(Pool2 + 48) = 0;
          *(_QWORD *)(Pool2 + 16) = a1 + 160;
          *(_QWORD *)(Pool2 + 40) = v14 + 160;
          v16 = *(__int64 **)(a1 + 200);
          if ( (_QWORD *)*v16 != v9 )
            goto LABEL_37;
          *(_QWORD *)Pool2 = v9;
          v17 = v14 + 176;
          *(_QWORD *)(Pool2 + 8) = v16;
          *v16 = Pool2;
          *(_QWORD *)(a1 + 200) = Pool2;
          v18 = (_QWORD *)(Pool2 + 24);
          v19 = *(_QWORD **)(v17 + 8);
          if ( *v19 != v17 )
            goto LABEL_37;
          *v18 = v17;
          v18[1] = v19;
          *v19 = v18;
          *(_QWORD *)(v17 + 8) = v18;
          v11 = P;
        }
        if ( ++v12 >= *v11 )
          goto LABEL_3;
      }
    }
    P = 0LL;
  }
LABEL_3:
  PowerDependencyRelations = PiQueryPowerDependencyRelations(a1);
  if ( DeviceRelations >= 0 && PowerDependencyRelations < 0 )
    DeviceRelations = PowerDependencyRelations;
  PiValidatePowerRelations(a1);
  v6 = (PVOID *)P;
  if ( P )
  {
    if ( *(_DWORD *)P )
    {
      do
      {
        ObfDereferenceObject(v6[v2 + 1]);
        v6 = (PVOID *)P;
        ++v2;
      }
      while ( v2 < *(_DWORD *)P );
    }
    ExFreePoolWithTag(v6, 0);
  }
  PpDevNodeLockTree(0);
  v7 = *(_DWORD *)(a1 + 300);
  if ( (unsigned int)(v7 - 768) > 2 && (unsigned int)(v7 - 789) > 1 )
    PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent(*(_QWORD *)(a1 + 32));
  PpDevNodeUnlockTree(0);
  return (unsigned int)DeviceRelations;
}
