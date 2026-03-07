__int64 __fastcall KiFlushSoftwareInterruptBatch(__int64 a1)
{
  __int64 result; // rax
  bool v3; // zf
  struct _KPRCB *CurrentPrcb; // rax
  char v5; // dl
  int v6; // ecx
  _QWORD *v7; // rdi
  unsigned int v8; // r8d

  result = *(unsigned __int8 *)(a1 + 1);
  if ( (_BYTE)result )
  {
    v3 = (_BYTE)result == 1;
    CurrentPrcb = KeGetCurrentPrcb();
    if ( v3 )
    {
      v5 = *(_BYTE *)a1;
      v6 = *(_DWORD *)(a1 + 4);
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      result = HalSendSoftwareInterrupt(v6, v5);
      v7 = (_QWORD *)(a1 + 8);
    }
    else
    {
      v7 = (_QWORD *)(a1 + 8);
      v8 = 47;
      if ( *(_BYTE *)a1 == 1 )
        v8 = 31;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      result = HalRequestIpiSpecifyVector(0, a1 + 8, v8);
    }
    if ( *(_BYTE *)(a1 + 1) == 2 )
    {
      *v7 = 2097153LL;
      result = (__int64)memset(v7 + 1, 0, 0x100uLL);
    }
    *(_BYTE *)(a1 + 1) = 0;
    *(_DWORD *)(a1 + 4) = 0xFFFF;
  }
  return result;
}
