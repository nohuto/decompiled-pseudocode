__int64 __fastcall SleepstudyHelperCreateBlockerFromComponent(
        __int64 a1,
        __int128 *a2,
        struct _DEVICE_OBJECT *a3,
        unsigned int a4,
        __int64 *a5)
{
  __int64 *v9; // r14
  __int64 Pool2; // rax
  __int64 v11; // rdi
  int DeviceVerboseDescription; // ebx
  __int128 v13; // xmm0
  unsigned int v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = a4;
  if ( a1 && a2 && a3 && (v9 = a5) != 0LL )
  {
    Pool2 = ExAllocatePool2(256LL, 96LL, *(unsigned int *)(a1 + 24));
    v11 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 8) = 0;
      *(_QWORD *)Pool2 = a1;
      v13 = *a2;
      *(_QWORD *)(Pool2 + 32) = a3;
      *(_DWORD *)(Pool2 + 44) = a4;
      *(_OWORD *)(Pool2 + 16) = v13;
      *(_DWORD *)(Pool2 + 40) = 52428;
      *(_BYTE *)(Pool2 + 88) = 1;
      DeviceVerboseDescription = SshpGenerateDeviceFriendlyName(
                                   a3,
                                   &v15,
                                   *(_DWORD *)(a1 + 24),
                                   (UNICODE_STRING *)(Pool2 + 48));
      if ( DeviceVerboseDescription < 0
        || (DeviceVerboseDescription = SshpGenerateDeviceVerboseDescription(
                                         a3,
                                         *(_DWORD *)(a1 + 24),
                                         (unsigned int **)(v11 + 72)),
            DeviceVerboseDescription < 0) )
      {
        SleepstudyHelperDestroyBlockerBuilder((_QWORD *)v11);
      }
      else
      {
        *v9 = v11;
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)DeviceVerboseDescription;
}
