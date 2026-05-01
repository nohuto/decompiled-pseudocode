/*
 * XREFs of ?reserve@?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAA_N_K@Z @ 0x1800ADDD4
 * Callers:
 *     ?push_back@?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z @ 0x1800ADA9C (-push_back@-$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z.c)
 * Callees:
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x18002DC64 (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ??_GStoredFailureInfo@wil@@QEAAPEAXI@Z @ 0x1800A1F2C (--_GStoredFailureInfo@wil@@QEAAPEAXI@Z.c)
 */

char __fastcall tip::vector_nothrow<wil::StoredFailureInfo>::reserve(__int64 a1, unsigned __int64 a2)
{
  SIZE_T v4; // rbx
  HANDLE ProcessHeap; // rax
  LPVOID v6; // rax
  unsigned __int64 v7; // rbx
  LPVOID v8; // rbp
  void *v9; // rsi
  __int64 v10; // rsi
  HANDLE v11; // rax

  if ( a2 <= *(_QWORD *)(a1 + 8) )
  {
LABEL_10:
    LOBYTE(v6) = 1;
    return (char)v6;
  }
  v4 = 160 * a2;
  ProcessHeap = GetProcessHeap();
  v6 = HeapAlloc(ProcessHeap, 0, v4);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    v9 = *(void **)a1;
    if ( *(_QWORD *)a1 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        v10 = 0LL;
        do
        {
          wil::StoredFailureInfo::StoredFailureInfo((__int64)v8 + v10, v10 + *(_QWORD *)a1);
          wil::StoredFailureInfo::`scalar deleting destructor'((volatile signed __int32 **)(v10 + *(_QWORD *)a1));
          ++v7;
          v10 += 160LL;
        }
        while ( v7 < *(_QWORD *)(a1 + 16) );
        v9 = *(void **)a1;
      }
      v11 = GetProcessHeap();
      HeapFree(v11, 0, v9);
    }
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = a2;
    goto LABEL_10;
  }
  return (char)v6;
}
