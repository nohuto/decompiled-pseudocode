/*
 * XREFs of SeObjectReferenceAuditAlarm @ 0x140699510
 * Callers:
 *     ObpCheckObjectReference @ 0x1406992AC (ObpCheckObjectReference.c)
 * Callees:
 *     SepAdtAuditThisEventWithContext @ 0x140699810 (SepAdtAuditThisEventWithContext.c)
 *     SeExamineSacl @ 0x1408A18B0 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x1408A1D6A (SeExamineGlobalSacl.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1409C8F9C (SepAdtObjectReferenceAuditAlarm.c)
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
  __int16 v14; // cx
  __int64 v15; // rax
  ACL *v16; // rdx
  __int64 v17; // rax
  ACL *v18; // rcx
  void *v19; // r8
  __int16 v20; // ax
  __int64 v21; // rax
  ACL *v22; // rdx
  __int64 v23; // r9
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
  if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(120LL, a2, 0LL, a4) )
    return;
  v12 = *(void **)a4;
  if ( !*(_QWORD *)a4 )
    v12 = *(void **)(a4 + 16);
  v13 = *(_WORD *)(a3 + 2);
  v14 = v13 & 0x8000;
  if ( (v13 & 0x10) == 0 )
  {
    v16 = 0LL;
    goto LABEL_18;
  }
  if ( v14 )
  {
    v15 = *(unsigned int *)(a3 + 12);
    if ( (_DWORD)v15 )
      v16 = (ACL *)(a3 + v15);
    else
      v16 = 0LL;
  }
  else
  {
    v16 = *(ACL **)(a3 + 24);
  }
  if ( !v14 )
  {
    v18 = *(ACL **)(a3 + 24);
    goto LABEL_19;
  }
  v17 = *(unsigned int *)(a3 + 12);
  if ( !(_DWORD)v17 )
  {
LABEL_18:
    v18 = 0LL;
    goto LABEL_19;
  }
  v18 = (ACL *)(a3 + v17);
LABEL_19:
  SeExamineSacl(v18, v16, v12, DesiredAccess, AccessGranted, (PBOOLEAN)&GenerateAudit, &GenerateAlarm);
  v19 = *(void **)a4;
  if ( !*(_QWORD *)a4 )
    v19 = *(void **)(a4 + 16);
  v20 = *(_WORD *)(a3 + 2);
  if ( (v20 & 0x10) == 0 )
    goto LABEL_25;
  if ( v20 >= 0 )
  {
    v22 = *(ACL **)(a3 + 24);
    goto LABEL_27;
  }
  v21 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v21 )
    v22 = (ACL *)(a3 + v21);
  else
LABEL_25:
    v22 = 0LL;
LABEL_27:
  SeExamineGlobalSacl(
    (PUNICODE_STRING)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v10 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v10 - 48) >> 8)]
                    + 16),
    v22,
    v19,
    DesiredAccess,
    AccessGranted,
    (PBOOLEAN)&GenerateAudit,
    &GenerateAlarm);
  if ( (_BYTE)GenerateAudit || GenerateAlarm )
  {
    LOBYTE(v23) = AccessGranted;
    SepAdtObjectReferenceAuditAlarm(v10, a4, DesiredAccess, v23);
  }
}
