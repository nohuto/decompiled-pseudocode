/*
 * XREFs of ?reserve@?$vector_nothrow@Utest_flag@tip@@@tip@@QEAA_N_K@Z @ 0x1800ADC18
 * Callers:
 *     ??$load_nothrow@Utest_flag@tip@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@Z @ 0x18009EB24 (--$load_nothrow@Utest_flag@tip@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@ti.c)
 * Callees:
 *     ??0test_flag@tip@@QEAA@$$QEAU01@@Z @ 0x1800A117C (--0test_flag@tip@@QEAA@$$QEAU01@@Z.c)
 *     ??_Gtest_flag@tip@@QEAAPEAXI@Z @ 0x1800A1F54 (--_Gtest_flag@tip@@QEAAPEAXI@Z.c)
 */

char __fastcall tip::vector_nothrow<tip::test_flag>::reserve(__int64 a1, unsigned __int64 a2)
{
  HANDLE ProcessHeap; // rax
  LPVOID v5; // rax
  unsigned __int64 v6; // rbx
  LPVOID v7; // r14
  void *v8; // rsi
  __int64 v9; // rsi
  HANDLE v10; // rax

  if ( a2 <= *(_QWORD *)(a1 + 8) )
  {
LABEL_10:
    LOBYTE(v5) = 1;
    return (char)v5;
  }
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 104 * a2);
  v6 = 0LL;
  v7 = v5;
  if ( v5 )
  {
    v8 = *(void **)a1;
    if ( *(_QWORD *)a1 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        v9 = 0LL;
        do
        {
          tip::test_flag::test_flag((__int64)v7 + v9, v9 + *(_QWORD *)a1);
          tip::test_flag::`scalar deleting destructor'((PROPVARIANT *)(v9 + *(_QWORD *)a1));
          ++v6;
          v9 += 104LL;
        }
        while ( v6 < *(_QWORD *)(a1 + 16) );
        v8 = *(void **)a1;
      }
      v10 = GetProcessHeap();
      HeapFree(v10, 0, v8);
    }
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = a2;
    goto LABEL_10;
  }
  return (char)v5;
}
