__int64 __fastcall rimPredictionPolicyUpdateStateAndApply(__int64 a1, __int64 a2, int a3, int a4)
{
  int v5; // edx
  _DWORD *v6; // rdi
  __int64 result; // rax
  int v8; // ecx
  int v9; // edx

  if ( a4 || (*(_DWORD *)(a1 + 360) & 8) != 0 || (v5 = 1, (unsigned int)(*(_DWORD *)(a1 + 24) - 1) > 3) )
    v5 = 0;
  v6 = (_DWORD *)(a2 + 2464);
  if ( v5 )
  {
    result = ApiSetDoPrediction(a1, *(_QWORD *)(a2 + 2488), *(_QWORD *)(a2 + 2480), a3, a2 + 96, a2 + 2472, a2 + 2464);
    if ( *(_DWORD *)(a2 + 2388) )
    {
      v8 = *v6 - *(_DWORD *)(a2 + 2480);
      v9 = *(_DWORD *)(a2 + 2468) - *(_DWORD *)(a2 + 2484);
      *(_DWORD *)(a2 + 2536) += v8;
      *(_DWORD *)(a2 + 2544) += v8;
      *(_DWORD *)(a2 + 2540) += v9;
      *(_DWORD *)(a2 + 2548) += v9;
    }
  }
  else
  {
    *(_QWORD *)v6 = *(_QWORD *)(a2 + 2480);
    result = *(_QWORD *)(a2 + 2488);
    *(_QWORD *)(a2 + 2472) = result;
  }
  return result;
}
