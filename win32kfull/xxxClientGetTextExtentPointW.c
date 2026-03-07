__int64 __fastcall xxxClientGetTextExtentPointW(Gre::Base *a1, PCWSTR SourceString, int a3, _QWORD *a4)
{
  __int64 v5; // r12
  HDC CompatiblePublicDC; // r14
  __int64 MaximumLength; // r8
  __int64 v11; // rcx
  unsigned __int8 *v12; // rdi
  unsigned int v13; // ebx
  int v14; // r12d
  __int64 *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  _BYTE v19[4]; // [rsp+60h] [rbp-308h] BYREF
  int v20; // [rsp+64h] [rbp-304h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-300h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp-2F8h] BYREF
  __int64 v23; // [rsp+78h] [rbp-2F0h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-2E8h] BYREF
  unsigned __int8 *v25; // [rsp+90h] [rbp-2D8h]
  HDC v26; // [rsp+98h] [rbp-2D0h]
  __int128 v27; // [rsp+A0h] [rbp-2C8h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-2B8h]
  __int64 v29; // [rsp+B8h] [rbp-2B0h]
  unsigned __int8 v30[80]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v31[512]; // [rsp+120h] [rbp-248h] BYREF

  v5 = a3;
  RegionSize = (ULONG_PTR)a1;
  memset_0(v30, 0, sizeof(v30));
  v22 = 0LL;
  v20 = 0;
  v23 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC((HDC)a1);
  v26 = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2 * v5 + 2) )
    MaximumLength = 2 * v5 + 2;
  v12 = AllocCallbackMessage(80, 1u, MaximumLength, v31, 1, 0x200uLL);
  v25 = v12;
  if ( !v12 )
  {
    if ( CompatiblePublicDC != (HDC)a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v23);
    }
    return 0LL;
  }
  PtiCurrentShared(v11);
  v27 = 0LL;
  v28 = 0LL;
  if ( v12 != v30 && v12 != v31 )
    PushW32ThreadLock((__int64)v12, &v27, (__int64)Win32FreePool);
  *((_QWORD *)v12 + 7) = CompatiblePublicDC;
  *((_DWORD *)v12 + 16) = v5;
  *((_WORD *)v12 + 20) = DestinationString.Length;
  *((_WORD *)v12 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v12,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v12 + 6) < 0 )
    goto LABEL_27;
  v13 = GreSaveDCInternal(a1, 1);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v19);
  EtwTraceBeginCallback(81LL);
  *((_QWORD *)v12 + 2) = 0LL;
  v14 = KeUserModeCallback(81LL, v12, *(unsigned int *)v12, &v22, &v20);
  EtwTraceEndCallback(81LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v19);
  GreRestoreDC(a1, v13);
  if ( CompatiblePublicDC != (HDC)a1 )
  {
    if ( v14 < 0 )
      goto LABEL_27;
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
  if ( v14 >= 0 && v20 == 24 )
  {
    v15 = (__int64 *)v22;
    if ( v22 + 8 < v22 || v22 + 8 > MmUserProbeAddress )
      v15 = (__int64 *)MmUserProbeAddress;
    v16 = *v15;
    v29 = *v15;
    v17 = *((_QWORD *)PtiCurrentShared((__int64)v15) + 64);
    if ( !v17 || (*(_DWORD *)(v17 + 84) & 1) == 0 || *(_QWORD **)(v17 + 96) != a4 )
    {
      v18 = *(_QWORD **)(v22 + 16);
      if ( v18 + 1 < v18 || (unsigned __int64)(v18 + 1) > MmUserProbeAddress )
        v18 = (_QWORD *)MmUserProbeAddress;
      *a4 = *v18;
      goto LABEL_28;
    }
  }
LABEL_27:
  LODWORD(v16) = 0;
LABEL_28:
  if ( CompatiblePublicDC != (HDC)a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v23);
  }
  if ( v12 != v30 && v12 != v31 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v27);
  }
  return (unsigned int)v16;
}
