void __fastcall VfMiscMmUnmapLockedPages_Entry(__int64 a1)
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // rdx
  void *v5; // rsi
  ULONG_PTR v6; // r8
  __int64 v7; // rdi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  __int128 MemoryInformation; // [rsp+38h] [rbp-9h] BYREF
  __int128 v11; // [rsp+48h] [rbp+7h]
  __int128 v12; // [rsp+58h] [rbp+17h]
  _OWORD v13[2]; // [rsp+68h] [rbp+27h] BYREF
  __int128 v14; // [rsp+88h] [rbp+47h]

  MemoryInformation = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 <= 0x7FFFFFFEFFFFLL )
  {
    if ( CurrentIrql <= 1u )
      goto LABEL_7;
    v4 = 122LL;
  }
  else
  {
    if ( CurrentIrql <= 2u )
      goto LABEL_7;
    v4 = 121LL;
  }
  VerifierBugCheckIfAppropriate(0xC4u, v4, CurrentIrql, v3, *(_QWORD *)(a1 + 8));
LABEL_7:
  v5 = *(void **)(a1 + 16);
  if ( (unsigned __int64)v5 <= 0x7FFFFFFEFFFFLL )
  {
    if ( !PsGetProcessExitProcessCalled((__int64)KeGetCurrentThread()->ApcState.Process) )
    {
      if ( (v7 = ((*(_DWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + *(_DWORD *)(*(_QWORD *)(a1 + 8) + 44LL)) & 0xFFF)
               + *(unsigned int *)(*(_QWORD *)(a1 + 8) + 40LL)
               + 4095LL,
            ZwQueryVirtualMemory(
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              v5,
              (MEMORY_INFORMATION_CLASS)7,
              &MemoryInformation,
              0x30uLL,
              0LL) < 0)
        || (BYTE12(MemoryInformation) & 1) == 0
        || ((v8 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFF000uLL,
             v9 = v7 & 0xFFFFFFFFFFFFF000uLL,
             (_QWORD)MemoryInformation != v8)
         || (_QWORD)v11 != v9)
        && ((unsigned __int64)v11 < 0x3000
         || (_QWORD)MemoryInformation + 4096LL != v8
         || (_QWORD)v11 - 0x2000LL != v9
         || ZwQueryVirtualMemory(
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              (PVOID)MemoryInformation,
              MemoryBasicInformation,
              v13,
              0x30uLL,
              0LL) < 0
         || *(_QWORD *)&v13[0] != (_QWORD)MemoryInformation
         || DWORD1(v14)
         || ZwQueryVirtualMemory(
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              (PVOID)(v11 - 4096 + MemoryInformation),
              MemoryBasicInformation,
              v13,
              0x30uLL,
              0LL) < 0
         || *(_QWORD *)&v13[0] != (_QWORD)MemoryInformation + (_QWORD)v11 - 4096LL
         || DWORD1(v14)) )
      {
        if ( VfUtilCheckRuleEnforcement(*(_QWORD *)a1) )
          VerifierBugCheckIfAppropriate(0xC4u, 0xB9uLL, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 8), 0LL);
      }
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( (*(_WORD *)(v6 + 10) & 1) == 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0xB6uLL, v6, *(__int16 *)(v6 + 10), 1LL);
  }
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(*(_QWORD *)a1, 200LL, 0xD0u, -(__int64)*(unsigned int *)(*(_QWORD *)(a1 + 8) + 40LL));
}
