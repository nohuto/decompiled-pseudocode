/*
 * XREFs of GetProcessorGroupInformation @ 0x1C000B924
 * Callers:
 *     NVMeControllerFilterResouceRequirements @ 0x1C000D8AC (NVMeControllerFilterResouceRequirements.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     FreeProcessorGroupInfo @ 0x1C000B614 (FreeProcessorGroupInfo.c)
 */

char __fastcall GetProcessorGroupInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v5; // rsi
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  unsigned __int16 v11; // bp
  __int64 *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // ecx
  unsigned int v16; // eax

  FreeProcessorGroupInfo(a1, a2, a3, a4);
  v5 = (unsigned __int16 *)(a1 + 216);
  StorPortExtendedFunction(18LL, a1, a1 + 216, v6);
  v10 = *(unsigned __int16 *)(a1 + 216);
  v11 = 0;
  if ( (_WORD)v10
    && (v12 = (__int64 *)(a1 + 232),
        StorPortExtendedFunction(0LL, a1, (unsigned int)(16 * v10), 1701672526LL),
        *(_QWORD *)(a1 + 232)) )
  {
    NVMeZeroMemory(*(void **)(a1 + 232), 16 * *v5);
    if ( *v5 )
    {
      v13 = *v12;
      do
      {
        v14 = 16LL * v11;
        StorPortExtendedFunction(19LL, a1, v11, v14 + v13 + 8);
        *(_WORD *)(v14 + *v12) = v11++;
        v15 = *(_DWORD *)(v14 + *v12 + 8) - ((*(_DWORD *)(v14 + *v12 + 8) >> 1) & 0x55555555);
        *(_WORD *)(v14 + *v12 + 2) = (unsigned __int16)((16843009
                                                       * (((v15 & 0x33333333)
                                                         + ((v15 >> 2) & 0x33333333)
                                                         + (((v15 & 0x33333333) + ((v15 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
        v16 = HIDWORD(*(_QWORD *)(v14 + *v12 + 8))
            - (((unsigned int)HIDWORD(*(_QWORD *)(v14 + *v12 + 8)) >> 1) & 0x55555555);
        *(_WORD *)(v14 + *v12 + 2) += (unsigned __int16)((16843009
                                                        * (((v16 & 0x33333333)
                                                          + ((v16 >> 2) & 0x33333333)
                                                          + (((v16 & 0x33333333) + ((v16 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
        v13 = *v12;
        *(_WORD *)(a1 + 218) += *(_WORD *)(v14 + *v12 + 2);
      }
      while ( v11 < *v5 );
    }
    return 1;
  }
  else
  {
    FreeProcessorGroupInfo(a1, v7, v8, v9);
    return 0;
  }
}
