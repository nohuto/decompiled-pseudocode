struct NSInstrumentation::CBackTraceStorageUnit *__fastcall NSInstrumentation::CBackTraceStorageUnit::Create(
        __int64 a1,
        const struct NSInstrumentation::CBackTrace *const a2,
        struct NSInstrumentation::CBackTraceStorageUnit *a3)
{
  struct NSInstrumentation::CBackTraceStorageUnit *result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0

  result = (struct NSInstrumentation::CBackTraceStorageUnit *)ExAllocatePool2(262LL, 184LL, 810120021LL);
  if ( result )
  {
    v7 = *(_OWORD *)a2;
    *((_QWORD *)result + 1) = a1;
    v8 = *((_OWORD *)a2 + 1);
    *((_OWORD *)result + 1) = v7;
    v9 = *((_OWORD *)a2 + 2);
    *((_OWORD *)result + 2) = v8;
    v10 = *((_OWORD *)a2 + 3);
    *((_OWORD *)result + 3) = v9;
    v11 = *((_OWORD *)a2 + 4);
    *((_OWORD *)result + 4) = v10;
    v12 = *((_OWORD *)a2 + 5);
    *((_OWORD *)result + 5) = v11;
    v13 = *((_OWORD *)a2 + 6);
    *((_OWORD *)result + 6) = v12;
    v14 = *((_OWORD *)a2 + 8);
    *((_OWORD *)result + 7) = v13;
    *((_OWORD *)result + 8) = *((_OWORD *)a2 + 7);
    v15 = *((_OWORD *)a2 + 9);
    *((_OWORD *)result + 9) = v14;
    *((_OWORD *)result + 10) = v15;
    *(_QWORD *)result = a3;
    *((_DWORD *)result + 44) = 1;
  }
  return result;
}
