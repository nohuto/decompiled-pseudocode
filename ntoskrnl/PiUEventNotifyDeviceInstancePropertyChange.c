/*
 * XREFs of PiUEventNotifyDeviceInstancePropertyChange @ 0x140870310
 * Callers:
 *     PiUEventProcessEventWorker @ 0x14068D8E0 (PiUEventProcessEventWorker.c)
 * Callees:
 *     PiUEventHashStringIntoBucket @ 0x140201E5C (PiUEventHashStringIntoBucket.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     PiUEventApplyAdditionalFilters @ 0x140680230 (PiUEventApplyAdditionalFilters.c)
 *     PiUEventNotifyClient @ 0x14068032C (PiUEventNotifyClient.c)
 */

__int64 __fastcall PiUEventNotifyDeviceInstancePropertyChange(__int64 a1)
{
  unsigned int v1; // ebp
  _QWORD *v3; // r15
  unsigned int v4; // edi
  _QWORD **v5; // r14
  _QWORD *v6; // rbx
  __int64 v8; // r13
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  if ( *(_DWORD *)(a1 + 88) == 9 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v3 = v9;
    v9[0] = (char *)&PiUEventDevInstancePropertyClientList
          + 16 * (unsigned int)PiUEventHashStringIntoBucket((PCWSTR)(a1 + 120));
    v4 = 0;
    v9[1] = &unk_140C5CB70;
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
    ExReleaseFastMutex(&PiUEventClientRegistrationListLock);
  }
  return v1;
}
