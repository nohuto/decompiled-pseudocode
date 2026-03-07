char __fastcall ACPIFanCompletePendingIrps(__int64 a1, char a2)
{
  KSPIN_LOCK *v3; // rbp
  char v4; // si
  KIRQL v6; // r14
  _QWORD *v7; // r9
  _QWORD *v8; // r8
  _QWORD *v9; // rdx
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // rcx
  bool v13; // al
  __int64 v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // rcx
  IRP *v19; // rsi
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  const char *v22; // r8
  char v23; // dl
  const char *v24; // rcx
  __int64 v25; // rax
  _QWORD *v27; // [rsp+50h] [rbp-18h] BYREF
  _QWORD **v28; // [rsp+58h] [rbp-10h]

  v28 = &v27;
  v3 = (KSPIN_LOCK *)(a1 + 184);
  v4 = 0;
  v27 = &v27;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v7 = *(_QWORD **)(a1 + 216);
  while ( 1 )
  {
    v8 = v7;
    v9 = v7;
    if ( v7 == (_QWORD *)(a1 + 216) )
      break;
    v10 = v7[2];
    v7 = (_QWORD *)*v7;
    if ( (*(_DWORD *)(v10 + 24) != 2703936 || a2 || *(_DWORD *)*(v9 - 18) != *(_DWORD *)(a1 + 308))
      && _InterlockedExchange64(v9 - 8, 0LL) )
    {
      if ( *(_DWORD *)(v10 + 24) == 2703936 )
      {
        v12 = *(v9 - 18);
        *(_DWORD *)v12 = *(_DWORD *)(a1 + 308);
        v13 = *(_DWORD *)(a1 + 384) == 1 || *(_BYTE *)(a1 + 300);
        *(_BYTE *)(v12 + 4) = v13;
        *(_DWORD *)(v12 + 8) = *(_DWORD *)(a1 + 304);
        *(v9 - 14) = 12LL;
LABEL_15:
        *((_DWORD *)v9 - 30) = 0;
      }
      else if ( *(_DWORD *)(v10 + 24) == 2703940 )
      {
        v11 = *(v9 - 18);
        *(_DWORD *)v11 = *(_DWORD *)(a1 + 324);
        *(_OWORD *)(v11 + 4) = *(_OWORD *)(a1 + 328);
        *(v9 - 14) = 20LL;
        goto LABEL_15;
      }
      v14 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8
        || (v15 = (_QWORD *)v8[1], (_QWORD *)*v15 != v8)
        || (*v15 = v14, *(_QWORD *)(v14 + 8) = v15, v16 = v28, *v28 != &v27) )
      {
LABEL_32:
        __fastfail(3u);
      }
      v8[1] = v28;
      *v8 = &v27;
      *v16 = v8;
      v28 = (_QWORD **)v8;
      break;
    }
  }
  KeReleaseSpinLock(v3, v6);
  v17 = v27;
  while ( v17 != &v27 )
  {
    v18 = (_QWORD *)*v17;
    v19 = (IRP *)(v17 - 21);
    v20 = v17;
    v17 = v18;
    if ( (_QWORD *)v18[1] != v20 )
      goto LABEL_32;
    v21 = (_QWORD *)v20[1];
    if ( (_QWORD *)*v21 != v20 )
      goto LABEL_32;
    *v21 = v18;
    v22 = (const char *)&unk_1C00622D0;
    v23 = 0;
    v18[1] = v21;
    v24 = (const char *)&unk_1C00622D0;
    if ( a1 )
    {
      v25 = *(_QWORD *)(a1 + 8);
      v23 = a1;
      if ( (v25 & 0x200000000000LL) != 0 )
      {
        v22 = *(const char **)(a1 + 608);
        if ( (v25 & 0x400000000000LL) != 0 )
          v24 = *(const char **)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x10u,
        0x18u,
        (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
        (char)v19,
        v19->IoStatus.Status,
        v23,
        v22,
        v24);
    IofCompleteRequest(v19, 0);
    v4 = 1;
  }
  return v4;
}
