/*
 * XREFs of KsepEngineReadFlags @ 0x140B34F48
 * Callers:
 *     KsepEngineInitialize @ 0x140B34E84 (KsepEngineInitialize.c)
 * Callees:
 *     KsepLogError @ 0x140303450 (KsepLogError.c)
 *     KsepLogInfo @ 0x14036F8F4 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14057E834 (KsepDebugPrint.c)
 *     RtlAssert @ 0x1405A7CA0 (RtlAssert.c)
 *     KsepRegistryOpenKey @ 0x14079E858 (KsepRegistryOpenKey.c)
 *     KsepRegistryQueryDWORD @ 0x1407FFF18 (KsepRegistryQueryDWORD.c)
 *     KsepRegistryCloseKey @ 0x140800168 (KsepRegistryCloseKey.c)
 */

__int64 __fastcall KsepEngineReadFlags(int *a1)
{
  int v1; // esi
  int v3; // eax
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rax
  int v14; // [rsp+60h] [rbp+38h] BYREF
  int v15; // [rsp+68h] [rbp+40h] BYREF
  int v16; // [rsp+70h] [rbp+48h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+50h] BYREF

  KeyHandle = 0LL;
  v16 = 0;
  v1 = 0;
  if ( !a1 )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    dword_140C40404[2 * v8] = -1073740768;
    KsepHistoryErrors[2 * v8] = 262244;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("Engine != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x64u, 0LL);
  }
  *a1 = 0;
  v3 = KsepRegistryOpenKey(
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Policies\\Microsoft\\Compatibility",
         0LL,
         &KeyHandle);
  if ( v3 )
  {
    if ( v3 == -1073741772 )
      a1[2] |= 2u;
  }
  else
  {
    v14 = 0;
    v15 = 0;
    if ( !KsepRegistryQueryDWORD(KeyHandle, L"DisableDeviceFlags", &v14) && v14 == 1 )
    {
      a1[2] |= 4u;
      v1 = 2;
    }
    if ( !KsepRegistryQueryDWORD(KeyHandle, L"DisableDriverShims", &v15) && v15 == 1 )
    {
      v1 |= 1u;
      a1[2] |= 8u;
    }
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v9]) = 0;
    LODWORD(KsepHistoryMessages[v9]) = 262275;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(0LL, "KSE: Engine has group policy flags: %08x\n", v1);
    KsepLogInfo(0, "KSE: Engine has group policy flags: %08x\n", v1);
    KsepRegistryCloseKey(KeyHandle);
    KeyHandle = 0LL;
  }
  v4 = KsepRegistryOpenKey(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility", 0LL, &KeyHandle);
  v5 = v4;
  if ( v4 == -1073741772 )
  {
    a1[2] |= 1u;
    goto LABEL_8;
  }
  if ( v4 < 0 )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    dword_140C40404[2 * v10] = v5;
    KsepHistoryErrors[2 * v10] = 262304;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: Error reading compatibility key: status: %08x\n", v5);
    KsepLogError(0LL, (__int64)"KSE: Error reading compatibility key: status: %08x\n", v5);
  }
  else
  {
    v5 = KsepRegistryQueryDWORD(KeyHandle, L"DisableFlags", &v16);
    if ( v5 == -1073741772 )
    {
LABEL_8:
      v5 = 0;
      goto LABEL_9;
    }
    if ( (v5 & 0x80000000) == 0 )
    {
      v12 = v16 & 3;
      *a1 = v12;
      if ( (v12 & 1) != 0 )
        a1[2] |= 0x20u;
      if ( (v12 & 2) != 0 )
        a1[2] |= 0x10u;
      v13 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
      HIDWORD(KsepHistoryMessages[v13]) = 0;
      LODWORD(KsepHistoryMessages[v13]) = 262343;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(0LL, "KSE: Engine initialized with registry flags: %08x\n", *a1);
      KsepLogInfo(0, "KSE: Engine initialized with registry flags: %08x\n", *a1);
    }
    else
    {
      v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_140C40404[2 * v11] = v5;
      KsepHistoryErrors[2 * v11] = 262326;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(0LL, "KSE: Error reading compatibility value [%ws]: status: %08x\n", L"DisableFlags", v5);
      KsepLogError(0LL, (__int64)"KSE: Error reading compatibility value [%ws]: status: %08x\n", L"DisableFlags", v5);
    }
  }
LABEL_9:
  *a1 |= v1;
  v6 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
  HIDWORD(KsepHistoryMessages[v6]) = 0;
  LODWORD(KsepHistoryMessages[v6]) = 262354;
  if ( (KsepDebugFlag & 1) != 0 )
    KsepDebugPrint(0LL, "KSE: Engine flags (after registry/group policy): %08x\n", *a1);
  KsepLogInfo(0, "KSE: Engine flags (after registry/group policy): %08x\n", *a1);
  KsepRegistryCloseKey(KeyHandle);
  return v5;
}
