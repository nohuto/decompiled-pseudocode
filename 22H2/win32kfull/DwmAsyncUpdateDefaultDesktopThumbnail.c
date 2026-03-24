/*
 * XREFs of DwmAsyncUpdateDefaultDesktopThumbnail @ 0x1C0275244
 * Callers:
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C0203AD0 (NtUserUpdateDefaultDesktopThumbnail.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall DwmAsyncUpdateDefaultDesktopThumbnail(
        PVOID Object,
        __int64 a2,
        __int128 *a3,
        __int128 *a4,
        char a5,
        int a6)
{
  unsigned int v10; // ebx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _DWORD v14[24]; // [rsp+20h] [rbp-59h] BYREF

  v10 = -1073741823;
  if ( Object )
  {
    memset(v14, 0, 0x59uLL);
    v11 = *a3;
    v12 = *a4;
    LOWORD(v14[1]) = 0x8000;
    LOBYTE(v14[21]) = a5;
    *(_DWORD *)((char *)&v14[21] + 1) = a6;
    v14[0] = 5832753;
    v14[10] = 1073741897;
    *(_QWORD *)&v14[11] = a2;
    *(_OWORD *)&v14[13] = v11;
    *(_OWORD *)&v14[17] = v12;
    v10 = LpcRequestPort(Object, v14);
    ObfDereferenceObject(Object);
  }
  return v10;
}
