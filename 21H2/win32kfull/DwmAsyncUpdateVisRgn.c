/*
 * XREFs of DwmAsyncUpdateVisRgn @ 0x1C0039A30
 * Callers:
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1C00394E8 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall DwmAsyncUpdateVisRgn(PVOID Object, __int64 a2, int a3, __int64 a4, int a5)
{
  int v8; // esi
  unsigned int v9; // ebx
  unsigned int v10; // r15d
  _DWORD v13[172]; // [rsp+30h] [rbp-D0h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(v13, 0, sizeof(v13));
    v9 = 0;
    do
    {
      v13[10] = 1073741953;
      v10 = 27;
      *(_QWORD *)&v13[11] = a2;
      v13[13] = v9;
      v13[14] = a5;
      if ( a5 - v9 < 0x1B )
        v10 = a5 - v9;
      v13[15] = a3;
      LOWORD(v13[0]) = 16 * v10 + 28;
      HIWORD(v13[0]) = 16 * v10 + 68;
      LOWORD(v13[1]) = 0x8000;
      v13[16] = v10;
      memmove(&v13[17], (const void *)(a4 + 16LL * v9), 16LL * v10);
      v8 = LpcRequestPort(Object, v13);
      if ( v8 < 0 )
        break;
      v9 += v10;
    }
    while ( v9 != a5 );
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v8;
}
