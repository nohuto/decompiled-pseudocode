char __fastcall Isoch_Transfer_CompleteCancelable(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6)
{
  __int64 **v6; // rax
  unsigned int v8; // ebx
  __int64 v11; // rcx
  __int64 **v12; // rax
  __int64 *v13; // rcx
  __int64 **v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // rsi
  __int64 **v19; // rcx
  KIRQL v20; // bl
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  v6 = (__int64 **)&retaddr;
  v8 = a4;
  if ( *((_DWORD *)a2 + 16) == 1 )
  {
    v13 = (__int64 *)*a2;
    v14 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v14 != a2 )
      goto LABEL_23;
    *v14 = v13;
    v13[1] = (__int64)v14;
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2048))(WdfDriverGlobals, a2[3]);
    if ( v15 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = *(_QWORD *)(a1 + 48);
        v17 = *(unsigned __int8 *)(v16 + 135);
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_DDqd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v16,
          v17,
          17,
          (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
          v17,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          a2[3],
          v15);
      }
      v18 = a1 + 400;
      *((_DWORD *)a2 + 16) = 2;
      v6 = *(__int64 ***)(v18 + 8);
      if ( *v6 == (__int64 *)v18 )
      {
        *a2 = v18;
        a2[1] = (__int64)v6;
        *v6 = a2;
        *(_QWORD *)(v18 + 8) = a2;
        return (char)v6;
      }
      goto LABEL_23;
    }
    *((_DWORD *)a2 + 16) = 0;
  }
  else if ( *((_DWORD *)a2 + 16) == 3 )
  {
    if ( !a5 )
      return (char)v6;
    v11 = *a2;
    v12 = (__int64 **)a2[1];
    v8 = -1073676288;
    if ( a4 != -1 )
      v8 = a4;
    if ( *(__int64 **)(v11 + 8) != a2 || *v12 != a2 )
      goto LABEL_23;
    *v12 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v12;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  Isoch_Transfer_PrepareForCompletion(a1, a2, a3, v8);
  if ( !a6 )
  {
    v20 = KfRaiseIrql(2u);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
      WdfDriverGlobals,
      a2[3],
      *((unsigned int *)a2 + 17));
    KeLowerIrql(v20);
    goto LABEL_22;
  }
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v19 = *(__int64 ***)(a1 + 424);
  if ( *v19 != (__int64 *)(a1 + 416) )
LABEL_23:
    __fastfail(3u);
  a2[1] = (__int64)v19;
  *a2 = a1 + 416;
  *v19 = a2;
  *(_QWORD *)(a1 + 424) = a2;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  TR_QueueDpcForTransferCompletion(a1);
LABEL_22:
  LOBYTE(v6) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_BYTE *)(a1 + 104) = (_BYTE)v6;
  return (char)v6;
}
