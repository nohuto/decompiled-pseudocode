__int64 __fastcall DpiDxgkDdiGetChildContainerId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-18h]
  int v17; // [rsp+20h] [rbp-18h]
  __int64 v18; // [rsp+28h] [rbp-10h]
  int v19; // [rsp+28h] [rbp-10h]

  v5 = (unsigned int)a3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v19 = 0;
    v17 = a3;
    McTemplateK0pqq_EtwWriteTransfer(a1, &EventEnterDdiGetChildContainerId, a3, a2, v17, v19);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 768))(a2, (unsigned int)v5, a4);
  v13 = v8;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v18) = v8;
    LODWORD(v16) = v5;
    McTemplateK0pqq_EtwWriteTransfer(v10, &EventExitDdiGetChildContainerId, v11, a2, v16, v18);
  }
  v14 = WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  *(_QWORD *)(v14 + 24) = a1;
  *(_QWORD *)(v14 + 32) = v5;
  *(_QWORD *)(v14 + 40) = v13;
  *(_OWORD *)(v14 + 48) = 0LL;
  return (unsigned int)v13;
}
