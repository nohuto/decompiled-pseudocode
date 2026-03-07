__int64 __fastcall Isoch_WdfEvtIoCanceledOnQueue(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  _DWORD *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  _OWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063388);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   a2,
                   off_1C0063090);
  v11 = 0LL;
  memset(v10, 0, sizeof(v10));
  LOWORD(v10[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v10);
  v5 = (_DWORD *)*((_QWORD *)&v10[0] + 1);
  v6 = 0LL;
  *(_DWORD *)(*((_QWORD *)&v10[0] + 1) + 4LL) = -1073676288;
  v5[9] = 0;
  for ( v5[34] = 0; (unsigned int)v6 < v5[33]; v5[v7 + 37] = -1 )
  {
    v7 = 3 * v6;
    v6 = (unsigned int)(v6 + 1);
  }
  memset(v4, 0, 0x300uLL);
  v4[1] = v4;
  *v4 = v4;
  *((_DWORD *)v4 + 16) = 3;
  v4[3] = a2;
  *((_DWORD *)v4 + 17) = -1073741536;
  *(_BYTE *)(v3 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  v8 = *(_QWORD **)(v3 + 424);
  if ( *v8 != v3 + 416 )
    __fastfail(3u);
  *v4 = v3 + 416;
  v4[1] = v8;
  *v8 = v4;
  *(_QWORD *)(v3 + 424) = v4;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), *(_BYTE *)(v3 + 104));
  return TR_QueueDpcForTransferCompletion(v3);
}
