/*
 * XREFs of RtlPrepareEnclaveCall @ 0x1405935B8
 * Callers:
 *     PsCallEnclave @ 0x14090D330 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlPrepareEnclaveCall(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v8; // r11
  __int64 v9; // rbx
  __int64 *v10; // r10
  __int64 v11; // r8
  __int64 v12; // rcx

  v8 = PspEnclaveDispatchReturn;
  v9 = PspCallEnclaveReturn;
  v10 = *(__int64 **)(a1 + 384);
  v11 = (__int64)v10;
  if ( (unsigned __int64)v10 >= 0x7FFFFFFF0000LL )
    v11 = 0x7FFFFFFF0000LL;
  *(_QWORD *)v11 = *(_QWORD *)v11;
  v12 = *v10;
  if ( *(_WORD *)(a1 + 368) != 51 || v12 != v9 && v12 != v8 )
    return 3221225485LL;
  *(_QWORD *)(a1 + 384) = v10 + 1;
  *(_QWORD *)(a1 + 360) = v12;
  if ( a5 )
    __writemsr(0x6A7u, __readmsr(0x6A7u) + 8);
  *(_QWORD *)(a1 + 80) = a2;
  *a6 = *(_QWORD *)(a1 + 360);
  *a7 = *(_QWORD *)(a1 + 344);
  return 0LL;
}
