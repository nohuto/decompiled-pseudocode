/*
 * XREFs of ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEA_N@Z @ 0x1C006C978
 * Callers:
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C006B100 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N0_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 * Callees:
 *     ?GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C006C76C (-GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?IncreaseAddedBufferSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C006C7FC (-IncreaseAddedBufferSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C006C830 (-IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?IncreaseUpdatedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C006C864 (-IncreaseUpdatedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C006DBB4 (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z @ 0x1C006EC5C (-Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareIncrementalUpdateForStateManager(
        CEndpointResourceStateManager *this,
        struct CFlipPresentUpdate *a2,
        bool *a3)
{
  CEndpointResourceStateManager *v3; // r9
  bool *v4; // r11
  signed int v6; // edi
  int v7; // r8d
  __int64 v8; // r10
  signed int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // eax
  _QWORD *v12; // rsi
  _QWORD *v13; // r9
  __int64 v14; // r10
  __int64 v15; // rax
  int v16; // eax
  CEndpointResourceStateManager *v17; // r8
  _DWORD *v18; // r9
  _DWORD *v19; // r11
  char v20; // al
  CEndpointResourceStateManager *v21; // r10
  _DWORD *v22; // rcx
  __int64 v23; // rax
  _DWORD *v24; // rdx
  _QWORD *v25; // rbx
  _DWORD *v26; // r13
  _DWORD *v27; // r14
  _DWORD *v28; // r15
  _QWORD *v29; // r12
  _DWORD *v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // r8
  CPoolBufferResource *v33; // rdx
  __int64 v34; // rax
  _DWORD *v35; // rdx
  PVOID P; // [rsp+20h] [rbp-50h] BYREF
  int v38; // [rsp+28h] [rbp-48h]
  __int128 v39; // [rsp+30h] [rbp-40h]
  __int128 v40; // [rsp+40h] [rbp-30h]
  _DWORD *v41; // [rsp+50h] [rbp-20h]
  __int64 v42; // [rsp+58h] [rbp-18h]
  __int64 v43; // [rsp+60h] [rbp-10h]
  int v44; // [rsp+68h] [rbp-8h]
  struct CFlipPresentUpdate *v45; // [rsp+A8h] [rbp+38h]

  v45 = a2;
  v3 = *(CEndpointResourceStateManager **)this;
  P = 0LL;
  v38 = 0;
  v4 = a3;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v6 = 0;
  v44 = 0;
  v7 = 0;
  do
  {
    if ( v3 == this )
      break;
    v8 = (__int64)v3 + 24;
    if ( !v3 )
      v8 = 32LL;
    if ( (*(_BYTE *)v8 & 1) != 0 )
    {
      v9 = CResourceStateUpdateSerializer::IncreaseAddedBufferSize((CResourceStateUpdateSerializer *)&P, 0x10u, 0);
      v7 = HIDWORD(v42);
      v6 = v9;
      *v4 = 0;
    }
    if ( v6 >= 0 && (*(_BYTE *)v8 & 2) != 0 )
    {
      v10 = v7;
      *v4 = 0;
      v11 = v7 + 16;
      v7 = -1;
      if ( v11 >= v10 )
        v7 = v11;
      v6 = v11 < v10 ? 0xC0000095 : 0;
      HIDWORD(v42) = v7;
    }
    v3 = *(CEndpointResourceStateManager **)v3;
  }
  while ( v6 >= 0 );
  v12 = (_QWORD *)((char *)this + 16);
  v13 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v6 >= 0 )
  {
    do
    {
      if ( v13 == v12 )
        break;
      v14 = (__int64)(v13 + 3);
      if ( !v13 )
        v14 = 32LL;
      if ( (*(_BYTE *)v14 & 1) != 0 )
      {
        v6 = CResourceStateUpdateSerializer::IncreaseAddedContentSize((CResourceStateUpdateSerializer *)&P, 0x10u, 0);
        *v4 = 0;
      }
      if ( v6 >= 0 )
      {
        v15 = (__int64)(v13 + 6);
        if ( !v13 )
          v15 = 56LL;
        if ( (*(_BYTE *)v15 & 1) != 0 )
          v6 = CResourceStateUpdateSerializer::IncreaseUpdatedContentSize(
                 (CResourceStateUpdateSerializer *)&P,
                 (__int64)a2,
                 0);
        if ( v6 >= 0 && (*(_BYTE *)v14 & 2) != 0 )
        {
          a2 = (struct CFlipPresentUpdate *)HIDWORD(v43);
          v16 = -1;
          *v4 = 0;
          if ( (int)a2 + 16 >= (unsigned int)a2 )
            v16 = (_DWORD)a2 + 16;
          v6 = (int)a2 + 16 < (unsigned int)a2 ? 0xC0000095 : 0;
          HIDWORD(v43) = v16;
        }
      }
      v13 = (_QWORD *)*v13;
    }
    while ( v6 >= 0 );
    if ( v6 >= 0 )
    {
      v6 = CResourceStateUpdateSerializer::Allocate((CResourceStateUpdateSerializer *)&P, 0x62754346u);
      if ( v6 >= 0 )
      {
        v17 = *(CEndpointResourceStateManager **)this;
        if ( *(CEndpointResourceStateManager **)this != this )
        {
          v18 = (_DWORD *)*((_QWORD *)&v39 + 1);
          v19 = (_DWORD *)v39;
          do
          {
            v20 = *((_BYTE *)v17 + 24);
            v21 = *(CEndpointResourceStateManager **)v17;
            if ( (v20 & 1) != 0 )
            {
              *v19 = 2;
              v22 = v19;
              v23 = *((_QWORD *)v17 + 2);
              v19 += 4;
              *((_QWORD *)v22 + 1) = v23;
              ++*(_DWORD *)(v23 + 24);
              *((_BYTE *)v17 + 24) |= 4u;
              v20 = *((_BYTE *)v17 + 24);
            }
            if ( (v20 & 2) != 0 )
            {
              *v18 = 0;
              v24 = v18;
              v18 += 4;
              *((_QWORD *)v24 + 1) = *(_QWORD *)(*((_QWORD *)v17 + 2) + 40LL);
              *((_BYTE *)v17 + 24) |= 8u;
            }
            v17 = v21;
          }
          while ( v21 != this );
          *((_QWORD *)&v39 + 1) = v18;
          *(_QWORD *)&v39 = v19;
        }
        v25 = (_QWORD *)*v12;
        if ( (_QWORD *)*v12 != v12 )
        {
          v26 = v41;
          v27 = (_DWORD *)*((_QWORD *)&v40 + 1);
          v28 = (_DWORD *)v40;
          do
          {
            v29 = (_QWORD *)*v25;
            if ( (v25[3] & 1) != 0 )
            {
              *v28 = 3;
              v30 = v28;
              v31 = v25[2];
              v28 += 4;
              *((_QWORD *)v30 + 1) = v31;
              ++*(_DWORD *)(v31 + 24);
              *((_BYTE *)v25 + 24) |= 4u;
            }
            if ( (v25[6] & 1) != 0 )
            {
              *v26 = 4;
              v32 = v26;
              v26 += 8;
              v33 = (CPoolBufferResource *)v25[5];
              v32[1] = *(_QWORD *)(v25[2] + 40LL);
              v34 = v25[4];
              v32[3] = v34;
              if ( v34 )
                ++*(_DWORD *)(v34 + 8);
              v32[2] = v33;
              if ( v33 )
              {
                ++*((_DWORD *)v33 + 6);
                CPoolBufferResource::AddUsageReference(v33);
              }
              *((_BYTE *)v25 + 48) |= 2u;
            }
            if ( (v25[3] & 2) != 0 )
            {
              *v27 = 1;
              v35 = v27;
              v27 += 4;
              *((_QWORD *)v35 + 1) = *(_QWORD *)(v25[2] + 40LL);
              *((_BYTE *)v25 + 24) |= 8u;
            }
            v25 = v29;
          }
          while ( v29 != v12 );
          *((_QWORD *)&v40 + 1) = v27;
          *(_QWORD *)&v40 = v28;
          v41 = v26;
        }
        CResourceStateUpdateSerializer::GetSerializedUpdate((CResourceStateUpdateSerializer *)&P, v45);
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v6;
}
