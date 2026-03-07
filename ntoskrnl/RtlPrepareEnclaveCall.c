__int64 __fastcall RtlPrepareEnclaveCall(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 *v9; // r11
  __int64 v10; // r9
  __int64 v11; // rcx

  v9 = *(__int64 **)(a1 + 384);
  v10 = (__int64)v9;
  if ( (unsigned __int64)v9 >= 0x7FFFFFFF0000LL )
    v10 = 0x7FFFFFFF0000LL;
  *(_QWORD *)v10 = *(_QWORD *)v10;
  v11 = *v9;
  if ( *(_WORD *)(a1 + 368) != 51 || v11 != a3 && v11 != a4 )
    return 3221225485LL;
  *(_QWORD *)(a1 + 384) = v9 + 1;
  *(_QWORD *)(a1 + 360) = v11;
  if ( a5 )
    __writemsr(0x6A7u, __readmsr(0x6A7u) + 8);
  *(_QWORD *)(a1 + 80) = a2;
  *a6 = *(_QWORD *)(a1 + 360);
  *a7 = *(_QWORD *)(a1 + 344);
  return 0LL;
}
