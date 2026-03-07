__int64 __fastcall Simulator_Pre_EvalNameSpaceObject(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 v7; // rsi
  void *inited; // rax
  int v11; // ecx
  __int64 v12; // rdx
  _DWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v16[0] = 0LL;
  v7 = a3;
  inited = Simulator_AllocAndInitTestData();
  *(_QWORD *)a6 = inited;
  if ( inited )
  {
    v12 = *a4;
    *a5 = *a4;
    v11 = Simulator_Copy_Arguments(v7, v12, v16);
    if ( v11 >= 0 )
    {
      v13 = *(_DWORD **)a6;
      v14 = v16[0];
      *v13 = 1;
      v13[1] = 1;
      v13[2] = 1;
      *((_QWORD *)v13 + 2) = a1;
      *((_QWORD *)v13 + 3) = a2;
      *((_QWORD *)v13 + 4) = v7;
      *((_QWORD *)v13 + 5) = v14;
      *((_QWORD *)v13 + 8) = 0LL;
      v11 = Simulator_TestNotify(v13);
      if ( v11 >= 0 && *(_QWORD *)(*(_QWORD *)a6 + 64LL) == 1LL )
        *a4 = *(_QWORD *)(*(_QWORD *)a6 + 40LL);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v11;
}
