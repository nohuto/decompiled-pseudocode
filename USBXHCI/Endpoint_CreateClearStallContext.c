__int64 __fastcall Endpoint_CreateClearStallContext(__int64 a1)
{
  PIRP *Pool2; // rbx
  int v3; // edi
  PIRP Irp; // rax
  _QWORD *v5; // rsi
  __int128 v7; // [rsp+30h] [rbp-40h] BYREF
  __int128 v8; // [rsp+40h] [rbp-30h]
  __int128 v9; // [rsp+50h] [rbp-20h]
  void *v10; // [rsp+60h] [rbp-10h]

  LODWORD(v10) = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  Pool2 = (PIRP *)ExAllocatePool2(64LL, 152LL, 1229146200LL);
  if ( Pool2 )
  {
    Irp = IoAllocateIrp(4, 0);
    *Pool2 = Irp;
    v5 = Pool2 + 18;
    if ( Irp )
    {
      *(_QWORD *)&v8 = 0LL;
      *((_QWORD *)&v8 + 1) = 0x100000001LL;
      v10 = off_1C0063090;
      v7 = 0LL;
      LODWORD(v7) = 56;
      v9 = 0LL;
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, PIRP *))(WdfFunctions_01023 + 1976))(
             WdfDriverGlobals,
             &v7,
             0LL,
             Pool2 + 18);
      if ( v3 >= 0 )
      {
        *(_QWORD *)(a1 + 272) = Pool2;
        return (unsigned int)v3;
      }
    }
    else
    {
      v3 = -1073741670;
    }
    if ( *Pool2 )
    {
      IoFreeIrp(*Pool2);
      *Pool2 = 0LL;
    }
    if ( *v5 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
      *v5 = 0LL;
    }
    ExFreePoolWithTag(Pool2, 0x49434858u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v3;
}
