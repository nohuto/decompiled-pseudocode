__int64 __fastcall ACPIEcQueueEcIrp(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int16 v7; // r14
  char v8; // bl
  KSPIN_LOCK *v11; // rsi
  KIRQL v12; // bp
  unsigned int v13; // ebx
  __int64 Pool2; // rax
  __int64 *v16; // rcx
  __int64 v17; // rbx

  v7 = a4;
  v8 = a3;
  if ( a3 > 0xFF || (unsigned int)(a3 + a4) > 0x100 )
    return 3221225489LL;
  v11 = (KSPIN_LOCK *)(a1 + 88);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  if ( *(_BYTE *)(a1 + 121) > 1u )
  {
    v13 = -1073741810;
LABEL_7:
    KeReleaseSpinLock(v11, v12);
    return v13;
  }
  Pool2 = ExAllocatePool2(64LL, 48LL, 1164993345LL);
  if ( !Pool2 )
  {
    v13 = -1073741670;
    goto LABEL_7;
  }
  *(_BYTE *)(Pool2 + 16) = a2;
  *(_QWORD *)(Pool2 + 32) = a6;
  *(_QWORD *)(Pool2 + 40) = a7;
  *(_QWORD *)(Pool2 + 24) = a5;
  *(_BYTE *)(Pool2 + 17) = v8;
  *(_WORD *)(Pool2 + 18) = v7;
  v16 = *(__int64 **)(a1 + 472);
  if ( *v16 != a1 + 464 )
    __fastfail(3u);
  *(_QWORD *)(Pool2 + 8) = v16;
  *(_QWORD *)Pool2 = a1 + 464;
  *v16 = Pool2;
  *(_QWORD *)(a1 + 472) = Pool2;
  v17 = *(_QWORD *)(a1 + 480);
  ACPIEcLogAction(a1, 0x90u, v17 == 0);
  KeReleaseSpinLock(v11, v12);
  if ( !v17 )
    ACPIEcServiceDevice(a1);
  return 0LL;
}
