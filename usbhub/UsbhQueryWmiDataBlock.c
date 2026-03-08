/*
 * XREFs of UsbhQueryWmiDataBlock @ 0x1C0049CA0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhGetHubNodeInfo @ 0x1C00493A8 (UsbhGetHubNodeInfo.c)
 */

__int64 __fastcall UsbhQueryWmiDataBlock(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        int a3,
        int a4,
        int a5,
        ULONG *a6,
        unsigned int a7,
        _DWORD *a8)
{
  ULONG v8; // edi
  int v13; // ebx
  int v14; // ebx
  _BYTE *v15; // r9
  __int64 v16; // r10
  bool *v17; // r9
  __int64 v18; // r10
  int v19; // edx
  bool v20; // cl
  int v21; // edx
  int v22; // edx
  ULONG *v23; // rax
  _DWORD *v24; // r9
  NTSTATUS v25; // r10d
  NTSTATUS v26; // eax
  unsigned int v27; // r10d
  ULONG v29; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0;
  v29 = 0;
  FdoExt((__int64)DeviceObject);
  if ( a3 )
  {
    v13 = a3 - 2;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          if ( (int)UsbhGetHubNodeInfo((__int64)DeviceObject, a8, a7, &v29) >= 0 && a5 == 1 && a6 )
          {
            v8 = v29;
            *a6 = v29;
          }
          else
          {
            v8 = v29;
          }
        }
      }
      else if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) == 3 )
      {
        Log((__int64)DeviceObject, 64, 2003659059, (__int64)a8, a7);
        v8 = 1;
        if ( a7 )
        {
          *v15 = *(_BYTE *)(v16 + 2563) & 1;
          *a6 = 1;
        }
      }
    }
    else
    {
      Log((__int64)DeviceObject, 64, 2003659058, (__int64)a8, a7);
      if ( !WPP_MAIN_CB.AlignmentRequirement )
      {
        v19 = *(_DWORD *)(v18 + 3280);
        if ( v19 != 6 && !a4 )
        {
          v20 = 1;
          if ( a5 == 1 )
          {
            v8 = 1;
            if ( a7 )
            {
              v21 = v19 - 1;
              if ( v21 )
              {
                v22 = v21 - 1;
                if ( v22 )
                  v20 = v22 == 2;
              }
              v23 = a6;
              *v17 = v20;
              *v23 = 1;
            }
          }
        }
      }
    }
  }
  else
  {
    Log((__int64)DeviceObject, 64, 2003659057, (__int64)a6, 0LL);
    if ( v24 )
      *v24 = 0;
  }
  Log((__int64)DeviceObject, 64, 2003659075, (__int64)Irp, v8);
  v26 = WmiCompleteRequest(DeviceObject, Irp, v25, v8, 0);
  Log((__int64)DeviceObject, 64, 2003659078, 0LL, v26);
  return v27;
}
