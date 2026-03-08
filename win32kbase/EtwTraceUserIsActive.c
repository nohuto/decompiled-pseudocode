/*
 * XREFs of EtwTraceUserIsActive @ 0x1C00C14F0
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0080790 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     McTemplateK0qqm_EtwWriteTransfer @ 0x1C0166698 (McTemplateK0qqm_EtwWriteTransfer.c)
 */

unsigned __int64 __fastcall EtwTraceUserIsActive(_DWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r9
  __int64 v6; // r8
  struct _KPROCESS *v7; // rcx
  __int64 v8; // rcx
  int v9; // ebx
  _DWORD *v10; // rax
  int v11; // edx
  int v12; // r8d
  unsigned __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  result = 0LL;
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v6 = (unsigned int)(v5 - LODWORD(WPP_MAIN_CB.DeviceObjectExtension));
  if ( (unsigned int)v6 < 0xEA60 )
    return result;
  v7 = gptiForeground;
  LODWORD(WPP_MAIN_CB.DeviceObjectExtension) = v5;
  if ( !gptiForeground )
  {
    v9 = 0;
    goto LABEL_15;
  }
  v8 = *((_QWORD *)gptiForeground + 53);
  v9 = *(_DWORD *)(v8 + 56);
  v7 = *(struct _KPROCESS **)v8;
  if ( !v7 )
  {
LABEL_15:
    v13 = 0LL;
    goto LABEL_5;
  }
  result = PsGetProcessCreateTimeQuadPart(v7);
  v13 = result;
  v7 = (struct _KPROCESS *)HIDWORD(result);
LABEL_5:
  if ( a1 )
    *a1 = v9;
  if ( a2 )
    *a2 = result;
  if ( ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000000000020000uLL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000000000020000uLL) != 0
    && (qword_1C02C4058 & 0x8000000000020000uLL) == qword_1C02C4058
    && (Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
  {
    v10 = (_DWORD *)SGDGetUserSessionState(v7, 0x8000000000020000uLL, v6, v5);
    McTemplateK0qqm_EtwWriteTransfer((unsigned int)&v13, v11, v12, *v10, v9, (__int64)&v13);
  }
  return 1LL;
}
