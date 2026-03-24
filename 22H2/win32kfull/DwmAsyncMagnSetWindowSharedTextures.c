/*
 * XREFs of DwmAsyncMagnSetWindowSharedTextures @ 0x1C0274734
 * Callers:
 *     zzzComposeDesktop @ 0x1C00EC528 (zzzComposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01CCC94 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetWindowSharedTextures(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  _QWORD *v9; // r8
  __int64 *v10; // r9
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // r10
  __int64 v14; // rax
  _QWORD v16[34]; // [rsp+20h] [rbp-E0h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(v16, 0, sizeof(v16));
    v11 = *(_DWORD *)a4;
    WORD2(v16[0]) = 0x8000;
    v12 = 6;
    HIDWORD(v16[7]) = *(_DWORD *)(a4 + 4);
    if ( v11 < 6 )
      v12 = v11;
    v16[8] = *(_QWORD *)(a4 + 8);
    LODWORD(v16[0]) = 17826024;
    LODWORD(v16[5]) = 1073741923;
    v16[6] = a2;
    v16[33] = a3;
    LODWORD(v16[7]) = v11;
    if ( v12 )
    {
      v9 = &v16[10];
      v10 = (__int64 *)(*(_QWORD *)(a4 + 16) + 8LL);
      v13 = v12;
      do
      {
        *(v9 - 1) = v10[1];
        *v9 = *(v10 - 1);
        v9 += 4;
        v14 = *v10;
        v10 += 3;
        *(v9 - 3) = v14;
        --v13;
      }
      while ( v13 );
    }
    EtwUpdateEvent(0LL, 1073741923LL, v9, v10);
    v8 = LpcRequestPort(Object, v16);
    ObfDereferenceObject(Object);
  }
  return v8;
}
