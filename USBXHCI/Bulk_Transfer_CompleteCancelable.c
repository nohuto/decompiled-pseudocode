void __fastcall Bulk_Transfer_CompleteCancelable(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v5; // ebx
  int v7; // edx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  KIRQL v10; // bl
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  int v14; // r8d
  __int64 *v15; // rcx

  v5 = a3;
  v7 = *(_DWORD *)(a2 + 64) - 1;
  if ( !v7 )
  {
    v8 = *(_QWORD *)a2;
    v9 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 && *v9 == a2 )
    {
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2048))(
             WdfDriverGlobals,
             *(_QWORD *)(a2 + 24)) >= 0 )
      {
        *(_DWORD *)(a2 + 64) = 0;
LABEL_6:
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        Bulk_Transfer_PrepareForCompletion(a1, a2, v5);
        v10 = KfRaiseIrql(2u);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2104))(
          WdfDriverGlobals,
          *(_QWORD *)(a2 + 24),
          *(unsigned int *)(a2 + 72));
        KeLowerIrql(v10);
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        return;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = *(_QWORD *)(a1 + 48);
        v14 = *(unsigned __int8 *)(v13 + 135);
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v13, v14, 42);
      }
      *(_DWORD *)(a2 + 64) = 2;
      v15 = *(__int64 **)(a1 + 392);
      if ( *v15 == a1 + 384 )
      {
        *(_QWORD *)a2 = a1 + 384;
        *(_QWORD *)(a2 + 8) = v15;
        *v15 = a2;
        *(_QWORD *)(a1 + 392) = a2;
        return;
      }
    }
LABEL_19:
    __fastfail(3u);
  }
  if ( v7 != 2 )
    goto LABEL_6;
  if ( a4 )
  {
    v11 = *(_QWORD *)a2;
    v12 = *(_QWORD **)(a2 + 8);
    v5 = -1073676288;
    if ( a3 != -1 )
      v5 = a3;
    if ( *(_QWORD *)(v11 + 8) == a2 && *v12 == a2 )
    {
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      goto LABEL_6;
    }
    goto LABEL_19;
  }
}
