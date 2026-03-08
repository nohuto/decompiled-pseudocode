/*
 * XREFs of WmipRegistrationWorker @ 0x14086D070
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     WmipUnreferenceRegEntry @ 0x140208DE4 (WmipUnreferenceRegEntry.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     IoControlPnpDeviceActionQueue @ 0x1403BDF5C (IoControlPnpDeviceActionQueue.c)
 *     WmipRegisterOrUpdateDS @ 0x14086785C (WmipRegisterOrUpdateDS.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 WmipRegistrationWorker()
{
  _QWORD *v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rdi
  int v4; // ecx
  char v5; // dl
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
    v3 = v0[3];
    if ( v3 )
    {
      v4 = *((_DWORD *)v0 + 4);
      if ( v4 )
      {
        if ( v4 != 1 )
          goto LABEL_10;
        v5 = 1;
      }
      else
      {
        v5 = 0;
      }
      WmipRegisterOrUpdateDS(v0[3], v5);
LABEL_10:
      WmipUnreferenceRegEntry(v3);
    }
    ExFreePoolWithTag(v0, 0);
    result = (unsigned int)_InterlockedExchangeAdd(&WmipRegWorkItemCount, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
