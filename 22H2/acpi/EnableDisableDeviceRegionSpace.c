/*
 * XREFs of EnableDisableDeviceRegionSpace @ 0x1C005C880
 * Callers:
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0018210 (EnableDisableDeviceTreeRegionSpace.c)
 *     EnableDisableRegionSpacesForDevice @ 0x1C005C920 (EnableDisableRegionSpacesForDevice.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000BCA0 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

__int64 __fastcall EnableDisableDeviceRegionSpace(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 *v6; // rdi
  _QWORD v8[10]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a2;
  v5 = 0LL;
  v6 = AMLIGetNamedChild(*(__int64 **)(a1 + 720), 1195725407);
  if ( v6 )
  {
    memset(v8, 0, sizeof(v8));
    v8[2] = v4;
    WORD1(v8[0]) = 1;
    WORD1(v8[5]) = 1;
    LOBYTE(v5) = a3 != 0;
    v8[7] = v5;
    LODWORD(v5) = AMLIEvalNameSpaceObject((unsigned __int64 *)v6, 0LL, 2, v8);
    AMLIDereferenceHandleEx((__int64)v6);
  }
  return (unsigned int)v5;
}
