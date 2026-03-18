/*
 * XREFs of ApiSetSetManipulationInputTargetTransform @ 0x1C02081B4
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D358C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     SetManipulationInputTargetTransform @ 0x1C02332C4 (SetManipulationInputTargetTransform.c)
 */

__int64 __fastcall ApiSetSetManipulationInputTargetTransform(_OWORD *a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // ebx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _OWORD v16[7]; // [rsp+30h] [rbp-78h] BYREF

  v5 = 0;
  if ( qword_1C02969C0 && (int)qword_1C02969C0() >= 0 )
  {
    v10 = a1[1];
    v16[0] = *a1;
    v16[2] = a1[2];
    v11 = a1[4];
    v16[1] = v10;
    v12 = a1[3];
    v16[4] = v11;
    v13 = a1[6];
    v16[3] = v12;
    v14 = a1[5];
    v16[6] = v13;
    v16[5] = v14;
    return (unsigned int)SetManipulationInputTargetTransform((unsigned int)v16, a2, a3, a4, a5);
  }
  return v5;
}
