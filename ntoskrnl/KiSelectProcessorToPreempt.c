/*
 * XREFs of KiSelectProcessorToPreempt @ 0x14045997C
 * Callers:
 *     KiHeteroChooseTargetProcessor @ 0x140459316 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     KiIsQosGroupingActive @ 0x1402ED844 (KiIsQosGroupingActive.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall KiSelectProcessorToPreempt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned __int8 *v8; // rdx
  __int64 v9; // rdi
  _BYTE *v10; // rbp
  __int64 v11; // r12
  char v12; // r8
  int v13; // r9d
  unsigned int v14; // r11d
  int v15; // eax
  __int64 v16; // r15
  unsigned int v17; // r10d
  _BYTE *v18; // rbx
  unsigned int v19; // edx
  _BYTE *v20; // r10
  _BYTE v22[64]; // [rsp+20h] [rbp-78h] BYREF

  v5 = *(_QWORD *)(a2 + 34880) & a3;
  if ( ((v5 - 1) & v5) == 0 )
    return a2;
  v8 = *(unsigned __int8 **)(a2 + 34888);
  v9 = v8[657];
  v10 = &v22[v9];
  memmove(&v22[v9], v8 + 528, v8[656]);
  v11 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 264LL);
  if ( KiIsQosGroupingActive() && (v11 & v5) != 0 )
  {
    v15 = *(_DWORD *)(a1 + 512);
    v16 = (unsigned int)(v13 + 2);
    if ( (((unsigned __int8)v15 - (_DWORD)v16) & 0xFFFFFFFA) == 0 )
    {
      v17 = v9;
      if ( (unsigned int)v9 < v14 )
      {
        v18 = &v22[v9];
        do
        {
          if ( ((v16 << v17) & v11 & v5) != 0 && (*v18 & 0x7F) < v12 )
          {
            v13 = v17;
            v12 = *v18 & 0x7F;
          }
          v17 += v16;
          v18 += v16;
        }
        while ( v17 < v14 );
      }
    }
  }
  else
  {
    v16 = 1LL;
  }
  if ( !a4 )
    goto LABEL_21;
  if ( v13 >= 0 )
    return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a2 + 208) + v13]];
  v19 = v9;
  if ( (unsigned int)v9 < v14 )
  {
    v20 = &v22[v9];
    do
    {
      if ( ((v16 << v19) & a4) != 0 && (*v20 & 0x7F) < v12 )
      {
        v13 = v19;
        v12 = *v20 & 0x7F;
      }
      v19 += v16;
      v20 += v16;
    }
    while ( v19 < v14 );
LABEL_21:
    if ( v13 >= 0 )
      return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a2 + 208) + v13]];
    if ( (unsigned int)v9 < v14 )
    {
      do
      {
        if ( ((v16 << v9) & v5) != 0 && (*v10 & 0x7F) < v12 )
        {
          v13 = v9;
          v12 = *v10 & 0x7F;
        }
        LODWORD(v9) = v16 + v9;
        v10 += v16;
      }
      while ( (unsigned int)v9 < v14 );
      if ( v13 >= 0 )
        return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a2 + 208) + v13]];
    }
  }
  return a2;
}
