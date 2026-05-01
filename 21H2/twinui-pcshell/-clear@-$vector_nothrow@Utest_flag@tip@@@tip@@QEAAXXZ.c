/*
 * XREFs of ?clear@?$vector_nothrow@Utest_flag@tip@@@tip@@QEAAXXZ @ 0x1800AB9D8
 * Callers:
 *     ??$load_nothrow@Utest_flag@tip@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@Z @ 0x18009EB44 (--$load_nothrow@Utest_flag@tip@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@ti.c)
 *     ??1test_state@tip@@QEAA@XZ @ 0x1800A1580 (--1test_state@tip@@QEAA@XZ.c)
 * Callees:
 *     ??_Gtest_flag@tip@@QEAAPEAXI@Z @ 0x1800A1F74 (--_Gtest_flag@tip@@QEAAPEAXI@Z.c)
 */

void __fastcall tip::vector_nothrow<tip::test_flag>::clear(__int64 a1)
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
        tip::test_flag::`scalar deleting destructor'((PROPVARIANT *)(v4 + *(_QWORD *)a1));
        ++v3;
        v4 += 104LL;
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
