__int64 __fastcall PfFileInfoNotify(_DWORD *a1)
{
  int v2; // eax
  int *v3; // rax
  int *v4; // rsi
  int v5; // eax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  int v8; // ebp
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // edx
  const void *v15; // r12
  int v16; // ebx
  unsigned int v17; // r15d
  __int64 v18; // rcx
  int v19; // eax
  int *v20; // rcx
  int v21; // edx
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int v25; // r15d
  int v26; // ecx
  struct _KTHREAD *v27; // rax
  struct _KTHREAD *v28; // rax
  int v29; // ecx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v31; // rax
  __int64 i; // rdi
  __int64 *v33; // rcx
  __int64 v34; // [rsp+30h] [rbp-58h] BYREF
  __int64 v35; // [rsp+38h] [rbp-50h]
  unsigned __int64 v36; // [rsp+40h] [rbp-48h]

  if ( *a1 != 15 )
  {
    v8 = -1073741811;
    v4 = a1 + 1;
    goto LABEL_28;
  }
  v2 = a1[2];
  if ( (v2 & 8) != 0 )
  {
    v4 = a1 + 1;
    v10 = a1[1];
    if ( v10 == 7 )
    {
      a1[4] = _InterlockedIncrement(&dword_140D0BE90);
      return 0;
    }
    v26 = v10 - 10;
    if ( v26 )
    {
      v29 = v26 - 1;
      if ( v29 )
      {
        if ( v29 != 1 )
        {
LABEL_59:
          v8 = -1073741637;
          goto LABEL_28;
        }
        if ( (dword_140C6A390 & 2) != 0 )
        {
          v8 = -1073741431;
          goto LABEL_28;
        }
        return 0;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C64D58, 0LL);
      if ( qword_140C64D48 )
      {
        v31 = KeGetCurrentThread();
        --v31->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C64D60, 0LL);
        dword_140C64D78 |= 1u;
        for ( i = qword_140C64D68; (__int64 *)i != &qword_140C64D68; i = *(_QWORD *)i )
        {
          *(_DWORD *)(i + 68) |= 4u;
          KeSetEvent((PRKEVENT)(i + 88), 0, 0);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C64D60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C64D60);
        KeAbPostRelease((ULONG_PTR)&qword_140C64D60);
        KeLeaveCriticalRegion();
        ExWaitForRundownProtectionRelease(&RunRef);
        ExRundownCompleted(&RunRef);
        qword_140C64D48 = 0LL;
        v8 = 0;
      }
      else
      {
        v8 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C64D58, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      {
LABEL_52:
        KeAbPostRelease((ULONG_PTR)&qword_140C64D58);
        KeLeaveCriticalRegion();
LABEL_12:
        if ( v8 >= 0 )
          return (unsigned int)v8;
        goto LABEL_28;
      }
    }
    else
    {
      v27 = KeGetCurrentThread();
      --v27->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C64D58, 0LL);
      if ( qword_140C64D48 )
      {
        v8 = -1073741791;
      }
      else
      {
        v28 = KeGetCurrentThread();
        --v28->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C64D60, 0LL);
        dword_140C64D78 &= ~1u;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C64D60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C64D60);
        KeAbPostRelease((ULONG_PTR)&qword_140C64D60);
        KeLeaveCriticalRegion();
        (*(void (__fastcall **)(__int64 (__fastcall *)()))(*((_QWORD *)a1 + 2) + 32LL))(PfpPrefetchSharedConflictNotifyStart);
        v8 = 0;
        qword_140C64D48 = *((_QWORD *)a1 + 2);
        _InterlockedExchange64((volatile __int64 *)&RunRef, 0LL);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C64D58, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
        goto LABEL_52;
    }
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C64D58);
    goto LABEL_52;
  }
  if ( (v2 & 4) != 0 )
  {
    v19 = a1[1];
    if ( v19 == 2 )
    {
      PfSnLogStreamCreate(*((_QWORD *)a1 + 2));
    }
    else if ( v19 )
    {
      if ( v19 == 3 )
        PfSnNameRemoveAll(*((_QWORD *)a1 + 2));
    }
    else
    {
      PfSnLogVolumeCreate(*((_QWORD *)a1 + 2));
    }
  }
  if ( (a1[2] & 1) == 0 )
    return 0;
  if ( dword_140C64FE0 >= (unsigned int)dword_140C64FE4 )
  {
    v11 = a1[1];
    v4 = a1 + 1;
    v3 = a1 + 1;
    if ( v11 != 4 && v11 != 2 && v11 != 3 )
    {
      v8 = -1073741697;
      goto LABEL_28;
    }
  }
  else
  {
    v3 = a1 + 1;
  }
  v4 = v3;
  v5 = *v3;
  if ( v5 == 4 )
  {
    v6 = *((_QWORD *)a1 + 2);
    v7 = ((*(_DWORD *)(v6 + 8) & 0xFFF) + (unsigned __int64)*(unsigned int *)(v6 + 16) + 4095) >> 12;
    if ( PfSnNumActiveTraces )
      PfSnLogFileDataAccess(*(_QWORD *)v6, *(_QWORD *)(v6 + 24), *(_QWORD *)(v6 + 32), *(_QWORD *)(v6 + 8), v7);
    if ( dword_140C64FE0 < (unsigned int)dword_140C64FE4 )
    {
      v8 = PfLogFileDataAccess(
             *(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL),
             *(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL),
             *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL),
             v7,
             *(_DWORD *)(*((_QWORD *)a1 + 2) + 20LL));
      goto LABEL_12;
    }
    v8 = -1073741697;
