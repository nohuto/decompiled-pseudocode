/*
 * XREFs of sub_18011B270 @ 0x18011B270
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_1801152FC @ 0x1801152FC (sub_1801152FC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __noreturn sub_18011B270()
{
  __int64 v0; // rbx
  void *v1; // rdi
  _QWORD pExceptionObject[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v3[5]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0LL;
  try
  {
    v1 = operator new(0x40uLL);
    pExceptionObject[1] = v1;
    if ( v1 )
    {
      sub_18000FD48(v3);
      v0 = sub_1801152FC((__int64)v1, v3, 0);
    }
    pExceptionObject[0] = v0;
    throw (Spectre::Utils::SpectreException **)pExceptionObject;
  }
  catch ( ... )
  {
    sub_1801163DC(&qword_18020DDF0, 3, "Failed to deserialise the JSON configuration. Check the configuration format.");
    throw;
  }
}
