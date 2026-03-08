/*
 * XREFs of ??1CRedirectedGDISurface@@MEAA@XZ @ 0x1800F18C4
 * Callers:
 *     ??_ECRedirectedGDISurface@@MEAAPEAXI@Z @ 0x1800F1880 (--_ECRedirectedGDISurface@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRedirectedGDISurface::~CRedirectedGDISurface(CRedirectedGDISurface *this)
{
  bool v1; // zf
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD Buffer[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_BYTE *)this + 40) == 0;
  *(_QWORD *)this = &CRedirectedGDISurface::`vftable';
  if ( !v1 )
    DwmHLSurfCloseCompositorRef(*((_QWORD *)this + 3));
  v3 = *((_QWORD *)this + 3);
  v4 = *((_QWORD *)this + 4);
  v5 = *((_QWORD *)this + 2);
  Buffer[0] = v3;
  v6 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v5 + 8), Buffer);
  if ( v6 && v6[2] == v4 && !RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)(v5 + 8), v6) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
