/*
 * XREFs of sub_180061184 @ 0x180061184
 * Callers:
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180061358 @ 0x180061358 (sub_180061358.c)
 *     sub_18006151C @ 0x18006151C (sub_18006151C.c)
 *     sub_1800616BC @ 0x1800616BC (sub_1800616BC.c)
 *     sub_1800619B8 @ 0x1800619B8 (sub_1800619B8.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180061184(__int64 a1, char a2)
{
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v10; // eax
  _BYTE v11[8]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v12[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v13[5]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  if ( !(unsigned __int8)sub_1800619B8() )
  {
    sub_18000FD48(v13);
    v10 = (unsigned int)sub_18000FD48(v12);
    sub_180061358((unsigned int)pExceptionObject, v10, 64, (unsigned int)v13, 0);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  LOBYTE(v4) = a2;
  v5 = *(_QWORD *)sub_18006151C(a1, v11, v4);
  v6 = sub_1800616BC();
  v7 = *(_QWORD *)(v6 + 8);
  v8 = v5 + 16;
  if ( v8 != v7 )
  {
    do
    {
      *(_QWORD *)(v8 - 16) = *(_QWORD *)v8;
      *(_BYTE *)(v8 - 8) = *(_BYTE *)(v8 + 8);
      v8 += 16LL;
    }
    while ( v8 != v7 );
    v7 = *(_QWORD *)(v6 + 8);
  }
  *(_QWORD *)(v6 + 8) = v7 - 16;
  return sub_180116A44(a1);
}
