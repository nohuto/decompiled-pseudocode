/*
 * XREFs of NVMeReenumerateNameSpaceRescan @ 0x1C002237C
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021CA0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003260 (__security_check_cookie.c)
 *     NVMeIsLunActive @ 0x1C001695C (NVMeIsLunActive.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x1C001E7AC (NVMeGetNamespaceDescriptorListIdentify.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x1C001E908 (NVMeGetNamespaceIoCommandSetIdentify.c)
 */

void __fastcall NVMeReenumerateNameSpaceRescan(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int i; // edi
  __int64 v9; // r9
  unsigned int j; // edi
  __int64 v11; // r9
  __int64 v12; // r9
  int v13; // edi

  if ( a3 && (a3 != 1 || a4) )
  {
    NVMeGetNamespaceDescriptorListIdentify(a1);
    NVMeGetNamespaceIoCommandSetIdentify(a1);
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 4028), 3u);
    if ( a3 == 1 && a4 && a4 <= a2 && NVMeIsLunActive(*(_QWORD *)(a1 + 8LL * (a4 - 1) + 1952)) )
    {
      for ( i = 0; i < 0x14; ++i )
      {
        StorPortNotification(4101LL, a1, 1LL);
        StorPortExtendedFunction(81LL, a1, 100000LL, v9);
      }
    }
    else
    {
      for ( j = 0; j < 0x14; ++j )
      {
        StorPortNotification(4101LL, a1, 2LL);
        StorPortExtendedFunction(81LL, a1, 100000LL, v11);
      }
    }
    StorPortNotification(7LL, a1, 0LL);
    *(_DWORD *)(a1 + 32) &= ~0x100u;
    StorPortResume(a1);
    v13 = 0;
    while ( 1 )
    {
      StorPortExtendedFunction(81LL, a1, 10000LL, v12);
      if ( (*(_DWORD *)(a1 + 4028) & 8) == 0 )
        break;
      if ( (unsigned int)++v13 >= 0x44C )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 3u);
        if ( *(_BYTE *)(a1 + 24) )
          StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
        return;
      }
    }
  }
}
