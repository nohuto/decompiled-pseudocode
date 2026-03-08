/*
 * XREFs of ACPIModuleIsValidSpare @ 0x1C0089340
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIFreeDataBuffs @ 0x1C00482C4 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 *     ACPIEvaluateSpareDsm @ 0x1C0089068 (ACPIEvaluateSpareDsm.c)
 */

char __fastcall ACPIModuleIsValidSpare(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rcx
  char v4; // di
  __int64 *v5; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-50h] BYREF
  __int128 v10; // [rsp+30h] [rbp-40h]
  _BYTE *v11; // [rsp+40h] [rbp-30h]
  __int128 v12[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v13; // [rsp+68h] [rbp-8h]

  v2 = *(_QWORD **)(a1 + 760);
  v11 = 0LL;
  v9 = 0LL;
  v4 = 0;
  v10 = 0LL;
  v5 = AMLIGetNamedChild(v2, 1297302623);
  if ( v5 )
  {
    v12[0] = 0LL;
    WORD1(v12[0]) = 1;
    v12[1] = a2;
    v13 = 0LL;
    v6 = ACPIEvaluateSpareDsm(v5, 1u, v12, (__int64)&v9);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v5, v7);
    if ( v6 >= 0 && (WORD1(v9) == 1 && !(_QWORD)v10 || WORD1(v9) == 2 && *v11 == 48) )
      v4 = 1;
  }
  AMLIFreeDataBuffs((__int64)&v9);
  return v4;
}
