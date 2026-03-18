/*
 * XREFs of NtUserSystemParametersInfoForDpi @ 0x1C00A01C0
 * Callers:
 *     <none>
 * Callees:
 *     _SystemParametersInfoForDpi @ 0x1C00A033C (_SystemParametersInfoForDpi.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 */

__int64 __fastcall NtUserSystemParametersInfoForDpi(int a1, int a2, _DWORD *a3, __int64 a4, int a5)
{
  unsigned int v8; // ebx
  __int64 CurrentProcessWow64Process; // rax
  size_t v10; // r15
  _DWORD *v11; // rax
  int v12; // edx
  int v13; // r9d
  void *v14; // rdi
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9

  EnterCrit(0LL, 0LL);
  if ( !a5 || !a3 )
    goto LABEL_14;
  switch ( a1 )
  {
    case 31:
      v8 = 92;
      break;
    case 41:
      v8 = 504;
      break;
    case 45:
      v8 = 108;
      break;
    default:
      goto LABEL_14;
  }
  if ( a2 != v8 )
  {
LABEL_14:
    v15 = 0;
    UserSetLastError(87LL);
    goto LABEL_9;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
  v10 = v8;
  ProbeForWrite(a3, v8, CurrentProcessWow64Process != 0 ? 1 : 4);
  v11 = (_DWORD *)Win32AllocPoolWithQuotaZInit(v8, 2037674837LL);
  v14 = v11;
  if ( !v11 )
    ExRaiseStatus(-1073741801);
  *v11 = *a3;
  v15 = SystemParametersInfoForDpi(a1, v12, (_DWORD)v11, v13, a5);
  memmove(a3, v14, v10);
  Win32FreePool(v14);
LABEL_9:
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v15;
}
