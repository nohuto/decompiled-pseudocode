/*
 * XREFs of InitSecurity @ 0x1C031FB94
 * Callers:
 *     Win32UserInitialize @ 0x1C031E444 (Win32UserInitialize.c)
 * Callees:
 *     AllocAce @ 0x1C0065880 (AllocAce.c)
 *     CreateSecurityDescriptor @ 0x1C0069170 (CreateSecurityDescriptor.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

__int64 InitSecurity()
{
  unsigned int v0; // ebx
  char *v1; // rax
  char *v2; // rdi
  char *v3; // rax
  char *v4; // rsi
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  char *v8; // rax
  char *v9; // rax
  char *v10; // rdi
  char *v12; // rdx
  ULONG AceListLength; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  AceListLength = 0;
  v1 = (char *)AllocAce(0LL, 0, 14, 983935, SeExports->SeWorldSid, &AceListLength);
  v2 = v1;
  if ( !v1 )
    return 0LL;
  v3 = (char *)AllocAce(v1, 0, 14, 983935, SeExports->SeRestrictedSid, &AceListLength);
  v4 = v3;
  if ( !v3 )
    goto LABEL_11;
  v5 = (char *)AllocAce(v3, 0, 9, 0x10000000, SeExports->SeWorldSid, &AceListLength);
  v2 = v5;
  if ( v5 )
  {
    v6 = (char *)AllocAce(v5, 0, 9, 0x10000000, SeExports->SeRestrictedSid, &AceListLength);
    v4 = v6;
    if ( !v6 )
      goto LABEL_11;
    v7 = (char *)AllocAce(v6, 0, 0, 5, SeExports->SeAliasAdminsSid, &AceListLength);
    v2 = v7;
    if ( v7 )
    {
      v8 = (char *)AllocAce(v7, 0, 0, 2, SeExports->SeWorldSid, &AceListLength);
      v4 = v8;
      if ( v8 )
      {
        v9 = (char *)AllocAce(v8, 0, 0, 2, SeExports->SeRestrictedSid, &AceListLength);
        v10 = v9;
        if ( v9 )
        {
          gpsdInitWinSta = (void *)CreateSecurityDescriptor(v9, AceListLength, 0);
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v10);
          LOBYTE(v0) = gpsdInitWinSta != 0LL;
          return v0;
        }
        goto LABEL_9;
      }
LABEL_11:
      v12 = v2;
      goto LABEL_12;
    }
  }
LABEL_9:
  v12 = v4;
LABEL_12:
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v12);
  return 0LL;
}
