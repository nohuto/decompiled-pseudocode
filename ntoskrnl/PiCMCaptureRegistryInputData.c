/*
 * XREFs of PiCMCaptureRegistryInputData @ 0x14076CA6C
 * Callers:
 *     PiCMOpenDeviceInterfaceKey @ 0x14067E994 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMOpenDeviceKey @ 0x14076C7C4 (PiCMOpenDeviceKey.c)
 *     PiCMOpenClassKey @ 0x14085C868 (PiCMOpenClassKey.c)
 *     PiCMOpenObjectKey @ 0x14086B97C (PiCMOpenObjectKey.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402459EC (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406CFA10 (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureRegistryInputData(_DWORD *a1, unsigned int a2, int a3, __int64 a4)
{
  int v6; // r12d
  char PreviousMode; // r9
  int UserModeCallersCopy; // ebx
  unsigned __int64 v9; // r8
  void **v10; // r14
  void *v11; // rcx
  _DWORD *v12; // r15
  unsigned int v13; // r8d
  unsigned __int64 v15; // r8
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
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = (unsigned __int64)a1 + a2;
    if ( v15 > 0x7FFFFFFF0000LL || v15 < (unsigned __int64)a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x24 && *a1 == 36 )
    {
      *(_DWORD *)a4 = 48;
      *(_DWORD *)(a4 + 4) = a1[1];
      *(_DWORD *)(a4 + 8) = a1[2];
      *(_QWORD *)(a4 + 16) = (unsigned int)a1[3];
      *(_DWORD *)(a4 + 24) = a1[4];
      *(_DWORD *)(a4 + 28) = a1[5];
      *(_DWORD *)(a4 + 32) = a1[6];
      *(_DWORD *)(a4 + 36) = a1[7];
      *(_DWORD *)(a4 + 40) = a1[8];
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  else
  {
    if ( ((unsigned __int8)a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (unsigned __int64)a1 + a2;
    if ( v9 > 0x7FFFFFFF0000LL || v9 < (unsigned __int64)a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 < 0x30 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *(_OWORD *)(a4 + 16) = *((_OWORD *)a1 + 1);
      *(_OWORD *)(a4 + 32) = *((_OWORD *)a1 + 2);
      if ( *(_DWORD *)a4 != 48 )
        UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy >= 0 )
  {
    v10 = (void **)(a4 + 16);
    v11 = *(void **)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    if ( v11 )
    {
      v12 = (_DWORD *)(a4 + 24);
      v13 = *(_DWORD *)(a4 + 24);
      if ( v13 >= 2 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)(a4 + 16), v11, v13, 2u, PreviousMode, 1);
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
LABEL_19:
        if ( UserModeCallersCopy >= 0 )
          return (unsigned int)UserModeCallersCopy;
        goto LABEL_23;
      }
    }
    else
    {
      v12 = (_DWORD *)(a4 + 24);
    }
    if ( v11 )
    {
      if ( *v12 >= 2u )
        goto LABEL_19;
    }
    else if ( !*v12 )
    {
      goto LABEL_19;
    }
    UserModeCallersCopy = -1073741811;
    goto LABEL_38;
  }
LABEL_23:
  v10 = (void **)(a4 + 16);
LABEL_38:
  if ( v6 )
    PiControlFreeUserModeCallersBuffer(v16, *v10);
  *(_OWORD *)a4 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_OWORD *)(a4 + 32) = 0LL;
  return (unsigned int)UserModeCallersCopy;
}
