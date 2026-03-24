/*
 * XREFs of PopPowerRequestCreateInfo @ 0x14067CFCC
 * Callers:
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     PoDestroyReasonContext @ 0x140282BD8 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x14028363C (PoCaptureReasonContext.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     PopCreateUserPowerRequest @ 0x14067CD9C (PopCreateUserPowerRequest.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x14067CF30 (PopNotifySessionUserPowerRequestCreated.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 */

__int64 __fastcall PopPowerRequestCreateInfo(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  char v4; // si
  _QWORD *v5; // rbx
  int inserted; // edi
  int UserPowerRequest; // eax
  PVOID v8; // rsi
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
      v8 = Object[0];
      inserted = UserPowerRequest;
      if ( UserPowerRequest >= 0 )
      {
        v5 = 0LL;
        ObfReferenceObjectWithTag(Object[0], 0x72506F50u);
        inserted = ObInsertObjectEx((PADAPTER_OBJECT)v8, 0LL, 0, 0LL, (__int64)&v12);
        if ( inserted >= 0 )
          PopNotifySessionUserPowerRequestCreated(*((_DWORD *)v8 + 4), *((_DWORD *)v8 + 7), v12);
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
