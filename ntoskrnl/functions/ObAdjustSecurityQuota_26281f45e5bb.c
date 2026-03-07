__int64 __fastcall ObAdjustSecurityQuota(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  __int64 v4; // rdi
  __int64 v5; // rbp
  char *v6; // rcx

  v2 = a1 - 48;
  if ( *(_QWORD *)(v2 + 32) == 1LL )
    return 0LL;
  v4 = OBJECT_HEADER_TO_QUOTA_INFO(v2);
  v5 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, a2, 0LL);
  if ( v5 )
  {
    v6 = *(char **)(v4 + 16);
    if ( v6 )
      PsReturnSharedPoolQuota(v6, *(unsigned int *)(v4 + 8), 0LL);
    *(_DWORD *)(v4 + 8) = a2;
    *(_QWORD *)(v4 + 16) = v5;
    return 0LL;
  }
  return 3221225540LL;
}
