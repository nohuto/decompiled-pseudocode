__int64 __fastcall NtGdiDdDDISharedPrimaryLockNotification(ULONG64 a1)
{
  struct _LUID v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]

  if ( (unsigned int)DxDdIsTearDownLddmSpriteDisabled() )
    return 0LL;
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  *(_OWORD *)&v3[0].LowPart = *(_OWORD *)a1;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 24);
  return DxLddmSharedPrimaryLockNotification(v3[0], v3[1].LowPart, (const struct _RECTL *)&v3[1].HighPart);
}
