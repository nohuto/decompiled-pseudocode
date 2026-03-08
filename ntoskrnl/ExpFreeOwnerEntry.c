/*
 * XREFs of ExpFreeOwnerEntry @ 0x14033B150
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x14033A350 (ExReleaseResourceForThreadLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x14033ABF0 (ExpReleaseResourceForThreadLite.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1402634D0 (PsBoostThreadIoEx.c)
 *     ObpDeferObjectDeletion @ 0x1402ECA68 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 */

__int64 __fastcall ExpFreeOwnerEntry(__int64 a1)
{
  int v1; // eax
  ULONG_PTR v3; // rdi
  __int64 result; // rax
  signed __int64 v5; // rax
  bool v6; // cc
  signed __int64 BugCheckParameter4; // rax

  v1 = *(_DWORD *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  if ( (v1 & 2) != 0 )
  {
    v3 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v3 & 3) != 0 )
  {
LABEL_15:
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    return result;
  }
  if ( !v3 )
    goto LABEL_15;
  if ( (v1 & 1) != 0 )
  {
    PsBoostThreadIoEx(v3, 1, 0, 0LL);
    *(_DWORD *)(a1 + 8) &= ~1u;
    v1 = *(_DWORD *)(a1 + 8);
  }
  if ( (v1 & 4) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 1444));
    *(_DWORD *)(a1 + 8) &= ~4u;
    v1 = *(_DWORD *)(a1 + 8);
  }
  if ( (v1 & 2) != 0 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(v3 - 48);
    v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 48), 0xFFFFFFFFFFFFFFFFuLL);
    v6 = v5 <= 1;
    BugCheckParameter4 = v5 - 1;
    if ( v6 )
    {
      if ( *(_QWORD *)(v3 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v3 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v3 - 48) >> 8)],
          v3,
          3uLL,
          *(_QWORD *)(v3 - 40));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, v3, 4uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v3 - 48);
    }
    *(_DWORD *)(a1 + 8) &= ~2u;
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
  }
  else
  {
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
  }
  return result;
}
