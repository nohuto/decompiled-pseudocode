/*
 * XREFs of VidSchDdiNotifyInterrupt @ 0x1C000E9B0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiLogInterrupt @ 0x1C000EAC0 (VidSchiLogInterrupt.c)
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000EC20 (VidSchDdiNotifyInterruptWorker.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0019BB8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A820 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchDdiNotifyInterrupt(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 DxgAdapter; // rax
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // ecx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  char v15; // [rsp+40h] [rbp-18h]

  v13 = -1;
  v14 = 0LL;
  if ( (qword_1C0076010 & 2) != 0 )
  {
    v15 = 1;
    v13 = 4015;
    if ( byte_1C0076981 < 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 4015LL);
  }
  else
  {
    v15 = 0;
  }
  DxgCoreInterface[79]((ADAPTER_DISPLAY *)&v13, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)4015);
  if ( (DpiGetSchedulerCallbackState(a1) & 2) == 0
    || (DxgAdapter = DpiGetDxgAdapter(a1), (v7 = DxgAdapter) == 0)
    || (v8 = *(_QWORD *)(*(_QWORD *)(DxgAdapter + 2928) + 744LL)) == 0 )
  {
LABEL_10:
    result = ((__int64 (__fastcall *)(unsigned int *))DxgCoreInterface[80])(&v13);
    if ( !v15 )
      return result;
    goto LABEL_15;
  }
  LOBYTE(v6) = 1;
  VidSchiLogInterrupt(v8, a2, v6);
  if ( *a2 > 0x12 || (v9 = 263304, !_bittest(&v9, *a2)) || *(_QWORD *)(v7 + 2920) )
  {
    VidSchDdiNotifyInterruptWorker(*(_QWORD *)(v7 + 2928), a2, 1LL);
    goto LABEL_10;
  }
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 281LL, 7LL, v7, 0LL, 0LL);
  __debugbreak();
LABEL_15:
  result = (unsigned __int8)byte_1C0076981;
  if ( byte_1C0076981 < 0 )
    return McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v13);
  return result;
}
