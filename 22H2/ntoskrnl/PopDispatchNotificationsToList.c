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

struct _KTHREAD *__fastcall PopDispatchNotificationsToList(__int64 *a1)
{
  __int64 v2; // rdi
  unsigned int v3; // eax
  _QWORD *v4; // rsi
  struct _KTHREAD *result; // rax
  int v6; // ebx
  unsigned int v7; // r8d
  int updated; // ebx
  __int64 *v9; // rax
  unsigned int v10; // [rsp+40h] [rbp-58h] BYREF
  __int64 v11; // [rsp+48h] [rbp-50h] BYREF
  _DWORD v12[10]; // [rsp+50h] [rbp-48h] BYREF

  v10 = 0;
  v11 = 0LL;
  ExAcquireFastMutex(&PopSettingLock);
  v2 = *a1;
  while ( (__int64 *)v2 != a1 )
  {
    v3 = *(_DWORD *)(v2 + 52);
    v4 = (_QWORD *)v2;
    while ( (v3 & 1) != 0 && (v3 & 2) == 0 )
    {
      v11 = *(_QWORD *)(v2 + 56);
      *(_DWORD *)(v2 + 52) = *(_DWORD *)(v2 + 52) & 0xFFFFFFFC | 2;
      v6 = PopMarshalSettingValues(v2, v12, 0x24u, &v10);
      KeReleaseGuardedMutex(&PopSettingLock);
      v7 = v10;
      if ( v6 < 0 )
        v7 = 0;
      v10 = v7;
      updated = ZwUpdateWnfStateData((__int64)&v11, (__int64)v12);
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        goto LABEL_19;
      ExAcquireFastMutex(&PopSettingLock);
      v3 = *(_DWORD *)(v2 + 52) & 0xFFFFFFFD;
      *(_DWORD *)(v2 + 52) = v3;
      if ( updated < 0 )
      {
        v3 |= 1u;
        *(_DWORD *)(v2 + 52) = v3;
        break;
      }
    }
    v2 = *(_QWORD *)v2;
    if ( (v3 & 2) == 0 && (v3 & 4) != 0 )
    {
      if ( *(_QWORD **)(v2 + 8) != v4 || (v9 = (__int64 *)v4[1], (_QWORD *)*v9 != v4) )
        __fastfail(3u);
      *v9 = v2;
      *(_QWORD *)(v2 + 8) = v9;
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
