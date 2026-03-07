__int64 __fastcall DXGDISPLAYMANAGEROBJECT::CheckOwnership(struct _LUID a1, unsigned int a2, void *a3)
{
  DWORD LowPart; // ebx
  unsigned int i; // ebx
  int v7; // eax
  NTSTATUS v8; // edi
  __int64 v10; // rax
  struct _LUID v11; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v13; // [rsp+60h] [rbp-A0h] BYREF
  ReferenceCounted *v14; // [rsp+68h] [rbp-98h] BYREF
  struct _LUID *v15; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *v16[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v17[144]; // [rsp+90h] [rbp-70h] BYREF

  v11 = a1;
  Object = 0LL;
  LowPart = a1.LowPart;
  if ( a3 )
  {
    v8 = ObReferenceObjectByHandleWithTag(a3, 0x20000u, g_pDxgkDisplayManagerObjectType, 1, 0x4B677844u, &Object, 0LL);
    if ( v8 < 0 )
    {
      WdLogSingleEntry1(2LL, a3);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to open display manager source object with handle 0x%I64x",
        (__int64)a3,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_15;
    }
    v10 = *((_QWORD *)Object + 1);
    if ( !v10 )
    {
      WdLogSingleEntry1(2LL, Object);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Display manager object 0x%I64x was not a source object.",
        (__int64)Object,
        0LL,
        0LL,
        0LL,
        0LL);
      v8 = -1073741811;
      goto LABEL_15;
    }
    if ( !*(_BYTE *)(v10 + 56) )
    {
      WdLogSingleEntry1(2LL, Object);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Display manager object 0x%I64x was not a source object.",
        (__int64)Object,
        0LL,
        0LL,
        0LL,
        0LL);
      v8 = -1073741790;
      goto LABEL_15;
    }
  }
  v16[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v16, &v11);
  if ( v16[0] )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, v16[0], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17, 0LL) < 0 )
    {
      WdLogSingleEntry2(3LL, v11.HighPart, LowPart);
      v8 = -1073741275;
    }
    else
    {
      for ( i = 0; ; ++i )
      {
        v13 = -1;
        v7 = DmmEnumClientVidPnPathTargetsFromSource(v16[0], a2, i, &v13);
        v8 = v7;
        if ( v7 < 0 )
          break;
        if ( v7 == 1075708748 || v13 == -1 )
        {
          v8 = 0;
          break;
        }
        v15 = &v11;
        v11 = 0LL;
        v8 = DmmDoForSpecifiedTarget__lambda_faea55654f1a9ab00e317b5a4ca43765_(v16[0], v13, &v15);
        if ( v8 < 0 )
          break;
        v15 = (struct _LUID *)v11;
        if ( a3 )
        {
          if ( !*(_QWORD *)&v11 )
            goto LABEL_29;
          v14 = 0LL;
          DXGDISPLAYMANAGERSOURCEOBJECT::GetDisplayManagerObject(*((_QWORD *)Object + 1), &v14);
          if ( v14 != *(ReferenceCounted **)&v11 )
          {
            auto_rc<DXGDISPLAYMANAGEROBJECT>::reset(&v14, 0LL);
LABEL_29:
            WdLogSingleEntry1(2LL, 469LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Access denied to take ownership of VidPn source",
              469LL,
              0LL,
              0LL,
              0LL,
              0LL);
            auto_rc<DXGDISPLAYMANAGEROBJECT>::reset((ReferenceCounted **)&v15, 0LL);
            v8 = -1073741790;
            break;
          }
          auto_rc<DXGDISPLAYMANAGEROBJECT>::reset(&v14, 0LL);
        }
        else if ( *(_QWORD *)&v11 && *(_BYTE *)(*(_QWORD *)&v11 + 184LL) )
        {
          goto LABEL_29;
        }
        auto_rc<DXGDISPLAYMANAGEROBJECT>::reset((ReferenceCounted **)&v15, 0LL);
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17);
  }
  else
  {
    WdLogSingleEntry2(3LL, v11.HighPart, LowPart);
    v8 = -1073741275;
  }
  DXGADAPTER_REFERENCE::Assign(v16, 0LL);
LABEL_15:
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&Object);
  return (unsigned int)v8;
}
