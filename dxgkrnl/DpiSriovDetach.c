/*
 * XREFs of DpiSriovDetach @ 0x1C0399AF0
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01D7C80 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005A55C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z @ 0x1C005D778 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C005D8F0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DpiKsrDoKsrSave @ 0x1C03A16E4 (DpiKsrDoKsrSave.c)
 */

__int64 __fastcall DpiSriovDetach(_QWORD *a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v5; // esi
  __int64 v6; // rdi
  void *v7; // rdx
  PIRP v8; // rax
  void *v9; // rdx
  PIRP v10; // rax
  void *v11; // rdx
  PIRP v12; // rax
  signed __int32 v13; // eax
  _BYTE v15[16]; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+40h] [rbp-18h]

  v2 = a1[8];
  v5 = 0;
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v2, L"DpiSriovDetach", 0LL);
  v6 = a2 != 0 ? 5392LL : 5360LL;
  if ( *(_BYTE *)(v6 + v2 + 28) || *(_QWORD *)(v6 + v2) )
  {
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v15, a1, 0LL, 1, 0);
    if ( v16 >= 0 )
    {
      v7 = *(void **)(v6 + v2);
      *(_BYTE *)(v6 + v2 + 28) = 0;
      if ( v7 )
      {
        v8 = IoCsqRemoveNextIrp((PIO_CSQ)(v2 + 5272), v7);
        *(_QWORD *)(v6 + v2) = 0LL;
        if ( v8 )
        {
          v8->IoStatus.Status = -1073741536;
          v8->IoStatus.Information = 0LL;
          IofCompleteRequest(v8, 0);
        }
      }
      v9 = *(void **)(v6 + v2 + 8);
      if ( v9 )
      {
        v10 = IoCsqRemoveNextIrp((PIO_CSQ)(v2 + 5272), v9);
        *(_QWORD *)(v6 + v2 + 8) = 0LL;
        if ( v10 )
        {
          v10->IoStatus.Status = -1073741536;
          v10->IoStatus.Information = 0LL;
          IofCompleteRequest(v10, 0);
        }
      }
      v11 = *(void **)(v6 + v2 + 16);
      if ( v11 )
      {
        v12 = IoCsqRemoveNextIrp((PIO_CSQ)(v2 + 5272), v11);
        *(_QWORD *)(v6 + v2 + 16) = 0LL;
        if ( v12 )
        {
          v12->IoStatus.Status = -1073741536;
          v12->IoStatus.Information = 0LL;
          IofCompleteRequest(v12, 0);
        }
      }
      v13 = _InterlockedDecrement(&dword_1C013B9A8);
      if ( HIBYTE(word_1C013B998) && !v13 )
        DpiKsrDoKsrSave();
    }
    v5 = v16;
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v15);
    KeClearEvent((PRKEVENT)(v2 + 5440));
  }
  else
  {
    WdLogSingleEntry3(3LL, DpiFdoDispatchIoctl, DpiSriovDetach, 0LL);
  }
  if ( bTracingEnabled )
    VgpuTrace(0, v5, (void *)v2, L"DpiSriovDetach", 0LL);
  return v5;
}
