/*
 * XREFs of WmipRegistrationWorker @ 0x1406DAF30
 * Callers:
 *     <none>
 * Callees:
 *     IoControlPnpDeviceActionQueue @ 0x140253DB4 (IoControlPnpDeviceActionQueue.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     WmipUnreferenceRegEntry @ 0x1402E0164 (WmipUnreferenceRegEntry.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     WmipRegisterOrUpdateDS @ 0x14075EE80 (WmipRegisterOrUpdateDS.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 WmipRegistrationWorker()
{
  _QWORD *v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdi
  int v5; // ecx
  __int64 result; // rax

  do
  {
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v0 = WmipRegWorkList;
    v1 = *((_QWORD *)WmipRegWorkList + 3);
    if ( v1 && *(PDEVICE_OBJECT *)(v1 + 16) != WmipServiceDeviceObject )
    {
      KeReleaseMutex(&WmipSMMutex, 0);
      IoControlPnpDeviceActionQueue(1);
      IoControlPnpDeviceActionQueue(0);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    }
    if ( *((PVOID **)WmipRegWorkList + 1) != &WmipRegWorkList
      || (v2 = *(_QWORD *)WmipRegWorkList, *(PVOID *)(*(_QWORD *)WmipRegWorkList + 8LL) != WmipRegWorkList) )
    {
      __fastfail(3u);
    }
    WmipRegWorkList = *(PVOID *)WmipRegWorkList;
    *(_QWORD *)(v2 + 8) = &WmipRegWorkList;
    KeReleaseMutex(&WmipSMMutex, 0);
    v4 = v0[3];
    if ( v4 )
    {
      v5 = *((_DWORD *)v0 + 4);
      if ( v5 )
      {
        if ( v5 != 1 )
          goto LABEL_10;
        LOBYTE(v3) = 1;
      }
      else
      {
        v3 = 0LL;
      }
      WmipRegisterOrUpdateDS(v0[3], v3);
LABEL_10:
      WmipUnreferenceRegEntry(v4);
    }
    ExFreePoolWithTag(v0, 0);
    result = (unsigned int)_InterlockedExchangeAdd(&WmipRegWorkItemCount, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
