/*
 * XREFs of _lambda_1ecc0e3e99406e51155bf30eed62debb_::operator() @ 0x1C025B09C
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C025B8CC (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     MonitorIsMonitorConnected @ 0x1C00E67DC (MonitorIsMonitorConnected.c)
 */

__int64 __fastcall lambda_1ecc0e3e99406e51155bf30eed62debb_::operator()(__int64 **a1, __int64 a2, _DWORD *a3)
{
  bool v3; // zf
  __int64 v5; // rdi
  __int64 v7; // rcx
  int IsMonitorConnected; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  char v18; // [rsp+30h] [rbp+8h] BYREF

  v3 = a3[3] == 0;
  v5 = (unsigned int)a2;
  v18 = 0;
  LOBYTE(a2) = v3 && !a3[4];
  *(_BYTE *)a1[1] |= a2;
  v7 = **a1;
  if ( *a3 != *(_DWORD *)(v7 + 316) || a3[1] != *(_DWORD *)(v7 + 320) )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v7, a2);
    v14[3] = v5;
    v14[4] = **a1;
LABEL_20:
    v16 = -1073741811LL;
    goto LABEL_21;
  }
  IsMonitorConnected = MonitorIsMonitorConnected(v7, (unsigned int)a3[2], 0, &v18);
  v11 = IsMonitorConnected;
  if ( IsMonitorConnected < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v5;
    *(_QWORD *)(v12 + 32) = v11;
    WdLogEvent5_WdError(v12);
    return (unsigned int)v11;
  }
  if ( v18 )
  {
    if ( (unsigned int)(a3[10] - 1) > 3 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
      v17 = (int)a3[10];
    }
    else if ( (unsigned int)(a3[11] - 100) > 0x190 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
      v17 = (unsigned int)a3[11];
    }
    else
    {
      if ( (unsigned int)(a3[9] - 1) <= 0x3E )
        return 0LL;
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
      v17 = (unsigned int)a3[9];
    }
    v14[3] = v17;
    v14[4] = v5;
    goto LABEL_20;
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
  v15 = (unsigned int)a3[2];
  v16 = -1071774920LL;
  v14[3] = v15;
  v14[4] = v5;
LABEL_21:
  v14[5] = v16;
  WdLogEvent5_WdError(v14);
  return (unsigned int)v16;
}
