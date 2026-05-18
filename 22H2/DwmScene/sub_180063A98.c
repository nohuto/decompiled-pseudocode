/*
 * XREFs of sub_180063A98 @ 0x180063A98
 * Callers:
 *     sub_180025ED0 @ 0x180025ED0 (sub_180025ED0.c)
 *     sub_18006313C @ 0x18006313C (sub_18006313C.c)
 *     sub_1800673E0 @ 0x1800673E0 (sub_1800673E0.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_18009AF04 @ 0x18009AF04 (sub_18009AF04.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180063A98(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  _QWORD v3[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v4[5]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(float *)&a2 < 0.0 || *((float *)&a2 + 1) < 0.0 )
  {
    sub_18000FD48(v4);
    v2 = (unsigned int)sub_18000FD48(v3);
    sub_1800CB940((unsigned int)pExceptionObject, v2, 70, (unsigned int)v4, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( *(_QWORD *)(a1 + 136) )
    sub_18009AF04();
}
