/*
 * XREFs of RtlInitializeHistoryTable @ 0x140A56CFC
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1402640A0 (RtlLookupFunctionEntry.c)
 *     RtlpFunctionAddressTableEntry @ 0x140A56DF0 (RtlpFunctionAddressTableEntry.c)
 */

PRUNTIME_FUNCTION RtlInitializeHistoryTable()
{
  unsigned int i; // ebx
  void (__cdecl __noreturn *v1)(NTSTATUS); // rax
  PRUNTIME_FUNCTION v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi
  DWORD64 *v7; // rbx
  PRUNTIME_FUNCTION result; // rax
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF

  ImageBase = 0LL;
  for ( i = 0; i < 0xC; ++i )
  {
    v1 = (void (__cdecl __noreturn *)(NTSTATUS))RtlpFunctionAddressTableEntry(i);
    if ( !v1 )
      break;
    if ( v1 == RtlRaiseStatus )
      byte_140E01945 = i;
    v2 = RtlLookupFunctionEntry((DWORD64)v1, &ImageBase, 0LL);
    v3 = 2LL * i;
    v4 = ImageBase + v2->BeginAddress;
    v5 = ImageBase + v2->EndAddress;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 6] = ImageBase;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v3 + 8] = v2;
    if ( v4 < qword_140E01948 )
      qword_140E01948 = v4;
    if ( v5 > qword_140E01950 )
      qword_140E01950 = v5;
  }
  ImageBase = 0LL;
  v6 = 3LL;
  RtlpUnwindHistoryTable[0] = i;
  v7 = (DWORD64 *)&RtlpSafeMachineFrameEntries;
  do
  {
    result = RtlLookupFunctionEntry(*v7, &ImageBase, 0LL);
    *v7++ = ImageBase + result->UnwindInfoAddress;
    --v6;
  }
  while ( v6 );
  return result;
}
