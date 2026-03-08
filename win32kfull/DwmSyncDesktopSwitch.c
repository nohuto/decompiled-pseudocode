/*
 * XREFs of DwmSyncDesktopSwitch @ 0x1C001D718
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 * Callees:
 *     ?DwmSyncLPCAllowed@@YAJXZ @ 0x1C001D800 (-DwmSyncLPCAllowed@@YAJXZ.c)
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C001D830 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x1C0028164 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall DwmSyncDesktopSwitch(PVOID Object, __int64 a2, int a3)
{
  int v6; // ebx
  int v7; // eax
  __int64 v9; // [rsp+30h] [rbp-50h] BYREF
  struct _PORT_MESSAGE v10; // [rsp+38h] [rbp-48h] BYREF
  int v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+64h] [rbp-1Ch]
  __int64 v13; // [rsp+68h] [rbp-18h]

  v6 = -1073741823;
  IncrementDWMWindowUniqueness();
  if ( Object )
  {
    v6 = DwmSyncLPCAllowed();
    if ( v6 >= 0 )
    {
      v13 = a2;
      memset(&v10, 0, sizeof(v10));
      v10.u2.s2.Type = 0x8000;
      v9 = 56LL;
      v10.u1.Length = 3670032;
      v11 = 1073741839;
      v12 = a3;
      v7 = LpcSendWaitReceivePort(Object, 0x20000LL, &v10, &v10, &v9, 0LL);
      v6 = SyncLpcCheckNtStatus(v7, &v10);
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v6;
}
