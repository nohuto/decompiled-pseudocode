/*
 * XREFs of ?AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C00844B0
 * Callers:
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1C0084240 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 * Callees:
 *     ?HashTableAllocator@@YAPEAX_KPEAX@Z @ 0x1C00D4294 (-HashTableAllocator@@YAPEAX_KPEAX@Z.c)
 *     UserRtlFreeMem @ 0x1C0155FE0 (UserRtlFreeMem.c)
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
  unsigned int v9; // edi
  __int64 v10; // r10
  __int64 v11; // r14
  _QWORD *v12; // r9
  __int64 v13; // rdx
  unsigned int v14; // edi
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  void *v19; // rcx
  int v20; // eax
  __int64 v21; // [rsp+20h] [rbp-10h]
  __int64 v22; // [rsp+20h] [rbp-10h]
  __int64 v23; // [rsp+60h] [rbp+30h]

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
    v9 = 0;
    v10 = -1LL << (*(_BYTE *)(this + 4) & 0x1F);
    if ( (*(_DWORD *)(this + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v11 = *(_QWORD *)(this + 8);
        while ( 1 )
        {
          v12 = *(_QWORD **)(v11 + 8LL * v9);
          if ( ((unsigned __int8)v12 & 1) != 0 )
            break;
          *(_QWORD *)(v11 + 8LL * v9) = *v12;
          v23 = v10 & v12[1];
          v13 = (37
               * (BYTE6(v23)
                + 37
                * (BYTE5(v23)
                 + 37
                 * (BYTE4(v23)
                  + 37 * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v23 + 11623883)))))))
               + HIBYTE(v23)) & (unsigned int)(v2 - 1);
          *v12 = *(_QWORD *)&v6[8 * v13];
          *(_QWORD *)&v6[8 * v13] = v12;
        }
        ++v9;
      }
      while ( v9 < *(_DWORD *)(this + 4) >> 5 );
    }
    v19 = *(void **)(this + 8);
    v20 = (32 * v2) | *(_DWORD *)(this + 4) & 0x1F;
    *(_QWORD *)(this + 8) = v6;
    *(_DWORD *)(this + 4) = v20;
    if ( v19 )
      UserRtlFreeMem(v19);
    goto LABEL_20;
  }
  if ( *(_DWORD *)(this + 4) >= 0x20u )
  {
LABEL_20:
    v21 = *((_QWORD *)a2 + 5);
    *((_QWORD *)a2 + 2) = HIBYTE(v21)
                        + 37
                        * (BYTE6(v21)
                         + 37
                         * (BYTE5(v21)
                          + 37
                          * (BYTE4(v21)
                           + 37
                           * (BYTE3(v21)
                            + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883LL)))))));
    v14 = *(_DWORD *)(this + 4);
    v22 = *((_QWORD *)a2 + 2) & (-1LL << (v14 & 0x1F));
    v15 = (v14 >> 5) - 1;
    v5 = 0;
    v16 = *(_QWORD *)(this + 8);
    v17 = (37
         * (BYTE6(v22)
          + 37
          * (BYTE5(v22)
           + 37
           * (BYTE4(v22)
            + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))
         + HIBYTE(v22)) & (unsigned int)v15;
    *((_QWORD *)a2 + 1) = *(_QWORD *)(v16 + 8 * v17);
    *(_QWORD *)(v16 + 8 * v17) = (char *)a2 + 8;
    ++*(_DWORD *)this;
  }
  return v5;
}
