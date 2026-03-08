/*
 * XREFs of SeOpenObjectAuditAlarmForNonObObject @ 0x14085ED00
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406996AC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x140699810 (SepAdtAuditThisEventWithContext.c)
 *     SeExamineSacl @ 0x1408A18B0 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x1408A1D6A (SeExamineGlobalSacl.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409C930C (SepAdtOpenObjectAuditAlarm.c)
 */

void __fastcall SeOpenObjectAuditAlarmForNonObObject(
        PUNICODE_STRING ObjectType,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned int *a5,
        struct _SECURITY_SUBJECT_CONTEXT *a6,
        int a7,
        int a8,
        int *a9,
        char GenerateAudit,
        _BYTE *a11)
{
  BOOLEAN AccessGranted; // si
  __int64 *v12; // rdi
  unsigned __int16 *v14; // rbx
  char v16; // al
  int v17; // r12d
  void *v18; // r8
  __int64 v19; // rbx
  __int16 v20; // ax
  __int16 v21; // cx
  __int64 v22; // rax
  ACL *v23; // rdx
  __int64 v24; // rax
  ACL *v25; // rcx
  int v26; // r14d
  ACCESS_MASK v27; // ebp
  void *v28; // r8
  ACL *v29; // rdx
  __int16 v30; // ax
  __int64 v31; // rax
  BOOLEAN GenerateAlarm[72]; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v33; // [rsp+F8h] [rbp+10h] BYREF
  unsigned __int16 *v34; // [rsp+100h] [rbp+18h]

  v34 = a3;
  v33 = a2;
  AccessGranted = GenerateAudit;
  v12 = (__int64 *)a6;
  v14 = a3;
  GenerateAlarm[0] = 0;
  v16 = SepAdtAuditThisEventWithContext(118LL, GenerateAudit, GenerateAudit == 0, a6);
  v17 = a7;
  GenerateAudit = v16;
  if ( !v16 )
    goto LABEL_2;
  v18 = (void *)*v12;
  if ( !*v12 )
    v18 = (void *)v12[2];
  v19 = (__int64)a5;
  v20 = *((_WORD *)a5 + 1);
  v21 = v20 & 0x8000;
  if ( (v20 & 0x10) == 0 )
  {
    v23 = 0LL;
    goto LABEL_17;
  }
  if ( v21 )
  {
    v22 = a5[3];
    if ( (_DWORD)v22 )
      v23 = (ACL *)((char *)a5 + v22);
    else
      v23 = 0LL;
  }
  else
  {
    v23 = (ACL *)*((_QWORD *)a5 + 3);
  }
  if ( !v21 )
  {
    v25 = (ACL *)*((_QWORD *)a5 + 3);
    goto LABEL_18;
  }
  v24 = a5[3];
  if ( !(_DWORD)v24 )
  {
LABEL_17:
    v25 = 0LL;
    goto LABEL_18;
  }
  v25 = (ACL *)((char *)a5 + v24);
LABEL_18:
  v26 = a8;
  v27 = a8 | a7;
  SeExamineSacl(v25, v23, v18, a8 | a7, AccessGranted, (PBOOLEAN)&GenerateAudit, GenerateAlarm);
  v28 = (void *)*v12;
  v29 = 0LL;
  if ( !*v12 )
    v28 = (void *)v12[2];
  v30 = *(_WORD *)(v19 + 2);
  if ( (v30 & 0x10) != 0 )
  {
    if ( v30 >= 0 )
    {
      v29 = *(ACL **)(v19 + 24);
    }
    else
    {
      v31 = *(unsigned int *)(v19 + 12);
      if ( (_DWORD)v31 )
        v29 = (ACL *)(v19 + v31);
    }
  }
  SeExamineGlobalSacl(ObjectType, v29, v28, v27, AccessGranted, (PBOOLEAN)&GenerateAudit, GenerateAlarm);
  if ( GenerateAudit )
  {
    SepAdtOpenObjectAuditAlarm(
      118,
      (int)ObjectType,
      (int)&v33,
      (int)v34,
      (__int64)a4,
      (PVOID)v19,
      *v12,
      v12[2],
      v17,
      v26,
      (__int64)a9,
      AccessGranted,
      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
      2,
      0LL,
      0,
      0LL,
      0LL,
      0LL);
    *a11 = 1;
    return;
  }
  v14 = v34;
LABEL_2:
  if ( a9 )
  {
    if ( AccessGranted )
      SepAdtPrivilegeObjectAuditAlarm(
        (const int *)ObjectType,
        v14,
        a4,
        v33,
        *v12,
        v12[2],
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        v17,
        a9,
        AccessGranted);
  }
}
