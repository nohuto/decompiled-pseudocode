__int64 __fastcall ArbRetestAllocation(__int64 a1, __int64 ***a2)
{
  __int64 **v4; // r8
  NTSTATUS v5; // edi
  __int64 **i; // rsi
  __int64 *j; // rsi
  __int64 (__fastcall *v8)(__int64, _QWORD *); // rax
  __int64 v10; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v11[10]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v12[64]; // [rsp+90h] [rbp-9h] BYREF

  v10 = 0LL;
  memset(v11, 0, sizeof(v11));
  memset(v12, 0, sizeof(v12));
  v4 = a2[2];
  v11[7] = v12;
  LODWORD(v11[6]) = 1;
  v11[5] = v12;
  LOWORD(v11[8]) = 1;
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 **, _QWORD))(a1 + 280))(
           a1,
           *((unsigned int *)a2 + 2),
           v4,
           *(_QWORD *)(a1 + 48));
    if ( v5 >= 0 )
      goto LABEL_8;
LABEL_17:
    RtlFreeRangeList_0(*(PRTL_RANGE_LIST *)(a1 + 48));
    return (unsigned int)v5;
  }
  v5 = RtlCopyRangeList(*(PRTL_RANGE_LIST *)(a1 + 48), *(PRTL_RANGE_LIST *)(a1 + 40));
  if ( v5 < 0 )
    goto LABEL_17;
  for ( i = (__int64 **)**a2; *a2 != i; i = (__int64 **)*i )
  {
    v5 = RtlDeleteOwnersRanges(*(PRTL_RANGE_LIST *)(a1 + 48), i[4]);
    if ( v5 < 0 )
      goto LABEL_17;
  }
LABEL_8:
  for ( j = **a2; *a2 != (__int64 **)j; j = (__int64 *)*j )
  {
    v11[9] = 0LL;
    v11[4] = j;
    v5 = ArbpBuildAlternative(a1, j[10], v12);
    if ( *((_DWORD *)j + 22) != 2 )
    {
      (*(void (__fastcall **)(__int64, _QWORD *, __int64 *))(a1 + 136))(j[9], v11, &v10);
      v8 = *(__int64 (__fastcall **)(__int64, _QWORD *))(a1 + 224);
      v11[1] = v11[0] - 1LL + v10;
      v5 = v8(a1, v11);
      if ( v5 < 0 )
        goto LABEL_17;
      if ( v10 )
        (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 256))(a1, v11);
      if ( (v11[8] & 0x10) != 0 )
      {
        ExFreePoolWithTag((PVOID)v11[9], 0);
        LOWORD(v11[8]) &= ~0x10u;
      }
    }
  }
  return (unsigned int)v5;
}
