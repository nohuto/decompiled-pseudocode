/*
 * XREFs of _CmGetDevicesInBaseContainerList @ 0x140A61634
 * Callers:
 *     _CmMoveBaseContainer @ 0x140A618C8 (_CmMoveBaseContainer.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406D3680 (_PnpCtxGetCachedContextBaseKey.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegEnumValue @ 0x140866444 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1408665AC (_PnpCtxRegQueryInfoKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetDevicesInBaseContainerList(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  _WORD *v8; // rdi
  int CachedContextBaseKey; // ebx
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rcx
  ULONG v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // r14d
  _WORD *Pool2; // rax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  int v22; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  HANDLE v24; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v25; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v27; // [rsp+B8h] [rbp+48h] BYREF

  v26 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  Handle = 0LL;
  v22 = 0;
  v8 = 0LL;
  v27 = 0;
  *a4 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 10, (__int64)&v26);
  if ( CachedContextBaseKey >= 0 )
  {
    v10 = 0LL;
    if ( a1 )
      v10 = *(_QWORD *)(a1 + 224);
    v11 = 224LL;
    if ( a1 )
      v11 = a1 + 224;
    CachedContextBaseKey = SysCtxRegOpenKey(v10, v26, a2, 0, 1u, (__int64)&v25);
    if ( CachedContextBaseKey >= 0 )
    {
      v12 = a1 ? *(_QWORD *)v11 : 0LL;
      CachedContextBaseKey = SysCtxRegOpenKey(v12, (__int64)v25, (__int64)L"BaseContainers", 0, 1u, (__int64)&v24);
      if ( CachedContextBaseKey >= 0 )
      {
        if ( a1 )
        {
          v14 = *(_QWORD *)v11;
          v13 = 0;
        }
        else
        {
          v13 = 0;
          v14 = 0LL;
        }
        CachedContextBaseKey = SysCtxRegOpenKey(v14, (__int64)v24, a3, 0, 3u, (__int64)&Handle);
        if ( CachedContextBaseKey >= 0 )
        {
          CachedContextBaseKey = PnpCtxRegQueryInfoKey(v15, (int)Handle, 0, 0, (__int64)&v22, (__int64)&v27, 0LL);
          if ( CachedContextBaseKey >= 0 )
          {
            v16 = v22 * (v27 + 1) + 1;
            Pool2 = (_WORD *)ExAllocatePool2(256LL, 2LL * v16, 1380994640LL);
            *a4 = (__int64)Pool2;
            v8 = Pool2;
            if ( !Pool2 )
            {
              CachedContextBaseKey = -1073741801;
LABEL_27:
              if ( !Pool2 )
                goto LABEL_32;
              ExFreePoolWithTag(Pool2, 0);
              goto LABEL_30;
            }
            while ( 1 )
            {
              v27 = v16 - 1;
              v19 = PnpCtxRegEnumValue(v18, Handle, v13, v8, (__int64)&v27, 0LL, 0LL, 0LL);
              CachedContextBaseKey = v19;
              if ( v19 == -2147483622 )
                goto LABEL_21;
              if ( v19 < 0 )
                break;
              v18 = v27 + 1;
              v16 -= v18;
              ++v13;
              v8 += v18;
            }
          }
        }
      }
    }
  }
  if ( CachedContextBaseKey == -1073741772 || CachedContextBaseKey == -1073741444 )
  {
LABEL_21:
    Pool2 = (_WORD *)*a4;
    CachedContextBaseKey = 0;
    goto LABEL_22;
  }
  Pool2 = (_WORD *)*a4;
  if ( CachedContextBaseKey < 0 )
    goto LABEL_27;
LABEL_22:
  if ( Pool2 )
  {
    *v8 = 0;
    goto LABEL_32;
  }
  v20 = ExAllocatePool2(256LL, 2LL, 1380994640LL);
  *a4 = v20;
  if ( v20 )
  {
LABEL_30:
    *a4 = 0LL;
    goto LABEL_32;
  }
  CachedContextBaseKey = -1073741801;
LABEL_32:
  if ( Handle )
    ZwClose(Handle);
  if ( v24 )
    ZwClose(v24);
  if ( v25 )
    ZwClose(v25);
  return (unsigned int)CachedContextBaseKey;
}
