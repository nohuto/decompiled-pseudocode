/*
 * XREFs of sub_1800EC170 @ 0x1800EC170
 * Callers:
 *     sub_1800ED7F8 @ 0x1800ED7F8 (sub_1800ED7F8.c)
 *     sub_1800EDB68 @ 0x1800EDB68 (sub_1800EDB68.c)
 *     sub_1800EDB98 @ 0x1800EDB98 (sub_1800EDB98.c)
 *     sub_1800EDBD8 @ 0x1800EDBD8 (sub_1800EDBD8.c)
 *     sub_1800EDC04 @ 0x1800EDC04 (sub_1800EDC04.c)
 *     sub_1800EDC34 @ 0x1800EDC34 (sub_1800EDC34.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180026F44 @ 0x180026F44 (sub_180026F44.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_180043BDC @ 0x180043BDC (sub_180043BDC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800EC170(__int64 a1, unsigned __int16 a2)
{
  __int64 v3; // rcx
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 *v8; // rax
  _QWORD v9[4]; // [rsp+40h] [rbp-71h] BYREF
  __int64 v10[5]; // [rsp+60h] [rbp-51h] BYREF
  _QWORD v11[8]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+C8h] [rbp+17h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_18000FD48(v9);
    v8 = sub_18000FD48(v10);
    sub_180027FF4(v11, v8, 404, (__int64)v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v11;
  }
  v3 = *(unsigned __int16 *)(a1 + 2LL * a2 + 128);
  if ( (_WORD)v3 == 0xFFFF )
  {
    v5 = sub_180026F44(v10, a2);
    v6 = sub_180043BDC(
           (__int64)v11,
           (__int64)"ShaderPropertyLayout::SetPropertyDefault() -- property layout does not have a property with the specified ID ",
           (__int64)v5);
    v7 = sub_18000FD48(v9);
    sub_180027FF4(pExceptionObject, v7, 407, v6, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(a1 + 80) + 4LL * *(unsigned int *)(56 * v3 + *(_QWORD *)(a1 + 56) + 40);
}
