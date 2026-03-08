/*
 * XREFs of ACPIEcGetGpeVector @ 0x1C00835C4
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C00256A0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C00482C4 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIEcGetGpeVector(__int64 a1)
{
  __int64 *v2; // rdi
  int v4; // esi
  __int64 v5; // rdx
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-18h]

  v2 = AMLIGetNamedChild(*(_QWORD **)(a1 + 56), 1162889055);
  if ( !v2 )
    return 3221225524LL;
  v8 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v4 = AMLIEvalNameSpaceObject(v2, (__int64)&v6, 0, 0LL);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v2, v5);
  if ( v4 >= 0 )
  {
    if ( WORD1(v6) != 1 )
    {
      AMLIFreeDataBuffs((__int64)&v6);
      return 3222536207LL;
    }
    *(_DWORD *)(a1 + 48) = (unsigned __int8)v7;
    AMLIFreeDataBuffs((__int64)&v6);
  }
  return (unsigned int)v4;
}
