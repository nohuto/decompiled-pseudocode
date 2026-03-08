/*
 * XREFs of ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x14035A528
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140359180 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x140359FF8 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z @ 0x14035A46C (-StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x14035AEA0 (RtlGetCompressionWorkSpaceSize.c)
 *     RtlNumberOfSetBits @ 0x14035C520 (RtlNumberOfSetBits.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SmCrEncStart @ 0x1409D7A3C (SmCrEncStart.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

int __fastcall ST_STORE<SM_TRAITS>::StStart(__int64 a1, __int64 a2)
{
  unsigned int v4; // edx
  int v5; // r10d
  unsigned int v6; // ecx
  int v7; // r8d
  int v8; // eax
  __int64 v9; // rsi
  void *Pool2; // rax
  USHORT v11; // cx
  int result; // eax
  ULONG v13; // ecx
  ULONG v14; // eax
  bool v15; // cc
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r9
  ULONG v20; // ecx
  int v21; // esi
  unsigned int v22; // edx
  int v23; // r8d
  int v24; // eax
  int v25; // eax
  __int64 v26; // r9
  unsigned int v27; // r8d
  _DWORD *v28; // rax
  unsigned int v29; // esi
  void *v30; // rax
  unsigned int v31; // esi
  void *v32; // rax
  int v33; // [rsp+20h] [rbp-10h]
  int v34; // [rsp+20h] [rbp-10h]
  unsigned int v35; // [rsp+78h] [rbp+48h] BYREF
  ULONG CompressBufferWorkSpaceSize; // [rsp+80h] [rbp+50h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+88h] [rbp+58h] BYREF

  CompressBufferWorkSpaceSize = 0;
  CompressFragmentWorkSpaceSize = 0;
  v4 = *(_DWORD *)(a2 + 8);
  if ( !v4 || ((v4 - 1) & v4) != 0 || v4 - 4096 > 0x1F000 )
    return -1073741453;
  v5 = *(_DWORD *)(a2 + 12);
  if ( (unsigned int)(v5 - 1) > 0x3FFFF )
    return -1073741811;
  v6 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x100) != 0 )
    return -1073741811;
  if ( (unsigned __int8)v6 == 1 )
  {
    v27 = *(_DWORD *)(a2 + 16);
    if ( !v27 )
      return -1073741811;
    if ( ((v27 - 1) & v27) != 0 )
      return -1073741811;
    if ( v27 > v4 )
      return -1073741811;
    v28 = *(_DWORD **)(a2 + 56);
    if ( !v28 || *v28 != v5 )
      return -1073741811;
  }
  if ( (_BYTE)v6 )
  {
    if ( (unsigned __int8)v6 >= 2u )
      return -1073741811;
  }
  else if ( *(_DWORD *)(a2 + 16) || *(_QWORD *)(a2 + 56) )
  {
    return -1073741811;
  }
  if ( v6 >= 0x200000
    || (*(_DWORD *)a2 & 0x600) == 0x600
    || (v6 & 0x10400) == 0x10400
    || (*(_QWORD *)(a2 + 32) == 0LL) != (*(_DWORD *)(a2 + 40) == 0) )
  {
    return -1073741811;
  }
  v7 = 0;
  if ( v4 > 0x10 )
  {
    do
      ++v7;
    while ( 16 << v7 < v4 );
  }
  *(_DWORD *)(a1 + 36) = v7;
  v8 = 1 << v7;
  *(_DWORD *)(a1 + 40) = 1 << v7;
  *(_DWORD *)(a1 + 32) = (1 << v7) - 1;
  if ( *(_DWORD *)(a2 + 8) == 0x20000 )
    v8 = (1 << v7) - 1;
  *(_DWORD *)(a1 + 40) = v8;
  if ( *(_BYTE *)a2 )
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 40) != 0 ? 16 : 4;
  *(_DWORD *)(a1 + 44) = (unsigned int)(*(_DWORD *)(a1 + 48) + 4111) >> 4;
  if ( *(_DWORD *)(a2 + 12) > (unsigned int)(1 << (32 - v7)) )
    return -1073741306;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  v9 = (unsigned int)(2 * *(_DWORD *)(a2 + 12));
  Pool2 = (void *)ExAllocatePool2(64LL, v9, 1951624563LL);
  *(_QWORD *)(a1 + 56) = Pool2;
  if ( !Pool2 )
    return -1073741670;
  memset(Pool2, 0, (unsigned int)v9);
  if ( (unsigned __int8)*(_DWORD *)a2 == 1 )
  {
    v29 = *(_DWORD *)(a2 + 12);
    v30 = (void *)ExAllocatePool2(64LL, v29, 1951624563LL);
    *(_QWORD *)(a1 + 64) = v30;
    if ( !v30 )
      return -1073741670;
    memset(v30, 0, v29);
    v31 = *(_DWORD *)(a2 + 12);
    v32 = (void *)ExAllocatePool2(64LL, v31, 1951624563LL);
    *(_QWORD *)(a1 + 72) = v32;
    if ( !v32 )
      return -1073741670;
    memset(v32, 0, v31);
  }
  v11 = 4 - ((*(_DWORD *)a2 & 0x10000) != 0);
  *(_WORD *)(a1 + 4032) = v11;
  result = RtlGetCompressionWorkSpaceSize(v11, &CompressBufferWorkSpaceSize, &CompressFragmentWorkSpaceSize);
  if ( result < 0 )
    return result;
  v13 = CompressBufferWorkSpaceSize;
  v14 = CompressFragmentWorkSpaceSize;
  v15 = CompressBufferWorkSpaceSize <= CompressFragmentWorkSpaceSize;
  *(_DWORD *)(a1 + 4028) = CompressBufferWorkSpaceSize;
  if ( v15 )
    v13 = v14;
  *(_DWORD *)(a1 + 4024) = v14;
  CompressBufferWorkSpaceSize = v13;
  if ( v13 )
  {
    v16 = ExAllocatePool2(64LL, v13, 1951624563LL);
    *(_QWORD *)(a1 + 4016) = v16;
    if ( !v16 )
      return -1073741670;
  }
  v17 = *(_QWORD *)(a2 + 48);
  if ( !v17 )
  {
    v17 = a1 + 3960;
    result = StEtaHelper::StartHelper((struct _ST_ETA_CONTEXT *)(a1 + 3960), 0);
    if ( result < 0 )
      return result;
  }
  *(_QWORD *)(a1 + 3952) = v17;
  if ( !*(_DWORD *)(a2 + 40) )
  {
LABEL_31:
    v18 = ExAllocatePool2(64LL, (-(__int64)((*(_DWORD *)a2 & 0x8000) != 0) & 0x1000) + 4096, 1951624563LL);
    *(_QWORD *)(a1 + 4208) = v18;
    if ( v18 )
    {
      if ( (unsigned __int8)*(_DWORD *)a2 != 1 )
      {
        v20 = *(_DWORD *)(a2 + 12);
        v21 = 0;
LABEL_34:
        v22 = *(_DWORD *)a2;
        if ( !v21 || (v22 & 0x4000) != 0 )
          v23 = 0;
        else
          v23 = 8;
        v24 = v23 | (*(_DWORD *)a2 >> 8) & 1;
        if ( !(_BYTE)v22 )
        {
          v25 = v24 | 0x40;
          v35 = v25;
          if ( (v22 & 0x40000) == 0 )
          {
LABEL_40:
            result = ST_STORE<SM_TRAITS>::StDmStart(a1, a1 + 80, (int *)&v35, v19, v33, v20 - v21);
            if ( result >= 0 )
            {
              if ( !v21 )
                return 0;
              v35 = v35 & 0xFFFFFFE0 | 0x16;
              result = ST_STORE<SM_TRAITS>::StDmStart(a1, a1 + 2016, (int *)&v35, v26, v34, v21);
              if ( result >= 0 )
                return 0;
            }
            return result;
          }
          v24 = v25 | 0x60;
        }
        v35 = v24;
        goto LABEL_40;
      }
      v21 = 1;
      v20 = RtlNumberOfSetBits(*(PRTL_BITMAP *)(a2 + 56));
      if ( v20 > 1 )
        goto LABEL_34;
      return -1073741811;
    }
    return -1073741670;
  }
  if ( !(unsigned __int8)*(_DWORD *)a2 )
    return -1073741066;
  result = SmCrEncStart(a1 + 4064, *(_QWORD *)(a2 + 32));
  if ( result >= 0 )
  {
    if ( (-*(_DWORD *)(a1 + 4072) & (*(_DWORD *)(a1 + 4072) + 15)) == 0x10 )
      goto LABEL_31;
    return -1073741453;
  }
  return result;
}
