/*
 * XREFs of RtlInitializeHistoryTable @ 0x140A55CFC
 * Callers:
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x140276100 (RtlLookupFunctionEntry.c)
 *     RtlpFunctionAddressTableEntry @ 0x140A55DF0 (RtlpFunctionAddressTableEntry.c)
 */

unsigned int *RtlInitializeHistoryTable()
{
  unsigned int i; // ebx
  void (__fastcall __noreturn *v1)(unsigned int); // rax
  __int64 v2; // r9
  unsigned int *v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned __int64 *v8; // rbx
  unsigned int *result; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  for ( i = 0; i < 0xC; ++i )
  {
    v1 = (void (__fastcall __noreturn *)(unsigned int))RtlpFunctionAddressTableEntry(i);
    if ( !v1 )
      break;
    if ( v1 == RtlRaiseStatus )
      byte_140E01945 = i;
    v3 = RtlLookupFunctionEntry((unsigned __int64)v1, &v10, 0LL, v2);
    v4 = 2LL * i;
    v5 = v10 + *v3;
    v6 = v10 + v3[1];
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v4 + 6] = v10;
    *(_QWORD *)&RtlpUnwindHistoryTable[2 * v4 + 8] = v3;
    if ( v5 < qword_140E01948 )
      qword_140E01948 = v5;
    if ( v6 > qword_140E01950 )
      qword_140E01950 = v6;
  }
  v10 = 0LL;
  v7 = 3LL;
  RtlpUnwindHistoryTable[0] = i;
  v8 = (unsigned __int64 *)&RtlpSafeMachineFrameEntries;
  do
  {
    result = RtlLookupFunctionEntry(*v8, &v10, 0LL, v2);
    *v8++ = v10 + result[2];
    --v7;
  }
  while ( v7 );
  return result;
}
