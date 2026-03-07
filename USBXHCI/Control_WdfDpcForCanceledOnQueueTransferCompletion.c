void __fastcall Control_WdfDpcForCanceledOnQueueTransferCompletion(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  KIRQL v3; // al
  bool v4; // zf
  KIRQL v5; // dl
  _QWORD **v6; // rdi
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 912))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C0063388);
  v9[1] = v9;
  v9[0] = v9;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  v4 = *(_BYTE *)(v2 + 376) == 0;
  *(_BYTE *)(v2 + 104) = v3;
  if ( v4 )
  {
    *(_BYTE *)(v2 + 376) = 1;
    v6 = (_QWORD **)(v2 + 360);
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 == v6 )
        break;
      if ( (_QWORD **)v7[1] != v6 || (v8 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
        __fastfail(3u);
      *v6 = v8;
      v8[1] = v6;
      v7[1] = v7;
      *v7 = v7;
      Control_Transfer_Complete(v2, (__int64)v7);
    }
    v5 = *(_BYTE *)(v2 + 104);
    *(_BYTE *)(v2 + 376) = 0;
  }
  else
  {
    v5 = v3;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v5);
}
