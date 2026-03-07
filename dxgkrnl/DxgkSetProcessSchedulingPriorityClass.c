__int64 __fastcall DxgkSetProcessSchedulingPriorityClass(
        __int64 a1,
        enum _D3DKMT_SCHEDULINGPRIORITYCLASS a2,
        __int64 a3)
{
  int v5; // ebx
  DXGPROCESS *Process; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  int v10; // [rsp+20h] [rbp-29h] BYREF
  __int64 v11; // [rsp+28h] [rbp-21h]
  char v12; // [rsp+30h] [rbp-19h]
  _BYTE v13[8]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v14; // [rsp+48h] [rbp-1h]
  __int64 v15; // [rsp+50h] [rbp+7h]
  int v16; // [rsp+58h] [rbp+Fh]
  __int16 v17; // [rsp+5Ch] [rbp+13h]
  bool v18; // [rsp+5Eh] [rbp+15h]

  v10 = -1;
  v11 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2031;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2031);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v10, 2031);
  v15 = 0LL;
  v17 = 0;
  v14 = a1;
  v16 = 512;
  v18 = 0;
  v5 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v13, 0);
  if ( v5 >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v13);
    v5 = DXGPROCESS::SetProcessSchedulingPriorityClass(Process, a2, v18);
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v13);
  }
  if ( (_BYTE)v17 )
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v13);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v10);
  return (unsigned int)v5;
}
