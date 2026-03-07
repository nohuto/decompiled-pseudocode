__int64 __fastcall ADAPTER_DISPLAY::DestroyCopyProtection(DXGADAPTER **this, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rcx
  struct _KTHREAD **Current; // rdi
  struct DXGCOPYPROTECTION *CopyProtection; // rax
  DXGCOPYPROTECTION *v9; // rbx
  unsigned int v10; // ebx
  DXGCOPYPROTECTION *v11; // rcx
  DXGCOPYPROTECTION **v12; // rax
  _BYTE v14[16]; // [rsp+50h] [rbp-28h] BYREF

  v4 = a3;
  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 5711LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 5711LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6);
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 5714LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 5714LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( Current[50] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 5715LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pProcess->IsCopyProtectionMutexOwner()",
      5715LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGFASTMUTEX *const)(this + 4), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  CopyProtection = ADAPTER_DISPLAY::FindCopyProtection((ADAPTER_DISPLAY *)this, v5, v4, (struct DXGPROCESS *)Current);
  v9 = CopyProtection;
  if ( CopyProtection )
  {
    DXGPROCESS::RemoveCopyProtection(Current, (__int64)CopyProtection);
    v11 = *(DXGCOPYPROTECTION **)v9;
    if ( *(DXGCOPYPROTECTION **)(*(_QWORD *)v9 + 8LL) != v9
      || (v12 = (DXGCOPYPROTECTION **)*((_QWORD *)v9 + 1), *v12 != v9) )
    {
      __fastfail(3u);
    }
    *v12 = v11;
    *((_QWORD *)v11 + 1) = v12;
    DXGCOPYPROTECTION::`scalar deleting destructor'(v9);
    ADAPTER_DISPLAY::SetCopyProtection(this, v5);
    DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
    v10 = 0;
  }
  else
  {
    v10 = -1073741811;
    WdLogSingleEntry4(3LL, v4, Current, v5, -1073741811LL);
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  return v10;
}
