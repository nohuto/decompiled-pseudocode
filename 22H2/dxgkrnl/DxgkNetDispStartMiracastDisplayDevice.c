/*
 * XREFs of DxgkNetDispStartMiracastDisplayDevice @ 0x1C02252B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C003E704 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?IsAllowedToCallMiracast@@YA_NXZ @ 0x1C003ED48 (-IsAllowedToCallMiracast@@YA_NXZ.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00557C0 (DxgkMiracastStartMiracastSession.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNetDispStartMiracastDisplayDevice(_OWORD *a1)
{
  struct _KEVENT *v2; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  _OWORD *v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  NTSTATUS v20[4]; // [rsp+30h] [rbp-268h] BYREF
  _DWORD v21[132]; // [rsp+40h] [rbp-258h] BYREF
  HANDLE Handle; // [rsp+250h] [rbp-48h]
  UUID Uuid; // [rsp+258h] [rbp-40h] BYREF
  __int128 Object; // [rsp+270h] [rbp-28h] BYREF

  Object = 0LL;
  v2 = 0LL;
  if ( !IsAllowedToCallMiracast() )
    return -2147483640LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v6 = v21;
  v7 = 4LL;
  do
  {
    *v6 = *a1;
    v6[1] = a1[1];
    v6[2] = a1[2];
    v6[3] = a1[3];
    v6[4] = a1[4];
    v6[5] = a1[5];
    v6[6] = a1[6];
    v6 += 8;
    *(v6 - 1) = a1[7];
    a1 += 8;
    --v7;
  }
  while ( v7 );
  *v6 = *a1;
  v6[1] = a1[1];
  *((_QWORD *)v6 + 4) = *((_QWORD *)a1 + 4);
  if ( v21[0] == 552 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)v6, 128LL, v3, v4);
    v20[0] = DxgkNetDispAccessCheck(Current);
    if ( v20[0] >= 0 )
    {
      v15 = *(_QWORD *)&Uuid.Data1 - Object;
      if ( *(_QWORD *)&Uuid.Data1 == (_QWORD)Object )
        v15 = *(_QWORD *)Uuid.Data4 - *((_QWORD *)&Object + 1);
      if ( v15 || (v20[0] = ExUuidCreate(&Uuid), v20[0] >= 0) )
      {
        if ( Handle
          && (*(_QWORD *)&Object = 0LL,
              v16 = ObReferenceObjectByHandle(
                      Handle,
                      0x1F0003u,
                      (POBJECT_TYPE)ExEventObjectType,
                      1,
                      (PVOID *)&Object,
                      0LL),
              v2 = (struct _KEVENT *)Object,
              v20[0] = v16,
              v16 < 0) )
        {
          v8 = -2147483640;
          v19 = WdLogNewEntry5_WdError(v18, v17);
          *(_QWORD *)(v19 + 24) = Handle;
          WdLogEvent5_WdError(v19);
        }
        else
        {
          return (unsigned int)DxgkMiracastStartMiracastSession((__int64)v21, v2, v20);
        }
        return v8;
      }
      v14 = -2147483647LL;
    }
    else
    {
      v14 = -2147483643LL;
    }
    v8 = v14;
    v9 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v9 + 24) = v14;
  }
  else
  {
    v8 = -2147483640;
    v9 = WdLogNewEntry5_WdWarning(v6, 128LL, v3);
    *(_QWORD *)(v9 + 24) = -2147483640LL;
  }
  WdLogEvent5_WdWarning(v9);
  return v8;
}
