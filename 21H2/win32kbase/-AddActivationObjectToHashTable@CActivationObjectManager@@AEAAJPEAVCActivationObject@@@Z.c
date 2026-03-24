/*
 * XREFs of ?AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C00978D8
 * Callers:
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUID@@@Z @ 0x1C0097538 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUI.c)
 * Callees:
 *     UserRtlFreeMem @ 0x1C0005BB0 (UserRtlFreeMem.c)
 *     ?HashTableAllocator@@YAPEAX_KPEAX@Z @ 0x1C00B7FA0 (-HashTableAllocator@@YAPEAX_KPEAX@Z.c)
 */

__int64 __fastcall CActivationObjectManager::AddActivationObjectToHashTable(
        CActivationObjectManager *this,
        struct CActivationObject *a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rbx
  char *v5; // r8
  char v6; // cl
  unsigned __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // r10
  __int64 v10; // r14
  _QWORD *v11; // r9
  __int64 v12; // rdx
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // [rsp+58h] [rbp+38h]
  __int64 v20; // [rsp+58h] [rbp+38h]
  __int64 v21; // [rsp+58h] [rbp+38h]

  if ( a2 )
  {
    v3 = (unsigned __int64)this + 16;
    v4 = (unsigned int)(2 * (*((_DWORD *)this + 5) >> 5));
    if ( *((_DWORD *)this + 4) >= (unsigned int)v4 )
    {
      if ( (unsigned int)v4 < 4 )
        v4 = 4LL;
      v5 = (char *)HashTableAllocator(8LL * (unsigned int)v4, 0LL);
      if ( v5 )
      {
        if ( (((_DWORD)v4 - 1) & (unsigned int)v4) != 0 )
        {
          v6 = -1;
          do
          {
            ++v6;
            LODWORD(v4) = (unsigned int)v4 >> 1;
          }
          while ( (_DWORD)v4 );
          v4 = (unsigned int)(1 << v6);
        }
        if ( (unsigned int)v4 > 0x4000000 )
          v4 = 0x4000000LL;
        v7 = (unsigned int)v4;
        if ( v5 > &v5[8 * v4] )
          v7 = 0LL;
        if ( v7 )
          memset64(v5, v3 | 1, v7);
        v8 = 0;
        v9 = -1LL << (*(_BYTE *)(v3 + 4) & 0x1F);
        if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v10 = *(_QWORD *)(v3 + 8);
            while ( 1 )
            {
              v11 = *(_QWORD **)(v10 + 8LL * v8);
              if ( ((unsigned __int8)v11 & 1) != 0 )
                break;
              *(_QWORD *)(v10 + 8LL * v8) = *v11;
              v19 = v9 & v11[1];
              v12 = (37
                   * (BYTE6(v19)
                    + 37
                    * (BYTE5(v19)
                     + 37
                     * (BYTE4(v19)
                      + 37
                      * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))
                   + HIBYTE(v19)) & (unsigned int)(v4 - 1);
              *v11 = *(_QWORD *)&v5[8 * v12];
              *(_QWORD *)&v5[8 * v12] = v11;
            }
            ++v8;
          }
          while ( v8 < *(_DWORD *)(v3 + 4) >> 5 );
        }
        v17 = *(_QWORD *)(v3 + 8);
        v18 = (32 * v4) | *(_DWORD *)(v3 + 4) & 0x1F;
        *(_QWORD *)(v3 + 8) = v5;
        *(_DWORD *)(v3 + 4) = v18;
        if ( v17 )
          UserRtlFreeMem(v17);
      }
      else if ( *(_DWORD *)(v3 + 4) < 0x20u )
      {
        return 0LL;
      }
    }
    v20 = *((_QWORD *)a2 + 8);
    *((_QWORD *)a2 + 2) = HIBYTE(v20)
                        + 37
                        * (BYTE6(v20)
                         + 37
                         * (BYTE5(v20)
                          + 37
                          * (BYTE4(v20)
                           + 37
                           * (BYTE3(v20)
                            + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883LL)))))));
    v13 = *(_DWORD *)(v3 + 4);
    v21 = *((_QWORD *)a2 + 2) & (-1LL << (v13 & 0x1F));
    v14 = *(_QWORD *)(v3 + 8);
    v15 = (37
         * (BYTE6(v21)
          + 37
          * (BYTE5(v21)
           + 37
           * (BYTE4(v21)
            + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
         + HIBYTE(v21)) & ((v13 >> 5) - 1);
    *((_QWORD *)a2 + 1) = *(_QWORD *)(v14 + 8 * v15);
    *(_QWORD *)(v14 + 8 * v15) = (char *)a2 + 8;
    ++*(_DWORD *)v3;
    return 0LL;
  }
  return 3221225485LL;
}
