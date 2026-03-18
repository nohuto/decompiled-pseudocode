/*
 * XREFs of NVMeReenumerateNameSpaceRescan @ 0x1C000F320
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C000EC00 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     NVMeIsLunActive @ 0x1C000655C (NVMeIsLunActive.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x1C0008768 (NVMeGetNamespaceDescriptorListIdentify.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x1C000B0FC (NVMeGetNamespaceIoCommandSetIdentify.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 */

void __fastcall NVMeReenumerateNameSpaceRescan(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  __int64 v8; // rsi
  unsigned int i; // edi
  __int64 v10; // r9
  __int64 v11; // r9
  unsigned int j; // edi
  __int64 v13; // r9
  __int64 v14; // r9
  int v15; // edi
  __int128 v16; // [rsp+78h] [rbp+Fh] BYREF

  if ( a3 && (a3 != 1 || a4) )
  {
    NVMeGetNamespaceDescriptorListIdentify(a1);
    NVMeGetNamespaceIoCommandSetIdentify(a1);
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 3828), 3u);
    if ( a3 == 1 && a4 && a4 <= a2 && (v8 = a4 - 1, NVMeIsLunActive(*(_QWORD *)(a1 + 8 * v8 + 1752))) )
    {
      for ( i = 0; i < 0x14; ++i )
      {
        StorPortNotification(4101LL, a1, 1LL, *(_QWORD *)(a1 + 8 * v8 + 1752));
        StorPortExtendedFunction(81LL, a1, 100000LL, v10);
      }
    }
    else
    {
      v16 = 0x400000001uLL;
      for ( j = 0; j < 0x14; ++j )
      {
        StorPortNotification(4101LL, a1, 2LL, &v16);
        StorPortExtendedFunction(81LL, a1, 100000LL, v13);
      }
    }
    StorPortNotification(7LL, a1, 0LL, v11);
    *(_DWORD *)(a1 + 32) &= ~0x100u;
    StorPortResume(a1);
    v15 = 0;
    while ( 1 )
    {
      StorPortExtendedFunction(81LL, a1, 10000LL, v14);
      if ( (*(_DWORD *)(a1 + 3828) & 8) == 0 )
        break;
      if ( (unsigned int)++v15 >= 0x44C )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3828), 3u);
        if ( *(_BYTE *)(a1 + 24) )
          StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
        return;
      }
    }
  }
}
