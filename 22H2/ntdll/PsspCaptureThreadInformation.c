/*
 * XREFs of PsspCaptureThreadInformation @ 0x18011649C
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180113B70 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x180052CB0 (RtlGetExtendedContextLength.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009D7E0 (ZwAllocateVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009D9E0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009DA20 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009DE20 (NtCreateSection.c)
 *     ZwGetNextThread @ 0x18009F3F0 (ZwGetNextThread.c)
 *     PsspDumpThread @ 0x1801167E8 (PsspDumpThread.c)
 *     PsspFreeLinkedHandleList @ 0x180116A1C (PsspFreeLinkedHandleList.c)
 */

__int64 __fastcall PsspCaptureThreadInformation(__int64 a1, void *a2, unsigned int a3, ULONG a4)
{
  unsigned int v4; // ebx
  PVOID *v6; // r15
  _WORD *v7; // rdi
  ACCESS_MASK v8; // r12d
  unsigned int v9; // r14d
  NTSTATUS NextThread; // eax
  int v11; // ecx
  HANDLE v12; // rdx
  unsigned __int16 v13; // ax
  NTSTATUS v14; // esi
  int v15; // edi
  NTSTATUS ExtendedContextLength; // eax
  unsigned __int64 v17; // rcx
  PVOID v18; // rdx
  int v19; // r12d
  PVOID *v20; // r14
  unsigned int i; // r12d
  int v22; // eax
  int Flags; // [rsp+28h] [rbp-69h]
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-39h] BYREF
  HANDLE ThreadHandle; // [rsp+60h] [rbp-31h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-29h] BYREF
  HANDLE NewThreadHandle; // [rsp+70h] [rbp-21h] BYREF
  PVOID v29; // [rsp+78h] [rbp-19h] BYREF
  HANDLE SectionHandle; // [rsp+80h] [rbp-11h] BYREF
  int v31; // [rsp+88h] [rbp-9h]
  int v32[2]; // [rsp+90h] [rbp-1h] BYREF
  int v33; // [rsp+98h] [rbp+7h]
  __int64 v34; // [rsp+9Ch] [rbp+Bh]
  LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp+17h] BYREF

  v4 = 0;
  v31 = a3 & 0x100;
  v6 = 0LL;
  v7 = 0LL;
  v8 = (a3 >> 7) & 8 | (v31 != 0 ? 72 : 64);
  v9 = 0;
  NextThread = ZwGetNextThread(a2, 0LL, v8, 0, 0, &NewThreadHandle);
  if ( NextThread != -2147483622 )
  {
    do
    {
      v11 = (int)NewThreadHandle;
      ThreadHandle = NewThreadHandle;
      v12 = NewThreadHandle;
      if ( NextThread < 0 )
      {
        v14 = NextThread;
        goto LABEL_33;
      }
      if ( !v7 || (v13 = v7[5], v13 >= v7[4]) )
      {
        RegionSize = 1LL;
        BaseAddress = 0LL;
        v14 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
        if ( v14 < 0 )
          goto LABEL_33;
        if ( v6 )
        {
          *(_QWORD *)v7 = BaseAddress;
          v7 = BaseAddress;
        }
        else
        {
          v7 = BaseAddress;
          v6 = (PVOID *)BaseAddress;
        }
        v12 = ThreadHandle;
        v7[4] = (RegionSize - 16) >> 2;
        v13 = 0;
        v7[5] = 0;
        v11 = (int)NewThreadHandle;
      }
      ++v9;
      *(_DWORD *)&v7[2 * v13 + 6] = v11;
      ++v7[5];
      NextThread = ZwGetNextThread(a2, v12, v8, 0, 0, &NewThreadHandle);
    }
    while ( NextThread != -2147483622 );
    if ( !v9 )
      return 0LL;
    v15 = 0;
    LODWORD(ThreadHandle) = 0;
    if ( v31 )
    {
      if ( (a3 & 0x200) == 0
        || (ExtendedContextLength = RtlGetExtendedContextLength(a4, (PULONG)&ThreadHandle),
            v15 = (int)ThreadHandle,
            ExtendedContextLength < 0) )
      {
        v15 = 1232;
      }
    }
    *(_DWORD *)(a1 + 1024) = v15;
    v17 = v9 * (unsigned __int64)(((v15 + 15) & 0xFFFFFFF0) + 128);
    if ( v17 > 0xFFFFFFFF )
    {
      v14 = -1073741675;
      goto LABEL_33;
    }
    MaximumSize.QuadPart = (unsigned int)v17;
    v14 = NtCreateSection(
            &SectionHandle,
            0xF0007u,
            (POBJECT_ATTRIBUTES)&stru_18013FF10,
            &MaximumSize,
            4u,
            0x8000000u,
            0LL);
    if ( v14 < 0 )
    {
LABEL_33:
      PsspFreeLinkedHandleList(v6);
      return (unsigned int)v14;
    }
    v29 = 0LL;
    RegionSize = 0LL;
    v14 = ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &v29,
            0LL,
            0LL,
            0LL,
            &RegionSize,
            ViewShare,
            0,
            4u);
    if ( v14 < 0 )
    {
LABEL_19:
      NtClose(SectionHandle);
      goto LABEL_33;
    }
    v18 = v29;
    v19 = 0;
    v20 = v6;
    *(_QWORD *)v32 = v29;
    v33 = RegionSize;
    v34 = 0LL;
    if ( v6 )
    {
      do
      {
        for ( i = 0; i < *((unsigned __int16 *)v20 + 5); ++i )
        {
          NewThreadHandle = (HANDLE)*((unsigned int *)v20 + i + 3);
          v22 = PsspDumpThread((int)v32, a3, a4, v15, Flags, NewThreadHandle);
          v14 = v22;
          if ( v22 == -1073741789 )
            break;
          if ( v22 < 0 )
          {
            NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v29);
            goto LABEL_19;
          }
        }
        if ( v14 < 0 )
          break;
        v20 = (PVOID *)*v20;
      }
      while ( v20 );
      v18 = v29;
      v19 = HIDWORD(v34);
      v4 = v34;
    }
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v18);
    PsspFreeLinkedHandleList(v6);
    *(_QWORD *)(a1 + 1000) = v4;
    *(_QWORD *)(a1 + 1008) = SectionHandle;
    *(_DWORD *)(a1 + 992) = v19;
    *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
  }
  return 0LL;
}
