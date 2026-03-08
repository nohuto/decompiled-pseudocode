/*
 * XREFs of PiValidatePowerRelations @ 0x14086CF08
 * Callers:
 *     PiQueryPowerRelations @ 0x14086CB24 (PiQueryPowerRelations.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 *__fastcall PiValidatePowerRelations(__int64 a1)
{
  __int64 ****v2; // rdx
  __int64 ***v3; // rax
  __int64 *result; // rax
  __int64 v5; // r9
  __int64 ****v6; // rdx
  __int64 ***v7; // rcx
  __int64 i; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rcx
  __int64 **v11; // rdx
  __int64 **v12; // rcx
  _QWORD *v13; // rcx
  __int64 **v14; // r10
  _QWORD *v15; // r10
  __int64 *v16; // [rsp+30h] [rbp-10h] BYREF
  __int64 **v17; // [rsp+38h] [rbp-8h]

  v17 = &v16;
  v2 = (__int64 ****)(a1 + 192);
  v16 = (__int64 *)&v16;
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (__int64 ***)v2 )
      break;
    if ( v3[1] != (__int64 **)v2
      || (v12 = *v3, (*v3)[1] != (__int64 *)v3)
      || (*v2 = (__int64 ***)v12, v12[1] = (__int64 *)v2, v13 = v17, *v17 != (__int64 *)&v16) )
    {
LABEL_26:
      __fastfail(3u);
    }
    v3[1] = v17;
    *v3 = &v16;
    *v13 = v3;
    v17 = (__int64 **)v3;
  }
  result = v16;
  if ( v16 == (__int64 *)&v16 )
    goto LABEL_16;
  do
  {
    v5 = result[5] - 160;
    v6 = (__int64 ****)(v5 + 192);
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 == (__int64 ***)v6 )
        break;
      if ( v7[1] != (__int64 **)v6 )
        goto LABEL_26;
      v14 = *v7;
      if ( (*v7)[1] != (__int64 *)v7 )
        goto LABEL_26;
      *v6 = (__int64 ***)v14;
      v14[1] = (__int64 *)v6;
      v15 = v17;
      if ( *v17 != (__int64 *)&v16 )
        goto LABEL_26;
      v7[1] = v17;
      *v7 = &v16;
      *v15 = v7;
      v17 = (__int64 **)v7;
    }
    for ( i = v5; i; i = *(_QWORD *)(i + 16) )
    {
      if ( i == a1 )
        KeBugCheckEx(0xCAu, 0xCuLL, *(_QWORD *)(a1 + 32), *(_QWORD *)(v5 + 32), 0LL);
    }
    result = (__int64 *)*result;
  }
  while ( result != (__int64 *)&v16 );
  while ( 1 )
  {
    result = v16;
LABEL_16:
    if ( result == (__int64 *)&v16 )
      return result;
    if ( (__int64 **)result[1] != &v16 )
      goto LABEL_26;
    v9 = (__int64 *)*result;
    if ( *(__int64 **)(*result + 8) != result )
      goto LABEL_26;
    v16 = (__int64 *)*result;
    v9[1] = (__int64)&v16;
    v10 = result[2] + 32;
    v11 = *(__int64 ***)(result[2] + 40);
    if ( *v11 != (__int64 *)v10 )
      goto LABEL_26;
    *result = v10;
    result[1] = (__int64)v11;
    *v11 = result;
    *(_QWORD *)(v10 + 8) = result;
  }
}
