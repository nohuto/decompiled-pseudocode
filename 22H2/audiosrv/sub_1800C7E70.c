/*
 * XREFs of sub_1800C7E70 @ 0x1800C7E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003E08 @ 0x180003E08 (sub_180003E08.c)
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18001B6A0 @ 0x18001B6A0 (sub_18001B6A0.c)
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180045410 @ 0x180045410 (sub_180045410.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_180061BA0 @ 0x180061BA0 (sub_180061BA0.c)
 */

__int64 __fastcall sub_1800C7E70(__int64 a1, void **a2)
{
  int v4; // eax
  __int64 v5; // rbx
  int v6; // edi
  unsigned __int64 v7; // rdi
  _WORD *v8; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  sub_180003E08(&v10, (__int64)&qword_18019F818);
  v4 = sub_18001B6A0(a1 + 656, &v10);
  v5 = v10;
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_6;
  v7 = 2LL * (*(_DWORD *)(v10 - 16) + 1);
  v8 = (_WORD *)sub_180045410(v7);
  *a2 = v8;
  if ( !v8 )
  {
    v6 = -2147024882;
LABEL_6:
    sub_18005E8F8((__int64)"CAudioSession::GetInstanceId", 433, v6);
    goto LABEL_7;
  }
  v6 = sub_180061BA0(v8, v7, v5);
  if ( v6 < 0 )
  {
    sub_180033A70(*a2);
    *a2 = 0LL;
    goto LABEL_6;
  }
LABEL_7:
  sub_180006A30((volatile signed __int32 *)(v5 - 24));
  return (unsigned int)v6;
}
