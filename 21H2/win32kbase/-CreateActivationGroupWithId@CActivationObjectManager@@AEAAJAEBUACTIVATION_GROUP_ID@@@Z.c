/*
 * XREFs of ?CreateActivationGroupWithId@CActivationObjectManager@@AEAAJAEBUACTIVATION_GROUP_ID@@@Z @ 0x1C00B5578
 * Callers:
 *     ??0CActivationObjectManager@@AEAA@XZ @ 0x1C008BDCC (--0CActivationObjectManager@@AEAA@XZ.c)
 * Callees:
 *     UserRtlFreeMem @ 0x1C0005BB0 (UserRtlFreeMem.c)
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004CFF4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?HashTableAllocator@@YAPEAX_KPEAX@Z @ 0x1C00B7FA0 (-HashTableAllocator@@YAPEAX_KPEAX@Z.c)
 */

__int64 __fastcall CActivationObjectManager::CreateActivationGroupWithId(
        unsigned __int64 this,
        const struct ACTIVATION_GROUP_ID *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  _QWORD *v6; // r9
  char *v8; // r8
  char v9; // cl
  unsigned __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // r10
  __int64 v13; // r14
  _QWORD *v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  unsigned int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // [rsp+90h] [rbp+30h]
  __int64 v23; // [rsp+90h] [rbp+30h]

  v2 = (unsigned int)(2 * (*(_DWORD *)(this + 4) >> 5));
  if ( *(_DWORD *)this >= (unsigned int)v2 )
  {
    if ( (unsigned int)v2 < 4 )
      v2 = 4LL;
    v8 = (char *)HashTableAllocator(8LL * (unsigned int)v2, 0LL);
    if ( v8 )
    {
      if ( (((_DWORD)v2 - 1) & (unsigned int)v2) != 0 )
      {
        v9 = -1;
        do
        {
          ++v9;
          LODWORD(v2) = (unsigned int)v2 >> 1;
        }
        while ( (_DWORD)v2 );
        v2 = (unsigned int)(1 << v9);
      }
      if ( (unsigned int)v2 > 0x4000000 )
        v2 = 0x4000000LL;
      v10 = (unsigned int)v2;
      if ( v8 > &v8[8 * v2] )
        v10 = 0LL;
      if ( v10 )
        memset64(v8, this | 1, v10);
      v11 = 0;
      v12 = -1LL << (*(_BYTE *)(this + 4) & 0x1F);
      if ( (*(_DWORD *)(this + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v13 = *(_QWORD *)(this + 8);
          while ( 1 )
          {
            v14 = *(_QWORD **)(v13 + 8LL * v11);
            if ( ((unsigned __int8)v14 & 1) != 0 )
              break;
            *(_QWORD *)(v13 + 8LL * v11) = *v14;
            v22 = v12 & v14[1];
            v15 = (37
                 * (BYTE6(v22)
                  + 37
                  * (BYTE5(v22)
                   + 37
                   * (BYTE4(v22)
                    + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))
                 + HIBYTE(v22)) & (unsigned int)(v2 - 1);
            *v14 = *(_QWORD *)&v8[8 * v15];
            *(_QWORD *)&v8[8 * v15] = v14;
          }
          ++v11;
        }
        while ( v11 < *(_DWORD *)(this + 4) >> 5 );
      }
      v16 = *(_QWORD *)(this + 8);
      v17 = *(_DWORD *)(this + 4) & 0x1F | (32 * v2);
      *(_QWORD *)(this + 8) = v8;
      *(_DWORD *)(this + 4) = v17;
      if ( v16 )
        UserRtlFreeMem(v16);
    }
    else if ( *(_DWORD *)(this + 4) < 0x20u )
    {
      return 0LL;
    }
  }
  v5 = Win32AllocPool(48LL, 0x6D676155u);
  v6 = (_QWORD *)v5;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 16) = *(_DWORD *)a2;
    *(_QWORD *)(v5 + 20) = 0LL;
    *(_QWORD *)(v5 + 40) = v5 + 32;
    *(_QWORD *)(v5 + 32) = v5 + 32;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v18 = *((unsigned __int8 *)a2 + 3)
        + 37
        * (*((unsigned __int8 *)a2 + 2)
         + 37 * (*((unsigned __int8 *)a2 + 1) + 37 * (*(unsigned __int8 *)a2 + 11623883LL)));
    v6[1] = v18;
    v19 = *(_DWORD *)(this + 4);
    v23 = v18 & (-1LL << (v19 & 0x1F));
    v20 = *(_QWORD *)(this + 8);
    v21 = (37
         * (BYTE6(v23)
          + 37
          * (BYTE5(v23)
           + 37
           * (BYTE4(v23)
            + 37 * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v23 + 11623883)))))))
         + HIBYTE(v23)) & ((v19 >> 5) - 1);
    *v6 = *(_QWORD *)(v20 + 8 * v21);
    *(_QWORD *)(v20 + 8 * v21) = v6;
    ++*(_DWORD *)this;
    InputExtensibilityCallout::CoreMsgSendMessage(v20, 11);
  }
  return 0LL;
}
