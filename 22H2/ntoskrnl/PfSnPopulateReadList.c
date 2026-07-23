/*
 * XREFs of PfSnPopulateReadList @ 0x140632CA0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     PsSetCurrentThreadPrefetching @ 0x140633190 (PsSetCurrentThreadPrefetching.c)
 *     PfSnGetSectionObject @ 0x1406331D8 (PfSnGetSectionObject.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x1406335BC (PfSnFindPrefetchVolumeInfoInList.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x140633754 (PfSnCleanupPrefetchSectionInfo.c)
 *     NtClose @ 0x14063E0A0 (NtClose.c)
 *     NtCreateEvent @ 0x140651360 (NtCreateEvent.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PfSnPopulateReadList(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  unsigned __int32 v6; // r13d
  _QWORD *PoolWithTag; // r15
  __int64 v8; // r14
  _KPROCESS *v9; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v11; // eax
  __int64 v12; // r8
  unsigned int *v13; // rax
  int v14; // esi
  int v15; // ebx
  char *v16; // rcx
  char *v17; // rdx
  unsigned int v18; // ebx
  char *v19; // rdi
  __int64 v20; // rax
  unsigned int v21; // edx
  int v22; // r12d
  int v23; // r12d
  bool v24; // zf
  wchar_t *v25; // rsi
  __int64 PrefetchVolumeInfoInList; // r14
  int v27; // edx
  bool v28; // r11
  unsigned int v29; // r9d
  BOOL v30; // r10d
  __int64 v31; // rcx
  int v32; // eax
  int v33; // edi
  char *v34; // rax
  unsigned int v35; // edx
  __int64 v36; // rcx
  int v37; // ecx
  int v38; // eax
  char v39; // [rsp+58h] [rbp-B0h] BYREF
  bool v40; // [rsp+59h] [rbp-AFh]
  __int64 v41; // [rsp+60h] [rbp-A8h]
  __int64 v42; // [rsp+68h] [rbp-A0h]
  __int64 v43; // [rsp+70h] [rbp-98h]
  __int64 v44; // [rsp+78h] [rbp-90h]
  __int64 v45; // [rsp+80h] [rbp-88h] BYREF
  __int64 v46; // [rsp+88h] [rbp-80h]
  HANDLE EventHandle; // [rsp+90h] [rbp-78h] BYREF
  __int64 v48; // [rsp+98h] [rbp-70h]
  char *v49; // [rsp+A0h] [rbp-68h]
  __int64 v50; // [rsp+A8h] [rbp-60h]
  char *v51; // [rsp+B0h] [rbp-58h]
  __int64 v52; // [rsp+B8h] [rbp-50h]
  char *v53; // [rsp+C0h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v56[3]; // [rsp+108h] [rbp+0h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  v5 = a1;
  v6 = 0;
  memset(v56, 0, sizeof(v56));
  v52 = a1;
  PoolWithTag = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  v8 = *(_QWORD *)(v4 + 8);
  v9 = *(_KPROCESS **)(v4 + 16);
  v46 = v8;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v43 = v4;
  v39 = 0;
  EventHandle = 0LL;
  KiStackAttachProcess(v9, 0LL, (__int64)v56, a4);
  PsSetCurrentThreadPrefetching(1u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v11 >= 0 )
  {
    v13 = *(unsigned int **)v8;
    v14 = *(_DWORD *)(v5 + 40);
    v45 = 0LL;
    v15 = *(_DWORD *)(v8 + 100) & 7;
    v16 = (char *)v13 + v13[21];
    v17 = (char *)v13 + v13[23];
    v12 = (__int64)v13 + v13[25];
    v51 = v16;
    v50 = *(_QWORD *)(v8 + 64);
    v48 = *(_QWORD *)(v8 + 72);
    v18 = *(_DWORD *)(v8 + 96) & 7 | (8 * (v15 | 8));
    v49 = v17;
    v53 = (char *)v12;
    LODWORD(v41) = v14;
    v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 28), 1u);
    if ( v6 >= *(_DWORD *)(v4 + 32) )
      goto LABEL_3;
    while ( 1 )
    {
      v19 = &v16[32 * v6];
      v20 = v6;
      v42 = v6;
      v21 = *((_DWORD *)v19 + 5);
      if ( (v21 & 1) == 0 )
        break;
LABEL_34:
      if ( v39 )
      {
        LOBYTE(v12) = 1;
        PfSnCleanupPrefetchSectionInfo(*(_QWORD *)(v8 + 56) + 56 * v20, v8, v12);
        v39 = 0;
      }
      if ( PoolWithTag )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
      v4 = v43;
LABEL_39:
      v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 28), 1u);
      if ( v6 >= *(_DWORD *)(v4 + 32) )
        goto LABEL_49;
      v16 = v51;
      v5 = v52;
      v12 = (__int64)v53;
    }
    v22 = *(_DWORD *)(v5 + 44);
    v40 = 0;
    v23 = v22 & 1;
    if ( v23 )
    {
      v24 = ((unsigned __int8)v14 & BYTE1(v21) & 0x7F) == 0;
    }
    else
    {
      LODWORD(v44) = 0;
      v24 = !_BitScanForward((unsigned int *)&v37, (v21 >> 8) & 0x7F);
      if ( v24 )
        v37 = 7;
      v38 = v14 & (1 << v37);
      LODWORD(v44) = v37;
      v40 = v38 != 0;
      if ( ((unsigned __int8)v14 & (unsigned __int8)(v21 >> 1) & 0x7F) != 0 )
        goto LABEL_10;
      v40 = v38 != 0;
      v24 = v38 == 0;
    }
    if ( v24 )
    {
LABEL_33:
      v20 = v42;
      goto LABEL_34;
    }
LABEL_10:
    v25 = (wchar_t *)(v12 + *((unsigned int *)v19 + 3));
    PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList(v25);
    if ( PrefetchVolumeInfoInList )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * *((_DWORD *)v19 + 2) + 24), 0x4C506343u);
      if ( !PoolWithTag )
      {
        v4 = v43;
        v11 = -1073741670;
        v8 = v46;
        goto LABEL_52;
      }
      *((_DWORD *)PoolWithTag + 3) = v23;
      *PoolWithTag = 0LL;
      *((_DWORD *)PoolWithTag + 2) = 0;
      RtlInitUnicodeString(&DestinationString, &v25[*(unsigned int *)(PrefetchVolumeInfoInList + 24) + 1]);
      v14 = v41;
      v27 = PrefetchVolumeInfoInList;
      v8 = v46;
      if ( (int)PfSnGetSectionObject(
                  v46,
                  v27,
                  (unsigned int)&DestinationString,
                  (_DWORD)v19,
                  v41,
                  v6,
                  v23,
                  (__int64)EventHandle,
                  (__int64)&v45,
                  (__int64)&v39) >= 0 )
      {
        v28 = v40;
        v29 = 0;
        v30 = 1;
        if ( v40 )
        {
          v29 = 1;
          PoolWithTag[(unsigned int)(*((_DWORD *)PoolWithTag + 2))++ + 2] = 0LL;
          v30 = *(_QWORD *)(*(_QWORD *)(v45 + 40) + 16LL) != 0LL;
        }
        v31 = *(int *)v19;
        v32 = *((_DWORD *)v19 + 1);
        v33 = 0;
        v12 = (int)v31 + v32;
        if ( v31 < v12 )
        {
          v34 = &v49[8 * v31 + 4];
          for ( v12 -= v31; v12; --v12 )
          {
            v35 = *(_DWORD *)v34;
            if ( (*(_DWORD *)v34 & 1) == 0 )
            {
              if ( (v35 & 8) != 0 && !v30 )
              {
LABEL_22:
                if ( *((_DWORD *)v34 - 1) || !v28 )
                {
                  PoolWithTag[(unsigned int)(*((_DWORD *)PoolWithTag + 2))++ + 2] = (unsigned __int64)*((unsigned int *)v34 - 1) << 9;
                  ++v29;
                }
                else
                {
                  v33 = 1;
                }
                goto LABEL_24;
              }
              if ( _bittest(&v14, (v35 >> 4) & 7) )
              {
                if ( v23 )
                {
                  if ( (v35 & 2) != 0 )
                    goto LABEL_22;
                }
                else if ( (v35 & 4) != 0 )
                {
                  goto LABEL_22;
                }
              }
            }
LABEL_24:
            v34 += 8;
          }
        }
        if ( *((_DWORD *)PoolWithTag + 2) != 1 || !v28 || !v30 || v33 )
        {
          v4 = v43;
          PoolWithTag[2] |= v18;
          *PoolWithTag = v45;
          v36 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 24), 1u);
          *(_QWORD *)(v50 + 8 * v36) = PoolWithTag;
          PoolWithTag = 0LL;
          _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 36), v29);
          if ( v39 )
          {
            *(_DWORD *)(v48 + 4 * v36) = v6;
            v39 = 0;
          }
          else
          {
            *(_DWORD *)(v48 + 4 * v36) = -1;
          }
          goto LABEL_39;
        }
      }
    }
    else
    {
      v14 = v41;
      v8 = v46;
    }
    goto LABEL_33;
  }
LABEL_52:
  *(_DWORD *)(v4 + 40) = v11;
LABEL_49:
  if ( v39 )
  {
    LOBYTE(v12) = 1;
    PfSnCleanupPrefetchSectionInfo(*(_QWORD *)(v8 + 56) + 56LL * v6, v8, v12);
  }
LABEL_3:
  if ( EventHandle )
    NtClose(EventHandle);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PsSetCurrentThreadPrefetching(0);
  KiUnstackDetachProcess((__int64)v56, 0);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)v4);
}
