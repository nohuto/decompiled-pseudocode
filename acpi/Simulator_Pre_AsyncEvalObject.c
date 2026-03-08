/*
 * XREFs of Simulator_Pre_AsyncEvalObject @ 0x1C00495FC
 * Callers:
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 * Callees:
 *     Simulator_AllocAndInitTestData @ 0x1C0048EC4 (Simulator_AllocAndInitTestData.c)
 *     Simulator_Copy_Arguments @ 0x1C0049088 (Simulator_Copy_Arguments.c)
 *     Simulator_TestNotify @ 0x1C0049970 (Simulator_TestNotify.c)
 */

__int64 __fastcall Simulator_Pre_AsyncEvalObject(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 *a5,
        void (__fastcall **a6)(__int64 a1, __int64 a2, __int64 a3, __int64 a4),
        _QWORD *a7,
        __int64 a8)
{
  __int64 v9; // rsi
  void *inited; // rax
  int v13; // ecx
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v18[3]; // [rsp+20h] [rbp-18h] BYREF

  v18[0] = 0LL;
  v9 = a3;
  inited = Simulator_AllocAndInitTestData();
  *(_QWORD *)a8 = inited;
  if ( inited )
  {
    v14 = *a4;
    *a5 = *a4;
    v13 = Simulator_Copy_Arguments(v9, v14, v18);
    if ( v13 >= 0 )
    {
      v15 = *(_DWORD **)a8;
      v16 = v18[0];
      *v15 = 1;
      v15[1] = 2;
      v15[2] = 1;
      *((_QWORD *)v15 + 2) = a1;
      *((_QWORD *)v15 + 3) = a2;
      *((_QWORD *)v15 + 4) = v9;
      *((_QWORD *)v15 + 5) = v16;
      *((_QWORD *)v15 + 6) = *a6;
      *((_QWORD *)v15 + 7) = *a7;
      *((_QWORD *)v15 + 8) = 0LL;
      *a6 = Simulator_AsyncEvalObjectCallBack;
      *a7 = v15;
      v13 = Simulator_TestNotify(v15);
      if ( v13 >= 0 && *(_QWORD *)(*(_QWORD *)a8 + 64LL) == 1LL )
        *a4 = *(_QWORD *)(*(_QWORD *)a8 + 40LL);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v13;
}
