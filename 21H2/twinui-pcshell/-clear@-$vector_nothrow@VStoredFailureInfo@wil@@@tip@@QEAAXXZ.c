/*
 * XREFs of ?clear@?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAAXXZ @ 0x1800ABADC
 * Callers:
 *     ??$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@Z @ 0x18009ED24 (--$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@VStor.c)
 *     ??1test_state@tip@@QEAA@XZ @ 0x1800A1580 (--1test_state@tip@@QEAA@XZ.c)
 * Callees:
 *     ??_GStoredFailureInfo@wil@@QEAAPEAXI@Z @ 0x1800A1F4C (--_GStoredFailureInfo@wil@@QEAAPEAXI@Z.c)
 */

void __fastcall tip::vector_nothrow<wil::StoredFailureInfo>::clear(__int64 a1)
{
  void *v1; // rdi
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi
  HANDLE ProcessHeap; // rax

  v1 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = 0LL;
    if ( *(_QWORD *)(a1 + 16) )
    {
      v4 = 0LL;
      do
      {
        wil::StoredFailureInfo::`scalar deleting destructor'((volatile signed __int32 **)(v4 + *(_QWORD *)a1));
        ++v3;
        v4 += 160LL;
      }
      while ( v3 < *(_QWORD *)(a1 + 16) );
      v1 = *(void **)a1;
    }
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
}
