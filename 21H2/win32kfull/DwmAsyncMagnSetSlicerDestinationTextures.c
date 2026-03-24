/*
 * XREFs of DwmAsyncMagnSetSlicerDestinationTextures @ 0x1C02749BC
 * Callers:
 *     MagSlicerControl @ 0x1C01CDFF4 (MagSlicerControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetSlicerDestinationTextures(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // edi
  __int64 v9; // r8
  char *v10; // r9
  unsigned int v11; // ecx
  unsigned int v12; // eax
  char *v13; // rcx
  char *v14; // r10
  char *v15; // r11
  __int64 v16; // rbx
  _QWORD v18[34]; // [rsp+20h] [rbp-E0h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(v18, 0, sizeof(v18));
    v11 = *(_DWORD *)a4;
    WORD2(v18[0]) = 0x8000;
    HIDWORD(v18[7]) = *(_DWORD *)(a4 + 4);
    v18[8] = *(_QWORD *)(a4 + 8);
    v12 = 6;
    LODWORD(v18[0]) = 17826024;
    LODWORD(v18[5]) = 1073741923;
    if ( v11 < 6 )
      v12 = v11;
    v18[6] = a2;
    v18[33] = a3;
    LODWORD(v18[7]) = v11;
    if ( v12 )
    {
      v13 = (char *)&v18[7] - a4;
      v10 = (char *)&v18[8] - a4;
      v14 = (char *)&v18[9] - a4;
      v15 = (char *)&v18[10] - a4;
      v9 = a4 + 16;
      v16 = v12;
      do
      {
        *(_QWORD *)&v13[v9] = *(_QWORD *)(v9 + 16);
        *(_QWORD *)&v10[v9] = *(_QWORD *)v9;
        *(_QWORD *)&v14[v9] = *(_QWORD *)(v9 + 8);
        *(_DWORD *)&v15[v9] = 2 * (*(_DWORD *)(v9 + 24) & 1);
        v9 += 32LL;
        --v16;
      }
      while ( v16 );
    }
    EtwUpdateEvent(0LL, 1073741923LL, v9, v10);
    v8 = LpcRequestPort(Object, v18);
    ObfDereferenceObject(Object);
  }
  return v8;
}