LABEL_28:
    if ( *v4 <= 3 )
      ++dword_140C650E4;
    return (unsigned int)v8;
  }
  switch ( v5 )
  {
    case 0:
      v25 = 2 * *(unsigned __int16 *)(*((_QWORD *)a1 + 2) + 30LL);
      v8 = PfFbLogEntryReserve(&stru_140C64EA0);
      if ( v8 < 0 )
        goto LABEL_12;
      MEMORY[0] = (8 * ((v25 + 65) & 0xFFFFFFF8)) | MEMORY[0] & 0x80000002 | 2;
      MEMORY[4] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 52LL);
      MEMORY[8] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 56LL);
      MEMORY[0x18] = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL);
      MEMORY[0x24] ^= (MEMORY[0x24] ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL)) & 0xF;
      MEMORY[0x24] ^= (*(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL) ^ MEMORY[0x24]) & 0xF0;
      MEMORY[0x10] = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
      MEMORY[0x20] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 24LL);
      MEMORY[0x28] = 2 * *(_WORD *)(*((_QWORD *)a1 + 2) + 30LL);
      MEMORY[0x2A] = MEMORY[0x28];
      memmove((void *)0x38, *(const void **)(*((_QWORD *)a1 + 2) + 40LL), v25);
      v18 = 56LL;
      *(_WORD *)(2LL * *(unsigned __int16 *)(*((_QWORD *)a1 + 2) + 30LL) + 0x38) = 0;
      goto LABEL_26;
    case 1:
      PfLogDeleteHelper(2LL, *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL), *(unsigned int *)(*((_QWORD *)a1 + 2) + 56LL));
      return 0;
    case 2:
      v12 = *((_QWORD *)a1 + 2);
      if ( HIWORD(*(_DWORD *)(v12 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v12 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_140C64CA8, v12, 1LL);
      if ( dword_140C64FE0 >= (unsigned int)dword_140C64FE4 )
      {
        v8 = -1073741697;
        goto LABEL_28;
      }
      v13 = *((_QWORD *)a1 + 2);
      v14 = *(_DWORD *)(v13 + 32);
      v15 = (const void *)(*(_QWORD *)(v13 + 24) + 2LL * (unsigned __int16)v14);
      v16 = HIWORD(v14) - (unsigned __int16)v14;
      v17 = 2 * v16;
      v8 = PfFbLogEntryReserve(&stru_140C64EA0);
      if ( v8 < 0 )
        goto LABEL_12;
      MEMORY[0] = MEMORY[0] & 0x80000000 | (8 * ((v17 + 53) & 0xFFFFFF8));
      MEMORY[4] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 40LL);
      MEMORY[8] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 44LL);
      MEMORY[0x18] = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL);
      MEMORY[0x20] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL);
      MEMORY[0x10] = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
      MEMORY[0x28] ^= (MEMORY[0x28] ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL)) & 1;
      MEMORY[0x28] ^= (MEMORY[0x28] ^ (unsigned __int8)(*(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL) >> 3)) & 2;
      MEMORY[0x28] ^= (MEMORY[0x28] ^ (unsigned __int8)(2 * *(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL))) & 4;
      MEMORY[0x2A] = v16;
      memmove((void *)0x2C, v15, v17);
      v18 = 44LL;
      *(_WORD *)(2LL * MEMORY[0x2A] + 0x2C) = 0;
LABEL_26:
      wcsupr((wchar_t *)v18);
      PfFbLogEntryComplete(0LL);
      return 0;
    case 3:
      v24 = *((_QWORD *)a1 + 2);
      if ( HIWORD(*(_DWORD *)(v24 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v24 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_140C64CA8, v24, 0LL);
      if ( dword_140C64FE0 < (unsigned int)dword_140C64FE4 )
      {
        PfLogDeleteHelper(0LL, *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL), *(unsigned int *)(*((_QWORD *)a1 + 2) + 44LL));
        return 0;
      }
      v8 = -1073741697;
      goto LABEL_28;
    case 8:
      v20 = (int *)*((_QWORD *)a1 + 2);
      HIDWORD(v34) = 0;
      v21 = *v20;
      LODWORD(v34) = v20[1];
      v35 = *((_QWORD *)v20 + 1);
      v36 = (*((_QWORD *)v20 + 2) + 4095LL) & 0xFFFFFFFFFFFFF000uLL | (2LL * (v21 & 3));
      v22 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v23 = 24LL;
      goto LABEL_34;
    case 13:
      v33 = (__int64 *)*((_QWORD *)a1 + 2);
      if ( !v33[1] )
      {
        v8 = -1073741747;
        goto LABEL_28;
      }
      v35 = v33[1];
      v36 = (unsigned int)dword_140D0BE90;
      v34 = *v33;
      v22 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v23 = 31LL;
LABEL_34:
      PfLogEvent(v23, dword_140C64C2C + (unsigned int)(v22 >> 10), &v34);
      v8 = 0;
      break;
    default:
      goto LABEL_59;
  }
  return (unsigned int)v8;
}
