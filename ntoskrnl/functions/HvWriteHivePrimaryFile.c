__int64 __fastcall HvWriteHivePrimaryFile(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  int v5; // r15d
  char v7; // r13
  _DWORD *v8; // r9
  int v9; // eax
  int v10; // eax
  __int64 (__fastcall *v11)(ULONG_PTR, _QWORD, __int128 *, __int64, int); // rax
  int v12; // ebx
  _QWORD *Pool2; // rsi
  unsigned int i; // ebx
  ULONG v15; // eax
  bool v16; // zf
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int128 v21; // [rsp+40h] [rbp-28h] BYREF
  int v22; // [rsp+50h] [rbp-18h]
  __int64 v23; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v24; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+60h]

  v25 = 0LL;
  LODWORD(v23) = 0;
  v4 = a2;
  v22 = 0;
  LODWORD(v24) = 0;
  v5 = a3 & 1;
  v7 = 0;
  v21 = 0LL;
  if ( !(_BYTE)a2 )
  {
    if ( *(_DWORD *)(BugCheckParameter2 + 128) )
    {
      v8 = *(_DWORD **)(BugCheckParameter2 + 64);
      v8[10] = *(_DWORD *)(BugCheckParameter2 + 280);
      v8[11] = 1;
      goto LABEL_4;
    }
LABEL_23:
    v12 = 0;
    goto LABEL_22;
  }
  if ( !*(_QWORD *)(BugCheckParameter2 + 1760) )
    goto LABEL_23;
  v8 = *(_DWORD **)(BugCheckParameter2 + 1776);
LABEL_4:
  v9 = *(_DWORD *)(BugCheckParameter2 + 184);
  v8[2] = v9;
  v8[1] = v9 + 1;
  v10 = HvpHeaderCheckSum(v8, a2, a3);
  v16 = CmpFailPrimarySave == 1;
  *(_DWORD *)(a4 + 508) = v10;
  if ( v16 )
    goto LABEL_26;
  v11 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int128 *, __int64, int))(BugCheckParameter2 + 40);
  *((_QWORD *)&v21 + 1) = a4;
  LODWORD(v21) = 0;
  v22 = 4096;
  v7 = 1;
  v12 = v11(BugCheckParameter2, 0LL, &v21, 1LL, v5);
  if ( v12 < 0 )
  {
LABEL_22:
    v16 = v4 == 0;
    goto LABEL_19;
  }
  if ( CmpFailPrimarySave == 2 )
  {
LABEL_26:
    v12 = -1073741823;
    goto LABEL_22;
  }
  if ( v4 )
  {
    Pool2 = *(_QWORD **)(BugCheckParameter2 + 1760);
    i = *(_DWORD *)(BugCheckParameter2 + 1768);
  }
  else
  {
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 24LL * *(unsigned int *)(BugCheckParameter2 + 128), 1649626435LL);
    if ( !Pool2 )
    {
      v12 = -1073741801;
      goto LABEL_22;
    }
    for ( i = 0; i < *(_DWORD *)(BugCheckParameter2 + 128); LODWORD(v23) = v19 + v18 )
    {
      if ( !(unsigned __int8)HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)&v24, (__int64)&v23, 0) )
        break;
      v18 = v23;
      v19 = i++;
      v20 = 3 * v19;
      Pool2[v20 + 1] = v25;
      LODWORD(v19) = v24;
      LODWORD(Pool2[v20]) = v18;
      LODWORD(Pool2[v20 + 2]) = v19;
    }
  }
  if ( CmpFailPrimarySave == 3 )
    goto LABEL_20;
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _QWORD *, _QWORD, int))(BugCheckParameter2 + 40))(
          BugCheckParameter2,
          0LL,
          Pool2,
          i,
          v5);
  if ( v12 < 0 )
    goto LABEL_17;
  if ( CmpFailPrimarySave == 4 )
    goto LABEL_20;
  v12 = CmpFileFlushAndPurge(BugCheckParameter2, 0);
  if ( v12 < 0 )
    goto LABEL_17;
  if ( CmpFailPrimarySave == 5 )
  {
LABEL_20:
    v12 = -1073741823;
  }
  else
  {
    if ( v4 )
      v15 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 1736));
    else
      v15 = *(_DWORD *)(BugCheckParameter2 + 128);
    CmpTraceHiveFlushWrotePrimaryFile(v15, v15 << 9);
    v7 = 0;
    v12 = 0;
  }
LABEL_17:
  if ( !Pool2 )
    goto LABEL_22;
  v16 = v4 == 0;
  if ( !v4 )
  {
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_22;
  }
LABEL_19:
  LOBYTE(a4) = v16;
  LOBYTE(a3) = v7;
  HvpFinishPrimaryWrite(BugCheckParameter2, v12 >= 0, a3, a4);
  return (unsigned int)v12;
}
