/*
 * XREFs of PopPowerRequestCreateInfo @ 0x140670E30
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 * Callees:
 *     PoDestroyReasonContext @ 0x140270E84 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x14027184C (PoCaptureReasonContext.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PopCreateUserPowerRequest @ 0x140670C38 (PopCreateUserPowerRequest.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x140670F5C (PopNotifySessionUserPowerRequestCreated.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 */

__int64 __fastcall PopPowerRequestCreateInfo(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  char v4; // si
  _QWORD *v5; // rbx
  int inserted; // edi
  int UserPowerRequest; // eax
  struct _DMA_ADAPTER *v8; // rsi
  PVOID Object[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v11 = 0LL;
  v4 = a2;
  v12 = 0LL;
  Object[0] = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    LOBYTE(a2) = 1;
    inserted = PoCaptureReasonContext(a1, a2, 0LL, 1, 0LL, (PVOID *)&v11);
    if ( inserted >= 0 )
    {
      v5 = (_QWORD *)v11;
      UserPowerRequest = PopCreateUserPowerRequest((__int64 *)Object, v4, v11);
      v8 = (struct _DMA_ADAPTER *)Object[0];
      inserted = UserPowerRequest;
      if ( UserPowerRequest >= 0 )
      {
        v5 = 0LL;
        ObfReferenceObjectWithTag(Object[0], 0x72506F50u);
        inserted = ObInsertObjectEx(v8, 0LL, 0, 0LL, (__int64)&v12);
        if ( inserted >= 0 )
          PopNotifySessionUserPowerRequestCreated(*(unsigned int *)&v8[1].Version, HIDWORD(v8[1].DmaOperations), v12);
      }
      if ( v8 )
        ObfDereferenceObjectWithTag(v8, 0x72506F50u);
    }
    else
    {
      v5 = 0LL;
    }
  }
  else
  {
    v5 = (_QWORD *)v11;
    inserted = -1073741637;
  }
  if ( a3 )
    *a3 = v12;
  if ( v5 )
    PoDestroyReasonContext(v5);
  return (unsigned int)inserted;
}
