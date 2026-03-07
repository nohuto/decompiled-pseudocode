__int64 __fastcall ScsiSyncCacheRequest(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned __int8 v7; // cl

  SrbExtension = GetSrbExtension(a2);
  v6 = SrbExtension;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1840) + 525LL) & 1) != 0 )
  {
    *(_BYTE *)(SrbExtension + 4253) &= 0xFCu;
    SrbAssignQueueId(a1, v5);
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v7 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v7 = *(_BYTE *)(a2 + 7);
    *(_DWORD *)(v6 + 4100) = GetNamespaceId(a1, v7);
    *(_BYTE *)(v6 + 4096) = 0;
  }
  else
  {
    *(_BYTE *)(v5 + 3) = 1;
  }
  return 0LL;
}
