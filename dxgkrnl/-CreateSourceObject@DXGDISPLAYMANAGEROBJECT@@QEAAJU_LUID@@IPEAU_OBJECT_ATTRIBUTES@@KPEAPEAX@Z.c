__int64 __fastcall DXGDISPLAYMANAGEROBJECT::CreateSourceObject(
        DXGDISPLAYMANAGEROBJECT *this,
        struct _LUID a2,
        int a3,
        struct _OBJECT_ATTRIBUTES *a4,
        ACCESS_MASK DesiredAccess,
        PHANDLE Handle)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  unsigned int v13; // edi
  DXGDISPLAYMANAGERSOURCEOBJECT *v14; // rsi
  int v15; // eax
  int v16; // ebp
  __int64 v17; // rbx
  int v18; // edx
  const wchar_t *v19; // r9
  NTSTATUS inserted; // eax
  PVOID Object; // [rsp+50h] [rbp-28h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, __int64); // [rsp+58h] [rbp-20h] BYREF

  v10 = operator new[](0x70uLL, 0x4B677844u, 256LL);
  v13 = 0;
  v14 = (DXGDISPLAYMANAGERSOURCEOBJECT *)v10;
  if ( !v10 )
  {
    v23 = 0LL;
    goto LABEL_8;
  }
  *(_QWORD *)(v10 + 8) = 0LL;
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_QWORD *)v10 = &DXGDISPLAYMANAGERSOURCEOBJECT::`vftable';
  *(_QWORD *)(v10 + 24) = 0LL;
  *(struct _LUID *)(v10 + 32) = a2;
  *(_QWORD *)(v10 + 48) = this;
  *(_DWORD *)(v10 + 40) = a3;
  *(_BYTE *)(v10 + 56) = 1;
  *(_QWORD *)(v10 + 72) = 0LL;
  *(_QWORD *)(v10 + 80) = 0LL;
  *(_QWORD *)(v10 + 88) = 0LL;
  *(_DWORD *)(v10 + 96) = 0;
  *(_DWORD *)(v10 + 100) = 80;
  *(_DWORD *)(v10 + 104) = 1;
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  v23 = (__int64 (__fastcall ***)(_QWORD, __int64))v10;
  if ( !*(_BYTE *)(v10 + 56) )
  {
LABEL_8:
    v17 = 329LL;
    WdLogSingleEntry1(6LL, 329LL);
    v18 = 262145;
    v19 = L"Failed to allocate DXGDISPLAYMANAGERSOURCEOBJECT";
    v16 = -1073741801;
    goto LABEL_9;
  }
  LOBYTE(v12) = 1;
  LOBYTE(v11) = 1;
  Object = 0LL;
  v15 = ObCreateObject(v11, g_pDxgkDisplayManagerObjectType, a4, v12, 0LL, 16, 128, 0, &Object);
  v16 = v15;
  if ( v15 < 0 )
  {
    v17 = v15;
    WdLogSingleEntry1(2LL, v15);
    v18 = 0x40000;
    v19 = L"Failed to create NT object for display manager (0x%I64x)";
LABEL_9:
    DxgkLogInternalTriageEvent(0LL, v18, -1, (__int64)v19, v17, 0LL, 0LL, 0LL, 0LL);
    v13 = v16;
    goto LABEL_10;
  }
  *(_OWORD *)Object = 0LL;
  DXGDISPLAYMANAGERSOURCEOBJECT::SetNtObjectPointer(v14, (struct DXGDISPLAYMANAGEROBJECT_CONTAINER *)Object);
  v23 = 0LL;
  *((_QWORD *)Object + 1) = v14;
  inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, Handle);
  v16 = inserted;
  if ( inserted < 0 )
  {
    v17 = inserted;
    WdLogSingleEntry1(2LL, inserted);
    v18 = 0x40000;
    v19 = L"Failed to create NT handle for display manager source object (0x%I64x)";
    goto LABEL_9;
  }
LABEL_10:
  auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v23);
  return v13;
}
