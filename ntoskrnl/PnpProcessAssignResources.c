/*
 * XREFs of PnpProcessAssignResources @ 0x140681528
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1402028D0 (PipSetDevNodeState.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PnpAssignResourcesToDevices @ 0x140680DD8 (PnpAssignResourcesToDevices.c)
 *     PnpProcessAssignResourcesWorker @ 0x1406816EC (PnpProcessAssignResourcesWorker.c)
 *     PipClearDevNodeUserFlags @ 0x1406831A8 (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeFlags @ 0x1406857DC (PipSetDevNodeFlags.c)
 *     PipSetDevNodeProblem @ 0x1408667BC (PipSetDevNodeProblem.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall PnpProcessAssignResources(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  unsigned int v4; // ebx
  char v6; // bp
  unsigned int *Pool2; // rax
  unsigned int *v8; // r15
  __int64 v9; // rdi
  __int64 v11; // rax
  _DWORD *v12; // r13
  _QWORD *v13; // rsi
  __int64 *v14; // r14
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // rsi
  _DWORD *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx

  v4 = a2;
  v6 = 0;
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, (unsigned int)(8 * IopNumberDeviceNodes + 8), 896560720LL);
  v8 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = v4;
    PnpProcessAssignResourcesWorker(a1, Pool2);
    v9 = v8[1];
    if ( (_DWORD)v9 )
    {
      v11 = ExAllocatePool2(256LL, (unsigned int)((_DWORD)v9 << 6), 913337936LL);
      v12 = (_DWORD *)v11;
      if ( v11 )
      {
        v13 = (_QWORD *)v11;
        v14 = (__int64 *)(v8 + 2);
        v15 = v9;
        do
        {
          v16 = *v14;
          memset(v13, 0, 0x40uLL);
          v13[3] = 0LL;
          ++v14;
          *v13 = v16;
          *((_DWORD *)v13 + 3) = 4;
          v13 += 8;
          --v15;
        }
        while ( v15 );
        v6 = 0;
        v17 = v9;
        PnpAssignResourcesToDevices(v9, v12, a3);
        v18 = v12 + 10;
        while ( 1 )
        {
          v19 = *((_QWORD *)v18 - 5);
          if ( v19 )
            v20 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
          else
            v20 = 0LL;
          v21 = (unsigned int)v18[4];
          if ( (int)v21 >= 0 )
          {
            v6 = 1;
            if ( *(_QWORD *)v18 )
            {
              ExAcquireFastMutex(&PiResourceListLock);
              *(_QWORD *)(v20 + 416) = *(_QWORD *)v18;
              *(_QWORD *)(v20 + 424) = *((_QWORD *)v18 + 1);
              ExReleaseFastMutex(&PiResourceListLock);
            }
            else
            {
              PipSetDevNodeFlags(v20, 256LL);
            }
            PipSetDevNodeState(v20, 774);
            PipClearDevNodeUserFlags(v20, 4LL);
            goto LABEL_15;
          }
          if ( (_DWORD)v21 != -1073741267 )
            break;
LABEL_15:
          v18 += 16;
          if ( !--v17 )
          {
            ExFreePoolWithTag(v12, 0x36706E50u);
            goto LABEL_3;
          }
        }
        switch ( (_DWORD)v21 )
        {
          case 0xC000008A:
            v23 = 17LL;
            break;
          case 0xC0000182:
            v23 = 34LL;
            break;
          case 0xC0000908:
          case 0xC0040035:
            v23 = 35LL;
            break;
          case 0xC0040036:
            v23 = 33LL;
            break;
          default:
            v22 = v20;
            if ( (_DWORD)v21 == -1073479625 )
              v23 = 36LL;
            else
              v23 = 12LL;
            goto LABEL_34;
        }
        v22 = v20;
LABEL_34:
        PipSetDevNodeProblem(v22, v23, v21);
        goto LABEL_15;
      }
    }
LABEL_3:
    ExFreePoolWithTag(v8, 0x35706E50u);
  }
  return v6;
}
