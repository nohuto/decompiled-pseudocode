/*
 * XREFs of NVMeInitStreams @ 0x1C000EE88
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DDD0 (NVMeControllerInitPart2.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C0013958 (IoctlStorageStreamsGetParameters.c)
 * Callees:
 *     GetNamespaceId @ 0x1C00058D4 (GetNamespaceId.c)
 *     __security_check_cookie @ 0x1C00066D0 (__security_check_cookie.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C001862C (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0018714 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C00188A4 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0018C68 (NVMeDirectiveStreamsReturnParameters.c)
 */

__int64 __fastcall NVMeInitStreams(__int64 a1, unsigned __int8 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned int NamespaceId; // eax
  __int64 v6; // r8
  char v7; // cl
  __int16 v8; // cx
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // dx
  __int16 v11; // cx
  __int16 v12; // ax
  _OWORD v13[4]; // [rsp+20h] [rbp-50h] BYREF

  v3 = a2;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1624) + 256LL) & 0x20) == 0 )
    return 3238002695LL;
  if ( (*(_BYTE *)(a1 + 3792) & 7) == 3 )
    return *(_BYTE *)(a1 + 3793) != a2 ? 0xC1000003 : 0;
  NamespaceId = GetNamespaceId(a1, a2);
  v7 = *(_BYTE *)(a1 + 3792);
  if ( (v7 & 4) != 0 )
  {
    LOBYTE(v3) = *(_BYTE *)(a1 + 3793);
  }
  else if ( NamespaceId > *(_DWORD *)(v6 + 516) || !*(_QWORD *)(a1 + 8 * v3 + 1736) )
  {
    return 3238002694LL;
  }
  if ( (v7 & 1) == 0 )
  {
    memset(v13, 0, sizeof(v13));
    result = NVMeDirectiveIdentifyReturnParameters(a1);
    if ( (_DWORD)result )
      return result;
    if ( (v13[0] & 2) != 0 )
    {
      result = NVMeDirectiveIdentifyEnableDirective(a1);
      if ( (_DWORD)result )
        return result;
      result = NVMeDirectiveIdentifyReturnParameters(a1);
      if ( (_DWORD)result )
        return result;
      if ( (v13[2] & 2) != 0 )
      {
        *(_BYTE *)(a1 + 3792) |= 1u;
        goto LABEL_15;
      }
    }
    return 3238002695LL;
  }
LABEL_15:
  memset(v13, 0, 32);
  result = NVMeDirectiveStreamsReturnParameters(a1);
  if ( (_DWORD)result )
    return result;
  v8 = WORD3(v13[1]);
  v9 = v13[0];
  v10 = WORD1(v13[0]);
  *(_DWORD *)(a1 + 3804) = v13[1];
  *(_DWORD *)(a1 + 3808) = WORD2(v13[1]);
  *(_WORD *)(a1 + 3798) = WORD4(v13[1]);
  *(_WORD *)(a1 + 3800) = v8 + v10;
  *(_BYTE *)(a1 + 3793) = v3;
  *(_WORD *)(a1 + 3794) = v9;
  *(_WORD *)(a1 + 3796) = v8;
  if ( !v9 )
    return 3238002695LL;
  if ( v9 > v10 )
    v9 = v10;
  if ( !v9 )
    return 3238002695LL;
  result = NVMeDirectiveStreamsAllocateResources(a1);
  if ( !(_DWORD)result )
  {
    result = NVMeDirectiveStreamsReturnParameters(a1);
    if ( !(_DWORD)result )
    {
      v11 = WORD3(v13[1]);
      v12 = WORD3(v13[1]) + WORD1(v13[0]);
      *(_WORD *)(a1 + 3796) = WORD3(v13[1]);
      *(_WORD *)(a1 + 3800) = v12;
      if ( v11 )
      {
        *(_BYTE *)(a1 + 3792) = *(_BYTE *)(a1 + 3792) & 0xF9 | 2;
        return 0LL;
      }
      return 3238002695LL;
    }
  }
  return result;
}
