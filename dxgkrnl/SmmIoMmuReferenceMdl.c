__int64 __fastcall SmmIoMmuReferenceMdl(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  unsigned int v6; // r14d
  unsigned int v7; // ebp
  __int64 v9; // r8
  __int64 v10; // r15
  int updated; // eax
  __int64 v12; // rdx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  KIRQL OldIrql; // [rsp+A0h] [rbp+8h]

  v3 = *(unsigned int *)(a2 + 24);
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  OldIrql = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 8));
  if ( (_DWORD)v3 != *(_DWORD *)(a2 + 16) )
  {
    do
    {
      LOBYTE(v9) = a3;
      v10 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v3);
      updated = SmmIoMmuUpdatePfn(a1, v10, v9);
      v6 = updated;
      if ( updated == -1073741801 )
        goto LABEL_7;
      v3 = (unsigned int)(v3 + 1);
      if ( updated == 259 )
      {
        v12 = v7++;
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v12) = v10;
        if ( v7 == *(_DWORD *)(a2 + 20) )
          goto LABEL_10;
      }
    }
    while ( (_DWORD)v3 != *(_DWORD *)(a2 + 16) );
    if ( updated < 0 )
    {
LABEL_7:
      if ( (_DWORD)v3 )
      {
        do
        {
          SmmIoMmuUpdatePfn(a1, *(_QWORD *)(v5 + *(_QWORD *)a2), 0LL);
          v5 += 8LL;
          --v3;
        }
        while ( v3 );
      }
      goto LABEL_16;
    }
LABEL_10:
    if ( (_DWORD)v3 != *(_DWORD *)(a2 + 16) && *(_DWORD *)(a2 + 20) != v7 )
    {
      WdLogSingleEntry1(1LL, 699LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v14,
            v13,
            v15,
            0LL,
            2,
            -1,
            L"pArgs->OutputSize == OutputIndex",
            699LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
  *(_DWORD *)(a2 + 28) = v7;
  *(_DWORD *)(a2 + 24) = v3;
LABEL_16:
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 8), OldIrql);
  return v6;
}
