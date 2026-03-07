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
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1840) + 256LL) & 0x20) == 0 )
    return 3238002695LL;
  if ( (*(_BYTE *)(a1 + 4008) & 7) == 3 )
    return *(_BYTE *)(a1 + 4009) != a2 ? 0xC1000003 : 0;
  NamespaceId = GetNamespaceId(a1, a2);
  v7 = *(_BYTE *)(a1 + 4008);
  if ( (v7 & 4) != 0 )
  {
    LOBYTE(v3) = *(_BYTE *)(a1 + 4009);
  }
  else if ( NamespaceId > *(_DWORD *)(v6 + 516) || !*(_QWORD *)(a1 + 8 * v3 + 1952) )
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
        *(_BYTE *)(a1 + 4008) |= 1u;
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
  *(_DWORD *)(a1 + 4020) = v13[1];
  *(_DWORD *)(a1 + 4024) = WORD2(v13[1]);
  *(_WORD *)(a1 + 4014) = WORD4(v13[1]);
  *(_WORD *)(a1 + 4016) = v8 + v10;
  *(_BYTE *)(a1 + 4009) = v3;
  *(_WORD *)(a1 + 4010) = v9;
  *(_WORD *)(a1 + 4012) = v8;
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
      *(_WORD *)(a1 + 4012) = WORD3(v13[1]);
      *(_WORD *)(a1 + 4016) = v12;
      if ( v11 )
      {
        *(_BYTE *)(a1 + 4008) = *(_BYTE *)(a1 + 4008) & 0xF9 | 2;
        return 0LL;
      }
      return 3238002695LL;
    }
  }
  return result;
}
