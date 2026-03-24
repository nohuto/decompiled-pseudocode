/*
 * XREFs of PiUEventNotifyDeviceInstanceChange @ 0x14076C16C
 * Callers:
 *     PiUEventProcessEventWorker @ 0x14071A1F0 (PiUEventProcessEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     PiUEventHashStringIntoBucket @ 0x140360B78 (PiUEventHashStringIntoBucket.c)
 *     _wcsicmp @ 0x1403D19D0 (_wcsicmp.c)
 *     PiUEventNotifyClient @ 0x14071B1F0 (PiUEventNotifyClient.c)
 *     PiUEventApplyAdditionalFilters @ 0x14071B414 (PiUEventApplyAdditionalFilters.c)
 */

__int64 __fastcall PiUEventNotifyDeviceInstanceChange(__int64 a1)
{
  unsigned int v1; // ebp
  _QWORD *v3; // r15
  unsigned int v4; // esi
  _QWORD **v5; // r14
  _QWORD *v6; // rdi
  __int64 v8; // r13
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  if ( *(_DWORD *)(a1 + 88) == 4 || (unsigned int)(*(_DWORD *)(a1 + 88) - 10) <= 1 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v3 = v9;
    v9[0] = (char *)&PiUEventDevInstanceClientList + 16 * (unsigned int)PiUEventHashStringIntoBucket((PCWSTR)(a1 + 120));
    v4 = 0;
    v9[1] = &unk_140C45170;
    do
    {
      v5 = (_QWORD **)*v3;
      v6 = *(_QWORD **)*v3;
      while ( v6 != v5 )
      {
        v8 = (__int64)v6;
        v6 = (_QWORD *)*v6;
        if ( v4 || !wcsicmp((const wchar_t *)(a1 + 120), *(const wchar_t **)(*(_QWORD *)(v8 + 24) + 16LL)) )
        {
          if ( PiUEventApplyAdditionalFilters(a1, v8) )
            v1 = PiUEventNotifyClient(a1, v8);
        }
      }
      ++v4;
      ++v3;
    }
    while ( v4 < 2 );
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  return v1;
}
