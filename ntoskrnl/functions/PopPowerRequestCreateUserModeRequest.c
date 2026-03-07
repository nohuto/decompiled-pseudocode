__int64 __fastcall PopPowerRequestCreateUserModeRequest(int a1, int a2, HANDLE *a3)
{
  char v4; // bl
  int v5; // eax
  __int64 v6; // rdx
  PVOID v7; // rdi
  NTSTATUS inserted; // esi
  int Common; // eax
  unsigned int *v10; // rbx
  PVOID Object[3]; // [rsp+30h] [rbp-18h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  Object[0] = 0LL;
  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = PoCaptureReasonContext(a1, a2, 0, 1, 0LL, (__int64)&P);
  v7 = P;
  inserted = v5;
  if ( v5 >= 0 )
  {
    LOBYTE(v6) = v4;
    Common = PopPowerRequestCreateCommon(P, v6, Object);
    v10 = (unsigned int *)Object[0];
    inserted = Common;
    if ( Common >= 0 )
    {
      v7 = 0LL;
      ObfReferenceObjectWithTag(Object[0], 0x72506F50u);
      inserted = ObInsertObject(v10, 0LL, 0, 0, 0LL, a3);
      if ( inserted >= 0 )
      {
        if ( (unsigned __int8)TtmIsEnabled() )
          TtmNotifySessionPowerRequestCreated(v10[4], v10[9], v10[26], *a3);
        inserted = 0;
      }
    }
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x72506F50u);
  }
  if ( v7 )
    PoDestroyReasonContext(v7);
  return (unsigned int)inserted;
}
