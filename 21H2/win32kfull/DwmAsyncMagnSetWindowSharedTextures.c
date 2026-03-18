/*
 * XREFs of DwmAsyncMagnSetWindowSharedTextures @ 0x1C027269C
 * Callers:
 *     MagpComposeDesktop @ 0x1C0120198 (MagpComposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01CA01C (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetWindowSharedTextures(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  _QWORD *v10; // r8
  __int64 *v11; // r9
  __int64 v12; // r10
  __int64 v13; // rax
  _QWORD v15[34]; // [rsp+20h] [rbp-E0h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(v15, 0, sizeof(v15));
    v9 = *(_DWORD *)a4;
    WORD2(v15[0]) = 0x8000;
    HIDWORD(v15[7]) = *(_DWORD *)(a4 + 4);
    v15[8] = *(_QWORD *)(a4 + 8);
    LODWORD(v15[0]) = 17826024;
    LODWORD(v15[5]) = 1073741927;
    v15[6] = a2;
    v15[33] = a3;
    LODWORD(v15[7]) = v9;
    if ( v9 >= 6 )
    {
      v9 = 6;
    }
    else if ( !v9 )
    {
LABEL_8:
      EtwUpdateEvent(0LL);
      v8 = LpcRequestPort(Object, v15);
      ObfDereferenceObject(Object);
      return v8;
    }
    v10 = &v15[10];
    v11 = (__int64 *)(*(_QWORD *)(a4 + 16) + 8LL);
    v12 = v9;
    do
    {
      *(v10 - 1) = v11[1];
      *v10 = *(v11 - 1);
      v10 += 4;
      v13 = *v11;
      v11 += 3;
      *(v10 - 3) = v13;
      --v12;
    }
    while ( v12 );
    goto LABEL_8;
  }
  return v8;
}
