/*
 * XREFs of PiDqQueryAppendActionEntry @ 0x1407FA9F8
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x1407871A4 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryEnumObject @ 0x140788744 (PiDqQueryEnumObject.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407FA618 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     PiDqGetPnpObjectType @ 0x1406CA43C (PiDqGetPnpObjectType.c)
 *     PiDqQueryFreeActiveData @ 0x1407E02C8 (PiDqQueryFreeActiveData.c)
 *     PiDmGetObjectCount @ 0x14095ADC0 (PiDmGetObjectCount.c)
 */

char __fastcall PiDqQueryAppendActionEntry(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 **v4; // rcx
  unsigned int v5; // eax
  unsigned int PnpObjectType; // eax

  v2 = a1 + 192;
  v4 = *(__int64 ***)(a1 + 200);
  if ( *v4 != (__int64 *)v2 )
    __fastfail(3u);
  *a2 = v2;
  a2[1] = (__int64)v4;
  *v4 = a2;
  *(_QWORD *)(v2 + 8) = a2;
  v5 = *(_DWORD *)(a1 + 208) + 1;
  *(_DWORD *)(a1 + 208) = v5;
  if ( v5 > 0x3E8 )
  {
    PnpObjectType = PiDqGetPnpObjectType(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL));
    v5 = 2 * PiDmGetObjectCount(PnpObjectType);
    if ( *(_DWORD *)(a1 + 208) > v5 )
    {
      *(_DWORD *)(a1 + 216) |= 1u;
      LOBYTE(v5) = PiDqQueryFreeActiveData(a1);
    }
  }
  return v5;
}
