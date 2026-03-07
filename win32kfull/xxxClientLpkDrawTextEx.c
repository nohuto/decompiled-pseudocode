__int64 __fastcall xxxClientLpkDrawTextEx(
        Gre::Base *a1,
        int a2,
        int a3,
        const WCHAR *a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10)
{
  HDC CompatiblePublicDC; // r14
  __int64 MaximumLength; // r8
  __int64 v16; // rcx
  unsigned __int8 *v17; // rsi
  unsigned int v18; // ebx
  int v19; // r12d
  __int64 *v20; // rcx
  __int64 v21; // rbx
  _BYTE v22[4]; // [rsp+60h] [rbp-358h] BYREF
  int v23; // [rsp+64h] [rbp-354h] BYREF
  __int64 v24; // [rsp+68h] [rbp-350h]
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-348h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-340h] BYREF
  __int64 v27; // [rsp+88h] [rbp-330h]
  _QWORD v28[3]; // [rsp+90h] [rbp-328h] BYREF
  __int128 v29; // [rsp+A8h] [rbp-310h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-300h]
  unsigned __int8 v31[176]; // [rsp+D0h] [rbp-2E8h] BYREF
  unsigned __int8 v32[512]; // [rsp+180h] [rbp-238h] BYREF

  LODWORD(v27) = a2;
  RegionSize = (ULONG_PTR)a1;
  memset_0(v31, 0, 0xA8uLL);
  v28[0] = 0LL;
  v23 = 0;
  v24 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a4);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC((HDC)a1);
  v28[2] = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2LL * a5 + 2) )
    MaximumLength = 2LL * a5 + 2;
  v17 = AllocCallbackMessage(168, 1u, MaximumLength, v32, 1, 0x200uLL);
  v28[1] = v17;
  if ( !v17 )
  {
    if ( CompatiblePublicDC != (HDC)a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v24);
    }
    return 0LL;
  }
  PtiCurrentShared(v16);
  v29 = 0LL;
  v30 = 0LL;
  if ( v17 != v31 && v17 != v32 )
    PushW32ThreadLock((__int64)v17, &v29, (__int64)Win32FreePool);
  *((_QWORD *)v17 + 7) = CompatiblePublicDC;
  *((_DWORD *)v17 + 16) = v27;
  *((_DWORD *)v17 + 17) = a3;
  *((_DWORD *)v17 + 18) = a5;
  *((_DWORD *)v17 + 19) = a6;
  *((_DWORD *)v17 + 20) = a7;
  *(_OWORD *)(v17 + 88) = *(_OWORD *)a8;
  *(_OWORD *)(v17 + 104) = *(_OWORD *)(a8 + 16);
  *(_OWORD *)(v17 + 120) = *(_OWORD *)(a8 + 32);
  *(_OWORD *)(v17 + 136) = *(_OWORD *)(a8 + 48);
  *((_QWORD *)v17 + 19) = *(_QWORD *)(a8 + 64);
  *((_DWORD *)v17 + 40) = a9;
  *((_DWORD *)v17 + 41) = a10;
  *((_WORD *)v17 + 20) = DestinationString.Length;
  *((_WORD *)v17 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v17,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v17 + 6) < 0 )
    goto LABEL_21;
  v18 = GreSaveDCInternal(a1, 1);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v22);
  EtwTraceBeginCallback(79LL);
  *((_QWORD *)v17 + 2) = 0LL;
  v19 = KeUserModeCallback(79LL, v17, *(unsigned int *)v17, v28, &v23);
  EtwTraceEndCallback(79LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v22);
  GreRestoreDC(a1, v18);
  if ( CompatiblePublicDC != (HDC)a1 )
  {
    if ( v19 < 0 )
      goto LABEL_21;
    NtGdiBitBltInternal(
      (HDC)a1,
      0,
      0,
      *(_DWORD *)(gpDispInfo + 88LL),
      *(_DWORD *)(gpDispInfo + 92LL),
      (__int64)CompatiblePublicDC,
      0,
      0,
      13369376,
      0,
      0);
  }
  if ( v19 >= 0 && v23 == 24 )
  {
    v20 = (__int64 *)v28[0];
    if ( (unsigned __int64)(v28[0] + 8LL) < v28[0] || v28[0] + 8LL > MmUserProbeAddress )
      v20 = (__int64 *)MmUserProbeAddress;
    v21 = *v20;
    v27 = *v20;
    goto LABEL_22;
  }
LABEL_21:
  LODWORD(v21) = 0;
LABEL_22:
  if ( CompatiblePublicDC != (HDC)a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v24);
  }
  if ( v17 != v31 && v17 != v32 )
  {
    if ( *((_QWORD *)v17 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v17 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v29);
  }
  return (unsigned int)v21;
}
