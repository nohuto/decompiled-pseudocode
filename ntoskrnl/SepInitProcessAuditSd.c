/*
 * XREFs of SepInitProcessAuditSd @ 0x140384A3C
 * Callers:
 *     SepInitializationPhase1 @ 0x140810320 (SepInitializationPhase1.c)
 * Callees:
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1406DB5D0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x140744250 (RtlAddAccessAllowedAce.c)
 *     RtlAddAuditAccessAce @ 0x1409B8230 (RtlAddAuditAccessAce.c)
 *     SepAuditFailed @ 0x1409CEE50 (SepAuditFailed.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void SepInitProcessAuditSd()
{
  ACL *v0; // rbx
  ULONG v1; // ebp
  ACL *Pool2; // rax
  ACL *v3; // rdi
  ACL *v4; // rsi
  NTSTATUS Acl; // eax
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v8; // r9d
  ULONG v9; // ebp
  ACL *v10; // rax
  ACL *v11; // rsi

  v0 = 0LL;
  if ( SepProcessAuditSd )
  {
    ExFreePoolWithTag(SepProcessAuditSd, 0);
    SepProcessAuditSd = 0LL;
  }
  if ( SepProcessAccessesToAudit )
  {
    v1 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 24;
    Pool2 = (ACL *)ExAllocatePool2(256LL, 4 * (unsigned int)*((unsigned __int8 *)SeWorldSid + 1) + 64, 1683187027LL);
    v3 = Pool2;
    if ( Pool2 )
    {
      v4 = Pool2 + 5;
      Acl = RtlCreateAcl(Pool2 + 5, v1, 2u);
      if ( Acl < 0 )
        goto LABEL_20;
      Acl = RtlAddAuditAccessAce(v4, v6, (unsigned int)SepProcessAccessesToAudit);
      if ( Acl < 0 )
        goto LABEL_20;
      Acl = RtlCreateSecurityDescriptor(v3, 1u);
      if ( Acl < 0 )
        goto LABEL_20;
      LOBYTE(v7) = 1;
      Acl = RtlSetSaclSecurityDescriptor(v3, v7, v4, 0LL);
      if ( Acl < 0 )
        goto LABEL_20;
      SepProcessAuditSd = v3;
      v8 = *((unsigned __int8 *)SeLocalSystemSid + 1)
         + *((unsigned __int8 *)SeLocalServiceSid + 1)
         + *((unsigned __int8 *)SeNetworkServiceSid + 1)
         + *((unsigned __int8 *)SeIUserSid + 1);
      v9 = 4 * v8 + 72;
      v10 = (ACL *)ExAllocatePool2(256LL, (unsigned int)(4 * v8 + 112), 1683187027LL);
      v0 = v10;
      if ( v10 )
      {
        v11 = v10 + 5;
        Acl = RtlCreateAcl(v10 + 5, v9, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v11, 2u, 1u, SeLocalSystemSid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v11, 2u, 1u, SeLocalServiceSid);
            if ( Acl >= 0 )
            {
              Acl = RtlAddAccessAllowedAce(v11, 2u, 1u, SeNetworkServiceSid);
              if ( Acl >= 0 )
              {
                Acl = RtlAddAccessAllowedAce(v11, 2u, 1u, SeIUserSid);
                if ( Acl >= 0 )
                {
                  Acl = RtlCreateSecurityDescriptor(v0, 1u);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetDaclSecurityDescriptor(v0, 1u, v11, 0);
                    if ( Acl >= 0 )
                    {
                      SepImportantProcessSd = (__int64)v0;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_20;
      }
    }
    Acl = -1073741670;
LABEL_20:
    SepAuditFailed((unsigned int)Acl);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0);
      SepProcessAuditSd = 0LL;
    }
    if ( v0 )
    {
      ExFreePoolWithTag(v0, 0);
      SepImportantProcessSd = 0LL;
    }
  }
}
