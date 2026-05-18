/*
 * XREFs of sub_180092088 @ 0x180092088
 * Callers:
 *     sub_180013870 @ 0x180013870 (sub_180013870.c)
 *     sub_1800EA2F0 @ 0x1800EA2F0 (sub_1800EA2F0.c)
 *     sub_1800F5E6C @ 0x1800F5E6C (sub_1800F5E6C.c)
 *     sub_1800F6150 @ 0x1800F6150 (sub_1800F6150.c)
 *     sub_18010AEC0 @ 0x18010AEC0 (sub_18010AEC0.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180062680 @ 0x180062680 (sub_180062680.c)
 *     sub_18006294C @ 0x18006294C (sub_18006294C.c)
 *     sub_180091A2C @ 0x180091A2C (sub_180091A2C.c)
 *     sub_180091D48 @ 0x180091D48 (sub_180091D48.c)
 *     sub_1800921CC @ 0x1800921CC (sub_1800921CC.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180092088(__int64 a1, unsigned int a2)
{
  char result; // al
  char v5; // bp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  unsigned int v9; // eax
  _QWORD v10[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v11[5]; // [rsp+58h] [rbp-80h] BYREF
  _BYTE pExceptionObject[88]; // [rsp+80h] [rbp-58h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_18000FD48(v11);
    v9 = (unsigned int)sub_18000FD48(v10);
    sub_1800CB940((unsigned int)pExceptionObject, v9, 430, (unsigned int)v11, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  result = sub_18006294C(a1, 4, 1);
  if ( *(_QWORD *)(a1 + 144) )
  {
    v5 = a2 & (*(_QWORD *)(a1 + 160) == 0LL);
    result = (a2 >> 1) & (*(_QWORD *)(a1 + 192) == 0LL);
    if ( result && !*(_QWORD *)(a1 + 240) )
    {
      sub_1801163DC(
        &unk_18020C5D8,
        3LL,
        "Attempting to compute tangents for mesh without UV coordinates. Tangents will not be calculated.");
      result = 0;
    }
    if ( v5 )
    {
      if ( result )
      {
        v6 = sub_180062680(a1);
        return sub_180091D48((_DWORD *)a1, v6, (a2 & 4) != 0);
      }
      else
      {
        sub_180062680(a1);
        return sub_180091A2C((_DWORD *)a1);
      }
    }
    else if ( result )
    {
      v7 = sub_180062680(a1);
      LOBYTE(v8) = (a2 & 4) != 0;
      return sub_1800921CC(a1, v7, v8);
    }
  }
  return result;
}
