/*
 * XREFs of SeExamineSacl @ 0x1408A18B0
 * Callers:
 *     SeObjectReferenceAuditAlarm @ 0x140699510 (SeObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14069A700 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     NtOpenObjectAuditAlarm @ 0x140790670 (NtOpenObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x14085ED00 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeExamineGlobalSacl @ 0x1408A1D6A (SeExamineGlobalSacl.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409C7074 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CB370 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     CmpExamineSaclForAuditEvent @ 0x140A18BC8 (CmpExamineSaclForAuditEvent.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x140246980 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1402975A8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402B8730 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepSidInToken @ 0x1402EF7EC (SepSidInToken.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall SeExamineSacl(
        PACL Sacl,
        PACL ResourceSacl,
        PACCESS_TOKEN Token,
        ACCESS_MASK DesiredAccess,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateAudit,
        PBOOLEAN GenerateAlarm)
{
  _DWORD *v7; // rbp
  PACCESS_TOKEN v9; // r13
  PACL v10; // r10
  char v12; // si
  _WORD *v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  PACL v16; // rbx
  char Sbz1; // di
  ACL *v18; // r15
  unsigned int v19; // r13d
  signed int v20; // r10d
  _QWORD *v21; // rax
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  int v27; // [rsp+60h] [rbp-58h] BYREF
  unsigned int AceCount; // [rsp+64h] [rbp-54h]
  __int64 v29[10]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int Size; // [rsp+C0h] [rbp+8h]
  ACCESS_MASK v33; // [rsp+D8h] [rbp+20h]
  unsigned int GenerateAudita; // [rsp+E8h] [rbp+30h]
  int GenerateAlarma; // [rsp+F0h] [rbp+38h]

  v33 = DesiredAccess;
  v27 = -1;
  v7 = 0LL;
  v9 = Token;
  v29[0] = 0LL;
  v10 = ResourceSacl;
  Size = 0;
  *GenerateAudit = 0;
  *GenerateAlarm = 0;
  if ( Sacl )
  {
    AceCount = Sacl->AceCount;
    if ( AceCount )
    {
      v12 = 0;
      if ( (DesiredAccess & 0x2000000) != 0 )
        v12 = AccessGranted != 0 ? 64 : 0x80;
      v13 = (_WORD *)**((_QWORD **)Token + 19);
      if ( *v13 == *(_WORD *)SeAnonymousLogonSid )
      {
        v14 = memcmp(v13, SeAnonymousLogonSid, 4LL * *((unsigned __int8 *)SeAnonymousLogonSid + 1) + 8);
        v10 = ResourceSacl;
        if ( !v14 )
          Size = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 8;
      }
      v15 = 0;
      v16 = Sacl + 1;
      GenerateAudita = 0;
      while ( 1 )
      {
        if ( *GenerateAudit )
        {
LABEL_24:
          if ( v7 )
          {
            AuthzBasepFreeSecurityAttributesList(v7);
            ExFreePoolWithTag(v7, 0);
          }
          return;
        }
        Sbz1 = v16->Sbz1;
        if ( (Sbz1 & 8) == 0 )
          break;
LABEL_23:
        ++v15;
        v10 = ResourceSacl;
        v16 = (PACL)((char *)v16 + v16->AclSize);
        GenerateAudita = v15;
        if ( v15 >= AceCount )
          goto LABEL_24;
      }
      if ( v16->AclRevision == 2 )
      {
        LOBYTE(DesiredAccess) = 1;
        if ( !(unsigned __int8)SepSidInToken((__int64)v9, 0LL, (__int64)&v16[1], *(__int64 *)&DesiredAccess, 0, 0)
          && (!Size || *(_WORD *)SeWorldSid != *(_WORD *)&v16[1].AclRevision || memcmp(SeWorldSid, &v16[1], Size)) )
        {
          goto LABEL_22;
        }
        if ( (*(_DWORD *)&v16->AceCount & v33) == 0 )
        {
          v15 = GenerateAudita;
          if ( ((unsigned __int8)v12 & (unsigned __int8)Sbz1) != 0 )
            *GenerateAudit = 1;
          goto LABEL_23;
        }
      }
      else
      {
        if ( v16->AclRevision != 13 )
          goto LABEL_23;
        v18 = v16 + 1;
        v19 = 4 * v16[1].Sbz1 + 8;
        GenerateAlarma = *(_DWORD *)&v16->AceCount;
        if ( v10 && !v7 )
        {
          AuthzBasepInitializeResourceClaimsFromSacl((__int64)v10, v29);
          v15 = GenerateAudita;
          v7 = (_DWORD *)v29[0];
        }
        v20 = v16->AclSize - v19 - 8;
        if ( v20 <= 0 )
        {
          v9 = Token;
          goto LABEL_23;
        }
        v21 = (_QWORD *)*((_QWORD *)Token + 137);
        if ( v21 )
        {
          v22 = v21[72];
          v23 = v21[74];
          v24 = v21[73];
          v25 = v21[75];
        }
        else
        {
          v22 = 0LL;
          v23 = 0LL;
          v24 = 0LL;
          v25 = 0LL;
        }
        v26 = v19;
        v9 = Token;
        AuthzBasepEvaluateAceCondition(
          (__int64)Token,
          *((void **)Token + 97),
          (__int64)v7,
          v22,
          v23,
          v24,
          v25,
          (ACL *)((char *)v18 + v26),
          v20,
          1,
          0,
          &v27);
        if ( ((v27 + 1) & 0xFFFFFFFD) != 0 )
          goto LABEL_22;
        LOBYTE(DesiredAccess) = 1;
        if ( !(unsigned __int8)SepSidInToken((__int64)Token, 0LL, (__int64)&v16[1], *(__int64 *)&DesiredAccess, 0, 0)
          && (!Size || *(_WORD *)SeWorldSid != *(_WORD *)&v18->AclRevision || memcmp(SeWorldSid, &v16[1], Size)) )
        {
          goto LABEL_22;
        }
        if ( (v33 & GenerateAlarma) == 0 )
        {
          if ( ((unsigned __int8)v12 & (unsigned __int8)Sbz1) == 0 )
            goto LABEL_22;
          goto LABEL_21;
        }
      }
      if ( ((Sbz1 & 0x40) == 0 || !AccessGranted) && (Sbz1 >= 0 || AccessGranted) )
        goto LABEL_22;
LABEL_21:
      *GenerateAudit = 1;
LABEL_22:
      v15 = GenerateAudita;
      goto LABEL_23;
    }
  }
}
