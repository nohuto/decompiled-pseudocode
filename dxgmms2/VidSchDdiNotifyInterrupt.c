/*
 * XREFs of VidSchDdiNotifyInterrupt @ 0x1C000ADD0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiLogInterrupt @ 0x1C000AEE0 (VidSchiLogInterrupt.c)
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000B040 (VidSchDdiNotifyInterruptWorker.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchDdiNotifyInterrupt(__int64 a1, unsigned int *a2)
{
  __int64 DxgAdapter; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // ecx
  __int64 result; // rax
  __int64 v10; // rcx
  int v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h]
  char v13; // [rsp+40h] [rbp-18h]

  v11 = -1;
  v12 = 0LL;
  if ( (qword_1C0076010 & 2) != 0 )
  {
    v13 = 1;
    v11 = 4015;
    if ( byte_1C00769C1 < 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter);
  }
  else
  {
    v13 = 0;
  }
  DxgCoreInterface[79]((ADAPTER_DISPLAY *)&v11, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)4015);
  if ( (DpiGetSchedulerCallbackState(a1) & 2) == 0
    || (DxgAdapter = DpiGetDxgAdapter(a1), (v6 = DxgAdapter) == 0)
    || (v7 = *(_QWORD *)(*(_QWORD *)(DxgAdapter + 2928) + 744LL)) == 0 )
  {
LABEL_10:
    result = ((__int64 (__fastcall *)(int *))DxgCoreInterface[80])(&v11);
    if ( !v13 )
      return result;
    goto LABEL_15;
  }
  LOBYTE(v5) = 1;
  VidSchiLogInterrupt(v7, a2, v5);
  if ( *a2 > 0x12 || (v8 = 263304, !_bittest(&v8, *a2)) || *(_QWORD *)(v6 + 2920) )
  {
    VidSchDdiNotifyInterruptWorker(*(_QWORD *)(v6 + 2928), a2, 1LL);
    goto LABEL_10;
  }
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 281LL, 7LL, v6, 0LL, 0LL);
  __debugbreak();
LABEL_15:
  result = (unsigned __int8)byte_1C00769C1;
  if ( byte_1C00769C1 < 0 )
    return McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit);
  return result;
}
