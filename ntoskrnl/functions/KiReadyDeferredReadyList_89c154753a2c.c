__int64 __fastcall KiReadyDeferredReadyList(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rbx
  char v3; // r14
  unsigned __int8 *v6; // rsi
  __int64 result; // rax
  _QWORD *v8; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v10; // r8

  v2 = *a2;
  v3 = 0;
  if ( *a2 )
  {
    *a2 = (_QWORD *)*v2;
    do
    {
      KiDeferredReadySingleThread(a1, v2 - 27, a2);
      v2 = *a2;
      ++v3;
      if ( *a2 )
        *a2 = (_QWORD *)*v2;
      v6 = (unsigned __int8 *)(a1 + 12760);
      if ( (v3 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(a1 + 12760);
    }
    while ( v2 );
  }
  else
  {
    v6 = (unsigned __int8 *)(a1 + 12760);
  }
  result = v6[1];
  if ( (_BYTE)result )
  {
    if ( (_BYTE)result == 1 )
    {
      result = KiSendSoftwareInterrupt(*((unsigned int *)v6 + 1), *v6);
      v8 = v6 + 8;
    }
    else
    {
      v8 = v6 + 8;
      CurrentPrcb = KeGetCurrentPrcb();
      v10 = 47LL;
      if ( *v6 == 1 )
        v10 = 31LL;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      result = HalRequestIpiSpecifyVector(0LL, v6 + 8, v10);
    }
    if ( v6[1] == 2 )
    {
      *v8 = 2097153LL;
      result = (__int64)memset(v8 + 1, 0, 0x100uLL);
    }
    v6[1] = 0;
    *((_DWORD *)v6 + 1) = 0xFFFF;
  }
  return result;
}
