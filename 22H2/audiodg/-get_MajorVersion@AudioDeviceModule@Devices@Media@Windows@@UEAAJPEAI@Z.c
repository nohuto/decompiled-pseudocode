/*
 * XREFs of ?get_MajorVersion@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAI@Z @ 0x14005A790
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModule::get_MajorVersion(
        Windows::Media::Devices::AudioDeviceModule *this,
        unsigned int *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *a2 = *((_DWORD *)this + 16);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x162,
      (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
