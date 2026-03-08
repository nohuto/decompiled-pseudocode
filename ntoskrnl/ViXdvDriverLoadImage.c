/*
 * XREFs of ViXdvDriverLoadImage @ 0x140AC7A1C
 * Callers:
 *     VfDriverLoadSucceeded @ 0x140ABA300 (VfDriverLoadSucceeded.c)
 *     ViLogAndLoadXdv @ 0x140B93AE4 (ViLogAndLoadXdv.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 *     strcmp @ 0x1403D5570 (strcmp.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfUtilDbgPrint @ 0x1405CBEB4 (VfUtilDbgPrint.c)
 *     ViXdvSetXdvKernelUtilities @ 0x1405CCDB0 (ViXdvSetXdvKernelUtilities.c)
 *     ViXdvGetFuncAddress @ 0x140AC7C00 (ViXdvGetFuncAddress.c)
 */

char __fastcall ViXdvDriverLoadImage(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r15
  char v6; // bl
  const char *v7; // rbp
  void (__fastcall *FuncAddress)(__int64 (__fastcall **)(PCONTEXT), __int64 *, __int64); // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  void *v11; // rax
  __int64 (__fastcall *v12)(_QWORD); // rax
  void (*v13)(void); // rax
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v2 = RtlImageDirectoryEntryToData(v1, 1, 0, (int)&v15);
  v3 = v2;
  if ( v2 && *(_DWORD *)(v2 + 24) )
  {
    v4 = 0LL;
    v5 = v1 + *(unsigned int *)(v2 + 32);
    v6 = 1;
    while ( 1 )
    {
      v7 = (const char *)(v1 + *(unsigned int *)(v5 + 4 * v4));
      if ( !strcmp("SetXdvKernelUtilities", v7) )
      {
        FuncAddress = (void (__fastcall *)(__int64 (__fastcall **)(PCONTEXT), __int64 *, __int64))ViXdvGetFuncAddress(
                                                                                                    v1,
                                                                                                    v3,
                                                                                                    (unsigned int)v4);
        if ( !FuncAddress )
        {
          VfUtilDbgPrint("Error on getting XDV utility routine.\n");
          goto LABEL_21;
        }
        if ( !ViXdvSetXdvKernelUtilities(FuncAddress, v9, v10) )
        {
          VfUtilDbgPrint("Error on binding utility functions.\n");
LABEL_21:
          v6 = 0;
        }
      }
      else
      {
        if ( !strcmp("XdvHibernationNotification", v7) )
        {
          v11 = (void *)ViXdvGetFuncAddress(v1, v3, (unsigned int)v4);
          ViFnExtensionHiberFunc = v11;
LABEL_24:
          v6 = v11 != 0LL ? v6 : 0;
          goto LABEL_25;
        }
        if ( !strcmp("XdvQueryDispatchTable", v7) )
        {
          v12 = (__int64 (__fastcall *)(_QWORD))ViXdvGetFuncAddress(v1, v3, (unsigned int)v4);
          ViFnXdvQueryDispatchTable = v12;
          if ( !v12 )
          {
            VfUtilDbgPrint("Error on binding XdvQueryDispatchTable.\n");
            goto LABEL_21;
          }
          ViXdvTipUtils = v12(4LL);
          if ( !ViXdvTipUtils )
          {
            VfUtilDbgPrint("Error on binding TiP utilities.\n");
            goto LABEL_21;
          }
        }
        else if ( !strcmp("XdvLoadDifPlugins", v7) )
        {
          if ( (VfRuleClasses & 0x800000000LL) != 0 )
          {
            v13 = (void (*)(void))ViXdvGetFuncAddress(v1, v3, (unsigned int)v4);
            ViFnXdvLoadDifPlugins = (__int64)v13;
            if ( !v13 )
            {
              VfUtilDbgPrint("Error on calling XDV DIF plugins.\n");
              goto LABEL_21;
            }
            v13();
          }
        }
        else if ( !strcmp("AutoFailInject", v7) )
        {
          v11 = (void *)ViXdvGetFuncAddress(v1, v3, (unsigned int)v4);
          ViFnAutoFailInject = (__int64 (__fastcall *)(_QWORD))v11;
          goto LABEL_24;
        }
      }
LABEL_25:
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *(_DWORD *)(v3 + 24) )
        return v6;
    }
  }
  return 0;
}
