/*
 * XREFs of PopPluginRegisterDevice @ 0x140393A00
 * Callers:
 *     PopFxRegisterDeviceWithPep @ 0x1403938B8 (PopFxRegisterDeviceWithPep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginRegisterDevice(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  unsigned int v6; // ebx
  unsigned __int8 (__fastcall *v7)(__int64, _QWORD *); // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  unsigned int v12; // [rsp+40h] [rbp-18h]
  int v13; // [rsp+44h] [rbp-14h]

  v6 = 0;
  v7 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(BugCheckParameter3 + 96);
  v13 = 0;
  *a6 = 0LL;
  if ( v7 && *(_DWORD *)(BugCheckParameter3 + 16) >= 2u && a4 )
  {
    v10[0] = a2;
    v10[1] = a3;
    v10[2] = a4;
    v11 = 0LL;
    v12 = 0;
    if ( !v7(3LL, v10) )
      PopFxBugCheck(0x605uLL, 3uLL, BugCheckParameter3, 0LL);
    if ( v12 )
    {
      v6 = v12;
      *a6 = v11;
    }
  }
  return v6;
}
