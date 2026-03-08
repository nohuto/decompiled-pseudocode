/*
 * XREFs of PiCMCapturePropertyInputData @ 0x1406CF564
 * Callers:
 *     PiCMGetObjectProperty @ 0x1406CF2B4 (PiCMGetObjectProperty.c)
 *     PiCMSetObjectProperty @ 0x14078B060 (PiCMSetObjectProperty.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402459EC (PiControlFreeUserModeCallersBuffer.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406CFA10 (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCapturePropertyInputData(unsigned __int64 a1, unsigned int a2, int a3, char *a4)
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
  int v14; // esi
  __int64 v16; // r8
  unsigned __int64 v17; // r8
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
    v17 = a1 + a2;
    if ( v17 > 0x7FFFFFFF0000LL || v17 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x38 && *(_DWORD *)a1 == 56 )
    {
      *(_DWORD *)a4 = 72;
      *((_DWORD *)a4 + 1) = *(_DWORD *)(a1 + 4);
      *((_DWORD *)a4 + 2) = *(_DWORD *)(a1 + 8);
      *((_QWORD *)a4 + 2) = *(unsigned int *)(a1 + 12);
      *((_DWORD *)a4 + 6) = *(_DWORD *)(a1 + 16);
      *(_OWORD *)(a4 + 28) = *(_OWORD *)(a1 + 20);
      *((_DWORD *)a4 + 11) = *(_DWORD *)(a1 + 36);
      *((_DWORD *)a4 + 12) = *(_DWORD *)(a1 + 40);
      *((_QWORD *)a4 + 7) = *(unsigned int *)(a1 + 44);
      *((_DWORD *)a4 + 16) = *(_DWORD *)(a1 + 48);
      *((_DWORD *)a4 + 17) = *(_DWORD *)(a1 + 52);
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
    if ( a2 < 0x48 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *((_OWORD *)a4 + 1) = *(_OWORD *)(a1 + 16);
      *((_OWORD *)a4 + 2) = *(_OWORD *)(a1 + 32);
      *((_OWORD *)a4 + 3) = *(_OWORD *)(a1 + 48);
      *((_QWORD *)a4 + 8) = *(_QWORD *)(a1 + 64);
      if ( *(_DWORD *)a4 != 72 )
        UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy < 0 )
    goto LABEL_24;
  v8 = a4 + 16;
  v9 = *((_QWORD *)a4 + 2);
  *((_QWORD *)a4 + 2) = 0LL;
  if ( !v9 )
  {
    v10 = a4 + 24;
LABEL_43:
    if ( v9 )
    {
      if ( *v10 < 2u )
        goto LABEL_30;
    }
    else if ( *v10 )
    {
      goto LABEL_30;
    }
    goto LABEL_19;
  }
  v10 = a4 + 24;
  v11 = *((unsigned int *)a4 + 6);
  if ( (unsigned int)v11 < 2 )
    goto LABEL_43;
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
  v12 = *((_QWORD *)a4 + 7);
  *((_QWORD *)a4 + 7) = 0LL;
  if ( !v12 )
  {
    v13 = a4 + 64;
    goto LABEL_21;
  }
  v13 = a4 + 64;
  v16 = *((unsigned int *)a4 + 16);
  if ( !(_DWORD)v16 )
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
LABEL_30:
    UserModeCallersCopy = -1073741811;
    goto LABEL_23;
  }
  LOBYTE(v18) = v21;
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy(a4 + 56, v12, v16, 1LL, v18, 1);
  PreviousMode = v21;
  if ( UserModeCallersCopy < 0 )
  {
    *((_QWORD *)a4 + 7) = 0LL;
    *v13 = 0;
    goto LABEL_24;
  }
  v14 = 1;
LABEL_25:
  if ( UserModeCallersCopy < 0 )
  {
    if ( v19 )
      PiControlFreeUserModeCallersBuffer(PreviousMode, *((void **)a4 + 2));
    if ( v14 )
      PiControlFreeUserModeCallersBuffer(v21, *((void **)a4 + 7));
    memset(a4, 0, 0x48uLL);
  }
  return (unsigned int)UserModeCallersCopy;
}
