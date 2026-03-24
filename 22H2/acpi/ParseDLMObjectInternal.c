/*
 * XREFs of ParseDLMObjectInternal @ 0x1C00658A8
 * Callers:
 *     PerformDLMObjectBindings @ 0x1C0065AE8 (PerformDLMObjectBindings.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     DereferenceObjectEx @ 0x1C0003DA4 (DereferenceObjectEx.c)
 *     DupObjData @ 0x1C000A400 (DupObjData.c)
 *     GetNameSpaceObject @ 0x1C002183C (GetNameSpaceObject.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

__int64 __fastcall ParseDLMObjectInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _SLIST_ENTRY *v4; // r12
  char v8; // r14
  __int64 v9; // rbx
  unsigned int NameSpaceObject; // edi
  __int16 v11; // ax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  unsigned __int64 v23; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v24; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v25; // [rsp+38h] [rbp-C8h]
  signed __int64 v26; // [rsp+48h] [rbp-B8h]
  _OWORD v27[15]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v28; // [rsp+160h] [rbp+60h] BYREF

  v4 = (struct _SLIST_ENTRY *)gpheapGlobal;
  memset(v27, 0, 0xC0uLL);
  v26 = 0LL;
  v24 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  v28 = 0LL;
  if ( *(_WORD *)(a3 + 2) != 2 )
    return (unsigned int)-1072431089;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a3 + 32), a2, (__int64 *)&v28, 0);
  if ( NameSpaceObject )
    goto LABEL_18;
  v9 = *(_QWORD *)(v28 + 96);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 32), 0, 0) )
  {
    if ( !a4 )
      goto LABEL_16;
    v11 = *(_WORD *)(a4 + 2);
    if ( v11 != 3 )
    {
      if ( v11 != 2
        || (unsigned int)GetNameSpaceObject(*(_BYTE **)(a4 + 32), a2, (__int64 *)&v23, 0)
        || (a4 = v23 + 64, *(_WORD *)(v23 + 66) != 3) )
      {
        NameSpaceObject = -1072431089;
        goto LABEL_19;
      }
    }
    if ( a4 )
    {
      v12 = *(_OWORD *)(v9 + 16);
      v27[0] = *(_OWORD *)v9;
      v13 = *(_OWORD *)(v9 + 32);
      v27[1] = v12;
      v14 = *(_OWORD *)(v9 + 48);
      v27[2] = v13;
      v15 = *(_OWORD *)(v9 + 64);
      v27[3] = v14;
      v16 = *(_OWORD *)(v9 + 80);
      v27[4] = v15;
      v17 = *(_OWORD *)(v9 + 96);
      v27[5] = v16;
      v18 = *(_OWORD *)(v9 + 128);
      v27[6] = v17;
      v27[7] = *(_OWORD *)(v9 + 112);
      v19 = *(_OWORD *)(v9 + 144);
      v27[8] = v18;
      v20 = *(_OWORD *)(v9 + 160);
      v27[9] = v19;
      v21 = *(_OWORD *)(v9 + 176);
      v27[10] = v20;
      v27[11] = v21;
      if ( !(unsigned int)DupObjData(v4, (__int64)&v24, a4) )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 72), v26, 0LL) )
        {
          v8 = 1;
        }
        else
        {
          *(_OWORD *)(v9 + 40) = v24;
          *(_OWORD *)(v9 + 56) = v25;
          *(_QWORD *)(v9 + 72) = v26;
          _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 32), 2, 0);
        }
      }
    }
    else
    {
LABEL_16:
      _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 32), 1, 0);
    }
    NameSpaceObject = 0;
LABEL_18:
    if ( NameSpaceObject != -1072431089 )
    {
LABEL_21:
      if ( v8 )
        FreeDataBuffs((__int64)&v24, 1u);
      goto LABEL_23;
    }
LABEL_19:
    if ( v9 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 32), 1, 0);
      NameSpaceObject = 0;
    }
    goto LABEL_21;
  }
LABEL_23:
  if ( v28 )
    DereferenceObjectEx(v28);
  if ( v23 )
    DereferenceObjectEx(v23);
  return NameSpaceObject;
}
