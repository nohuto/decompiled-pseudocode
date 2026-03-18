/*
 * XREFs of GetProcessorGroupInformation @ 0x1C000D57C
 * Callers:
 *     NVMeControllerFilterResourceRequirements @ 0x1C000D2BC (NVMeControllerFilterResourceRequirements.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     FreeProcessorGroupInfo @ 0x1C000D700 (FreeProcessorGroupInfo.c)
 */

char __fastcall GetProcessorGroupInformation(__int64 a1)
{
  unsigned __int16 *v2; // rsi
  __int64 v3; // r9
  int v4; // eax
  unsigned __int16 v5; // bp
  __int64 *v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // ecx
  unsigned int v10; // eax

  ((void (*)(void))FreeProcessorGroupInfo)();
  v2 = (unsigned __int16 *)(a1 + 232);
  StorPortExtendedFunction(18LL, a1, a1 + 232, v3);
  v4 = *(unsigned __int16 *)(a1 + 232);
  v5 = 0;
  if ( (_WORD)v4
    && (v6 = (__int64 *)(a1 + 248),
        StorPortExtendedFunction(0LL, a1, (unsigned int)(16 * v4), 1701672526LL),
        *(_QWORD *)(a1 + 248)) )
  {
    NVMeZeroMemory(*(void **)(a1 + 248), 16 * *v2);
    if ( *v2 )
    {
      v7 = *v6;
      do
      {
        v8 = 16LL * v5;
        StorPortExtendedFunction(19LL, a1, v5, v8 + v7 + 8);
        *(_WORD *)(v8 + *v6) = v5++;
        v9 = *(_DWORD *)(v8 + *v6 + 8) - ((*(_DWORD *)(v8 + *v6 + 8) >> 1) & 0x55555555);
        *(_WORD *)(v8 + *v6 + 2) = (unsigned __int16)((16843009
                                                     * (((v9 & 0x33333333)
                                                       + ((v9 >> 2) & 0x33333333)
                                                       + (((v9 & 0x33333333) + ((v9 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
        v10 = HIDWORD(*(_QWORD *)(v8 + *v6 + 8))
            - (((unsigned int)HIDWORD(*(_QWORD *)(v8 + *v6 + 8)) >> 1) & 0x55555555);
        *(_WORD *)(v8 + *v6 + 2) += (unsigned __int16)((16843009
                                                      * (((v10 & 0x33333333)
                                                        + ((v10 >> 2) & 0x33333333)
                                                        + (((v10 & 0x33333333) + ((v10 >> 2) & 0x33333333)) >> 4)) & 0xF0F0F0F)) >> 16) >> 8;
        v7 = *v6;
        *(_WORD *)(a1 + 234) += *(_WORD *)(v8 + *v6 + 2);
      }
      while ( v5 < *v2 );
    }
    return 1;
  }
  else
  {
    FreeProcessorGroupInfo(a1);
    return 0;
  }
}
