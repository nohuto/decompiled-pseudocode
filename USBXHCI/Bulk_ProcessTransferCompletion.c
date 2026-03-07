void __fastcall Bulk_ProcessTransferCompletion(__int64 a1)
{
  char v1; // bp
  __int64 v2; // rbx
  KIRQL v3; // al
  __int64 v4; // rdi
  KIRQL v5; // al
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // edx
  int v9; // edx
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 *v11; // [rsp+48h] [rbp-10h]

  v1 = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063388);
  v11 = &v10;
  v10 = (__int64)&v10;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  *(_BYTE *)(v2 + 104) = v3;
  if ( *(_BYTE *)(v2 + 328) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v3);
  }
  else
  {
    *(_BYTE *)(v2 + 328) = 1;
    v4 = v2 + 400;
    do
    {
      if ( *(_QWORD *)v4 != v4 )
      {
        *v11 = *(_QWORD *)v4;
        *(_QWORD *)(*(_QWORD *)v4 + 8LL) = v11;
        **(_QWORD **)(v2 + 408) = &v10;
        v11 = *(__int64 **)(v2 + 408);
        *(_QWORD *)(v2 + 408) = v2 + 400;
        *(_QWORD *)v4 = v4;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), *(_BYTE *)(v2 + 104));
      Bulk_CompleteTransfers(v2, &v10);
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
      *(_BYTE *)(v2 + 104) = v5;
      LOBYTE(v6) = v5;
    }
    while ( *(_QWORD *)v4 != v4 );
    v7 = *(unsigned int *)(v2 + 324);
    if ( (v7 & 0x40) != 0 && !(unsigned __int8)Bulk_DoesDriverOwnRequests(v2, v7, v6) )
    {
      v1 = 1;
      *(_DWORD *)(v2 + 324) = v8 & 0xFFFFFFBF;
    }
    *(_BYTE *)(v2 + 328) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v6);
    if ( v1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v9 = *(unsigned __int8 *)(*(_QWORD *)(v2 + 48) + 135LL);
          LOBYTE(v9) = 5;
          WPP_RECORDER_SF_DDD(
            *(_QWORD *)(*(_QWORD *)(v2 + 56) + 80LL),
            v9,
            14,
            16,
            (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
            *(_BYTE *)(*(_QWORD *)(v2 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(v2 + 56) + 144LL),
            *(_DWORD *)(v2 + 64));
        }
      }
      TR_TransfersReclaimed(v2);
    }
  }
}
