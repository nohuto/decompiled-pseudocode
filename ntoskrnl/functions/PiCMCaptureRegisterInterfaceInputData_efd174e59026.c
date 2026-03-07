__int64 __fastcall PiCMCaptureRegisterInterfaceInputData(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  char PreviousMode; // al
  int UserModeCallersCopy; // edi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r8
  _QWORD *v9; // r12
  void *v10; // rax
  _DWORD *v11; // r15
  unsigned int v12; // r8d
  _QWORD *v13; // r12
  void *v14; // rax
  _DWORD *v15; // r15
  unsigned int v16; // r8d
  int v17; // r14d
  int v19; // [rsp+3Ch] [rbp-3Ch]
  char v21; // [rsp+80h] [rbp+8h]

  v19 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v21 = PreviousMode;
  UserModeCallersCopy = 0;
  if ( a1 && a2 )
  {
    if ( a3 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = a1 + a2;
      if ( v7 > 0x7FFFFFFF0000LL || v7 < a1 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( a2 >= 0x2C && *(_DWORD *)a1 == 44 )
      {
        *(_DWORD *)a4 = 56;
        *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 4);
        *(_OWORD *)(a4 + 8) = *(_OWORD *)(a1 + 8);
        *(_QWORD *)(a4 + 24) = *(unsigned int *)(a1 + 24);
        *(_DWORD *)(a4 + 32) = *(_DWORD *)(a1 + 28);
        *(_QWORD *)(a4 + 40) = *(unsigned int *)(a1 + 32);
        *(_DWORD *)(a4 + 48) = *(_DWORD *)(a1 + 36);
        *(_DWORD *)(a4 + 52) = *(_DWORD *)(a1 + 40);
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
      v8 = a1 + a2;
      if ( v8 > 0x7FFFFFFF0000LL || v8 < a1 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( a2 >= 0x38 )
      {
        *(_OWORD *)a4 = *(_OWORD *)a1;
        *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(a4 + 32) = *(_OWORD *)(a1 + 32);
        *(_QWORD *)(a4 + 48) = *(_QWORD *)(a1 + 48);
        if ( *(_DWORD *)a4 != 56 )
          UserModeCallersCopy = -1073741811;
      }
      else
      {
        UserModeCallersCopy = -1073741811;
      }
    }
    if ( UserModeCallersCopy < 0 )
      goto LABEL_39;
    v9 = (_QWORD *)(a4 + 24);
    v10 = *(void **)(a4 + 24);
    *(_QWORD *)(a4 + 24) = 0LL;
    if ( v10 )
    {
      v11 = (_DWORD *)(a4 + 32);
      v12 = *(_DWORD *)(a4 + 32);
      if ( v12 >= 2 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 24), v10, v12, 2u, v21, 1);
        if ( UserModeCallersCopy < 0 )
        {
          *v9 = 0LL;
          *v11 = 0;
        }
        else
        {
          v19 = 1;
          *(_WORD *)(*v9 + 2 * ((unsigned __int64)(unsigned int)*v11 >> 1) - 2) = 0;
        }
        goto LABEL_27;
      }
    }
    else
    {
      v11 = (_DWORD *)(a4 + 32);
    }
    if ( v10 )
    {
      if ( *v11 < 2u )
        goto LABEL_37;
    }
    else if ( *v11 )
    {
      goto LABEL_37;
    }
LABEL_27:
    v13 = (_QWORD *)(a4 + 40);
    v14 = *(void **)(a4 + 40);
    *(_QWORD *)(a4 + 40) = 0LL;
    if ( v14 )
    {
      v15 = (_DWORD *)(a4 + 48);
      v16 = *(_DWORD *)(a4 + 48);
      if ( v16 >= 2 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 40), v14, v16, 2u, v21, 1);
        if ( UserModeCallersCopy >= 0 )
        {
          v17 = 1;
          *(_WORD *)(*v13 + 2 * ((unsigned __int64)(unsigned int)*v15 >> 1) - 2) = 0;
          PreviousMode = v21;
          goto LABEL_40;
        }
        *v13 = 0LL;
        *v15 = 0;
        goto LABEL_38;
      }
    }
    else
    {
      v15 = (_DWORD *)(a4 + 48);
    }
    if ( v14 )
    {
      if ( *v15 >= 2u )
        goto LABEL_38;
    }
    else if ( !*v15 )
    {
      goto LABEL_38;
    }
LABEL_37:
    UserModeCallersCopy = -1073741811;
LABEL_38:
    PreviousMode = v21;
LABEL_39:
    v17 = 0;
    goto LABEL_40;
  }
  UserModeCallersCopy = -1073741811;
  v17 = 0;
LABEL_40:
  if ( UserModeCallersCopy < 0 )
  {
    if ( v19 )
      PiControlFreeUserModeCallersBuffer(PreviousMode, *(void **)(a4 + 24));
    if ( v17 )
      PiControlFreeUserModeCallersBuffer(v21, *(void **)(a4 + 40));
    *(_OWORD *)a4 = 0LL;
    *(_OWORD *)(a4 + 16) = 0LL;
    *(_OWORD *)(a4 + 32) = 0LL;
    *(_QWORD *)(a4 + 48) = 0LL;
  }
  return (unsigned int)UserModeCallersCopy;
}
