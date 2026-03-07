__int64 __fastcall SmProcessConfigRequest(unsigned __int64 a1, int a2, KPROCESSOR_MODE a3)
{
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  __int64 ProcessPartition; // rdx
  unsigned int v9; // ecx
  int Partition; // ebx
  unsigned int v12; // eax
  _QWORD *v13; // rsi
  __int128 v14; // [rsp+30h] [rbp-18h]
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  if ( a2 != 16 )
  {
    Partition = -1073741306;
    goto LABEL_22;
  }
  if ( a3 )
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v5 = a1;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 15) = *(_BYTE *)(v5 + 15);
  }
  v14 = *(_OWORD *)a1;
  if ( (unsigned __int8)*(_OWORD *)a1 != 5 )
  {
    Partition = -1073741735;
    goto LABEL_22;
  }
  if ( (*(_QWORD *)a1 & 0xFFFF00) != 0 )
    goto LABEL_40;
  v6 = BYTE3(v14);
  if ( BYTE3(v14) >= 3u )
    goto LABEL_40;
  if ( v6 )
  {
    if ( !*((_QWORD *)&v14 + 1) )
    {
      v12 = v6 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          if ( (unsigned int)(DWORD1(v14) - 4) > 0x1C || ((DWORD1(v14) - 1) & DWORD1(v14)) != 0 )
            goto LABEL_40;
          dword_140C692D4 = HIDWORD(*(_QWORD *)a1);
        }
LABEL_21:
        Partition = 0;
        goto LABEL_22;
      }
      if ( DWORD1(v14) <= 1 )
      {
        PspOutSwapSharedPages = HIDWORD(*(_QWORD *)a1);
        goto LABEL_21;
      }
    }
LABEL_40:
    Partition = -1073741811;
    goto LABEL_22;
  }
  if ( DWORD1(v14) >= 0x100 )
    goto LABEL_40;
  if ( ((DWORD1(v14) >> 2) & 3) == 3 )
    goto LABEL_40;
  v7 = HIDWORD(*(_QWORD *)a1) & 0x30;
  if ( v7 >= 0x30 )
    goto LABEL_40;
  if ( (((DWORD1(v14) >> 2) & 3) == 2 || v7 == 32) && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a3) )
  {
    Partition = -1073741790;
    goto LABEL_22;
  }
  if ( !*((_QWORD *)&v14 + 1) )
  {
    ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
    goto LABEL_19;
  }
  Partition = PsReferencePartitionByHandle(*((void **)&v14 + 1), 2u, a3, 0x52436D53u, (PVOID *)&v15);
  if ( Partition >= 0 )
  {
    v13 = (_QWORD *)v15;
    Partition = SmCreatePartition(v15);
    if ( Partition >= 0 )
    {
      ProcessPartition = v13[3];
LABEL_19:
      v9 = BYTE4(v14) & 0xC0 | *(_DWORD *)(ProcessPartition + 2064) & 0xFFFFFF00 | (DWORD1(v14) >> 2) & 0xF | (16 * (BYTE4(v14) & 3));
      *(_DWORD *)(ProcessPartition + 2064) = v9;
      if ( (v9 & 3) != 0 )
        SmpSystemStoreCreate(ProcessPartition);
      goto LABEL_21;
    }
  }
LABEL_22:
  if ( v15 )
    PsDereferencePartition(v15);
  return (unsigned int)Partition;
}
