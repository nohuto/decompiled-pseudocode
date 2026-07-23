/*
 * XREFs of SeOpenObjectAuditAlarmForNonObObject @ 0x1407D28B0
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140693A3C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x140693BD0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091F5F8 (SepAdtOpenObjectAuditAlarm.c)
 *     SeExamineSacl @ 0x140921580 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x140924B78 (SeExamineGlobalSacl.c)
 */

void __fastcall SeOpenObjectAuditAlarmForNonObObject(
        PUNICODE_STRING ObjectType,
        unsigned __int64 a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned int *a5,
        struct _SECURITY_SUBJECT_CONTEXT *a6,
        int a7,
        int a8,
        int *a9,
        BOOLEAN GenerateAudit,
        _BYTE *a11)
{
  BOOLEAN AccessGranted; // si
  __int64 *v12; // rdi
  unsigned __int16 *v14; // rbx
  BOOLEAN v16; // al
  int v17; // r12d
  void *v18; // r8
  __int64 v19; // rbx
  __int16 v20; // ax
  ACL *v21; // rdx
  ACL *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r14d
  ACCESS_MASK v26; // ebp
  void *v27; // r8
  ACL *v28; // rdx
  __int16 v29; // ax
  __int64 v30; // rax
  BOOLEAN GenerateAlarm[72]; // [rsp+A0h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+F8h] [rbp+10h] BYREF
  unsigned __int16 *v33; // [rsp+100h] [rbp+18h]

  v33 = a3;
  v32 = a2;
  AccessGranted = GenerateAudit;
  v12 = (__int64 *)a6;
  v14 = a3;
  GenerateAlarm[0] = 0;
  v16 = SepAdtAuditThisEventWithContext(119LL, GenerateAudit, GenerateAudit == 0, a6);
  v17 = a7;
  GenerateAudit = v16;
  if ( !v16 )
    goto LABEL_2;
  v18 = (void *)*v12;
  if ( !*v12 )
    v18 = (void *)v12[2];
  v19 = (__int64)a5;
  v20 = *((_WORD *)a5 + 1);
  if ( (v20 & 0x10) != 0 )
  {
    if ( v20 >= 0 )
    {
      v21 = (ACL *)*((_QWORD *)a5 + 3);
    }
    else
    {
      v23 = a5[3];
      if ( (_DWORD)v23 )
        v21 = (ACL *)((char *)a5 + v23);
      else
        v21 = 0LL;
    }
    if ( v20 >= 0 )
    {
      v22 = (ACL *)*((_QWORD *)a5 + 3);
      goto LABEL_18;
    }
    v24 = a5[3];
    if ( (_DWORD)v24 )
    {
      v22 = (ACL *)((char *)a5 + v24);
      goto LABEL_18;
    }
  }
  else
  {
    v21 = 0LL;
  }
  v22 = 0LL;
LABEL_18:
  v25 = a8;
  v26 = a8 | a7;
  SeExamineSacl(v22, v21, v18, a8 | a7, AccessGranted, &GenerateAudit, GenerateAlarm);
  v27 = (void *)*v12;
  v28 = 0LL;
  if ( !*v12 )
    v27 = (void *)v12[2];
  v29 = *(_WORD *)(v19 + 2);
  if ( (v29 & 0x10) != 0 )
  {
    if ( v29 >= 0 )
    {
      v28 = *(ACL **)(v19 + 24);
    }
    else
    {
      v30 = *(unsigned int *)(v19 + 12);
      if ( (_DWORD)v30 )
        v28 = (ACL *)(v19 + v30);
    }
  }
  SeExamineGlobalSacl(ObjectType, v28, v27, v26, AccessGranted, &GenerateAudit, GenerateAlarm);
  if ( GenerateAudit )
  {
    SepAdtOpenObjectAuditAlarm(
      119,
      (int)ObjectType,
      (int)&v32,
      (int)v33,
      (__int64)a4,
      (PVOID)v19,
      *v12,
      v12[2],
      v17,
      v25,
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
  v14 = v33;
LABEL_2:
  if ( a9 )
  {
    if ( AccessGranted )
      SepAdtPrivilegeObjectAuditAlarm(
        (const int *)ObjectType,
        v14,
        a4,
        v32,
        *v12,
        v12[2],
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        v17,
        a9,
        AccessGranted);
  }
}
