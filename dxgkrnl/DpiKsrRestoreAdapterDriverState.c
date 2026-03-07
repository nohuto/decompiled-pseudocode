__int64 __fastcall DpiKsrRestoreAdapterDriverState(struct _FDO_CONTEXT *a1)
{
  int v3; // r14d
  __int64 v4; // rbx
  char *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v9[256]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE *v10; // [rsp+130h] [rbp+28h]
  __int64 v11; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v12[256]; // [rsp+140h] [rbp+38h] BYREF
  _BYTE *v13; // [rsp+240h] [rbp+138h]

  if ( !DpiKsrIsSoftBoot() )
    return 0LL;
  v11 = 0x2000000000LL;
  v13 = v12;
  memset(v12, 0, sizeof(v12));
  v8 = 0x2000000000LL;
  v10 = v9;
  memset(v9, 0, sizeof(v9));
  KsrEnumeratePersistedMemory((char *)a1 + 4800, DpiKsrEnumeratePersistedMemoryCallback, &v11);
  v3 = 0;
  v4 = 0LL;
  if ( (_DWORD)v11 )
  {
    while ( 1 )
    {
      v3 = DpiClaimPersistedMemoryBlock(a1, *(_QWORD *)&v13[8 * v4], (const struct _GUID *)a1 + 300);
      if ( v3 < 0 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= (unsigned int)v11 )
        goto LABEL_6;
    }
    WdLogSingleEntry1(2LL, -1073741801LL);
    v5 = (char *)a1 + 4816;
    goto LABEL_12;
  }
LABEL_6:
  v5 = (char *)a1 + 4816;
  KsrEnumeratePersistedMemory((char *)a1 + 4816, DpiKsrEnumeratePersistedMemoryCallback, &v8);
  v6 = 0LL;
  if ( (_DWORD)v8 )
  {
    while ( 1 )
    {
      v3 = DpiClaimPersistedMemoryBlock(a1, *(_QWORD *)&v10[8 * v6], (const struct _GUID *)a1 + 301);
      if ( v3 < 0 )
        break;
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= (unsigned int)v8 )
        goto LABEL_13;
    }
    WdLogSingleEntry1(2LL, -1073741801LL);
LABEL_12:
    LOBYTE(v7) = 1;
    KsrFreePersistedMemory((char *)a1 + 4800, v7);
    KsrFreePersistedMemory(v5, 0LL);
  }
LABEL_13:
  DXGK_ENUMERATE_KSR_MEMORY_CONTEXT::~DXGK_ENUMERATE_KSR_MEMORY_CONTEXT((PVOID *)&v8);
  DXGK_ENUMERATE_KSR_MEMORY_CONTEXT::~DXGK_ENUMERATE_KSR_MEMORY_CONTEXT((PVOID *)&v11);
  return (unsigned int)v3;
}
