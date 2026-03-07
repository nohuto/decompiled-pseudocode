__int64 __fastcall NtManagePartition(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4, unsigned int Size)
{
  __int64 v6; // rbx
  __int64 v8; // r8
  char PreviousMode; // si
  __int64 v10; // r13
  char v11; // cl
  unsigned int v12; // r15d
  int v13; // edi
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edx
  int LargePages; // eax
  unsigned __int64 v19; // rcx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  __int64 *v25; // rcx
  int v26; // ebx
  __int64 v27; // r9
  int v28; // ebx
  int v29; // ebx
  char v30; // [rsp+30h] [rbp-158h]
  char v31; // [rsp+31h] [rbp-157h]
  __int64 *v32; // [rsp+38h] [rbp-150h] BYREF
  __int64 *v33; // [rsp+40h] [rbp-148h] BYREF
  __int64 v34; // [rsp+48h] [rbp-140h]
  _DWORD Src[60]; // [rsp+58h] [rbp-130h] BYREF

  v6 = a3;
  v34 = a2;
  memset(Src, 0, sizeof(Src));
  v31 = 0;
  v30 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v33 = 0LL;
  v32 = 0LL;
  if ( (unsigned int)v6 >= 0xE )
  {
    v13 = -1073741821;
    goto LABEL_22;
  }
  v10 = (unsigned int)v6;
  v11 = HIBYTE(PspPartitionInfoDetails[v6]);
  if ( (v11 & 0x10) == 0 && Size != WORD2(PspPartitionInfoDetails[v6]) )
  {
    v13 = -1073741820;
    goto LABEL_22;
  }
  if ( (v11 & 1) != 0 )
  {
    if ( PreviousMode && Size )
    {
      if ( ((BYTE6(PspPartitionInfoDetails[v6]) - 1LL) & a4) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = a4 + Size;
      if ( v19 > 0x7FFFFFFF0000LL || v19 < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(Src, (const void *)a4, Size);
  }
  v12 = PspPartitionInfoDetails[v6];
  if ( (_DWORD)v6 == 11 && Src[0] == 2 )
    v12 = 2;
  LOBYTE(v8) = PreviousMode;
  v13 = PsReferencePartitionByHandle(a1, v12, v8, 1884123984LL, &v32);
  if ( v13 >= 0 )
  {
    v30 = 1;
    if ( (PspPartitionInfoDetails[v6] & 0x400000000000000LL) != 0 )
    {
      LOBYTE(v14) = PreviousMode;
      v13 = PsReferencePartitionByHandle(v34, v12, v14, 1884123984LL, &v33);
      if ( v13 < 0 )
        goto LABEL_22;
      v31 = 1;
      if ( v33 == v32 && ((_DWORD)v6 != 1 || (Src[3] & 0x400) == 0) )
      {
        v13 = -1073741811;
        goto LABEL_22;
      }
    }
    else if ( v34 )
    {
      v13 = -1073741584;
      goto LABEL_22;
    }
    v16 = 4579;
    if ( (*(_DWORD *)(*v32 + 4) & 0x80u) != 0 )
    {
      v13 = (unsigned int)v6 <= 0xC && _bittest(&v16, v6) ? 0 : -1073741637;
      if ( v13 < 0 )
        goto LABEL_22;
    }
    if ( v33 && (*(_DWORD *)(*v33 + 4) & 0x80u) != 0 )
    {
      v13 = (unsigned int)v6 <= 0xC && _bittest(&v16, v6) ? 0 : -1073741637;
      if ( v13 < 0 )
        goto LABEL_22;
    }
    if ( (int)v6 > 7 )
    {
      v20 = v6 - 8;
      if ( !v20 )
      {
        LOBYTE(v14) = PreviousMode;
        LargePages = MmManagePartitionCreateLargePages(v32, Src, v14);
        goto LABEL_17;
      }
      v21 = v20 - 1;
      if ( !v21 )
      {
        LOBYTE(v15) = PreviousMode;
        LargePages = MiQuerySpecialPurposeMemoryInformation(*v32, a4, Size, v15);
        goto LABEL_17;
      }
      v28 = v21 - 1;
      if ( !v28 )
      {
        LOBYTE(v14) = PreviousMode;
        LargePages = MiOpenSpecialPurposeMemory(*v32, Src, v14);
        goto LABEL_17;
      }
      v29 = v28 - 1;
      v25 = v32;
      if ( !v29 )
      {
        LOBYTE(v15) = PreviousMode;
        LargePages = MmManagePartitionCharges(v32, Src, a4, v15);
        goto LABEL_17;
      }
      if ( v29 != 1 )
      {
        LargePages = MmManagePartitionSetMemoryThresholds(v32, (__int64)Src);
        goto LABEL_17;
      }
      v27 = 0LL;
      LOBYTE(v14) = PreviousMode;
    }
    else
    {
      if ( (_DWORD)v6 == 7 )
      {
        LOBYTE(v14) = PreviousMode;
        LargePages = MmManagePartitionNodeInformation(v32, Src, v14);
        goto LABEL_17;
      }
      if ( !(_DWORD)v6 )
      {
        LargePages = MmManagePartitionMemoryInformation(v32, Src);
LABEL_17:
        v13 = LargePages;
        if ( LargePages >= 0 && (PspPartitionInfoDetails[v10] & 0x200000000000000LL) != 0 )
        {
          if ( PreviousMode )
            ProbeForWrite((volatile void *)a4, Size, BYTE6(PspPartitionInfoDetails[v10]));
          memmove((void *)a4, Src, Size);
        }
        goto LABEL_22;
      }
      v22 = v6 - 1;
      if ( !v22 )
      {
        LOBYTE(v15) = PreviousMode;
        LargePages = MmManagePartitionMoveMemory(v32, v33, Src, v15);
        goto LABEL_17;
      }
      v23 = v22 - 1;
      if ( !v23 )
      {
        LOBYTE(v15) = PreviousMode;
        LargePages = MiCreatePagingFile(a4, a4 + 16, a4 + 24, v15, Src[8], *v32);
        goto LABEL_17;
      }
      v24 = v23 - 1;
      v25 = v32;
      if ( !v24 )
      {
        LOBYTE(v15) = PreviousMode;
        LargePages = MmManagePartitionCombineMemory(v32, Src, a4, v15);
        goto LABEL_17;
      }
      v26 = v24 - 1;
      if ( !v26 )
      {
        LOBYTE(v15) = PreviousMode;
        LargePages = MmManagePartitionInitialAddMemory(v32, Src, a4, v15);
        goto LABEL_17;
      }
      LOBYTE(v14) = PreviousMode;
      if ( v26 == 1 )
      {
        LargePages = MmManagePartitionGetMemoryEvents(v32, Src, v14);
        goto LABEL_17;
      }
      v27 = 1LL;
    }
    LargePages = MmManagePartitionUpdateAttributes(v25, Src, v14, v27);
    goto LABEL_17;
  }
LABEL_22:
  if ( v30 )
    PsDereferencePartition((__int64)v32);
  if ( v31 )
    PsDereferencePartition((__int64)v33);
  return (unsigned int)v13;
}
