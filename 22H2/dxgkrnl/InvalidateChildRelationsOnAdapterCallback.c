/*
 * XREFs of InvalidateChildRelationsOnAdapterCallback @ 0x1C0297A90
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 */

__int64 __fastcall InvalidateChildRelationsOnAdapterCallback(struct _DEVICE_OBJECT **a1)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  struct _DEVICE_OBJECT *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  __int64 v9; // rax
  _BYTE v11[144]; // [rsp+20h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, (struct DXGADAPTER *const)a1, 0LL);
  v2 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11, 0LL);
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = a1[27];
    if ( v5 )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v5);
      if ( !DeviceAttachmentBaseRef )
      {
        v9 = WdLogNewEntry5_WdAssertion(v7, v6);
        *(_QWORD *)(v9 + 24) = 2509LL;
        WdLogEvent5_WdAssertion(v9);
      }
      IoInvalidateDeviceRelations(DeviceAttachmentBaseRef, BusRelations);
      ObfDereferenceObject(DeviceAttachmentBaseRef);
    }
    v4 = 0;
  }
  else if ( v2 == -1073741130 )
  {
    v4 = 0;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11, v3);
  return v4;
}
