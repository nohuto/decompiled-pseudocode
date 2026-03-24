/*
 * XREFs of RIMGetProductString @ 0x1C015E6A4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C015C02C (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolNonPaged @ 0x1C005B490 (Win32AllocPoolNonPaged.c)
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0073980 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     wcscmp_0 @ 0x1C00CE8B3 (wcscmp_0.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 */

__int64 __fastcall RIMGetProductString(__int64 a1, struct _DEVICE_OBJECT *a2, struct _FILE_OBJECT *a3)
{
  unsigned int Status; // ebx
  void *OutputBuffer; // rsi
  PIRP v8; // rax
  int v9; // edx
  int v10; // edx
  __int64 v11; // rax
  size_t Information; // r8
  void *v13; // rcx
  unsigned __int64 v14; // rdx
  const unsigned __int16 *v15; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v19; // [rsp+C8h] [rbp+48h] BYREF

  IoStatusBlock = 0LL;
  Status = -1073741811;
  OutputBuffer = (void *)Win32AllocPoolNonPaged(512LL, 0x6B707352u);
  if ( OutputBuffer )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v8 = IoBuildDeviceIoControlRequest(0xB01BEu, a2, 0LL, 0, OutputBuffer, 0x200u, 0, &Event, &IoStatusBlock);
    v9 = (int)v8;
    if ( v8 )
    {
      v8->Tail.Overlay.CurrentStackLocation[-1].FileObject = a3;
      Status = IofCallDriver(a2, v8);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 3;
          WPP_RECORDER_SF_d(
            (_DWORD)gRimLog,
            v10,
            1,
            21,
            (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids,
            Status);
        }
      }
      else if ( IoStatusBlock.Information > 0x200 )
      {
        Status = -1073741811;
      }
      else
      {
        v11 = Win32AllocPool(IoStatusBlock.Information + 2, 0x77647352u);
        *(_QWORD *)(a1 + 328) = v11;
        if ( v11 )
        {
          *(_WORD *)(v11 + 2 * (IoStatusBlock.Information >> 1)) = 0;
          Information = IoStatusBlock.Information;
          v13 = *(void **)(a1 + 328);
          *(_WORD *)(a1 + 320) = IoStatusBlock.Information;
          *(_WORD *)(a1 + 322) = Information + 2;
          memmove(v13, OutputBuffer, Information);
          v14 = *(unsigned __int16 *)(a1 + 322);
          v15 = *(const unsigned __int16 **)(a1 + 328);
          v19 = 0LL;
          if ( (int)RtlStringCbLengthW(v15, v14, &v19) >= 0 )
            *(_WORD *)(a1 + 320) = v19;
          if ( !wcscmp_0(*(const wchar_t **)(a1 + 328), L"VHidPen") )
            *(_DWORD *)(a1 + 312) |= 0x4000u;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 20, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
    }
    Win32FreePool((__int64)OutputBuffer);
  }
  return Status;
}
