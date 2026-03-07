__int64 __fastcall ObpChargeQuotaForObject(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r8
  char v6; // al
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  __int64 v9; // r8
  __int64 result; // rax
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  void *v15; // rcx
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0;
  v4 = OBJECT_HEADER_TO_QUOTA_INFO(a1);
  v6 = *(_BYTE *)(a1 + 27);
  if ( (v6 & 1) == 0 )
    return 0LL;
  *(_BYTE *)(a1 + 27) = v6 & 0xFE;
  if ( v4 )
  {
    v7 = *(_DWORD *)v4;
    v8 = *(_DWORD *)(v4 + 4);
    if ( v5 || (v9 = *(_QWORD *)(a1 + 40)) != 0 && (v5 = v9 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      result = SeComputeQuotaInformationSize(v5, &v16);
      if ( (int)result < 0 )
        return result;
      v11 = v16;
      if ( v16 )
      {
        v12 = PsChargeSharedPoolQuota(a2, v16, 0LL);
        *(_QWORD *)(v4 + 16) = v12;
        if ( !v12 )
          return 3221225540LL;
      }
      *(_DWORD *)(v4 + 8) = v11;
    }
  }
  else
  {
    v14 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
    v7 = *(_DWORD *)(v14 + 104);
    v8 = *(_DWORD *)(v14 + 108);
  }
  v13 = PsChargeSharedPoolQuota(a2, v7, v8);
  *(_QWORD *)(a1 + 32) = v13;
  if ( !v13 )
  {
    if ( v4 )
    {
      v15 = *(void **)(v4 + 16);
      if ( v15 )
        PsReturnSharedPoolQuota(v15);
    }
    return 3221225540LL;
  }
  return 0LL;
}
