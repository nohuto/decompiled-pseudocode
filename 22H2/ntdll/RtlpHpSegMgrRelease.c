/*
 * XREFs of RtlpHpSegMgrRelease @ 0x180004F04
 * Callers:
 *     RtlpHpSegSegmentFree @ 0x180004B70 (RtlpHpSegSegmentFree.c)
 *     RtlpHpSegMgrAllocate @ 0x180006584 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpQueryVA @ 0x180003794 (RtlpHpQueryVA.c)
 *     RtlpHpFreeVA @ 0x180020824 (RtlpHpFreeVA.c)
 *     RtlpHpSegMgrCommit @ 0x180022E90 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x18010F0E4 (RtlpHpSegMgrVaCtxFree.c)
 */

char __fastcall RtlpHpSegMgrRelease(__int64 a1, PVOID a2, int a3)
{
  ULONG_PTR v4; // rax
  int v5; // edx
  ULONG_PTR v6; // rdx
  _WORD *v8; // rbx
  int v9; // esi
  unsigned __int64 v10; // r14
  PVOID BaseAddress; // [rsp+80h] [rbp+30h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+38h] BYREF
  _WORD *v14; // [rsp+98h] [rbp+48h] BYREF

  LOBYTE(v4) = *(_BYTE *)(a1 + 13) & 7;
  v5 = ~*(_DWORD *)a1;
  BaseAddress = a2;
  v6 = (unsigned int)(v5 + 1);
  RegionSize = v6;
  if ( !(_BYTE)v4 )
  {
LABEL_2:
    if ( a2 )
      LOBYTE(v4) = RtlpHpFreeVA(&BaseAddress, &RegionSize);
    return v4;
  }
  if ( v6 >= 0x200000 )
    goto LABEL_9;
  if ( a3 > 0 )
    RtlpHpSegMgrCommit(a1, -a3, 0x4000, 0);
  v4 = RtlpHpSegMgrVaCtxFree(a1, a2, &RegionSize);
  BaseAddress = (PVOID)v4;
  a2 = (PVOID)v4;
  if ( v4 )
  {
LABEL_9:
    RtlpHpQueryVA((__int64)a2, v6, &v14, 0LL);
    v8 = v14;
    v9 = 0;
    v4 = RegionSize >> 21;
    v10 = (unsigned __int64)&v14[RegionSize >> 21];
    if ( (unsigned __int64)v14 < v10 )
    {
      do
      {
        LOWORD(v4) = *v8;
        if ( (*v8 & 0x7FF) != 0 )
          LOBYTE(v4) = RtlpHpSegMgrCommit(a1, -(v4 & 0x7FF), 0x4000, 0);
        ++v8;
        v9 += 512;
      }
      while ( (unsigned __int64)v8 < v10 );
    }
    a2 = BaseAddress;
    goto LABEL_2;
  }
  return v4;
}
