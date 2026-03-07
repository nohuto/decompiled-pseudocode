__int64 __fastcall xxxClientExtTextOutW(Gre::Base *a1, int a2, int a3, int a4, _OWORD *a5, PCWSTR SourceString, int a7)
{
  __int64 CompatiblePublicDC; // r14
  __int64 MaximumLength; // r8
  __int64 v13; // rcx
  unsigned __int8 *v14; // rdi
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // r12d
  __int64 *v18; // rcx
  __int64 v19; // rbx
  _BYTE v20[4]; // [rsp+60h] [rbp-308h] BYREF
  int v21; // [rsp+64h] [rbp-304h] BYREF
  __int64 v22; // [rsp+68h] [rbp-300h]
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-2F8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-2F0h] BYREF
  __int64 v25; // [rsp+88h] [rbp-2E0h]
  _QWORD v26[3]; // [rsp+90h] [rbp-2D8h] BYREF
  __int128 v27; // [rsp+A8h] [rbp-2C0h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-2B0h]
  unsigned __int8 v29[112]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v30[512]; // [rsp+140h] [rbp-228h] BYREF

  LODWORD(v25) = a2;
  RegionSize = (ULONG_PTR)a1;
  memset_0(v29, 0, 0x68uLL);
  v26[0] = 0LL;
  v21 = 0;
  v22 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  CompatiblePublicDC = CreateCompatiblePublicDC((HDC)a1);
  v26[2] = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= 2 * (unsigned __int64)(unsigned int)(a7 + 1) )
    MaximumLength = 2LL * (unsigned int)(a7 + 1);
  v14 = AllocCallbackMessage(104, 1u, MaximumLength, v30, 1, 0x200uLL);
  v26[1] = v14;
  if ( !v14 )
  {
    if ( (Gre::Base *)CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v22);
    }
    return 0LL;
  }
  PtiCurrentShared(v13);
  v27 = 0LL;
  v28 = 0LL;
  if ( v14 != v29 && v14 != v30 )
    PushW32ThreadLock((__int64)v14, &v27, (__int64)Win32FreePool);
  *((_QWORD *)v14 + 7) = CompatiblePublicDC;
  *((_DWORD *)v14 + 16) = v25;
  *((_DWORD *)v14 + 17) = a3;
  *((_DWORD *)v14 + 18) = a4;
  v15 = (int)a5;
  if ( a5 )
  {
    *(_OWORD *)(v14 + 76) = *a5;
    v15 = 1;
  }
  *((_DWORD *)v14 + 24) = v15;
  *((_DWORD *)v14 + 23) = a7;
  *((_WORD *)v14 + 20) = DestinationString.Length;
  *((_WORD *)v14 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v14,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v14 + 6) < 0 )
    goto LABEL_23;
  v16 = GreSaveDCInternal(a1, 1);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v20);
  EtwTraceBeginCallback(80LL);
  *((_QWORD *)v14 + 2) = 0LL;
  v17 = KeUserModeCallback(80LL, v14, *(unsigned int *)v14, v26, &v21);
  EtwTraceEndCallback(80LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v20);
  GreRestoreDC(a1, v16);
  if ( (Gre::Base *)CompatiblePublicDC != a1 )
  {
    if ( v17 < 0 )
      goto LABEL_23;
    NtGdiBitBltInternal(
      (HDC)a1,
      0,
      0,
      *(_DWORD *)(gpDispInfo + 88LL),
      *(_DWORD *)(gpDispInfo + 92LL),
      CompatiblePublicDC,
      0,
      0,
      13369376,
      0,
      0);
  }
  if ( v17 >= 0 && v21 == 24 )
  {
    v18 = (__int64 *)v26[0];
    if ( (unsigned __int64)(v26[0] + 8LL) < v26[0] || v26[0] + 8LL > MmUserProbeAddress )
      v18 = (__int64 *)MmUserProbeAddress;
    v19 = *v18;
    v25 = *v18;
    goto LABEL_24;
  }
LABEL_23:
  LODWORD(v19) = 0;
LABEL_24:
  if ( (Gre::Base *)CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v22);
  }
  if ( v14 != v29 && v14 != v30 )
  {
    if ( *((_QWORD *)v14 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v14 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v27);
  }
  return (unsigned int)v19;
}
