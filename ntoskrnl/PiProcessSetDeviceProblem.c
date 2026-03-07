__int64 __fastcall PiProcessSetDeviceProblem(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v3; // rbp
  __int64 v4; // rdi
  unsigned int v5; // r14d
  unsigned int v6; // edx
  unsigned int v7; // r9d
  int v8; // esi
  int v9; // ecx
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // ecx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  P = 0LL;
  v3 = *(_DWORD **)(a1 + 32);
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  if ( (unsigned int)(*(_DWORD *)(v4 + 300) - 789) <= 1 )
  {
    v5 = -1073741738;
  }
  else
  {
    v5 = 0;
    PiPnpRtlBeginOperation((__int64 **)&P);
    v6 = v3[5];
    v7 = v3[6];
    v8 = (v6 >> 18) & 1 | 4;
    if ( (v6 & 0x100) == 0 )
      v8 = (v3[5] >> 18) & 1;
    v9 = (v3[5] >> 1) & 0x4000 | 0x2000;
    if ( (v6 & 0x400) == 0 )
      v9 = (v3[5] >> 1) & 0x4000;
    v10 = v9;
    if ( v7 == 14 )
    {
      v11 = *(_DWORD *)(v4 + 300);
      if ( v11 != 772 && v11 != 771 && v11 != 788 )
        v10 = v9 & 0xFFFFDFFF;
      v8 |= 4u;
    }
    if ( !v10 )
      goto LABEL_19;
    v12 = *(_DWORD *)(v4 + 300);
    if ( ((v12 - 771) & 0xFFFFFFEE) == 0
      && v12 != 787
      && ((v10 & 0x4000) != 0 || v7 < 0x3A && !(unsigned int)PipIsProblemReadonly(v4, v7)) )
    {
      PipSetDevNodeProblem(v4, v7, v3[8]);
LABEL_19:
      PipSetDevNodeFlags(v4, v10);
      PipSetDevNodeUserFlags(v4, v8);
      goto LABEL_22;
    }
    v5 = -1073741584;
  }
LABEL_22:
  if ( (v3[7] & 1) != 0 )
  {
    ExFreePoolWithTag(v3, 0x55706E50u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return v5;
}
