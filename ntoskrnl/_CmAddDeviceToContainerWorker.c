/*
 * XREFs of _CmAddDeviceToContainerWorker @ 0x1406851BC
 * Callers:
 *     _CmAddDeviceToContainer @ 0x140682764 (_CmAddDeviceToContainer.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _CmCreateDeviceContainer @ 0x1406828C0 (_CmCreateDeviceContainer.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140687404 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpCtxRegCreateKey @ 0x140687FD0 (_PnpCtxRegCreateKey.c)
 *     _RegRtlQueryValue @ 0x1406D3E98 (_RegRtlQueryValue.c)
 *     _RegRtlSetValue @ 0x140784FE4 (_RegRtlSetValue.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14085F0A8 (_RegRtlDeleteKeyTransacted.c)
 *     _CmDeleteDeviceContainer @ 0x140A609A4 (_CmDeleteDeviceContainer.c)
 */

__int64 __fastcall CmAddDeviceToContainerWorker(__int64 a1, __int64 a2, __int64 a3, int a4, _BYTE *a5)
{
  _BYTE *v5; // rsi
  int v7; // r12d
  int Key; // ebx
  int Value; // eax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  _BYTE v17[4]; // [rsp+40h] [rbp-30h] BYREF
  int v18; // [rsp+44h] [rbp-2Ch] BYREF
  int v19; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v21; // [rsp+58h] [rbp-18h] BYREF
  HANDLE v22; // [rsp+60h] [rbp-10h] BYREF

  v5 = a5;
  v22 = 0LL;
  v21 = 0LL;
  Handle = 0LL;
  v7 = a3;
  *a5 = 0;
  v17[0] = 0;
  v19 = 0;
  v18 = 0;
  Key = CmCreateDeviceContainer(a1, a2, a3, &v22, v17);
  if ( Key >= 0 )
  {
    Key = PnpCtxRegCreateKey(a1, (_DWORD)v22, (unsigned int)L"BaseContainers", 0, 4, 0LL, (__int64)&v21, (__int64)&v19);
    if ( Key >= 0 )
    {
      Key = PnpCtxRegCreateKey(a1, (_DWORD)v21, v7, 0, 3, 0LL, (__int64)&Handle, (__int64)&v18);
      if ( Key >= 0 )
      {
        if ( v18 == 2 )
        {
          LODWORD(a5) = 0;
          Value = RegRtlQueryValue(Handle, (__int64)&a5);
          Key = Value;
          if ( Value == -1073741772 || Value == -1073741444 )
          {
            Key = 0;
          }
          else if ( Value )
          {
            if ( Value < 0 )
              goto LABEL_14;
          }
          else
          {
            *v5 = 1;
          }
        }
        if ( *v5 )
        {
LABEL_14:
          if ( Key >= 0 )
            goto LABEL_15;
          goto LABEL_24;
        }
        Key = RegRtlSetValue(Handle, 0);
        if ( Key >= 0 )
        {
          PnpObjectRaisePropertyChangeEvent(a1, a4, 1, 0, 0LL, (__int64)&DEVPKEY_Device_ContainerId);
          goto LABEL_15;
        }
      }
    }
  }
  if ( Key != -1073741444 )
    goto LABEL_14;
  Key = -1073741772;
LABEL_24:
  if ( v18 == 1 )
  {
    if ( a1 && (v13 = *(_QWORD *)(a1 + 224)) != 0 )
      v14 = *(_QWORD *)(v13 + 8);
    else
      v14 = 0LL;
    RegRtlDeleteKeyTransacted(Handle, 0LL, v14);
  }
  if ( v19 == 1 )
  {
    if ( a1 && (v15 = *(_QWORD *)(a1 + 224)) != 0 )
      v16 = *(_QWORD *)(v15 + 8);
    else
      v16 = 0LL;
    RegRtlDeleteKeyTransacted(v21, 0LL, v16);
  }
  if ( v17[0] == 1 )
    CmDeleteDeviceContainer(a1, a2);
LABEL_15:
  if ( Handle )
    ZwClose(Handle);
  if ( v21 )
    ZwClose(v21);
  if ( v22 )
    ZwClose(v22);
  return (unsigned int)Key;
}
