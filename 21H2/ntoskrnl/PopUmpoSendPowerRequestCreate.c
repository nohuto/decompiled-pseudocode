/*
 * XREFs of PopUmpoSendPowerRequestCreate @ 0x1408F2698
 * Callers:
 *     PopCreateUserPowerRequest @ 0x14067CD9C (PopCreateUserPowerRequest.c)
 *     PopPowerRequestNotificationsFlush @ 0x1408E1AE8 (PopPowerRequestNotificationsFlush.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140282A48 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x140414200 (memset.c)
 *     PopGetPowerRequestDiagnosticBuffer @ 0x1408E18F0 (PopGetPowerRequestDiagnosticBuffer.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopUmpoSendPowerRequestCreate(int a1)
{
  size_t v2; // rdi
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v4; // rbx
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( (unsigned int)PopGetPowerRequestDiagnosticBuffer(a1, 0LL, &v5) == -1073741789 )
  {
    v2 = v5 + 16;
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, v5 + 16, 0x6F706D55u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v2);
      *(_DWORD *)v4 = 15;
      *((_DWORD *)v4 + 2) = a1;
      if ( (int)PopGetPowerRequestDiagnosticBuffer(a1, v4 + 2, &v5) >= 0 )
        PopUmpoSendPowerMessage(v4, v2, 0);
      ExFreePoolWithTag(v4, 0x6F706D55u);
    }
  }
}
