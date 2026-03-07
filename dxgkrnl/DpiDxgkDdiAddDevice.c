__int64 __fastcall DpiDxgkDdiAddDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v13; // [rsp+28h] [rbp-10h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0ppq_EtwWriteTransfer(a1, &EventEnterDdiAddDevice, (__int64)a3, a2, 0LL, 0);
  v8 = (*(int (__fastcall **)(__int64, _QWORD *))(a1 + 144))(a2, a3);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v13) = v8;
    McTemplateK0ppq_EtwWriteTransfer(v7, &EventExitDdiAddDevice, v9, a2, *a3, v13);
  }
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v9, v10);
  v11[7] = 0LL;
  v11[3] = a1;
  v11[4] = a2;
  v11[5] = a3;
  v11[6] = v8;
  return (unsigned int)v8;
}
