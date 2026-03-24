/*
 * XREFs of ?vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z @ 0x1C02BCD58
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C007F3A8 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::vFill_triples(XEPALOBJ *this, struct tagRGBTRIPLE *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r8
  __int64 v5; // r10
  int v6; // eax
  __int16 v7; // [rsp+18h] [rbp+18h]

  if ( a4 >= *(_DWORD *)(*(_QWORD *)this + 28LL) )
    a4 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  v4 = 0LL;
  if ( a4 )
  {
    v5 = a4;
    do
    {
      v6 = *(_DWORD *)(v4 + *(_QWORD *)(*(_QWORD *)this + 112LL));
      v4 += 4LL;
      LOBYTE(v7) = BYTE2(v6);
      HIBYTE(v7) = BYTE1(v6);
      *(_WORD *)&a2->rgbtBlue = v7;
      a2->rgbtRed = v6;
      ++a2;
      --v5;
    }
    while ( v5 );
  }
}
