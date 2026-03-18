/*
 * XREFs of sub_140764D58 @ 0x140764D58
 * Callers:
 *     WbReEncryptWarbirdEncryptionSegment @ 0x1407D2D44 (WbReEncryptWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_140764104 @ 0x140764104 (sub_140764104.c)
 *     sub_140764384 @ 0x140764384 (sub_140764384.c)
 *     sub_140764E70 @ 0x140764E70 (sub_140764E70.c)
 *     sub_1407D94A8 @ 0x1407D94A8 (sub_1407D94A8.c)
 */

__int64 __fastcall sub_140764D58(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // esi
  unsigned int v4; // r8d
  unsigned int v5; // edx
  void *v7; // rsi
  int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // r10d
  unsigned int v11; // r9d
  __int64 v13; // [rsp+38h] [rbp-40h]
  unsigned __int8 v14; // [rsp+80h] [rbp+8h] BYREF
  char *v15; // [rsp+88h] [rbp+10h] BYREF
  PMDL Mdl; // [rsp+90h] [rbp+18h] BYREF

  v2 = a2[1];
  v4 = *a2;
  v5 = a2[2];
  v15 = 0LL;
  v7 = (void *)(*(_QWORD *)(a1 + 32) + (v2 & 0xFFFFFFF));
  Mdl = 0LL;
  v8 = sub_140764104(v7, v5 & 0xFFFFFFF, (v4 & 2) == 0);
  if ( v8 >= 0 )
  {
    v8 = sub_140764E70((_DWORD)v7, a2[2] & 0xFFFFFFF, (*a2 & 2) == 0, (unsigned int)&Mdl, (__int64)&v15);
    if ( v8 >= 0 )
    {
      v9 = *(_QWORD *)(a1 + 56);
      v10 = a2[1] & 0xFFFFFFF;
      v11 = a2[2] & 0xFFFFFFF;
      v14 = 0;
      v8 = sub_140764384(1, (char *)v7, v15, v11, (__int64 *)(v9 + 72), v10, (__int128 *)(v9 + 80), v13, &v14);
      if ( v8 >= 0 )
        *a2 = *a2 & 0xFFFFFC03 | (4 * v14);
    }
  }
  sub_1407D94A8(Mdl);
  return (unsigned int)v8;
}
