/*
 * XREFs of IoQuerySystemDeviceName @ 0x1407827D0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     IopRetrieveSystemDeviceName @ 0x140782840 (IopRetrieveSystemDeviceName.c)
 *     IopFindSystemDevice @ 0x14094E90C (IopFindSystemDevice.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoQuerySystemDeviceName(int a1, __int64 a2)
{
  __int64 (__fastcall *v3)(); // rcx
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int SystemDevice; // ecx
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF

  P[0] = 0LL;
  switch ( a1 )
  {
    case 98:
      v3 = SyspartDirectGetSystemPartition;
      break;
    case 99:
      v3 = SyspartDirectGetSystemDisk;
      break;
    case 200:
      v3 = SyspartDirectGetFirmwareSystemPartition;
      break;
    default:
      return 3221225475LL;
  }
  result = IopRetrieveSystemDeviceName(v3, a2);
  v6 = result;
  if ( (_DWORD)result == -1073740718 && IopAmbiguousSystemDisk )
  {
    if ( a1 == 99 )
    {
      return 3221226577LL;
    }
    else if ( a1 == 98 )
    {
      SystemDevice = IopFindSystemDevice(v5, P);
      if ( SystemDevice < 0 )
      {
        if ( SystemDevice == -1073740718 )
          return (unsigned int)-1073740719;
      }
      else
      {
        ExFreePoolWithTag(P[0], 0);
      }
      return v6;
    }
  }
  return result;
}
