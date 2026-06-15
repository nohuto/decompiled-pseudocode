/*
 * XREFs of sub_1800EF878 @ 0x1800EF878
 * Callers:
 *     sub_1800EF568 @ 0x1800EF568 (sub_1800EF568.c)
 *     sub_1800EF7D0 @ 0x1800EF7D0 (sub_1800EF7D0.c)
 * Callees:
 *     sub_180064E6C @ 0x180064E6C (sub_180064E6C.c)
 *     sub_1800EF44C @ 0x1800EF44C (sub_1800EF44C.c)
 */

__int64 __fastcall sub_1800EF878(__int64 a1, int a2, unsigned int a3, char a4, char a5)
{
  bool v8; // si
  bool v9; // bl
  __int64 *v10; // rcx
  __int64 result; // rax
  __int64 v12; // r9
  bool v13; // cl
  int v14; // ecx
  int v15; // ecx
  bool v16; // zf
  __int64 v17[5]; // [rsp+30h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  int *v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+18h] BYREF

  v20 = a3;
  try
  {
    v8 = 0;
    v9 = 0;
    v10 = (__int64 *)(a1 + 80);
    result = *v10;
    v12 = *(_QWORD *)(*v10 + 8);
    if ( *(_BYTE *)(v12 + 25) )
      goto LABEL_9;
    do
    {
      if ( *(_DWORD *)(v12 + 28) >= a3 )
      {
        result = v12;
        v12 = *(_QWORD *)v12;
      }
      else
      {
        v12 = *(_QWORD *)(v12 + 16);
      }
    }
    while ( !*(_BYTE *)(v12 + 25) );
    if ( result == *v10 || a3 < *(_DWORD *)(result + 28) )
    {
LABEL_9:
      v19 = (int *)&v20;
      result = *sub_1800EF44C(v10, v17, (__int64 *)result, v12, &v19);
    }
    if ( a2 )
    {
      if ( a2 != 1 )
        return result;
      v14 = *(_DWORD *)(result + 32);
      if ( !v14 )
        return result;
      v15 = v14 - 1;
      *(_DWORD *)(result + 32) = v15;
      v13 = v15 == 0;
      if ( a4 )
      {
        v16 = (*(_DWORD *)(result + 36))-- == 1;
        v8 = v16;
      }
      if ( a5 )
      {
        v16 = (*(_DWORD *)(result + 40))-- == 1;
        if ( v16 )
          v9 = 1;
      }
    }
    else
    {
      v13 = ++*(_DWORD *)(result + 32) == 1;
      if ( a4 )
        v8 = ++*(_DWORD *)(result + 36) == 1;
      if ( a5 )
        v9 = ++*(_DWORD *)(result + 40) == 1;
    }
    if ( v13 || v8 || v9 )
      result = (__int64)sub_180064E6C(a1);
  }
  catch ( ... )
  {
    return sub_1800C8F54((int)retaddr, 578, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp", v12);
  }
  return result;
}
