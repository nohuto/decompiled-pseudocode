_BOOL8 __fastcall RtlpHpCustomVaCallbacksEncodedComparison(_QWORD *a1, unsigned __int64 a2)
{
  return ((unsigned __int64)(a1 + 2) ^ RtlpHpHeapGlobals ^ a1[2]) == (a2 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a2)
      && ((unsigned __int64)(a1 + 2) ^ RtlpHpHeapGlobals ^ a1[3]) == (a2 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a2 + 8))
      && ((unsigned __int64)(a1 + 2) ^ RtlpHpHeapGlobals ^ a1[4]) == (a2 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a2 + 16))
      && ((unsigned __int64)(a1 + 2) ^ RtlpHpHeapGlobals ^ a1[5]) == (a2 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a2 + 24));
}
