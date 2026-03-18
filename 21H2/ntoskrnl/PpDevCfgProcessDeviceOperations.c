/*
 * XREFs of PpDevCfgProcessDeviceOperations @ 0x14074761C
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1406CF970 (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140697824 (PiDevCfgConfigureDeviceKeys.c)
 *     _RegRtlDeleteTreeInternal @ 0x1406CB238 (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1406E5528 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgInitDeviceContext @ 0x1407448BC (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x1407476FC (PiDevCfgFreeDeviceContext.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceOperations(__int64 a1, void *a2)
{
  NTSTATUS v4; // eax
  int inited; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // [rsp+40h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-61h] BYREF
  __int128 v15; // [rsp+50h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v17[14]; // [rsp+90h] [rbp-19h] BYREF
  int v18; // [rsp+110h] [rbp+67h] BYREF
  int v19; // [rsp+120h] [rbp+77h] BYREF
  int v20; // [rsp+128h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  v15 = 0LL;
  memset(v17, 0, 0x48uLL);
  v18 = 0;
  v20 = 0;
  v13 = 0;
  v19 = 0;
  if ( *(_QWORD *)(a1 + 48) )
  {
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *((_QWORD *)&v15 + 1) = L"PendingConfiguration";
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
    LODWORD(v15) = 2752552;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    inited = v4;
    if ( v4 == -1073741772 )
    {
      inited = 0;
    }
    else if ( v4 >= 0 )
    {
      inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), (__int64)a2, v17);
      if ( inited >= 0 )
      {
        inited = PiDevCfgConfigureDeviceKeys(a1, (__int64)v17, KeyHandle, -1, &v20, 0LL);
        if ( inited >= 0 )
        {
          if ( *(_QWORD *)&PiPnpRtlCtx && (v7 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
            v8 = *(_QWORD *)(v7 + 8);
          else
            v8 = 0LL;
          RegRtlDeleteTreeInternal((__int64)a2, (__int64)L"PendingConfiguration", v8, 0);
          v9 = v20;
          if ( v20 )
          {
            v10 = *(_QWORD *)(a1 + 48);
            v19 = 4;
            if ( (int)CmGetDeviceRegProp(
                        PiPnpRtlCtx,
                        v10,
                        (_DWORD)a2,
                        11,
                        (__int64)&v13,
                        (__int64)&v18,
                        (__int64)&v19,
                        0) >= 0
              && v13 == 4
              && v19 == 4 )
            {
              v12 = v18;
            }
            else
            {
              v12 = 0;
            }
            v18 = v9 | v12;
            PiDevCfgSetDeviceRegProp(v11, (__int64)v17, 0xBu, 4, (__int64)&v18, 4);
          }
        }
      }
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  else
  {
    inited = -1073741808;
  }
  PiDevCfgFreeDeviceContext(v17);
  return (unsigned int)inited;
}
