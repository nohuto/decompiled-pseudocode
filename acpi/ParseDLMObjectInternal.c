__int64 __fastcall ParseDLMObjectInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  char v7; // r14
  unsigned int v8; // edi
  unsigned int NameSpaceObject; // eax
  __int64 v10; // rbx
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
  __int128 v23; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v24; // [rsp+38h] [rbp-C8h]
  signed __int64 v25; // [rsp+48h] [rbp-B8h]
  _OWORD v26[15]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = gpheapGlobal;
  memset(v26, 0, 0xC0uLL);
  v25 = 0LL;
  v23 = 0LL;
  v7 = 0;
  v24 = 0LL;
  if ( *(_WORD *)(a3 + 2) != 2 )
    return (unsigned int)-1072431089;
  NameSpaceObject = GetNameSpaceObject(*(void **)(a3 + 32));
  v8 = NameSpaceObject;
  if ( NameSpaceObject )
  {
    v10 = 0LL;
    if ( NameSpaceObject != -1072431089 )
      return v8;
LABEL_17:
    if ( !v10 )
      goto LABEL_20;
    goto LABEL_18;
  }
  v10 = MEMORY[0x60];
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(MEMORY[0x60] + 32LL), 0, 0) )
    return v8;
  if ( a4 )
  {
    v11 = *(_WORD *)(a4 + 2);
    if ( v11 == 3 )
      goto LABEL_11;
    if ( v11 == 2 )
    {
      if ( !(unsigned int)GetNameSpaceObject(*(void **)(a4 + 32)) )
      {
        a4 = 64LL;
        if ( MEMORY[0x42] == 3 )
        {
LABEL_11:
          v12 = *(_OWORD *)(v10 + 16);
          v26[0] = *(_OWORD *)v10;
          v13 = *(_OWORD *)(v10 + 32);
          v26[1] = v12;
          v14 = *(_OWORD *)(v10 + 48);
          v26[2] = v13;
          v15 = *(_OWORD *)(v10 + 64);
          v26[3] = v14;
          v16 = *(_OWORD *)(v10 + 80);
          v26[4] = v15;
          v17 = *(_OWORD *)(v10 + 96);
          v26[5] = v16;
          v18 = *(_OWORD *)(v10 + 128);
          v26[6] = v17;
          v26[7] = *(_OWORD *)(v10 + 112);
          v19 = *(_OWORD *)(v10 + 144);
          v26[8] = v18;
          v20 = *(_OWORD *)(v10 + 160);
          v26[9] = v19;
          v21 = *(_OWORD *)(v10 + 176);
          v26[10] = v20;
          v26[11] = v21;
          if ( !(unsigned int)DupObjData(v4, (__int64)&v23, a4) )
          {
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 72), v25, 0LL) )
            {
              v7 = 1;
            }
            else
            {
              *(_OWORD *)(v10 + 40) = v23;
              *(_OWORD *)(v10 + 56) = v24;
              *(_QWORD *)(v10 + 72) = v25;
              _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 32), 2, 0);
            }
          }
          goto LABEL_19;
        }
      }
      v8 = -1072431089;
    }
    else
    {
      v8 = -1072431089;
    }
    goto LABEL_17;
  }
LABEL_18:
  _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 32), 1, 0);
LABEL_19:
  v8 = 0;
LABEL_20:
  if ( v7 )
    FreeDataBuffs((__int64)&v23, 1u);
  return v8;
}
