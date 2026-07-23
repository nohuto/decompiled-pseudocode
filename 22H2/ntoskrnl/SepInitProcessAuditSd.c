/*
 * XREFs of SepInitProcessAuditSd @ 0x1403B3FE8
 * Callers:
 *     SepInitializationPhase1 @ 0x14079D7A8 (SepInitializationPhase1.c)
 * Callees:
 *     RtlSetSaclSecurityDescriptor @ 0x1405DADB0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140603560 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D92C0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406D9330 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1406EF9D0 (RtlAddAccessAllowedAce.c)
 *     RtlAddAuditAccessAce @ 0x1409124A0 (RtlAddAuditAccessAce.c)
 *     SepAuditFailed @ 0x140925950 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void SepInitProcessAuditSd()
{
  ACL *v0; // rbx
  ULONG v1; // ebp
  ACL *PoolWithTag; // rax
  ACL *v3; // rdi
  ACL *v4; // rsi
  NTSTATUS Acl; // eax
  ULONG v6; // edx
  void *v7; // r9
  int v8; // edx
  ULONG v9; // ebp
  ACL *v10; // rax
  ACL *v11; // rsi
  BOOLEAN v12; // [rsp+20h] [rbp-28h]
  BOOLEAN v13; // [rsp+28h] [rbp-20h]

  v0 = 0LL;
  if ( SepProcessAuditSd )
  {
    ExFreePoolWithTag(SepProcessAuditSd, 0);
    SepProcessAuditSd = 0LL;
  }
  if ( SepProcessAccessesToAudit )
  {
    v1 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 24;
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(
                           PagedPool,
                           4 * (unsigned int)*((unsigned __int8 *)SeWorldSid + 1) + 64,
                           0x64536553u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      v4 = PoolWithTag + 5;
      Acl = RtlCreateAcl(PoolWithTag + 5, v1, 2u);
      if ( Acl < 0 )
        goto LABEL_20;
      Acl = RtlAddAuditAccessAce(v4, v6, SepProcessAccessesToAudit, v7, v12, v13);
      if ( Acl < 0 )
        goto LABEL_20;
      Acl = RtlCreateSecurityDescriptor(v3, 1u);
      if ( Acl < 0 )
        goto LABEL_20;
      Acl = RtlSetSaclSecurityDescriptor(v3, 1u, v4, 0);
      if ( Acl < 0 )
        goto LABEL_20;
      SepProcessAuditSd = v3;
      v8 = *((unsigned __int8 *)SeLocalSystemSid + 1)
         + *((unsigned __int8 *)SeLocalServiceSid + 1)
         + *((unsigned __int8 *)SeNetworkServiceSid + 1)
         + *((unsigned __int8 *)SeIUserSid + 1);
      v9 = 4 * v8 + 72;
      v10 = (ACL *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(4 * v8 + 112), 0x64536553u);
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
