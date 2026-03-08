/*
 * XREFs of PiDcHandleContainerEvent @ 0x1407F8458
 * Callers:
 *     PiDcHandleObjectEvent @ 0x1407F8244 (PiDcHandleObjectEvent.c)
 * Callees:
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x14081D82C (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 */

__int64 __fastcall PiDcHandleContainerEvent(__int64 a1)
{
  unsigned int v1; // r11d
  __int64 result; // rax
  unsigned int v3; // r9d
  _QWORD *i; // rdx
  __int64 v5; // r10
  __int64 v6; // r8

  v1 = *(_DWORD *)(a1 + 76);
  result = 0LL;
  v3 = 0;
  if ( v1 )
  {
    for ( i = (_QWORD *)(a1 + 104); ; i += 4 )
    {
      if ( !*((_DWORD *)i - 1) && !*i && *((_DWORD *)i - 2) == 55 )
      {
        v5 = 32LL * v3;
        v6 = *(_QWORD *)(v5 + a1 + 80) - *(_QWORD *)&DEVPKEY_DeviceContainer_IsConnected.fmtid.Data1;
        if ( !v6 )
          v6 = *(_QWORD *)(v5 + a1 + 88) - *(_QWORD *)DEVPKEY_DeviceContainer_IsConnected.fmtid.Data4;
        if ( !v6 )
          break;
      }
      if ( ++v3 >= v1 )
        return result;
    }
    return PiDcGenerateConfigNotificationIfContainerRequiresConfiguration(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL));
  }
  return result;
}
