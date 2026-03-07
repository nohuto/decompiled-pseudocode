__int64 __fastcall DxgkDispMgrReferenceObjectByHandle(void *a1, ACCESS_MASK a2, _QWORD *a3)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  const wchar_t *v7; // r9
  _QWORD *v8; // rax
  _QWORD *v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = ObReferenceObjectByHandleWithTag(a1, a2, g_pDxgkDisplayManagerObjectType, 1, 0x4B677844u, (PVOID *)&v10, 0LL);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v8 = v10;
    if ( *v10 )
    {
      v10 = 0LL;
      v5 = 0;
      *a3 = v8;
      goto LABEL_7;
    }
    v6 = 1138LL;
    WdLogSingleEntry1(2LL, 1138LL);
    v7 = L"Opened DispMgr object, but it was not a valid target manager.";
    v5 = -1073741811;
  }
  else
  {
    v6 = v4;
    WdLogSingleEntry1(2LL, v4);
    v7 = L"Failed to open DispMgr handle with status = 0x%I64x";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v7, v6, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>((void **)&v10);
  return v5;
}
