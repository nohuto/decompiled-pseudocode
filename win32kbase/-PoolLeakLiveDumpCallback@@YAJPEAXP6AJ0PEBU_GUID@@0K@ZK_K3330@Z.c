/*
 * XREFs of ?PoolLeakLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z @ 0x1C017D6E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?PoolLeakLiveDumpAddSecondaryData@@YAJPEAXP6AJ0PEBU_GUID@@0K@Z1@Z @ 0x1C017D5CC (-PoolLeakLiveDumpAddSecondaryData@@YAJPEAXP6AJ0PEBU_GUID@@0K@Z1@Z.c)
 */

__int64 __fastcall PoolLeakLiveDumpCallback(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        int (*a2)(void *, const struct _GUID *, void *, unsigned int),
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned int *a8)
{
  __int64 result; // rax
  __int64 v11; // rdx
  bool v12; // r8
  __int64 v13; // rdx
  bool v14; // cl
  unsigned int v15; // ebx
  _OWORD v16[3]; // [rsp+30h] [rbp-48h] BYREF

  if ( !a8 )
    return 0LL;
  result = ((__int64 (__fastcall *)(NSInstrumentation::CLeakTrackingAllocator *, void *, _QWORD, _QWORD))a2)(
             a1,
             &unk_1C02A2558,
             *(_QWORD *)a8,
             a8[2]);
  if ( (int)result >= 0 && gpLeakTrackingAllocator )
  {
    v11 = *((_QWORD *)gpLeakTrackingAllocator + 11);
    v12 = !v11 || *(_DWORD *)(v11 + 48) == 0;
    v13 = *((_QWORD *)gpLeakTrackingAllocator + 12);
    v14 = !v13 || *(_QWORD *)(v13 + 40) == 0LL;
    if ( !v12 || !v14 )
    {
      v15 = 0;
      v16[0] = xmmword_1C02A2548;
      v16[1] = xmmword_1C02A2538;
      v16[2] = xmmword_1C02A2528;
      do
      {
        if ( (int)result < 0 )
          break;
        result = PoolLeakLiveDumpAddSecondaryData(a1, a2, (const struct _GUID *)&v16[v15++]);
      }
      while ( v15 < 3 );
    }
  }
  return result;
}
