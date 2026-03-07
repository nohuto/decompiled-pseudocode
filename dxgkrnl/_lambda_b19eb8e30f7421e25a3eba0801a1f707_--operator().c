__int64 __fastcall lambda_b19eb8e30f7421e25a3eba0801a1f707_::operator()(int **a1)
{
  __int64 v2; // rcx
  int *v3; // rdi
  int *v4; // rbx
  int *v5; // rbx
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // rax
  __int64 *v9; // rdx
  _DWORD v11[2]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v12[24]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v13; // [rsp+80h] [rbp+7h]
  int v14; // [rsp+88h] [rbp+Fh]
  int v15; // [rsp+8Ch] [rbp+13h]
  int v16; // [rsp+90h] [rbp+17h]
  int v17; // [rsp+94h] [rbp+1Bh]
  int v18; // [rsp+98h] [rbp+1Fh]
  int v19; // [rsp+9Ch] [rbp+23h]
  __int64 v20; // [rsp+A0h] [rbp+27h]

  v2 = *(_QWORD *)a1[3];
  if ( v2 && !*(_BYTE *)(v2 + 18496) )
  {
    v3 = *a1;
    v4 = a1[2];
    WdLogSingleEntry3(2LL, (unsigned int)*v4, **a1, -1071775725LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Display broker was just disabled during UpdateDisplayConfig in session 0x%I64x, override ntStatus from 0x"
                "%I64x to 0x%I64x.",
      (unsigned int)*v4,
      *v3,
      -1071775725LL,
      0LL,
      0LL);
    *v3 = -1071775725;
  }
  v5 = *a1;
  v6 = **a1;
  if ( (int)(v6 + 0x80000000) >= 0 && (_DWORD)v6 != -1071775725 )
    DxgCreateLiveDumpWithWdLogs2(0x193u, 2078LL, v6, *(_QWORD *)a1[2], 0LL, 0x100000000LL);
  memset(v12, 0, sizeof(v12));
  v15 = 0;
  v7 = *v5;
  v8 = *(_QWORD *)a1[1];
  v18 = 0;
  v19 = 0;
  v14 = 0;
  v13 = 0LL;
  v9 = (__int64 *)a1[2];
  v17 = v7;
  v11[0] = 30;
  v11[1] = 72;
  memset(v12, 0, sizeof(v12));
  v16 = 106;
  v20 = v8;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v11, *v9);
}
