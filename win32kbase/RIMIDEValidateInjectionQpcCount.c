__int64 __fastcall RIMIDEValidateInjectionQpcCount(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  int v5; // r14d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  LONGLONG v13; // rbx
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9

  v5 = a4;
  v12 = 0;
  if ( !*(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 424) )
  {
    v13 = 5000 * gliQpcFreq.QuadPart / 1000;
    *(_QWORD *)(SGDGetUserSessionState(
                  v9,
                  (unsigned __int128)(5000 * gliQpcFreq.QuadPart * (__int128)0x20C49BA5E353F7CFLL) >> 64,
                  v10,
                  v11)
              + 424) = v13;
  }
  if ( v5 && !a1 || !a2 && !a1 )
    return 1LL;
  if ( !v5 && (!a2 && a1 && !a5 || a1 == a2 || a1 - a2 > a3) )
    return 0LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  LOBYTE(v12) = (unsigned __int64)(PerformanceCounter.QuadPart - a1) <= *(_QWORD *)(SGDGetUserSessionState(
                                                                                      v17,
                                                                                      v16,
                                                                                      v18,
                                                                                      v19)
                                                                                  + 424);
  return v12;
}
