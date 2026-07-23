/*
 * XREFs of ViXdvDriverLoadImage @ 0x1409C9E2C
 * Callers:
 *     ViLogAndLoadXdv @ 0x140A948F4 (ViLogAndLoadXdv.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140286140 (RtlImageDirectoryEntryToData.c)
 *     strcmp @ 0x1403D38A0 (strcmp.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfUtilDbgPrint @ 0x1405A0924 (VfUtilDbgPrint.c)
 *     ViXdvSetXdvKernelUtilities @ 0x1405A10B4 (ViXdvSetXdvKernelUtilities.c)
 *     VfIsRuleClassEnabled @ 0x1409C7020 (VfIsRuleClassEnabled.c)
 *     ViXdvBindXdvDDIWrappers @ 0x1409C9C50 (ViXdvBindXdvDDIWrappers.c)
 *     ViXdvBindXdvDriverEntryWrappers @ 0x1409C9D1C (ViXdvBindXdvDriverEntryWrappers.c)
 *     ViXdvGetFuncAddress @ 0x1409CA0D8 (ViXdvGetFuncAddress.c)
 *     ViXdvSetRequestedAPIsforDIF @ 0x1409CA220 (ViXdvSetRequestedAPIsforDIF.c)
 */

char __fastcall ViXdvDriverLoadImage(__int64 a1)
{
  char *v1; // rbp
  char v2; // r14
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  char v5; // r12
  char *v6; // r13
  char v7; // r15
  __int64 v8; // rdi
  const char *v9; // rsi
  __int64 FuncAddress; // rax
  __int64 (__fastcall *v11)(__int64 *, __int64); // rax
  __int64 v12; // rdx
  __int64 (*v13)(void); // rax
  void (__fastcall *v14)(__int64 (__fastcall **)(PCONTEXT)); // rax
  __int64 (__fastcall *v15)(_QWORD); // rax
  ULONG v17; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(char **)(a1 + 48);
  v2 = 1;
  v3 = RtlImageDirectoryEntryToData(v1, 1u, 0, &v17);
  v4 = v3;
  if ( !v3 || !v3[6] )
    return 0;
  v5 = 0;
  v6 = &v1[v3[8]];
  v7 = 0;
  v8 = 0LL;
  do
  {
    v9 = &v1[*(unsigned int *)&v6[4 * v8]];
    if ( !strcmp("DifLoadPlugins", v9) )
    {
      if ( VfIsRuleClassEnabled(0x23u) )
      {
        FuncAddress = ViXdvGetFuncAddress(v1, v4, (unsigned int)v8);
        if ( !(unsigned __int8)ViXdvSetRequestedAPIsforDIF(FuncAddress) )
          VfDifAPIThunkContextHead = 0LL;
      }
    }
    else if ( !strcmp("DifUpdatePluginState", v9) )
    {
      if ( VfIsRuleClassEnabled(0x23u) )
        PFnViUpdateDIFPlugins = ViXdvGetFuncAddress(v1, v4, (unsigned int)v8);
    }
    else if ( !strcmp("GetXdvDDIWrappers", v9) )
    {
      v11 = (__int64 (__fastcall *)(__int64 *, __int64))ViXdvGetFuncAddress(v1, v4, (unsigned int)v8);
      v5 = ViXdvBindXdvDDIWrappers(v11, v12);
      if ( v5 != 1 )
        VfUtilDbgPrint("Error on Verifier Extention DDI bound process\n");
    }
    else if ( !strcmp("GetXdvDriverEntryWrappers", v9) )
    {
      v13 = (__int64 (*)(void))ViXdvGetFuncAddress(v1, v4, (unsigned int)v8);
      v7 = ViXdvBindXdvDriverEntryWrappers(v13);
      if ( v7 != 1 )
        VfUtilDbgPrint("Error on Verifier Extention entry point bound process\n");
    }
    else if ( !strcmp("SetXdvKernelUtilities", v9) )
    {
      v14 = (void (__fastcall *)(__int64 (__fastcall **)(PCONTEXT)))ViXdvGetFuncAddress(v1, v4, (unsigned int)v8);
      if ( !ViXdvSetXdvKernelUtilities(v14) )
        VfUtilDbgPrint("Error on providing kernel utilities to  XDV.\n");
    }
    else if ( !strcmp("XdvHibernationNotification", v9) )
    {
      ViFnExtensionHiberFunc = (PVOID)ViXdvGetFuncAddress(v1, v4, (unsigned int)v8);
    }
    else if ( !strcmp("XdvNotifyExtensions", v9) )
    {
      ViFnXdvNotifyExtensions = ViXdvGetFuncAddress(v1, v4, (unsigned int)v8);
    }
    else if ( !strcmp("XdvQueryDispatchTable", v9) )
    {
      v15 = (__int64 (__fastcall *)(_QWORD))ViXdvGetFuncAddress(v1, v4, (unsigned int)v8);
      ViFnXdvQueryDispatchTable = v15;
      if ( v15 )
      {
        ViXdvTipUtils = v15(4LL);
        if ( !ViXdvTipUtils )
          VfUtilDbgPrint("Error on getting TiP utilities from XDV.\n");
      }
      else
      {
        VfUtilDbgPrint("Error on getting XdvQueryDispatchTable utility from XDV.\n");
      }
    }
    v8 = (unsigned int)(v8 + 1);
  }
  while ( (unsigned int)v8 < v4[6] );
  if ( !v5 || !v7 )
    return 0;
  return v2;
}
