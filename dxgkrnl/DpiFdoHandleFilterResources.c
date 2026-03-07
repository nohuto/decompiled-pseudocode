__int64 __fastcall DpiFdoHandleFilterResources(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  IRP *v4; // rbp
  __int64 v5; // r15
  __int64 Status; // rbx
  unsigned int *Information; // rsi
  unsigned int v9; // edi
  _OWORD *Pool2; // rax
  _OWORD *v11; // r14
  unsigned int *v12; // r15
  unsigned int v13; // r12d
  __int128 v14; // xmm1
  unsigned int *v15; // rdi
  unsigned int *v16; // rcx
  __int64 v17; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  v4 = a2;
  v5 = *(_QWORD *)(v2 + 40);
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v2 + 160), a2);
  Status = v4->IoStatus.Status;
  if ( (int)Status >= 0 )
  {
    Information = (unsigned int *)v4->IoStatus.Information;
    if ( !*(_QWORD *)(v5 + 184) )
      DpiDisableInterruptResources(v4->IoStatus.Information);
    if ( *(_BYTE *)(v2 + 1156) != 1 )
    {
      WdLogSingleEntry1(4LL, a1);
      goto LABEL_3;
    }
    v9 = *Information + 96 * Information[7];
    if ( v9 < *Information )
      goto LABEL_15;
    Pool2 = (_OWORD *)ExAllocatePool2(256LL, v9, 1953656900LL);
    v11 = Pool2;
    if ( !Pool2 )
    {
      Status = -1073741801LL;
      v17 = 6LL;
      goto LABEL_17;
    }
    memset(Pool2, 0, v9);
    v12 = Information + 8;
    v13 = 0;
    v14 = *((_OWORD *)Information + 1);
    *v11 = *(_OWORD *)Information;
    v11[1] = v14;
    *(_DWORD *)v11 = v9;
    v15 = (unsigned int *)(v11 + 2);
    if ( Information[7] )
    {
      do
      {
        memmove(v15, v12, 32LL * v12[1] + 8);
        ++v13;
        v16 = &v15[8 * v15[1]];
        *((_WORD *)v16 + 4) = 257;
        *((_BYTE *)v16 + 10) = 3;
        *((_WORD *)v16 + 6) = 1;
        v16[4] = 12;
        v16[5] = 1;
        *((_QWORD *)v16 + 3) = 944LL;
        *((_QWORD *)v16 + 4) = 955LL;
        *((_WORD *)v16 + 20) = 257;
        *((_BYTE *)v16 + 42) = 3;
        *((_WORD *)v16 + 22) = 1;
        v16[12] = 32;
        v16[13] = 1;
        *((_QWORD *)v16 + 7) = 960LL;
        *((_QWORD *)v16 + 8) = 991LL;
        *((_WORD *)v16 + 36) = 769;
        *((_BYTE *)v16 + 74) = 3;
        *((_WORD *)v16 + 38) = 0;
        v16[20] = 0x20000;
        v16[21] = 1;
        *((_QWORD *)v16 + 11) = 655360LL;
        *((_QWORD *)v16 + 12) = 786431LL;
        v15[1] += 3;
        v12 += 8 * v12[1] + 2;
        v15 += 8 * v15[1] + 2;
      }
      while ( v13 < Information[7] );
      v4 = a2;
    }
    ExFreePoolWithTag(Information, 0);
    v4->IoStatus.Information = (ULONG_PTR)v11;
  }
  else if ( !*(_BYTE *)(v2 + 480) && !*(_BYTE *)(v2 + 2695) && !*(_BYTE *)(v2 + 1159) )
  {
LABEL_15:
    v17 = 2LL;
LABEL_17:
    WdLogSingleEntry1(v17, Status);
  }
LABEL_3:
  v4->IoStatus.Status = Status;
  IofCompleteRequest(v4, 1);
  return (unsigned int)Status;
}
