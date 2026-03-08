/*
 * XREFs of ?ObjectInit@CompositionSurfaceObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C0014140
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterval@CPresentRate@@QEAA@XZ @ 0x1C0019FA0 (--0CInterval@CPresentRate@@QEAA@XZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        void *a2,
        struct IDxgkCompositionObject **a3)
{
  char *v3; // rdi
  __int64 v6; // rbp
  CPresentRate::CInterval *v7; // rsi
  __int64 result; // rax

  v3 = (char *)a1 + 40;
  if ( a1 )
  {
    v6 = 2LL;
    *(_QWORD *)a1 = &CompositionSurfaceObject::`vftable'{for `DxgkCompositionObject'};
    v7 = (struct DxgkCompositionObject *)((char *)a1 + 96);
    *((_QWORD *)a1 + 4) = &CompositionSurfaceObject::`vftable'{for `IPairedSurfaceObject'};
    *((_QWORD *)a1 + 6) = 0LL;
    *((_QWORD *)a1 + 7) = 0LL;
    *(_QWORD *)v3 = &CCompositionSurface::`vftable';
    do
    {
      CPresentRate::CInterval::CInterval(v7);
      v7 = (CPresentRate::CInterval *)((char *)v7 + 8);
      --v6;
    }
    while ( v6 );
    *((_QWORD *)v3 + 13) = 0LL;
    v3[112] = 0;
  }
  *a3 = (struct IDxgkCompositionObject *)v3;
  *((_DWORD *)a1 + 16) = 0;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 11) = 0LL;
  *((_DWORD *)a1 + 32) = 0;
  *((_DWORD *)a1 + 33) = 0;
  *((_QWORD *)a1 + 15) = (char *)a1 + 112;
  *((_QWORD *)a1 + 14) = (char *)a1 + 112;
  result = 0LL;
  *((_BYTE *)a1 + 153) = 0;
  return result;
}
