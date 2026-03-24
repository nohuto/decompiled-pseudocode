/*
 * XREFs of ?GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z @ 0x1C00231AC
 * Callers:
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C01968D4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall GetShadowBufferDirtyRect(struct tagRECT *a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // r15d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  char v9; // di
  __int64 v10; // rbp
  KIRQL v11; // al
  LONG v12; // edx
  LONG v13; // edx
  unsigned int right; // ecx
  unsigned int bottom; // eax

  v4 = a2;
  if ( *((struct _KTHREAD **)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 190) != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 4642LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = 0;
  v10 = *((_QWORD *)DXGGLOBAL::GetGlobal(v7, v6) + 187);
  if ( !v10 )
    return 0;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 24));
  v12 = *(_DWORD *)(v10 + 12);
  a1->left = *(_DWORD *)(v10 + 4);
  a1->right = *(_DWORD *)(v10 + 8);
  a1->top = v12;
  v13 = *(_DWORD *)(v10 + 16);
  *(_DWORD *)(v10 + 4) = -1;
  *(_DWORD *)(v10 + 12) = -1;
  a1->bottom = v13;
  *(_DWORD *)(v10 + 8) = 0;
  *(_DWORD *)(v10 + 16) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 24), v11);
  right = a1->right;
  if ( a1->left < right )
  {
    bottom = a1->bottom;
    if ( a1->top < bottom && right <= v4 )
      return bottom <= a3;
  }
  return v9;
}
