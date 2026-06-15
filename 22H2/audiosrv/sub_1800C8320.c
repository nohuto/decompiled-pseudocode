/*
 * XREFs of sub_1800C8320 @ 0x1800C8320
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003CE0 @ 0x180003CE0 (sub_180003CE0.c)
 *     sub_180003E08 @ 0x180003E08 (sub_180003E08.c)
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18001B4A0 @ 0x18001B4A0 (sub_18001B4A0.c)
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180045410 @ 0x180045410 (sub_180045410.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_180061BA0 @ 0x180061BA0 (sub_180061BA0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800D4504 @ 0x1800D4504 (sub_1800D4504.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800C8320(__int64 a1, void **a2)
{
  void **v2; // rsi
  int v4; // edi
  unsigned int v5; // eax
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  _WORD *v8; // rax
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  ATL::CAtlException *v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v2 = a2;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0xCu, (__int64)&unk_18015DEF0, *(const wchar_t **)(a1 + 728));
  }
  sub_180003E08(&v12, (__int64)&qword_18019F818);
  sub_180003E08(&v11, (__int64)&qword_18019F818);
  sub_180003E08(&v10, (__int64)&qword_18019F818);
  sub_180003E08(&v16, (__int64)&qword_18019F818);
  sub_180003E08(&v15, (__int64)&qword_18019F818);
  v4 = sub_1800D4504(a1 + 656, &v12);
  if ( v4 < 0 )
  {
    v6 = v15;
    goto LABEL_13;
  }
  try
  {
    sub_18001B4A0(&v11, (__int64)L"%d");
    sub_18001B4A0(&v10, (__int64)L"%d", *(unsigned int *)(a1 + 304));
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 24LL))(a1 + 24);
    sub_18001B4A0(&v16, (__int64)L"%d", v5);
    sub_180003CE0((__int64)&v12);
    sub_180003CE0((__int64)&v11);
    sub_180003CE0((__int64)&v10);
    sub_180003CE0((__int64)&v16);
    sub_18001B4A0(&v15, (__int64)L"%s|%s|%s|%s", v12, v11, v10, v16);
  }
  catch ( ATL::CAtlException *v13 )
  {
    v2 = a2;
    v4 = *(_DWORD *)v13;
  }
  v6 = v15;
  if ( v4 < 0 )
    goto LABEL_13;
  v7 = 2LL * (*(_DWORD *)(v15 - 16) + 1);
  v8 = (_WORD *)sub_180045410(v7);
  *v2 = v8;
  if ( !v8 )
  {
    v4 = -2147024882;
LABEL_13:
    sub_18005E8F8((__int64)"CAudioSession::GetStreamSwitchId", 569, v4);
    goto LABEL_14;
  }
  v4 = sub_180061BA0(v8, v7, v6);
  if ( v4 < 0 )
  {
    sub_180033A70(*v2);
    *v2 = 0LL;
    goto LABEL_13;
  }
LABEL_14:
  sub_180006A30((volatile signed __int32 *)(v6 - 24));
  sub_180006A30((volatile signed __int32 *)(v16 - 24));
  sub_180006A30((volatile signed __int32 *)(v10 - 24));
  sub_180006A30((volatile signed __int32 *)(v11 - 24));
  sub_180006A30((volatile signed __int32 *)(v12 - 24));
  return (unsigned int)v4;
}
