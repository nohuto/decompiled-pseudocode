/*
 * XREFs of PropertyGetProcessControlRange @ 0x1C002A84C
 * Callers:
 *     TopologyPU3DExtender @ 0x1C0026D90 (TopologyPU3DExtender.c)
 *     TopologyPUChorus @ 0x1C0026E80 (TopologyPUChorus.c)
 *     TopologyPUReverb @ 0x1C0026FF0 (TopologyPUReverb.c)
 *     TopologyPUDynRangeCompressor @ 0x1C0027190 (TopologyPUDynRangeCompressor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PropertyGetProcessControlRange(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int *a6)
{
  int v6; // r10d
  unsigned __int16 v8; // r14
  unsigned __int8 i; // bl
  int v12; // ecx
  int v13; // ecx
  int v15[4]; // [rsp+40h] [rbp-28h] BYREF

  v6 = 0;
  v15[0] = 0;
  v8 = a3;
  for ( i = -127; i <= 0x84u; ++i )
  {
    if ( v6 < 0 )
      break;
    LOBYTE(a3) = i;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int *, int))(a2 + 136))(a1, a2, a3, v8, v15, a4);
    if ( v6 >= 0 )
    {
      v12 = SLOBYTE(v15[0]);
      if ( a4 != 1 )
        v12 = SLOWORD(v15[0]);
      v13 = a5 * v12;
      v15[0] = v13;
      switch ( i )
      {
        case 0x81u:
          *a6 = v13;
          break;
        case 0x82u:
          a6[3] = v13;
          break;
        case 0x83u:
          a6[4] = v13;
          break;
        case 0x84u:
          a6[1] = v13;
          break;
      }
    }
  }
  return (unsigned int)v6;
}
