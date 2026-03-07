__int64 __fastcall DpMapMemory(
        __int64 a1,
        union _LARGE_INTEGER a2,
        unsigned int a3,
        char a4,
        PLARGE_INTEGER a5,
        int a6,
        PVOID *BaseAddress)
{
  ULONG_PTR v7; // r12
  int v9; // ebx
  PVOID *v10; // r15
  __int64 v11; // r13
  int v12; // r9d
  __int64 v13; // rdi
  unsigned int v14; // ebx
  __int64 v15; // r8
  union _LARGE_INTEGER v16; // rbx
  __int64 v17; // rcx
  char v18; // r14
  __int64 Pool2; // rax
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 *v22; // rax
  __int64 v23; // rdx
  NTSTATUS v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  PVOID v28; // rcx
  int v29; // [rsp+58h] [rbp-51h]
  void *SectionHandle; // [rsp+60h] [rbp-49h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-41h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-21h] BYREF
  unsigned int v35; // [rsp+F8h] [rbp+4Fh]
  union _LARGE_INTEGER v36; // [rsp+100h] [rbp+57h] BYREF
  char v37; // [rsp+110h] [rbp+67h]

  v37 = a4;
  v36 = a2;
  v7 = a3;
  v9 = a1;
  if ( !a1
    || (v10 = BaseAddress) == 0LL
    || !a3
    || (v11 = *(_QWORD *)(a1 + 64)) == 0
    || *(_DWORD *)(v11 + 16) != 1953656900
    || (unsigned int)(*(_DWORD *)(v11 + 20) - 2) > 1 )
  {
    LODWORD(v13) = -1073741811;
    v27 = -1073741811LL;
    goto LABEL_49;
  }
  if ( KeGetCurrentIrql() )
    WdLogSingleEntry1(3LL, -1073741811LL);
  *v10 = 0LL;
  LOBYTE(v12) = a4;
  LODWORD(v13) = DpiVerifyResources(v9, (unsigned int)&v36, v7, v12, (char)a5, (__int64)&a6, (__int64)v10);
  if ( (int)v13 >= 0 && !*v10 )
  {
    v29 = a6;
    if ( v37 == 1 )
    {
      v16 = v36;
      v18 = 0;
      *v10 = (PVOID)v36.QuadPart;
LABEL_19:
      Pool2 = ExAllocatePool2(256LL, 80LL, 1953656900LL);
      v21 = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) = 1953656900;
        *(_DWORD *)(Pool2 + 20) = 8;
        *(_DWORD *)(Pool2 + 24) = 1;
        *(union _LARGE_INTEGER *)(Pool2 + 32) = v16;
        *(_DWORD *)(Pool2 + 40) = v7;
        *(_BYTE *)(Pool2 + 44) = v37;
        *(_BYTE *)(Pool2 + 45) = (_BYTE)a5;
        *(_QWORD *)(Pool2 + 48) = PsGetCurrentProcess(v20);
        *(_DWORD *)(v21 + 56) = v29;
        *(_QWORD *)(v21 + 64) = *v10;
        *(_BYTE *)(v21 + 72) = v18;
        KeWaitForSingleObject((PVOID)(v11 + 2520), Executive, 0, 0, 0LL);
        v22 = (__int64 *)(v11 + 2504);
        v23 = *(_QWORD *)(v11 + 2504);
        if ( *(_QWORD *)(v23 + 8) != v11 + 2504 )
          __fastfail(3u);
        *(_QWORD *)(v23 + 8) = v21;
        *(_QWORD *)v21 = v23;
        *(_QWORD *)(v21 + 8) = v22;
        *v22 = v21;
        KeReleaseMutex((PRKMUTEX)(v11 + 2520), 0);
        WdLogSingleEntry1(4LL, v21);
      }
      else
      {
        LODWORD(v13) = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        if ( v18 == 1 )
        {
          *(_DWORD *)(v11 + 2576) -= ((unsigned int)v7 + (unsigned __int64)(*(_DWORD *)v10 & 0xFFF) + 4095) >> 12;
          v28 = *v10;
          if ( (_BYTE)a5 == 1 )
            ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v28);
          else
            MmUnmapIoSpace(v28, (unsigned int)v7);
        }
      }
      return (unsigned int)v13;
    }
    v35 = 0;
    if ( (_BYTE)a5 != 1 )
    {
      v14 = 4;
      v35 = 4;
      if ( !a6 || byte_1C013B490 )
      {
        v14 = 516;
      }
      else
      {
        if ( a6 == 1 )
          goto LABEL_16;
        if ( a6 != 2 )
        {
          WdLogSingleEntry2(2LL, a6, v11);
          goto LABEL_16;
        }
        v14 = 1028;
      }
      v35 = v14;
LABEL_16:
      v15 = v14;
      v16 = v36;
      v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmMapIoSpaceEx)(
              (union _LARGE_INTEGER)v36.QuadPart,
              v7,
              v15);
LABEL_17:
      *v10 = (PVOID)v17;
      if ( !v17 )
      {
        LODWORD(v13) = -1073741811;
        WdLogSingleEntry2(2LL, (unsigned int)v7, v35);
        return (unsigned int)v13;
      }
      v18 = 1;
      *(_DWORD *)(v11 + 2576) += ((unsigned int)v7 + (unsigned __int64)(v17 & 0xFFF) + 4095) >> 12;
      goto LABEL_19;
    }
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    SectionHandle = 0LL;
    DestinationString = 0LL;
    ViewSize = v7;
    RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v25 = ZwOpenSection(&SectionHandle, 0xF001Fu, &ObjectAttributes);
    v13 = v25;
    if ( v25 < 0 )
      goto LABEL_33;
    v16 = v36;
    SectionOffset = v36;
    if ( byte_1C013B490 == 1 || !v29 )
    {
      v26 = 512;
    }
    else
    {
      if ( v29 != 2 )
      {
        v26 = 0;
LABEL_37:
        v13 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                v10,
                0LL,
                v7,
                &SectionOffset,
                &ViewSize,
                ViewUnmap,
                0,
                v26 | 4);
        ZwClose(SectionHandle);
        if ( (int)v13 >= 0 )
        {
          if ( v16.LowPart < SectionOffset.LowPart )
          {
            LODWORD(v13) = -1073741823;
            WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741823LL);
            return (unsigned int)v13;
          }
          LODWORD(v7) = SectionOffset.LowPart + ViewSize - v16.LowPart;
          v17 = (__int64)*v10 + v16.QuadPart - SectionOffset.QuadPart;
          goto LABEL_17;
        }
LABEL_33:
        v27 = v13;
LABEL_49:
        WdLogSingleEntry1(2LL, v27);
        return (unsigned int)v13;
      }
      v26 = 1024;
    }
    v35 = v26;
    goto LABEL_37;
  }
  return (unsigned int)v13;
}
