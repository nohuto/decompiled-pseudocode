/*
 * XREFs of ?PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C02BFA80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0039FA4 (McTemplateK0_EtwWriteTransfer.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C02BF87C (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     ?SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C02BFC08 (-SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 */

__int64 __fastcall PDCIdleResiliencyEngagedCallBackFn(
        __int64 SettingGuid,
        int *Value,
        ULONG ValueLength,
        PVOID Context)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rdi
  __int64 v9; // r8
  unsigned int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGGLOBAL *v13; // rax

  v4 = *Value;
  v6 = *((unsigned __int8 *)DXGGLOBAL::GetGlobal(SettingGuid, (__int64)Value) + 304216);
  if ( (_DWORD)v6 != v4 )
  {
    Global = DXGGLOBAL::GetGlobal(v6, v5);
    if ( v4 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        McTemplateK0_EtwWriteTransfer(v7, &CSAccountingInProgress_Start, v9);
      v10 = 1;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        McTemplateK0_EtwWriteTransfer(v7, &CSAccountingInProgress_Stop, v9);
      v10 = 2;
    }
    DXGGLOBAL::IterateProcessAndApplyCSFn((__int64)Global, v10);
    v13 = DXGGLOBAL::GetGlobal(v12, v11);
    DXGGLOBAL::SetPDCIdleResiliencyEngaged(v13, v4);
  }
  return 0LL;
}
