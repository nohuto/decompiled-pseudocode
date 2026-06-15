/*
 * XREFs of sub_180037FC0 @ 0x180037FC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_1800F29D8 @ 0x1800F29D8 (sub_1800F29D8.c)
 */

__int64 __fastcall sub_180037FC0(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v7; // edi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0LL;
  if ( !*a3 )
    goto LABEL_2;
  v9 = sub_18006A18C(24LL, &unk_18019F848);
  v3 = v9;
  if ( v9 )
  {
    *(_DWORD *)(v9 + 16) = 0;
    *(_DWORD *)v9 = a2;
    *(_QWORD *)(v9 + 8) = a3;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    v12 = sub_1800F29D8(a1, v3);
    v7 = v12;
    if ( v12 >= 0 )
    {
      v3 = 0LL;
LABEL_2:
      v7 = 0;
      goto LABEL_3;
    }
    v11 = (unsigned int)v12;
    v10 = 966LL;
  }
  else
  {
    v7 = -2147024882;
    v10 = 964LL;
    v11 = 2147942414LL;
  }
  sub_18004BD84(retaddr, v10, "avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp", v11);
LABEL_3:
  if ( v3 )
    sub_18006A148(v3, 24LL);
  return v7;
}
