/*
 * XREFs of PiCMCaptureRegistryPropertyInputData @ 0x1406C72B0
 * Callers:
 *     PiCMGetRegistryProperty @ 0x1406C74A4 (PiCMGetRegistryProperty.c)
 *     PiCMSetRegistryProperty @ 0x140967BA4 (PiCMSetRegistryProperty.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402459EC (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406CFA10 (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureRegistryPropertyInputData(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  char PreviousMode; // al
  int UserModeCallersCopy; // edi
  unsigned __int64 v7; // r8
  _QWORD *v8; // r12
  __int64 v9; // rax
  _DWORD *v10; // r15
  __int64 v11; // r8
  __int64 v12; // rax
  _DWORD *v13; // r15
  int v14; // r14d
  unsigned __int64 v16; // r8
  __int64 v17; // r8
  int v18; // [rsp+20h] [rbp-58h]
  int v19; // [rsp+3Ch] [rbp-3Ch]
  char v21; // [rsp+80h] [rbp+8h]

  v19 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v21 = PreviousMode;
  UserModeCallersCopy = 0;
  if ( !a1 || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    v14 = 0;
    goto LABEL_25;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = a1 + a2;
    if ( v16 > 0x7FFFFFFF0000LL || v16 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x28 && *(_DWORD *)a1 == 40 )
    {
      *(_DWORD *)a4 = 56;
      *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 8);
      *(_QWORD *)(a4 + 16) = *(unsigned int *)(a1 + 12);
      *(_DWORD *)(a4 + 24) = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a4 + 28) = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a4 + 32) = *(_DWORD *)(a1 + 24);
      *(_QWORD *)(a4 + 40) = *(unsigned int *)(a1 + 28);
      *(_DWORD *)(a4 + 48) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a4 + 52) = *(_DWORD *)(a1 + 36);
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
    v7 = a1 + a2;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 < 0x38 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(a4 + 32) = *(_OWORD *)(a1 + 32);
      *(_QWORD *)(a4 + 48) = *(_QWORD *)(a1 + 48);
      if ( *(_DWORD *)a4 != 56 )
        UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy < 0 )
    goto LABEL_24;
  v8 = (_QWORD *)(a4 + 16);
  v9 = *(_QWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0LL;
  if ( !v9 )
  {
    v10 = (_DWORD *)(a4 + 24);
LABEL_40:
    if ( v9 )
    {
      if ( *v10 < 2u )
        goto LABEL_29;
    }
    else if ( *v10 )
    {
      goto LABEL_29;
    }
    goto LABEL_19;
  }
  v10 = (_DWORD *)(a4 + 24);
  v11 = *(unsigned int *)(a4 + 24);
  if ( (unsigned int)v11 < 2 )
    goto LABEL_40;
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy(a4 + 16, v9, v11, 2LL, v21, 1);
  if ( UserModeCallersCopy < 0 )
  {
    *v8 = 0LL;
    *v10 = 0;
  }
  else
  {
    v19 = 1;
    *(_WORD *)(*v8 + 2 * ((unsigned __int64)(unsigned int)*v10 >> 1) - 2) = 0;
  }
LABEL_19:
  v12 = *(_QWORD *)(a4 + 40);
  *(_QWORD *)(a4 + 40) = 0LL;
  if ( !v12 )
  {
    v13 = (_DWORD *)(a4 + 48);
    goto LABEL_21;
  }
  v13 = (_DWORD *)(a4 + 48);
  v17 = *(unsigned int *)(a4 + 48);
  if ( !(_DWORD)v17 )
  {
LABEL_21:
    if ( v12 )
    {
      if ( *v13 )
        goto LABEL_23;
    }
    else if ( !*v13 )
    {
LABEL_23:
      PreviousMode = v21;
LABEL_24:
      v14 = 0;
      goto LABEL_25;
    }
LABEL_29:
    UserModeCallersCopy = -1073741811;
    goto LABEL_23;
  }
  LOBYTE(v18) = v21;
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy(a4 + 40, v12, v17, 1LL, v18, 1);
  PreviousMode = v21;
  if ( UserModeCallersCopy < 0 )
  {
    *(_QWORD *)(a4 + 40) = 0LL;
    *v13 = 0;
    goto LABEL_24;
  }
  v14 = 1;
LABEL_25:
  if ( UserModeCallersCopy < 0 )
  {
    if ( v19 )
      PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 16));
    if ( v14 )
      PiControlFreeUserModeCallersBuffer(v21, *(void **)(a4 + 40));
    *(_OWORD *)a4 = 0LL;
    *(_OWORD *)(a4 + 16) = 0LL;
    *(_OWORD *)(a4 + 32) = 0LL;
    *(_QWORD *)(a4 + 48) = 0LL;
  }
  return (unsigned int)UserModeCallersCopy;
}
