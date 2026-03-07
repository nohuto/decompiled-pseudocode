void __fastcall FreeBrushMemory(unsigned int *BugCheckParameter2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = BugCheckParameter2[36];
  if ( (_DWORD)v2 )
  {
    if ( (_DWORD)v2 != 1 )
      KeBugCheckEx(0x164u, 0x19uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v2) + 24) + 6504LL) + 24LL);
    if ( v4 )
      NSInstrumentation::CTypeIsolation<49152,192>::Free(v4, BugCheckParameter2);
  }
  else
  {
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v2) + 24) + 6504LL) + 16LL);
    if ( v3 )
      NSInstrumentation::CTypeIsolation<40960,160>::Free(v3, BugCheckParameter2);
  }
}
