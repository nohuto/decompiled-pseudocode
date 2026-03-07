__int64 __fastcall CTouchProcessor::GetPointerEventTarget(
        struct _KTHREAD **this,
        const struct CPointerInfoNode *a2,
        HWND *a3,
        __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagTHREADINFO *v11; // rax
  int v12; // r8d
  CInputDest *v14; // [rsp+50h] [rbp+8h] BYREF

  if ( this[5] != KeGetCurrentThread() )
  {
    LODWORD(v14) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15926);
  }
  if ( (*(_DWORD *)a2 & 0x100) == 0 )
  {
    LODWORD(v14) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15938);
  }
  v14 = 0LL;
  if ( (*((_DWORD *)PtiCurrentShared((__int64)this, (__int64)a2, (__int64)a3, a4) + 318) & 0x2000) != 0
    || (v11 = PtiCurrentShared(v8, v7, v9, v10), v12 = 0, (*((_DWORD *)v11 + 319) & 0x40) != 0) )
  {
    v12 = 1;
  }
  CTouchProcessor::GetPointerCapture((CTouchProcessor *)this, *((_QWORD *)a2 + 2), v12, &v14, 0LL);
  if ( v14 )
    *a3 = CInputDest::GetWindowHandle(v14);
  else
    *a3 = (HWND)*((_QWORD *)a2 + 24);
  return 1LL;
}
