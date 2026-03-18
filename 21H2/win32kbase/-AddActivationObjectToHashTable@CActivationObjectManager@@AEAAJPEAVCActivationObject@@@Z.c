/*
 * XREFs of ?AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C00919E0
 * Callers:
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1C00917C4 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x1C0009A80 (GreDeleteFastMutex.c)
 *     ?HashTableAllocator@@YAPEAX_KPEAX@Z @ 0x1C00C58E8 (-HashTableAllocator@@YAPEAX_KPEAX@Z.c)
 */

__int64 __fastcall CActivationObjectManager::AddActivationObjectToHashTable(
        unsigned __int64 this,
        struct CActivationObject *a2)
{
  __int64 v2; // rbx
  unsigned int v5; // edi
  char *v6; // r8
  char v7; // cl
  unsigned __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // edi
  __int64 v11; // r10
  __int64 v12; // r14
  _QWORD *v13; // r9
  __int64 v14; // rdx
  unsigned int v15; // edi
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdx
  void *v20; // rcx
  __int64 v21; // [rsp+50h] [rbp+30h]
  __int64 v22; // [rsp+50h] [rbp+30h]
  __int64 v23; // [rsp+50h] [rbp+30h]

  v2 = (unsigned int)(2 * (*(_DWORD *)(this + 4) >> 5));
  v5 = -1073741801;
  if ( *(_DWORD *)this < (unsigned int)v2 )
    goto LABEL_20;
  if ( (unsigned int)v2 < 4 )
    v2 = 4LL;
  v6 = (char *)HashTableAllocator(8LL * (unsigned int)v2, 0LL);
  if ( v6 )
  {
    if ( (((_DWORD)v2 - 1) & (unsigned int)v2) != 0 )
    {
      v7 = -1;
      do
      {
        ++v7;
        LODWORD(v2) = (unsigned int)v2 >> 1;
      }
      while ( (_DWORD)v2 );
      v2 = (unsigned int)(1 << v7);
    }
    if ( (unsigned int)v2 > 0x4000000 )
      v2 = 0x4000000LL;
    v8 = (unsigned int)v2;
    if ( v6 > &v6[8 * v2] )
      v8 = 0LL;
    if ( v8 )
      memset64(v6, this | 1, v8);
    v9 = *(_DWORD *)(this + 4);
    v10 = 0;
    v11 = -1LL << (*(_BYTE *)(this + 4) & 0x1F);
    if ( (v9 & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v12 = *(_QWORD *)(this + 8);
        while ( 1 )
        {
          v13 = *(_QWORD **)(v12 + 8LL * v10);
          if ( ((unsigned __int8)v13 & 1) != 0 )
            break;
          *(_QWORD *)(v12 + 8LL * v10) = *v13;
          v21 = v11 & v13[1];
          v14 = (37
               * (BYTE6(v21)
                + 37
                * (BYTE5(v21)
                 + 37
                 * (BYTE4(v21)
                  + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
               + HIBYTE(v21)) & (unsigned int)(v2 - 1);
          *v13 = *(_QWORD *)&v6[8 * v14];
          *(_QWORD *)&v6[8 * v14] = v13;
        }
        v9 = *(_DWORD *)(this + 4);
        ++v10;
      }
      while ( v10 < v9 >> 5 );
    }
    v20 = *(void **)(this + 8);
    *(_QWORD *)(this + 8) = v6;
    *(_DWORD *)(this + 4) = (32 * v2) | v9 & 0x1F;
    if ( v20 )
      GreDeleteFastMutex(v20);
    goto LABEL_20;
  }
  if ( *(_DWORD *)(this + 4) >= 0x20u )
  {
LABEL_20:
    v22 = *((_QWORD *)a2 + 5);
    *((_QWORD *)a2 + 2) = HIBYTE(v22)
                        + 37
                        * (BYTE6(v22)
                         + 37
                         * (BYTE5(v22)
                          + 37
                          * (BYTE4(v22)
                           + 37
                           * (BYTE3(v22)
                            + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883LL)))))));
    v15 = *(_DWORD *)(this + 4);
    v23 = *((_QWORD *)a2 + 2) & (-1LL << (v15 & 0x1F));
    v16 = (v15 >> 5) - 1;
    v5 = 0;
    v17 = *(_QWORD *)(this + 8);
    v18 = (37
         * (BYTE6(v23)
          + 37
          * (BYTE5(v23)
           + 37
           * (BYTE4(v23)
            + 37 * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v23 + 11623883)))))))
         + HIBYTE(v23)) & (unsigned int)v16;
    *((_QWORD *)a2 + 1) = *(_QWORD *)(v17 + 8 * v18);
    *(_QWORD *)(v17 + 8 * v18) = (char *)a2 + 8;
    ++*(_DWORD *)this;
  }
  return v5;
}
