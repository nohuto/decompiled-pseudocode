/*
 * XREFs of NtReplacePartitionUnit @ 0x1406772E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CDF08 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406CFA10 (PiControlMakeUserModeCallersCopy.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     IoReplacePartitionUnit @ 0x140951CD0 (IoReplacePartitionUnit.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtReplacePartitionUnit(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  struct _DEVICE_OBJECT *v6; // r14
  struct _DEVICE_OBJECT *v7; // rsi
  int v8; // edi
  NTSTATUS UserModeCallersCopy; // ebx
  ULONG v10; // r8d
  struct _DEVICE_OBJECT *v11; // rdx
  struct _DEVICE_OBJECT *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v19; // [rsp+20h] [rbp-68h]
  PVOID v20[3]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v21; // [rsp+48h] [rbp-40h] BYREF
  __int128 v22; // [rsp+58h] [rbp-30h] BYREF
  PVOID P; // [rsp+A8h] [rbp+20h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v20[1] = 0LL;
  v20[0] = 0LL;
  v7 = 0LL;
  v8 = 1;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
  {
    UserModeCallersCopy = -1073741790;
    goto LABEL_40;
  }
  if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, 1) )
  {
    UserModeCallersCopy = -1073741727;
    goto LABEL_40;
  }
  v10 = 0x80000000;
  if ( a3 == 0x80000000 )
  {
    v11 = 0LL;
    v12 = 0LL;
LABEL_7:
    UserModeCallersCopy = IoReplacePartitionUnit(v12, v11, v10);
    goto LABEL_40;
  }
  if ( a3 )
  {
    UserModeCallersCopy = -1073741583;
    goto LABEL_40;
  }
  if ( (a2 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a2 + 16 > 0x7FFFFFFF0000LL || a2 + 16 < a2 )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( (a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 16 > 0x7FFFFFFF0000LL || a1 + 16 < a1 )
    MEMORY[0x7FFFFFFF0000] = 0;
  v21 = *(_OWORD *)a2;
  v22 = *(_OWORD *)a1;
  if ( (unsigned __int16)(v22 - 1) > 0xC8u || (BYTE2(v22) & 1) != 0 )
    goto LABEL_39;
  if ( (unsigned __int16)(v21 - 1) > 0xC8u || (BYTE2(v21) & 1) != 0 )
  {
LABEL_38:
    UserModeCallersCopy = -1073741584;
    goto LABEL_40;
  }
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&P, *((_QWORD *)&v21 + 1), (unsigned __int16)v21, 2LL, 1, 1);
  if ( UserModeCallersCopy >= 0 )
  {
    LOBYTE(v19) = 1;
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy(
                            v20,
                            *((_QWORD *)&v22 + 1),
                            (unsigned __int16)v22,
                            2LL,
                            v19,
                            1);
    if ( UserModeCallersCopy >= 0 )
    {
      *((_QWORD *)&v21 + 1) = P;
      WORD1(v21) = v21;
      *((PVOID *)&v22 + 1) = v20[0];
      WORD1(v22) = v22;
      v13 = PnpDeviceObjectFromDeviceInstanceWithTag(&v21, 1953261124LL);
      v6 = (struct _DEVICE_OBJECT *)v13;
      if ( v13 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL);
        if ( v14 )
        {
          if ( (*(_DWORD *)(v14 + 396) & 0x20000) == 0 )
          {
            v16 = PnpDeviceObjectFromDeviceInstanceWithTag(&v22, 1953261124LL);
            v7 = (struct _DEVICE_OBJECT *)v16;
            if ( !v16
              || (v17 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL)) == 0
              || (*(_DWORD *)(v17 + 396) & 0x20000) != 0 )
            {
              v8 = 0;
            }
            if ( v8 )
            {
              v10 = 0;
              v11 = v6;
              v12 = v7;
              goto LABEL_7;
            }
LABEL_39:
            UserModeCallersCopy = -1073741585;
            goto LABEL_40;
          }
        }
      }
      goto LABEL_38;
    }
  }
LABEL_40:
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v20[0] )
    ExFreePoolWithTag(v20[0], 0);
  return (unsigned int)UserModeCallersCopy;
}
