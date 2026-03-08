/*
 * XREFs of HvlWheaInUsePageOfflineNotificationCallback @ 0x14053D9E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

bool __fastcall HvlWheaInUsePageOfflineNotificationCallback(
        PFN_NUMBER Page,
        __int64 PlatformDirected,
        BOOLEAN Poisoned,
        PVOID Context)
{
  char v4; // bl
  PFN_NUMBER v6; // [rsp+20h] [rbp-20h] BYREF
  char v7; // [rsp+28h] [rbp-18h]
  char v8; // [rsp+29h] [rbp-17h]
  int v9; // [rsp+2Ah] [rbp-16h]
  char v10; // [rsp+2Eh] [rbp-12h]
  char v11; // [rsp+2Fh] [rbp-11h]
  __int64 v12; // [rsp+30h] [rbp-10h]
  int v13; // [rsp+38h] [rbp-8h]
  int v14; // [rsp+3Ch] [rbp-4h]

  v4 = 0;
  v8 = 0;
  v11 = 0;
  if ( !Poisoned )
  {
    v6 = Page << 12;
    v12 = 0LL;
    v13 = 0;
    v14 = 1;
    v7 = 0;
    v9 = 0x1000000;
    v10 = 0;
    return (int)((__int64 (__fastcall *)(PFN_NUMBER *, __int64, _QWORD, PVOID))HvlpWheaErrorNotificationCallback)(
                  &v6,
                  PlatformDirected,
                  0LL,
                  Context) >= 0;
  }
  return v4;
}
