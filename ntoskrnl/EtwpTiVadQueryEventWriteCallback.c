/*
 * XREFs of EtwpTiVadQueryEventWriteCallback @ 0x140793510
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTiFillVadEventWrite @ 0x1402FC438 (EtwpTiFillVadEventWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     EtwProviderEnabled @ 0x140367E30 (EtwProviderEnabled.c)
 *     EtwpTiQueryVad @ 0x140793610 (EtwpTiQueryVad.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTiVadQueryEventWriteCallback(unsigned int *P)
{
  int Vad; // ebp
  _QWORD *Pool2; // rsi
  unsigned int i; // edi
  void *v5; // rcx
  void *v6; // rcx
  BOOLEAN v7; // [rsp+20h] [rbp-28h]

  Vad = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, (unsigned __int64)P[13] << 6, 1853049172LL);
  if ( Pool2 )
  {
    v7 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x10000000uLL);
    Vad = EtwpTiQueryVad(Pool2, *((_QWORD *)P + 8), *((_QWORD *)P + 9), P[13], v7);
  }
  EtwpTiFillVadEventWrite(
    *((PEVENT_DATA_DESCRIPTOR *)P + 4),
    P[12],
    1,
    (__int64)Pool2,
    Vad,
    P[13],
    *((PCEVENT_DESCRIPTOR *)P + 7));
  for ( i = 0; i < P[13]; ++i )
  {
    if ( _bittest(&Vad, i) )
    {
      v5 = (void *)Pool2[8 * (unsigned __int64)i + 7];
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
    }
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  v6 = (void *)*((_QWORD *)P + 8);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x69547445u);
  ExFreePoolWithTag(P, 0);
}
