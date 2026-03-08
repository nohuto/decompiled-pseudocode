/*
 * XREFs of VidSchiUpdateNodeRunningTime @ 0x1C00187EC
 * Callers:
 *     VidSchiCheckPreemptionPolicy @ 0x1C00095E0 (VidSchiCheckPreemptionPolicy.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiUpdateNodeRunningTime(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  __int128 v4; // xmm1
  _OWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  char v7; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v7 = 0;
  memset((char *)v6 + 8, 0, 24);
  *(_QWORD *)&v6[0] = a1;
  DpSynchronizeExecution(*(_QWORD *)(v2 + 24), VidSchiUpdateNodeRunningTimeAtISR, v6, *(unsigned int *)(v2 + 32), &v7);
  if ( a2 )
  {
    v4 = v6[1];
    *a2 = v6[0];
    a2[1] = v4;
  }
  return v7;
}
