/*
 * XREFs of PopUmpoSendPowerRequestCreate @ 0x1408F27F8
 * Callers:
 *     PopCreateUserPowerRequest @ 0x140670C38 (PopCreateUserPowerRequest.c)
 *     PopPowerRequestNotificationsFlush @ 0x1408E1C48 (PopPowerRequestNotificationsFlush.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140270CF4 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopGetPowerRequestDiagnosticBuffer @ 0x1408E1A50 (PopGetPowerRequestDiagnosticBuffer.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
