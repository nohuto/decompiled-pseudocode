/*
 * XREFs of PnpIsDeviceInstanceEnabled @ 0x14078A304
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x14081CE14 (IopInitializeDeviceInstanceKey.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1409607E0 (PiProfileUpdateDeviceTreeCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CDF08 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpUnicodeStringToWstr @ 0x1406D07D4 (PnpUnicodeStringToWstr.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406D08F4 (PnpUnicodeStringToWstrFree.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14078A47C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpDisableDevice @ 0x1409559A8 (PnpDisableDevice.c)
 */

__int64 __fastcall PnpIsDeviceInstanceEnabled(void *a1, unsigned __int16 *a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // edi
  int v7; // r12d
  void *v8; // rsi
  _QWORD *v9; // rax
  void *v10; // r14
  __int64 v11; // rcx
  int v12; // eax
  HANDLE v13; // r8
  __int64 v14; // rdx
  char v15; // al
  char v16; // al
  int v18; // eax
  int v19; // [rsp+40h] [rbp-10h] BYREF
  int v20; // [rsp+44h] [rbp-Ch] BYREF
  void *v21; // [rsp+48h] [rbp-8h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+40h] BYREF
  int v23; // [rsp+A8h] [rbp+58h] BYREF

  Handle = a1;
  v3 = 0LL;
  v23 = 0;
  v19 = 0;
  v20 = 0;
  v6 = 1;
  v21 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)a2, 0x55706E50u);
  v10 = v9;
  if ( !v9
    || (v11 = *(_QWORD *)(v9[39] + 40LL), (v3 = v11) == 0)
    || (*(_DWORD *)(v11 + 396) & 0x2000) == 0
    || (v18 = *(_DWORD *)(v11 + 404), v18 != 22) && v18 != 29 )
  {
    v12 = PnpUnicodeStringToWstr(&v21, 0LL, a2);
    v8 = v21;
    if ( v12 >= 0 )
    {
      v13 = Handle;
      if ( Handle )
      {
LABEL_6:
        v19 = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)v8,
                    (__int64)v13,
                    11,
                    (__int64)&v20,
                    (__int64)&v23,
                    (__int64)&v19,
                    0) < 0
          || v20 == 4 && v19 == 4 )
        {
          v15 = v23;
        }
        else
        {
          v15 = 0;
          v23 = 0;
        }
        if ( (v15 & 1) != 0 )
        {
          v16 = 1;
          v23 = 1;
        }
        else
        {
          PnpGetDeviceInstanceCsConfigFlags(a2, v14, &v23);
          v16 = v23;
        }
        if ( (v16 & 7) != 0 )
        {
          v6 = 0;
          if ( a3 )
          {
            if ( v3 && (unsigned int)(*(_DWORD *)(v3 + 300) - 769) > 1 )
              PnpDisableDevice(v3, 22LL);
          }
        }
LABEL_13:
        if ( !v10 )
          goto LABEL_15;
        goto LABEL_14;
      }
      if ( (int)CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v21, 16, 0, 131097, 0, (__int64)&Handle, 0LL) >= 0 )
      {
        v13 = Handle;
        v7 = 1;
        goto LABEL_6;
      }
    }
    v6 = 0;
    goto LABEL_13;
  }
  v6 = 0;
LABEL_14:
  ObfDereferenceObjectWithTag(v10, 0x55706E50u);
LABEL_15:
  if ( v7 )
    ZwClose(Handle);
  if ( v8 )
    PnpUnicodeStringToWstrFree(v8, (__int64)a2);
  return v6;
}
