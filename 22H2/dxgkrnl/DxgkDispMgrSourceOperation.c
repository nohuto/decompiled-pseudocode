/*
 * XREFs of DxgkDispMgrSourceOperation @ 0x1C02B2450
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0009580 (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000A33C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C0036660 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ??BDXGADAPTER_REFERENCE@@QEBA_NXZ @ 0x1C003C20C (--BDXGADAPTER_REFERENCE@@QEBA_NXZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C00E0958 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C00E58E4 (--1-$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkDispMgrSourceOperation(_OWORD *a1)
{
  ULONG64 v2; // rcx
  HANDLE v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  NTSTATUS v6; // edi
  __int64 v7; // r8
  __int64 v8; // rax
  struct _LUID *v9; // rdx
  __int64 v10; // rax
  int v12; // r14d
  struct DXGADAPTER *v13; // r15
  unsigned int v14; // r12d
  __int64 v15; // rdx
  DXGADAPTER *v16; // rcx
  _DWORD *v17; // rdx
  DXGADAPTER **v18; // rcx
  __int64 LowPart; // r15
  struct DXGADAPTER *v20; // r14
  __int64 v21; // rdx
  _OWORD *v22; // rdx
  PVOID Object; // [rsp+40h] [rbp-198h] BYREF
  struct DXGADAPTER *v24[2]; // [rsp+48h] [rbp-190h] BYREF
  struct DXGADAPTER *v25[2]; // [rsp+58h] [rbp-180h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-170h]
  struct _LUID v27[2]; // [rsp+78h] [rbp-160h] BYREF
  struct _LUID v28; // [rsp+88h] [rbp-150h] BYREF
  _BYTE v29[144]; // [rsp+90h] [rbp-148h] BYREF
  _BYTE v30[144]; // [rsp+120h] [rbp-B8h] BYREF

  v2 = (ULONG64)(a1 + 2);
  if ( v2 < (unsigned __int64)a1 || v2 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)Handle = *a1;
  *(_OWORD *)&v27[0].LowPart = a1[1];
  Object = 0LL;
  v3 = Handle[1];
  v6 = ObReferenceObjectByHandleWithTag(
         Handle[1],
         0x20000u,
         g_pDxgkDisplayManagerObjectType,
         1,
         0x4B677844u,
         &Object,
         0LL);
  if ( v6 >= 0 )
  {
    v9 = (struct _LUID *)*((_QWORD *)Object + 1);
    if ( !v9 )
    {
      v10 = WdLogNewEntry5_WdWarning(v5, 0LL, v7);
      *(_QWORD *)(v10 + 24) = 1030LL;
      WdLogEvent5_WdWarning(v10);
LABEL_8:
      v6 = -1073741811;
      goto LABEL_9;
    }
    if ( LODWORD(Handle[0]) == 1 )
    {
      v27[0] = v9[4];
      LowPart = v9[5].LowPart;
      v27[1].LowPart = v9[5].LowPart;
      v27[1].HighPart = -1;
      v25[0] = 0LL;
      DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v25, v27);
      if ( DXGADAPTER_REFERENCE::operator bool(v25) )
      {
        v20 = v25[0];
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, v25[0], 0LL);
        if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v30, 0LL) >= 0
          && DXGADAPTER::IsDisplayAdapter(v20) )
        {
          v21 = *((_QWORD *)v20 + 337);
          if ( (unsigned int)LowPart < *(_DWORD *)(v21 + 80) )
            v27[1].HighPart = *(_DWORD *)(3968 * LowPart + *(_QWORD *)(v21 + 112) + 1068);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30, v21);
      }
      v22 = a1 + 1;
      if ( (unsigned __int64)(a1 + 1) >= MmUserProbeAddress )
        v22 = (_OWORD *)MmUserProbeAddress;
      *v22 = *(_OWORD *)&v27[0].LowPart;
      v18 = v25;
    }
    else
    {
      if ( LODWORD(Handle[0]) != 2 )
        goto LABEL_8;
      v12 = 4;
      v28 = v9[4];
      v24[0] = 0LL;
      DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v24, &v28);
      if ( DXGADAPTER_REFERENCE::operator bool(v24) )
      {
        v13 = v24[0];
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v24[0], 0LL);
        v14 = *(_DWORD *)(*((_QWORD *)Object + 1) + 40LL);
        if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29, 0LL) >= 0
          && DXGADAPTER::IsDisplayAdapter(v13)
          && v14 < *(_DWORD *)(*((_QWORD *)v13 + 337) + 80LL) )
        {
          v12 = 2 - (DXGADAPTER::IsVSyncAvailable(v16, v14) != 0);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29, v15);
      }
      v17 = a1 + 1;
      if ( (unsigned __int64)(a1 + 1) >= MmUserProbeAddress )
        v17 = (_DWORD *)MmUserProbeAddress;
      *v17 = v12;
      v18 = v24;
    }
    DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(v18);
    goto LABEL_9;
  }
  v8 = WdLogNewEntry5_WdWarning(v5, v4, v7);
  *(_QWORD *)(v8 + 24) = v3;
  WdLogEvent5_WdWarning(v8);
LABEL_9:
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&Object);
  return (unsigned int)v6;
}
