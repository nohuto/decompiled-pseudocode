_QWORD *__fastcall SmmIoMmuAllocatePage(__int64 a1, __int64 a2)
{
  char v3; // bl
  _QWORD *v4; // rsi
  __int64 v5; // r8
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF

  v12 = a2;
  v3 = 0;
  v4 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(a1 + 16));
  if ( !v4 )
  {
    _InterlockedIncrement(&dword_1C013BD0C);
    WdLogSingleEntry1(6LL, 564LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v7,
          v6,
          v8,
          0LL,
          1,
          -1,
          L"Failed to allocate IOMMU tracker page",
          564LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    return 0LL;
  }
  v4[4] = v12;
  *((_DWORD *)v4 + 6) = 0;
  v10 = *(_QWORD **)a1;
  if ( !*(_QWORD *)a1 )
    goto LABEL_10;
  while ( (int)SmmIoMmuCompareIoMmuPagePfn(&v12, (__int64)v10) < 0 )
  {
    v11 = (_QWORD *)*v10;
    if ( !*v10 )
      goto LABEL_10;
LABEL_12:
    v10 = v11;
  }
  v11 = (_QWORD *)v10[1];
  if ( v11 )
    goto LABEL_12;
  v3 = 1;
LABEL_10:
  LOBYTE(v5) = v3;
  RtlAvlInsertNodeEx(a1, v10, v5, v4);
  return v4;
}
