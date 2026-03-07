void __fastcall ACPIFanLoop(__int64 a1, int a2, int a3)
{
  KSPIN_LOCK *v3; // r14
  KIRQL v7; // al
  int v8; // ebp
  KIRQL v9; // si
  int v10; // ecx
  char v11; // bl
  int v12; // eax
  KIRQL v13; // al
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  bool v16; // zf
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r9
  _QWORD *v20; // r8

  v3 = (KSPIN_LOCK *)(a1 + 184);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v8 = ~a2 & (*(_DWORD *)(a1 + 192) | a3);
  v9 = v7;
  *(_DWORD *)(a1 + 192) = v8;
  if ( v8 < 0 )
    goto LABEL_25;
  *(_DWORD *)(a1 + 192) = v8 | 0x80000000;
  while ( 1 )
  {
    v10 = *(_DWORD *)(a1 + 192);
    v11 = 1;
    if ( (v10 & 0x40000000) != 0 )
      break;
    v12 = *(_DWORD *)(a1 + 192);
    if ( (v10 & 0x20000000) == 0 )
    {
      v12 = v10 | 0x10000000;
      *(_DWORD *)(a1 + 192) = v10 | 0x10000000;
      if ( (v10 & 0x10000000) == 0 )
      {
        v18 = *(_QWORD *)(a1 + 248);
        if ( v18 )
        {
          AMLIDereferenceHandleEx(v18);
          *(_QWORD *)(a1 + 248) = 0LL;
        }
        ACPISetDeviceWorker(a1, 512LL);
        KeReleaseSpinLock(v3, v9);
        v11 = 0;
        if ( (*(_DWORD *)(a1 + 192) & 4) != 0 )
        {
          v9 = KeAcquireSpinLockRaiseToDpc(&AcpiFanLock);
          v19 = *(_QWORD *)(a1 + 200);
          if ( *(_QWORD *)(v19 + 8) != a1 + 200 || (v20 = *(_QWORD **)(a1 + 208), *v20 != a1 + 200) )
LABEL_27:
            __fastfail(3u);
          *v20 = v19;
          *(_QWORD *)(v19 + 8) = v20;
          KeReleaseSpinLock(&AcpiFanLock, v9);
        }
        ACPIFanCompletePendingIrps(a1, 1);
        break;
      }
    }
    if ( (v12 & 4) != 0 )
    {
      if ( (v12 & 1) != 0 || (v12 |= 1u, v16 = *(_QWORD *)(a1 + 248) == 0LL, *(_DWORD *)(a1 + 192) = v12, v16) )
      {
        if ( (v12 & 2) == 0 )
        {
          ++*(_DWORD *)(a1 + 308);
          *(_DWORD *)(a1 + 192) = v12 | 2;
        }
        KeReleaseSpinLock(v3, v9);
        v11 = 0;
        if ( !ACPIFanCompletePendingIrps(a1, 0) )
          break;
      }
      else
      {
        *(_DWORD *)(a1 + 192) = v12 | 0x40000000;
        KeReleaseSpinLock(v3, v9);
        *(_OWORD *)(a1 + 256) = 0LL;
        *(_OWORD *)(a1 + 272) = 0LL;
        *(_QWORD *)(a1 + 288) = 0LL;
        v17 = AMLIAsyncEvalObject(*(_QWORD *)(a1 + 248), (int)a1 + 256, 0, 0, (__int64)ACPIFanFSTCallback, a1);
        if ( v17 != 259 )
          ACPIFanFSTCallback(*(_QWORD *)(a1 + 248), v17, a1 + 256, a1);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 192) = v12 | 4;
      KeReleaseSpinLock(v3, v9);
      v13 = KeAcquireSpinLockRaiseToDpc(&AcpiFanLock);
      v14 = (_QWORD *)qword_1C006F058;
      v15 = (_QWORD *)(a1 + 200);
      if ( *(__int64 **)qword_1C006F058 != &AcpiFanList )
        goto LABEL_27;
      *(_QWORD *)(a1 + 208) = qword_1C006F058;
      *v15 = &AcpiFanList;
      *v14 = v15;
      qword_1C006F058 = a1 + 200;
      KeReleaseSpinLock(&AcpiFanLock, v13);
    }
    v9 = KeAcquireSpinLockRaiseToDpc(v3);
  }
  *(_DWORD *)(a1 + 192) &= ~0x80000000;
  if ( v11 )
LABEL_25:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 184), v9);
}
