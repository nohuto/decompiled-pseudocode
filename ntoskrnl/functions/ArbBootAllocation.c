__int64 __fastcall ArbBootAllocation(__int64 a1, _QWORD **a2)
{
  __int64 *v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  int v7; // esi
  __int64 v8; // rcx
  __int64 result; // rax
  _QWORD v10[10]; // [rsp+20h] [rbp-59h] BYREF
  _QWORD v11[8]; // [rsp+70h] [rbp-9h] BYREF

  memset(v10, 0, sizeof(v10));
  memset(v11, 0, sizeof(v11));
  v4 = *(__int64 **)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 48);
  v10[7] = v11;
  v10[5] = v11;
  LOWORD(v10[8]) = 2;
  LODWORD(v10[6]) = 1;
  BYTE2(v10[8]) = 1;
  RtlCopyRangeList(v5, v4);
  v6 = (_QWORD *)**a2;
  if ( *a2 == v6 )
  {
LABEL_11:
    RtlFreeRangeList(*(_QWORD *)(a1 + 40));
    v8 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48);
    result = 0LL;
    *(_QWORD *)(a1 + 48) = v8;
    return result;
  }
  while ( 1 )
  {
    v10[4] = v6;
    ArbpBuildAlternative(a1, v6[3], v11);
    v10[9] = 0LL;
    v10[0] = v11[0];
    v10[1] = v11[1];
    BYTE3(v10[8]) = 0;
    if ( !v11[2] || !v11[3] || v11[1] < v11[0] || v11[0] % v11[3] || v11[1] - v11[0] + 1LL != v11[2] )
      goto LABEL_10;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(a1 + 224))(a1, v10);
    if ( v7 < 0 )
      break;
    (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 256))(a1, v10);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 128))(*(_QWORD *)(v10[5] + 40LL), v10[0], v6[9]);
    if ( (v10[8] & 0x10) != 0 )
    {
      ExFreePoolWithTag((PVOID)v10[9], 0);
      LOWORD(v10[8]) &= ~0x10u;
    }
LABEL_10:
    v6 = (_QWORD *)*v6;
    if ( *a2 == v6 )
      goto LABEL_11;
  }
  RtlFreeRangeList(*(_QWORD *)(a1 + 48));
  return (unsigned int)v7;
}
