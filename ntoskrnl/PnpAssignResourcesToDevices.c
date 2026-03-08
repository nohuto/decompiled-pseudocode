/*
 * XREFs of PnpAssignResourcesToDevices @ 0x140680DD8
 * Callers:
 *     PnpProcessAssignResources @ 0x140681528 (PnpProcessAssignResources.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     PnpAllocateResources @ 0x1406F5CE0 (PnpAllocateResources.c)
 */

__int64 __fastcall PnpAssignResourcesToDevices(unsigned int a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v10; // rdx
  _DWORD v11[4]; // [rsp+60h] [rbp-28h] BYREF
  char v12; // [rsp+90h] [rbp+8h] BYREF
  int v13; // [rsp+A8h] [rbp+20h] BYREF

  if ( a1 )
  {
    v6 = a2;
    v7 = a1;
    do
    {
      v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 312LL) + 40LL);
      if ( (*(_DWORD *)(v8 + 396) & 1) != 0 )
      {
        v10 = *(_QWORD *)(v8 + 48);
        v11[0] = 0;
        v13 = 0;
        v12 = 0;
        if ( (int)PnpGetObjectProperty(
                    PiPnpRtlCtx,
                    v10,
                    1,
                    0,
                    0LL,
                    (__int64)&DEVPKEY_Device_Reported,
                    (__int64)&v13,
                    (__int64)&v12,
                    1,
                    (__int64)v11,
                    0) >= 0
          && v13 == 17
          && v11[0] == 1
          && v12 == -1 )
        {
          v6[3] = 0;
        }
      }
      v6 += 16;
      --v7;
    }
    while ( v7 );
  }
  return PnpAllocateResources(a1, a2, 0LL, a3);
}
