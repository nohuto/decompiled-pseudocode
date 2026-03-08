/*
 * XREFs of ?DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z @ 0x1C01D29C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C003FF7C (McTemplateK0pt_EtwWriteTransfer.c)
 */

void __fastcall DxgkSetProcessStatus(struct _D3DKMT_PROCESS_STATUS_INTERNAL *a1)
{
  __int64 v2; // rbp
  __int64 ProcessDxgProcess; // rbx
  __int64 v4; // r8
  int v5; // edx
  bool v6; // zf
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  signed __int32 v9; // ett
  __int64 v10; // rbx
  const wchar_t *v11; // r9

  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 424)
    && _InterlockedCompareExchange((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 423, 1, 1) )
  {
    return;
  }
  v2 = *(_QWORD *)a1;
  ProcessDxgProcess = PsGetProcessDxgProcess(*(_QWORD *)a1);
  if ( !ProcessDxgProcess )
  {
    v10 = 4156LL;
    WdLogSingleEntry1(1LL, 4156LL);
    v11 = L"Current process does not have DxgProcess!";
    goto LABEL_24;
  }
  if ( *((_DWORD *)a1 + 2) == 1 )
  {
    v5 = 1;
    goto LABEL_5;
  }
  if ( *((_DWORD *)a1 + 2) != 2 )
  {
    v10 = 4116LL;
    WdLogSingleEntry1(1LL, 4116LL);
    v11 = L"Invalid DxgProcess state!";
LABEL_24:
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v11, v10, 0LL, 0LL, 0LL, 0LL);
    return;
  }
  v5 = 2;
LABEL_5:
  v6 = *((_BYTE *)a1 + 12) == 0;
  _m_prefetchw((const void *)(ProcessDxgProcess + 432));
  v7 = *(_DWORD *)(ProcessDxgProcess + 432);
  if ( v6 )
  {
    v4 = (unsigned int)~v5;
    do
    {
      v9 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(ProcessDxgProcess + 432), v4 & v7, v7);
    }
    while ( v9 != v7 );
    if ( (v7 & v5) == 0 )
      return;
  }
  else
  {
    do
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(ProcessDxgProcess + 432), v5 | v7, v7);
    }
    while ( v8 != v7 );
    if ( (v5 & v7) != 0 )
      return;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pt_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &SetProcessStatus,
      v4,
      v2,
      *(_DWORD *)(ProcessDxgProcess + 432));
  _InterlockedAdd((volatile signed __int32 *)(ProcessDxgProcess + 440), 1u);
  if ( _InterlockedExchange((volatile __int32 *)(ProcessDxgProcess + 436), 1) )
    _InterlockedDecrement((volatile signed __int32 *)(ProcessDxgProcess + 440));
  else
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(*(_QWORD *)(ProcessDxgProcess + 64) + 48LL), CriticalWorkQueue);
}
