__int64 __fastcall NtUserSystemParametersInfoForDpi(int a1, int a2, _DWORD *a3, __int64 a4, int a5)
{
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 CurrentProcessWow64Process; // rax
  size_t v11; // r15
  _DWORD *v12; // rax
  int v13; // edx
  int v14; // r9d
  void *v15; // rdi
  int v16; // ebx
  __int64 v17; // rcx

  EnterCrit(0LL, 0LL);
  if ( !a5 || !a3 )
    goto LABEL_14;
  switch ( a1 )
  {
    case 31:
      v9 = 92;
      break;
    case 41:
      v9 = 504;
      break;
    case 45:
      v9 = 108;
      break;
    default:
      goto LABEL_14;
  }
  if ( a2 != v9 )
  {
LABEL_14:
    v16 = 0;
    UserSetLastError(87);
    goto LABEL_9;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8);
  v11 = v9;
  ProbeForWrite(a3, v9, CurrentProcessWow64Process != 0 ? 1 : 4);
  v12 = (_DWORD *)Win32AllocPoolWithQuotaZInit(v9, 2037674837LL);
  v15 = v12;
  if ( !v12 )
    ExRaiseStatus(-1073741801);
  *v12 = *a3;
  v16 = SystemParametersInfoForDpi(a1, v13, (_DWORD)v12, v14, a5);
  memmove(a3, v15, v11);
  Win32FreePool(v15);
LABEL_9:
  UserSessionSwitchLeaveCrit(v17);
  return v16;
}
