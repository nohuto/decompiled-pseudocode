__int64 __fastcall DxgkAllocateAdlCB(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  struct SYSMM_ADAPTER_OBJECT *v5; // rsi
  int v6; // edi
  int v7; // edx
  int v8; // edx
  unsigned int v9; // r9d
  struct _DXGK_ADL *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 >= 4 )
  {
    WdLogSingleEntry1(3LL, (unsigned __int64)v2 >> 2);
    return 3221225485LL;
  }
  v5 = *(struct SYSMM_ADAPTER_OBJECT **)a1;
  v6 = SysMmLockObject(*(struct SYSMM_ADAPTER_OBJECT **)a1, a2);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = *(_DWORD *)(a1 + 24);
  v10 = 0LL;
  v8 = v7 & 1;
  v9 = v8 | 2;
  if ( (*(_BYTE *)(a1 + 24) & 2) == 0 )
    v9 = v8;
  v6 = SysMmCreateAdl(v5, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), v9, &v10);
  if ( v6 < 0 )
  {
    SysMmUnlockObject(v5);
    return (unsigned int)v6;
  }
  *(_QWORD *)(a1 + 32) = v10;
  return 0LL;
}
