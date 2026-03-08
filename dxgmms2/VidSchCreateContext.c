/*
 * XREFs of VidSchCreateContext @ 0x1C00AC500
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCreateContextInternal @ 0x1C0013B3C (VidSchiCreateContextInternal.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C001471C (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x1C0014FEC (VidSchiGetSoftwareOnlyNodeForDriverEngine.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchCreateContext(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // r9d
  unsigned int v5; // edx
  __int64 v6; // rcx
  int SoftwareOnlyNodeForDriverEngine; // eax
  int *v8; // r10
  __int64 v9; // r11
  __int64 v11; // rcx

  if ( a1 && a2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 800LL);
    v4 = *a2 & 0xFFFFFFF6 | 8;
    *a2 = (4 * ((*a2 & 0x440) != 0)) | *a2 & 0xFFFFFFE2 | 8 | (16 * ((*a2 & 0x440) == 0));
    v5 = a2[2];
    v6 = *(_QWORD *)(v3 + 32);
    if ( (v4 & 0x440) != 0 )
      SoftwareOnlyNodeForDriverEngine = VidSchiGetSoftwareOnlyNodeForDriverEngine(v6, v5);
    else
      SoftwareOnlyNodeForDriverEngine = VidSchiDriverNodeEngineToSchedulerNode(v6, a2[1], v5);
    v8[1] = SoftwareOnlyNodeForDriverEngine;
    return VidSchiCreateContextInternal(v3, v8, v9);
  }
  else
  {
    WdLogSingleEntry0(1LL);
    DxgkLogInternalTriageEvent(v11, 0x40000LL);
    return 0LL;
  }
}
