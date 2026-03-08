/*
 * XREFs of PiCMCaptureInterfaceListInputData @ 0x1406C488C
 * Callers:
 *     PiCMGetDeviceInterfaceList @ 0x1406C46EC (PiCMGetDeviceInterfaceList.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402459EC (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406CFA10 (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureInterfaceListInputData(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  int v6; // r12d
  char PreviousMode; // r9
  int UserModeCallersCopy; // ebx
  unsigned __int64 v9; // r8
  void **v10; // r14
  __int64 v11; // rcx
  _DWORD *v12; // r15
  unsigned __int64 v14; // r8
  __int64 v15; // r8
  char v16; // [rsp+80h] [rbp+8h]

  v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v16 = PreviousMode;
  UserModeCallersCopy = 0;
  if ( !a1 || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_19;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = a1 + a2;
    if ( v14 > 0x7FFFFFFF0000LL || v14 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x24 && *(_DWORD *)a1 == 36 )
    {
      *(_DWORD *)a4 = 40;
      *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 4);
      *(_OWORD *)(a4 + 8) = *(_OWORD *)(a1 + 8);
      *(_QWORD *)(a4 + 24) = *(unsigned int *)(a1 + 24);
      *(_DWORD *)(a4 + 32) = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(a4 + 36) = *(_DWORD *)(a1 + 32);
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  else
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = a1 + a2;
    if ( v9 > 0x7FFFFFFF0000LL || v9 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 < 0x28 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16);
      *(_QWORD *)(a4 + 32) = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)a4 != 40 )
        UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy < 0 )
  {
LABEL_37:
    v10 = (void **)(a4 + 24);
    goto LABEL_38;
  }
  v10 = (void **)(a4 + 24);
  v11 = *(_QWORD *)(a4 + 24);
  *(_QWORD *)(a4 + 24) = 0LL;
  if ( v11 )
  {
    v12 = (_DWORD *)(a4 + 32);
    v15 = *(unsigned int *)(a4 + 32);
    if ( (unsigned int)v15 >= 2 )
    {
      UserModeCallersCopy = PiControlMakeUserModeCallersCopy(a4 + 24, v11, v15, 2LL, PreviousMode, 1);
      if ( UserModeCallersCopy < 0 )
      {
        *v10 = 0LL;
        *v12 = 0;
      }
      else
      {
        v6 = 1;
        *((_WORD *)*v10 + ((unsigned __int64)(unsigned int)*v12 >> 1) - 1) = 0;
      }
      goto LABEL_19;
    }
  }
  else
  {
    v12 = (_DWORD *)(a4 + 32);
  }
  if ( v11 )
  {
    if ( *v12 < 2u )
      goto LABEL_35;
LABEL_19:
    if ( UserModeCallersCopy >= 0 )
      return (unsigned int)UserModeCallersCopy;
    goto LABEL_37;
  }
  if ( !*v12 )
    goto LABEL_19;
LABEL_35:
  UserModeCallersCopy = -1073741811;
LABEL_38:
  if ( v6 )
    PiControlFreeUserModeCallersBuffer(v16, *v10);
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  return (unsigned int)UserModeCallersCopy;
}
