__int64 __fastcall PiCMGetDeviceDepth(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r15
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // edi
  const WCHAR *v12; // rdi
  int inited; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  __int128 v16; // [rsp+40h] [rbp-30h] BYREF
  PCWSTR SourceString[2]; // [rsp+50h] [rbp-20h]
  __int64 v18; // [rsp+60h] [rbp-10h]

  v6 = a6;
  v9 = 0;
  v18 = 0LL;
  *a6 = 0;
  DestinationString = 0LL;
  LODWORD(a6) = 0;
  v16 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v11 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v16);
  if ( v11 >= 0 )
  {
    v12 = SourceString[0];
    if ( SourceString[0]
      && *(_QWORD *)((char *)&v16 + 4) == 0x100000000LL
      && !HIDWORD(SourceString[1])
      && a3
      && a4 >= 0xC )
    {
      inited = CmValidateDeviceName(v10, SourceString[0]);
      if ( inited >= 0 )
      {
        inited = RtlInitUnicodeStringEx(&DestinationString, v12);
        if ( inited >= 0 )
        {
          inited = PiGetDeviceDepth((__int64)&DestinationString, &a6);
          v9 = (unsigned int)a6;
        }
      }
    }
    else
    {
      inited = -1073741811;
    }
    v11 = PiCMReturnDepthResultData(
            (unsigned int)inited,
            v9,
            (unsigned int)v18,
            a3,
            a4,
            v6,
            *(_QWORD *)&DestinationString.Length,
            DestinationString.Buffer);
  }
  PiCMReleaseObjectInputData((__int64)&v16);
  return (unsigned int)v11;
}
