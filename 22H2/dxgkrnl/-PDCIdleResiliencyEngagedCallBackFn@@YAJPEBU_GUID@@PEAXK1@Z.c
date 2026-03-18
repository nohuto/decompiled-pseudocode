/*
 * XREFs of ?PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C022FBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0040B78 (McTemplateK0_EtwWriteTransfer.c)
 *     ?SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C022FC54 (-SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C02E64B8 (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 */

__int64 __fastcall PDCIdleResiliencyEngagedCallBackFn(
        LPCGUID SettingGuid,
        int *Value,
        ULONG ValueLength,
        PVOID Context)
{
  int v4; // edi
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rsi
  __int64 v7; // r8
  unsigned int v8; // ebx
  DXGGLOBAL *v9; // rax

  v4 = *Value;
  if ( *((unsigned __int8 *)DXGGLOBAL::GetGlobal() + 304376) != v4 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v8 = 1;
    if ( v4 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0_EtwWriteTransfer(v5, &CSAccountingInProgress_Start, v7);
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0_EtwWriteTransfer(v5, &CSAccountingInProgress_Stop, v7);
      v8 = 2;
    }
    DXGGLOBAL::IterateProcessAndApplyCSFn(Global, v8);
    v9 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::SetPDCIdleResiliencyEngaged(v9, v4);
  }
  return 0LL;
}
