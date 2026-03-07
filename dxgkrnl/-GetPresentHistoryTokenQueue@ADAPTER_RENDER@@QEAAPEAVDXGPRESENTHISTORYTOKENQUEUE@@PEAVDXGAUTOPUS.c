struct DXGPRESENTHISTORYTOKENQUEUE *__fastcall ADAPTER_RENDER::GetPresentHistoryTokenQueue(
        ADAPTER_RENDER *this,
        DXGPUSHLOCK **a2,
        int a3)
{
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  const void **v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rdi
  struct DXGPRESENTHISTORYTOKENQUEUE *result; // rax
  DXGPRESENTHISTORYTOKENQUEUE *v12; // rax
  DXGPRESENTHISTORYTOKENQUEUE *v13; // rax
  DXGPRESENTHISTORYTOKENQUEUE *v14; // rbp
  unsigned int v15; // ebp
  unsigned __int64 v16; // rax
  char *v17; // rax
  char *v18; // r14
  const wchar_t *v19; // r9

  CurrentProcess = PsGetCurrentProcess(this);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  v8 = (const void **)((char *)this + 1016);
  v9 = ProcessSessionId;
  v10 = ProcessSessionId;
  if ( ProcessSessionId >= *((_DWORD *)this + 252)
    || (result = (struct DXGPRESENTHISTORYTOKENQUEUE *)*((_QWORD *)*v8 + ProcessSessionId)) == 0LL )
  {
    if ( !a3 )
      return 0LL;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)a2);
    DXGPUSHLOCK::AcquireExclusive(a2[1]);
    *((_DWORD *)a2 + 4) = 2;
    if ( v9 >= *((_DWORD *)this + 252) )
    {
      v15 = v9 + 4;
      v16 = 8LL * (v9 + 4);
      if ( !is_mul_ok(v9 + 4, 8uLL) )
        v16 = -1LL;
      v17 = (char *)operator new[](v16, 0x4B677844u, 256LL);
      v18 = v17;
      if ( !v17 )
      {
        WdLogSingleEntry2(2LL, this, v10);
        v19 = L"No memory for the new Present History Token queue session table on ADAPTER_RENDER 0x%I64x for session 0x%I64x";
        goto LABEL_22;
      }
      if ( *v8 )
        memmove(v17, *v8, 8LL * *((unsigned int *)this + 252));
      memset(&v18[8 * *((unsigned int *)this + 252)], 0, 8LL * (v15 - *((_DWORD *)this + 252)));
      operator delete((void *)*v8);
      *v8 = v18;
      *((_DWORD *)this + 252) = v15;
    }
    if ( *((_QWORD *)*v8 + v10) )
      return (struct DXGPRESENTHISTORYTOKENQUEUE *)*((_QWORD *)*v8 + v10);
    v12 = (DXGPRESENTHISTORYTOKENQUEUE *)operator new[](0x4850uLL, 0x4B677844u, 64LL);
    if ( v12 )
    {
      v13 = DXGPRESENTHISTORYTOKENQUEUE::DXGPRESENTHISTORYTOKENQUEUE(v12);
      v14 = v13;
      if ( v13 )
      {
        if ( (int)DXGPRESENTHISTORYTOKENQUEUE::Initialize(v13) >= 0 )
        {
          *((_QWORD *)*v8 + v10) = v14;
          return (struct DXGPRESENTHISTORYTOKENQUEUE *)*((_QWORD *)*v8 + v10);
        }
        DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v14);
        return 0LL;
      }
    }
    WdLogSingleEntry2(2LL, this, v10);
    v19 = L"No memory for the new Present History Token queue on ADAPTER_RENDER 0x%I64x for session 0x%I64x";
LABEL_22:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v19, (__int64)this, v10, 0LL, 0LL, 0LL);
    return 0LL;
  }
  return result;
}
