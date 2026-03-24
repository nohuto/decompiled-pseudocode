/*
 * XREFs of DwmAsyncMagnSetWindowFilterList @ 0x1C0274C04
 * Callers:
 *     zzzComposeDesktop @ 0x1C00EC878 (zzzComposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01CD254 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetWindowFilterList(PVOID Object, __int64 a2, __int64 a3, int *a4)
{
  unsigned int v8; // ebx
  _QWORD *v9; // r8
  __int64 v10; // r9
  int v11; // ecx
  __int64 v12; // r10
  _QWORD v14[34]; // [rsp+20h] [rbp-E0h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(v14, 0, sizeof(v14));
    v11 = *a4;
    WORD2(v14[0]) = 0x8000;
    HIDWORD(v14[7]) = a4[1];
    LODWORD(v14[0]) = 17826024;
    LODWORD(v14[5]) = 1073741922;
    v12 = (unsigned int)(HIDWORD(v14[7]) + v11);
    v14[6] = a2;
    v14[33] = a3;
    LODWORD(v14[7]) = v11;
    if ( (unsigned int)v12 >= 0x19 )
      v12 = 25LL;
    if ( (_DWORD)v12 )
    {
      v10 = *((_QWORD *)a4 + 1) - (_QWORD)&v14[8];
      v9 = &v14[8];
      do
      {
        *v9 = *(_QWORD *)((char *)v9 + v10);
        ++v9;
        --v12;
      }
      while ( v12 );
    }
    EtwUpdateEvent(0LL, 1073741922LL, v9, v10);
    v8 = LpcRequestPort(Object, v14);
    ObfDereferenceObject(Object);
  }
  return v8;
}
