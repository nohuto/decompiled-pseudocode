__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombinePageRecords(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebp
  char v9; // al
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 result; // rax

  if ( (a2[1] & 0xFFFFF000) != 0x1000 )
    NT_ASSERT("SourcePageRecord->RefCount == 1");
  v8 = ((_DWORD)a4 - *(_DWORD *)(a1 + 472) - ((unsigned int)a4 & 0xFFFFF000)) / *(_DWORD *)(a1 + 464)
     + (*(_DWORD *)((a4 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(a1 + 456));
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, a2);
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, a4);
  if ( (int)ST_STORE<SM_TRAITS>::StDmPageRecordRemove(a1, a2, a3) < 0 )
    NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
  *a2 = -1;
  a2[1] = v8;
  v9 = *(_BYTE *)(a1 + 1905);
  v10 = *(_DWORD *)(a1 + 1896) + 1;
  *(_DWORD *)(a1 + 1896) = v10;
  if ( (v9 & 3) == 0 && v10 > 0x400 )
  {
    v11 = *(_QWORD *)(a1 + 1912);
    *(_BYTE *)(a1 + 1905) = v9 & 0xFC | 1;
    ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(v11, 5LL, 30000LL, 4294967294LL);
  }
  if ( (*(_DWORD *)(a4 + 4) & 0xFFFFF000) >= 0xFFFFF000 )
    NT_ASSERT("TargetPageRecord->RefCount < ((1 << 20) - 1)");
  result = (unsigned int)(*(_DWORD *)(a4 + 4) + 4096);
  *(_DWORD *)(a4 + 4) = result;
  return result;
}
