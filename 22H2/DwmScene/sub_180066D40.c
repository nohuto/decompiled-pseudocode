/*
 * XREFs of sub_180066D40 @ 0x180066D40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180066D40(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  _QWORD v3[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v4[5]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  if ( a2 > 4 )
  {
    sub_18000FD48(v4);
    v2 = (unsigned int)sub_18000FD48(v3);
    sub_1800CB940((unsigned int)pExceptionObject, v2, 271, (unsigned int)v4, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 296) = a2;
}
