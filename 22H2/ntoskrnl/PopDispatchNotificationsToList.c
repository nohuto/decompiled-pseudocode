/*
 * XREFs of PopDispatchNotificationsToList @ 0x1406F4DC4
 * Callers:
 *     PopDispatchNotifications @ 0x1406F5110 (PopDispatchNotifications.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 *     PopMarshalSettingValues @ 0x140685B18 (PopMarshalSettingValues.c)
 *     PopFreeRegistration @ 0x140778D14 (PopFreeRegistration.c)
 */

struct _KTHREAD *__fastcall PopDispatchNotificationsToList(WNF_STATE_NAME **a1)
{
  WNF_STATE_NAME *v2; // rdi
  unsigned int v3; // eax
  WNF_STATE_NAME *v4; // rsi
  struct _KTHREAD *result; // rax
  int v6; // ebx
  ULONG v7; // r8d
  NTSTATUS updated; // ebx
  WNF_STATE_NAME **v9; // rax
  ULONG v10; // [rsp+40h] [rbp-58h] BYREF
  WNF_STATE_NAME StateName; // [rsp+48h] [rbp-50h] BYREF
  _DWORD Buffer[10]; // [rsp+50h] [rbp-48h] BYREF

  v10 = 0;
  StateName = 0LL;
  ExAcquireFastMutex(&PopSettingLock);
  v2 = *a1;
  while ( v2 != (WNF_STATE_NAME *)a1 )
  {
    v3 = v2[6].Data[1];
    v4 = v2;
    while ( (v3 & 1) != 0 && (v3 & 2) == 0 )
    {
      StateName = v2[7];
      v2[6].Data[1] = v2[6].Data[1] & 0xFFFFFFFC | 2;
      v6 = PopMarshalSettingValues((__int64)v2, Buffer, 0x24u, &v10);
      KeReleaseGuardedMutex(&PopSettingLock);
      v7 = v10;
      if ( v6 < 0 )
        v7 = 0;
      v10 = v7;
      updated = ZwUpdateWnfStateData(&StateName, Buffer, v7, 0LL, 0LL, 0, 0);
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        goto LABEL_19;
      ExAcquireFastMutex(&PopSettingLock);
      v3 = v2[6].Data[1] & 0xFFFFFFFD;
      v2[6].Data[1] = v3;
      if ( updated < 0 )
      {
        v3 |= 1u;
        v2[6].Data[1] = v3;
        break;
      }
    }
    v2 = (WNF_STATE_NAME *)*v2;
    if ( (v3 & 2) == 0 && (v3 & 4) != 0 )
    {
      if ( (WNF_STATE_NAME *)v2[1] != v4 || (v9 = (WNF_STATE_NAME **)v4[1], *v9 != v4) )
        __fastfail(3u);
      *v9 = v2;
      v2[1] = (WNF_STATE_NAME)v9;
      PopFreeRegistration(v4);
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
LABEL_19:
    __fastfail(0x20u);
  return result;
}
