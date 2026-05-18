/*
 * XREFs of sub_180075328 @ 0x180075328
 * Callers:
 *     sub_180011AD0 @ 0x180011AD0 (sub_180011AD0.c)
 *     sub_180015B80 @ 0x180015B80 (sub_180015B80.c)
 *     sub_180019860 @ 0x180019860 (sub_180019860.c)
 *     sub_180074F40 @ 0x180074F40 (sub_180074F40.c)
 *     sub_1800750F0 @ 0x1800750F0 (sub_1800750F0.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180075328(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  unsigned int v5; // eax
  _QWORD v6[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v7[5]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  v2 = *(_QWORD **)(a1 + 704);
  if ( v2 == *(_QWORD **)(a1 + 712) )
  {
    sub_18000FD48(v7);
    v5 = (unsigned int)sub_18000FD48(v6);
    sub_1800CB940((unsigned int)pExceptionObject, v5, 979, (unsigned int)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v3 = v2[1];
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *a2 = *v2;
  a2[1] = v2[1];
  return a2;
}
