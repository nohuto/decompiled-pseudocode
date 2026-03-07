__int64 __fastcall PopFxPlatformIdleVeto(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  NTSTATUS v8; // edi
  __int64 (__fastcall *v9)(__int64, GUID *, unsigned __int64 *, __int64, _QWORD, _QWORD, __int64 *); // rax
  __int64 v10; // rcx
  __int64 v12; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-48h] BYREF
  int v14; // [rsp+58h] [rbp-40h]

  v13 = 0LL;
  v8 = -1073741822;
  v14 = 0;
  if ( *(_QWORD *)(a1 + 152) )
  {
    v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 240), 0LL, &Src, 1u, 0x20u);
    if ( v8 >= 0 )
    {
      v9 = *(__int64 (__fastcall **)(__int64, GUID *, unsigned __int64 *, __int64, _QWORD, _QWORD, __int64 *))(a1 + 152);
      v12 = 0LL;
      v10 = *(_QWORD *)(a1 + 192);
      v13 = __PAIR64__(a3, a2);
      LOBYTE(v14) = a4;
      v8 = v9(v10, &GUID_PLATFORM_IDLE_VETO, &v13, 12LL, 0LL, 0LL, &v12);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
    }
  }
  return (unsigned int)v8;
}
