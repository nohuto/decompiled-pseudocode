__int64 __fastcall DxgkDispMgrSourceOperation(_OWORD *a1)
{
  ULONG64 v2; // rcx
  NTSTATUS v3; // edi
  struct _LUID *v4; // rdx
  int v6; // r14d
  struct DXGADAPTER *v7; // r15
  unsigned int v8; // r12d
  __int64 v9; // rax
  _DWORD *v10; // rdx
  DWORD LowPart; // r15d
  LONG v12; // r12d
  struct DXGADAPTER *v13; // r14
  __int64 v14; // rax
  _OWORD *v15; // rdx
  PVOID Object; // [rsp+40h] [rbp-F8h] BYREF
  struct _LUID v17; // [rsp+48h] [rbp-F0h] BYREF
  struct DXGADAPTER *v18[2]; // [rsp+50h] [rbp-E8h] BYREF
  HANDLE Handle[2]; // [rsp+60h] [rbp-D8h]
  struct _LUID v20[2]; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v21[144]; // [rsp+80h] [rbp-B8h] BYREF

  *(_OWORD *)Handle = 0LL;
  *(_OWORD *)&v20[0].LowPart = 0LL;
  v2 = (ULONG64)(a1 + 2);
  if ( v2 < (unsigned __int64)a1 || v2 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)Handle = *a1;
  *(_OWORD *)&v20[0].LowPart = a1[1];
  Object = 0LL;
  v3 = ObReferenceObjectByHandleWithTag(
         Handle[1],
         0x20000u,
         g_pDxgkDisplayManagerObjectType,
         1,
         0x4B677844u,
         &Object,
         0LL);
  if ( v3 >= 0 )
  {
    v4 = (struct _LUID *)*((_QWORD *)Object + 1);
    if ( !v4 )
    {
      WdLogSingleEntry1(3LL, 1033LL);
LABEL_8:
      v3 = -1073741811;
      goto LABEL_9;
    }
    if ( LODWORD(Handle[0]) == 1 )
    {
      v20[0] = v4[4];
      LowPart = v4[5].LowPart;
      v20[1].LowPart = LowPart;
      v12 = -1;
      v20[1].HighPart = -1;
      v18[0] = 0LL;
      DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v18, v20);
      v13 = v18[0];
      if ( v18[0] )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, v18[0], 0LL);
        if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21, 0LL) >= 0 )
        {
          v14 = *((_QWORD *)v13 + 365);
          if ( v14 )
          {
            if ( LowPart < *(_DWORD *)(v14 + 96) )
            {
              v17.LowPart = -1;
              if ( (int)DmmEnumClientVidPnPathTargetsFromSource(v13, LowPart, 0LL, (unsigned int *const)&v17) >= 0 )
                v12 = v17.LowPart;
              v20[1].HighPart = v12;
            }
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21);
      }
      v15 = a1 + 1;
      if ( (unsigned __int64)(a1 + 1) >= MmUserProbeAddress )
        v15 = (_OWORD *)MmUserProbeAddress;
      *v15 = *(_OWORD *)&v20[0].LowPart;
    }
    else
    {
      if ( LODWORD(Handle[0]) != 2 )
        goto LABEL_8;
      v6 = 4;
      v17 = v4[4];
      v18[0] = 0LL;
      DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v18, &v17);
      v7 = v18[0];
      if ( v18[0] )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, v18[0], 0LL);
        v8 = *(_DWORD *)(*((_QWORD *)Object + 1) + 40LL);
        if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21, 0LL) >= 0 )
        {
          v9 = *((_QWORD *)v7 + 365);
          if ( v9 )
          {
            if ( v8 < *(_DWORD *)(v9 + 96) )
              v6 = 2 - (DXGADAPTER::IsVSyncAvailable(v7, v8) != 0);
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21);
      }
      v10 = a1 + 1;
      if ( (unsigned __int64)(a1 + 1) >= MmUserProbeAddress )
        v10 = (_DWORD *)MmUserProbeAddress;
      *v10 = v6;
    }
    DXGADAPTER_REFERENCE::Assign(v18, 0LL);
    goto LABEL_9;
  }
  WdLogSingleEntry1(3LL, Handle[1]);
LABEL_9:
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&Object);
  return (unsigned int)v3;
}
