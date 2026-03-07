__int64 __fastcall KsPropertyHandleDrmSetContentId(__int64 a1)
{
  __int64 v3; // r13
  unsigned int v4; // r15d
  unsigned int v5; // r14d
  __int64 v6; // rsi
  __int64 v7; // r8
  int v8; // r12d
  char *PoolWithQuotaTag; // rax
  __int64 v10; // rdx

  if ( *(_BYTE *)(a1 + 64) )
    return 3221225488LL;
  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_DWORD *)(v3 + 16);
  v5 = *(_DWORD *)(v3 + 8);
  v6 = (v5 + 7) & 0xFFFFFFF8;
  v7 = *(_QWORD *)(a1 + 24);
  if ( !v7 )
  {
    if ( v4 < 0x18 || (unsigned int)v6 < v5 || (unsigned int)v6 + v4 < (unsigned int)v6 )
      return 3221225990LL;
    v8 = *(_DWORD *)(*(_QWORD *)(v3 + 32) + 20LL);
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)1536, (unsigned int)v6 + v4, 0x7070534Bu);
    *(_QWORD *)(a1 + 24) = PoolWithQuotaTag;
    if ( PoolWithQuotaTag )
    {
      *(_DWORD *)(a1 + 16) |= 0x30u;
      memmove(&PoolWithQuotaTag[v6], *(const void **)(v3 + 32), v4);
      *(_DWORD *)(v6 + *(_QWORD *)(a1 + 24) + 20) = v8;
      if ( v8 == 2 )
      {
        if ( v5 )
        {
          if ( *(_BYTE *)(a1 + 64) )
            ProbeForRead(*(volatile void **)(a1 + 112), v5, 1u);
          memmove(*(void **)(a1 + 24), *(const void **)(a1 + 112), v5);
        }
      }
    }
    v7 = *(_QWORD *)(a1 + 24);
    if ( !v7 )
      return 3221225626LL;
  }
  v10 = v7 + (unsigned int)v6;
  if ( *(_QWORD *)v10 != *(_QWORD *)&KSPROPSETID_DrmAudioStream.Data1
    || *(_QWORD *)(v10 + 8) != *(_QWORD *)KSPROPSETID_DrmAudioStream.Data4 )
  {
    return 3221226032LL;
  }
  if ( *(_DWORD *)(v10 + 16) )
    return 3221226021LL;
  if ( *(_DWORD *)(v10 + 20) != 2 )
    return 3221225474LL;
  if ( v4 < 0x58 || v5 < 0x10 )
    return 3221225507LL;
  return HUBPDO_DrmSetContentId();
}
