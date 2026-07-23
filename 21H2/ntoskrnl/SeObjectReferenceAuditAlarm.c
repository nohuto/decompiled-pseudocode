/*
 * XREFs of SeObjectReferenceAuditAlarm @ 0x140655E9C
 * Callers:
 *     ObpCheckObjectReference @ 0x140655D5C (ObpCheckObjectReference.c)
 * Callees:
 *     SepAdtAuditThisEventWithContext @ 0x140693BD0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14091F3CC (SepAdtObjectReferenceAuditAlarm.c)
 *     SeExamineSacl @ 0x140921580 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x140924B78 (SeExamineGlobalSacl.c)
 */

void __fastcall SeObjectReferenceAuditAlarm(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ACCESS_MASK DesiredAccess,
        BOOLEAN GenerateAlarm,
        BOOLEAN a7,
        char a8)
{
  __int64 v10; // r14
  BOOLEAN AccessGranted; // si
  void *v12; // r8
  __int16 v13; // ax
  ACL *v14; // rdx
  ACL *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  void *v18; // r8
  __int16 v19; // ax
  __int64 v20; // rax
  ACL *v21; // rdx
  __int64 v22; // r9
  __int64 GenerateAudit; // [rsp+60h] [rbp+8h] BYREF

  GenerateAudit = a1;
  v10 = a2;
  LOBYTE(GenerateAudit) = 0;
  GenerateAlarm = 0;
  if ( !a8 )
    return;
  if ( !a3 )
    return;
  AccessGranted = a7;
  LOBYTE(a2) = a7;
  if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(121LL, a2, 0LL, a4) )
    return;
  v12 = *(void **)a4;
  if ( !*(_QWORD *)a4 )
    v12 = *(void **)(a4 + 16);
  v13 = *(_WORD *)(a3 + 2);
  if ( (v13 & 0x10) != 0 )
  {
    if ( v13 >= 0 )
    {
      v14 = *(ACL **)(a3 + 24);
    }
    else
    {
      v16 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v16 )
        v14 = (ACL *)(a3 + v16);
      else
        v14 = 0LL;
    }
    if ( v13 >= 0 )
    {
      v15 = *(ACL **)(a3 + 24);
      goto LABEL_19;
    }
    v17 = *(unsigned int *)(a3 + 12);
    if ( (_DWORD)v17 )
    {
      v15 = (ACL *)(a3 + v17);
      goto LABEL_19;
    }
  }
  else
  {
    v14 = 0LL;
  }
  v15 = 0LL;
LABEL_19:
  SeExamineSacl(v15, v14, v12, DesiredAccess, AccessGranted, (PBOOLEAN)&GenerateAudit, &GenerateAlarm);
  v18 = *(void **)a4;
  if ( !*(_QWORD *)a4 )
    v18 = *(void **)(a4 + 16);
  v19 = *(_WORD *)(a3 + 2);
  if ( (v19 & 0x10) == 0 )
    goto LABEL_25;
  if ( v19 >= 0 )
  {
    v21 = *(ACL **)(a3 + 24);
    goto LABEL_27;
  }
  v20 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v20 )
    v21 = (ACL *)(a3 + v20);
  else
LABEL_25:
    v21 = 0LL;
LABEL_27:
  SeExamineGlobalSacl(
    (PUNICODE_STRING)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v10 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v10 - 48) >> 8)]
                    + 16),
    v21,
    v18,
    DesiredAccess,
    AccessGranted,
    (PBOOLEAN)&GenerateAudit,
    &GenerateAlarm);
  if ( (_BYTE)GenerateAudit || GenerateAlarm )
  {
    LOBYTE(v22) = AccessGranted;
    SepAdtObjectReferenceAuditAlarm(v10, a4, DesiredAccess, v22);
  }
}
