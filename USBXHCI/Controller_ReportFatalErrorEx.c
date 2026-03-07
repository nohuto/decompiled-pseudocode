__int64 __fastcall Controller_ReportFatalErrorEx(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v10; // r14d
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 Pool2; // rax
  KIRQL v16; // al
  _QWORD *v17; // rcx
  char v18; // [rsp+30h] [rbp-28h]

  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = a2;
    LOBYTE(a2) = 1;
    WPP_RECORDER_SF_LL(
      *(_QWORD *)(a1 + 72),
      a2,
      4,
      231,
      (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
      a3,
      v18);
  }
  DbgPrint("\nXHCI reported fatal error\n");
  if ( (*(_DWORD *)(a1 + 388) & 0x12) != 0 )
    return Controller_InitiateBootRecovery(a1, v10);
  v13 = 0LL;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 368),
          off_1C00630E0);
  if ( a3 )
  {
    if ( a3 != 4159 )
    {
      Pool2 = ExAllocatePool2(64LL, 64LL, 1229146200LL);
      v13 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 8) = 0LL;
        *(_QWORD *)Pool2 = 0LL;
        *(_QWORD *)(Pool2 + 32) = a5;
        *(_QWORD *)(Pool2 + 40) = a6;
        *(_QWORD *)(Pool2 + 48) = a7;
        *(_QWORD *)(Pool2 + 56) = a8;
        *(_DWORD *)(Pool2 + 16) = a3;
        *(_QWORD *)(Pool2 + 24) = a4;
      }
    }
  }
  v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 16));
  if ( v13 )
  {
    v17 = *(_QWORD **)(v14 + 8);
    if ( *v17 != v14 )
      __fastfail(3u);
    *v13 = v14;
    v13[1] = v17;
    *v17 = v13;
    *(_QWORD *)(v14 + 8) = v13;
  }
  *(_DWORD *)(v14 + 80) |= v10;
  KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 16), v16);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3040))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 368));
}
