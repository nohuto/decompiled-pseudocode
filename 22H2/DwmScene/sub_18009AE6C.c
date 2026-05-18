/*
 * XREFs of sub_18009AE6C @ 0x18009AE6C
 * Callers:
 *     sub_18002EBE0 @ 0x18002EBE0 (sub_18002EBE0.c)
 *     sub_18003156C @ 0x18003156C (sub_18003156C.c)
 *     sub_1800639D8 @ 0x1800639D8 (sub_1800639D8.c)
 *     sub_18009AF04 @ 0x18009AF04 (sub_18009AF04.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18009AE6C(__int64 a1, __int64 a2)
{
  int v2; // xmm0_4
  unsigned int v3; // eax
  _QWORD v4[4]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v5[4]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v7; // [rsp+B0h] [rbp-18h]

  v7 = a2;
  if ( *(float *)&a2 < 0.0 || (v2 = HIDWORD(v7), *((float *)&v7 + 1) < 0.0) )
  {
    sub_18000FD48(v5);
    v3 = (unsigned int)sub_18000FD48(v4);
    sub_1800CB940((unsigned int)pExceptionObject, v3, 1082, (unsigned int)v5, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 152) = a2;
  *(_DWORD *)(a1 + 156) = v2;
}
