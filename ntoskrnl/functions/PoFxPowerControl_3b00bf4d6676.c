__int64 __fastcall PoFxPowerControl(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  NTSTATUS v11; // edi
  __int64 v12; // rcx

  v11 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 240), 0LL, &Src, 1u, 0x20u);
  if ( v11 >= 0 )
  {
    v11 = -1073741637;
    v12 = *(_QWORD *)(a1 + 56);
    if ( a7 )
      *a7 = 0LL;
    if ( *(_BYTE *)(v12 + 124) )
      v11 = PopPluginRequestPowerControl(*(_QWORD *)(v12 + 32), a2, a3, a4, a5, a6, (__int64)a7);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
  }
  return (unsigned int)v11;
}
