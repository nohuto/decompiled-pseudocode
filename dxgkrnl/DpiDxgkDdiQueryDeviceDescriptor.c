__int64 __fastcall DpiDxgkDdiQueryDeviceDescriptor(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  int v4; // ebx
  __int64 v5; // rsi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  _QWORD *v15; // rax

  v4 = 0;
  v5 = (unsigned int)a3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0qqbr1pqqp_EtwWriteTransfer(a1, &EventEnterDdiQueryDeviceDescriptor, a3, 0, 0, 0LL, a2, a3, 0, 0);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(a1 + 216))(a2, (unsigned int)v5, a4);
  v14 = v9;
  if ( bTracingEnabled )
  {
    v10 = 0LL;
    v11 = 0LL;
    if ( a4 )
    {
      v4 = *a4;
      v10 = a4[1];
      v11 = *((_QWORD *)a4 + 1);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqbr1pqqp_EtwWriteTransfer(
        v11,
        &EventExitDdiQueryDeviceDescriptor,
        v12,
        v4,
        v10,
        v11,
        a2,
        v5,
        v9,
        v11);
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
  v15[4] = v5;
  v15[3] = a1;
  v15[5] = *a4;
  v15[6] = a4[1];
  v15[7] = v14;
  return (unsigned int)v14;
}
