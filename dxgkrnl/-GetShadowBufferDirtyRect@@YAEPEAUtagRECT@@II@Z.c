char __fastcall GetShadowBufferDirtyRect(struct tagRECT *a1, unsigned int a2, unsigned int a3)
{
  char v6; // di
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rbp
  KIRQL v12; // al
  LONG v13; // ecx
  KIRQL v14; // r8
  LONG v15; // edx
  LONG v16; // eax
  LONG v17; // ecx
  unsigned int right; // ecx
  unsigned int bottom; // eax

  v6 = 1;
  if ( *((struct _KTHREAD **)DXGGLOBAL::GetGlobal() + 207) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 4709LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v8,
          v7,
          v9,
          0LL,
          2,
          -1,
          L"DXGGLOBAL::GetGlobal()->GetVirtualFrameBufferAccessLock()->IsOwner()",
          4709LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v10 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 203);
  if ( !v10 )
    return 0;
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 24));
  v13 = *(_DWORD *)(v10 + 4);
  v14 = v12;
  v15 = *(_DWORD *)(v10 + 12);
  v16 = *(_DWORD *)(v10 + 16);
  *(_DWORD *)(v10 + 4) = -1;
  *(_DWORD *)(v10 + 12) = -1;
  *(_DWORD *)(v10 + 16) = 0;
  a1->left = v13;
  v17 = *(_DWORD *)(v10 + 8);
  *(_DWORD *)(v10 + 8) = 0;
  a1->right = v17;
  a1->top = v15;
  a1->bottom = v16;
  KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 24), v14);
  right = a1->right;
  if ( a1->left >= right )
    return 0;
  bottom = a1->bottom;
  if ( a1->top >= bottom || right > a2 || bottom > a3 )
    return 0;
  return v6;
}
