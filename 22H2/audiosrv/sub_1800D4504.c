/*
 * XREFs of sub_1800D4504 @ 0x1800D4504
 * Callers:
 *     sub_1800C8320 @ 0x1800C8320 (sub_1800C8320.c)
 * Callees:
 *     sub_180003CE0 @ 0x180003CE0 (sub_180003CE0.c)
 *     sub_180003E08 @ 0x180003E08 (sub_180003E08.c)
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_180019278 @ 0x180019278 (sub_180019278.c)
 *     sub_18001B4A0 @ 0x18001B4A0 (sub_18001B4A0.c)
 *     sub_18001B770 @ 0x18001B770 (sub_18001B770.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D4504(__int64 a1, __int64 *a2)
{
  int v4; // ebx
  ATL::CAtlException *v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  sub_180003E08(&v8, (__int64)&qword_18019F818);
  sub_180003E08(&v7, (__int64)&qword_18019F818);
  v4 = sub_18001B770(a1 + 8, &v8);
  if ( v4 < 0 )
    goto LABEL_5;
  v4 = sub_180019278((unsigned int *)(a1 + 56), (__int64)&v7);
  if ( v4 < 0 )
    goto LABEL_5;
  try
  {
    sub_180003CE0((__int64)&v8);
    sub_180003CE0((__int64)&v7);
    sub_18001B4A0(a2, (__int64)L"%s|%s", v8, v7);
  }
  catch ( ATL::CAtlException *v6 )
  {
    v4 = *(_DWORD *)v6;
  }
  if ( v4 < 0 )
LABEL_5:
    sub_18005E8F8((__int64)"CAudioSessionInstanceId::ToStreamSwitchString", 1185, v4);
  sub_180006A30((volatile signed __int32 *)(v7 - 24));
  sub_180006A30((volatile signed __int32 *)(v8 - 24));
  return (unsigned int)v4;
}
