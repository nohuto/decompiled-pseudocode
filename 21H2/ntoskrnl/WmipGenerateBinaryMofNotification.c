/*
 * XREFs of WmipGenerateBinaryMofNotification @ 0x1407D12DC
 * Callers:
 *     WmipAddDataSource @ 0x140756A68 (WmipAddDataSource.c)
 *     WmipDSCleanup @ 0x14076CDF0 (WmipDSCleanup.c)
 *     WmipUpdateDataSource @ 0x1407C44E8 (WmipUpdateDataSource.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140252F68 (RtlStringCbCopyW.c)
 *     RtlStringCbPrintfExW @ 0x1402F3F10 (RtlStringCbPrintfExW.c)
 *     memset @ 0x140414300 (memset.c)
 *     WmipProcessEvent @ 0x140757F40 (WmipProcessEvent.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall WmipGenerateBinaryMofNotification(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // r14d
  _QWORD *v5; // r15
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // r12
  char *PoolWithTag; // rax
  char *v11; // rdi
  size_t v12; // rsi
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // [rsp+38h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 72) )
  {
    v4 = 0;
    v5 = (_QWORD *)(a1 + 88);
    do
    {
      v6 = *(_DWORD *)(a1 + 16);
      if ( (v6 & 2) != 0 )
      {
        v14 = -1LL;
        v9 = v4;
        do
          ++v14;
        while ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v4) + 2 * v14) );
        v8 = 2 * v14 + 4;
      }
      else
      {
        if ( (v6 & 1) == 0 )
          return;
        v7 = -1LL;
        do
          ++v7;
        while ( *(_WORD *)(*v5 + 2 * v7 + 4) );
        v8 = 2 * v7 + 14;
        v9 = v4;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v8 + 74, 0x70696D57u);
      v11 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v8 + 74);
        *(_DWORD *)v11 = v8 + 74;
        *((_DWORD *)v11 + 1) = 3;
        *((_QWORD *)v11 + 1) = 1LL;
        *((_DWORD *)v11 + 11) = 10;
        *(_OWORD *)(v11 + 24) = *a2;
        *((_QWORD *)v11 + 2) = MEMORY[0xFFFFF78000000014];
        *((_DWORD *)v11 + 15) = v8 + 2;
        v12 = v8 - 2;
        *((_DWORD *)v11 + 12) = 64;
        *((_DWORD *)v11 + 14) = 72;
        *((_WORD *)v11 + 32) = 0;
        *((_WORD *)v11 + 36) = 0;
        v13 = *(_DWORD *)(a1 + 16);
        if ( (v13 & 2) != 0 )
        {
          *((_WORD *)v11 + 37) = v12;
          RtlStringCbCopyW((NTSTRSAFE_PWSTR)v11 + 38, v12, *(NTSTRSAFE_PCWSTR *)(*v5 + 8 * v9));
        }
        else if ( (v13 & 1) != 0 )
        {
          LODWORD(v15) = v4 + *(_DWORD *)*v5;
          RtlStringCbPrintfExW((NTSTRSAFE_PWSTR)v11 + 38, v12, 0LL, 0LL, 0x200u, L"%ws%d", *v5 + 4LL, v15);
          *((_WORD *)v11 + 37) = v12;
        }
        WmipProcessEvent(v11, 1, 0);
        ExFreePoolWithTag(v11, 0);
        v5 = (_QWORD *)(a1 + 88);
      }
      ++v4;
    }
    while ( v4 < *(_DWORD *)(a1 + 72) );
  }
}
