/*
 * XREFs of sub_180130E20 @ 0x180130E20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18012E318 @ 0x18012E318 (sub_18012E318.c)
 *     sub_18012F39C @ 0x18012F39C (sub_18012F39C.c)
 */

__int64 __fastcall sub_180130E20(__int64 a1, float a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a1 + 48);
  if ( (unsigned int)(v4 - 1) <= 2 )
  {
    v6 = a1 + 24;
    sub_18012E318(*(_QWORD *)(a1 + 40), v4, a3, a4, a1 + 24, a2);
    if ( *(_DWORD *)qword_18019E428 > 2u )
    {
      v11 = *(_QWORD *)(a1 + 40);
      LODWORD(v10) = *(_DWORD *)(a1 + 48);
      v12 = v6;
      sub_18012F39C(
        (__int64)qword_18019E428,
        (unsigned __int8 *)dword_18016C3D9,
        v7,
        v8,
        (__int64)&v10,
        &v12,
        (void **)&v11);
    }
  }
  return 0LL;
}
