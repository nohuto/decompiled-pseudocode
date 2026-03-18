/*
 * XREFs of ?vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z @ 0x1C02BBF64
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0028378 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::vFill_triples(XEPALOBJ *this, struct tagRGBTRIPLE *a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // r8d
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  __int16 v9; // [rsp+18h] [rbp+18h]

  v5 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  if ( a4 < v5 )
    v5 = a4;
  v6 = 0LL;
  if ( v5 )
  {
    v7 = v5;
    do
    {
      v8 = *(_DWORD *)(v6 + *(_QWORD *)(*(_QWORD *)this + 112LL));
      v6 += 4LL;
      LOBYTE(v9) = BYTE2(v8);
      HIBYTE(v9) = BYTE1(v8);
      *(_WORD *)&a2->rgbtBlue = v9;
      a2->rgbtRed = v8;
      ++a2;
      --v7;
    }
    while ( v7 );
  }
}
