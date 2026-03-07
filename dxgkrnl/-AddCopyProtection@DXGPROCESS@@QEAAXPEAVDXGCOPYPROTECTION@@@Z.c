void __fastcall DXGPROCESS::AddCopyProtection(struct _KTHREAD **this, struct DXGCOPYPROTECTION *a2)
{
  int v4; // edx
  int v5; // r8d
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  struct _KTHREAD *v8; // rdx

  if ( this[50] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 692LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          v4,
          v5,
          0,
          2,
          -1,
          (__int64)L"IsCopyProtectionMutexOwner()",
          692LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v6 = (_QWORD *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  v7 = this + 43;
  v8 = this[43];
  if ( *((struct _KTHREAD ***)v8 + 1) != this + 43 )
    __fastfail(3u);
  *v6 = v8;
  *(_QWORD *)((((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL)) + 8) = v7;
  *((_QWORD *)v8 + 1) = v6;
  *v7 = v6;
}
