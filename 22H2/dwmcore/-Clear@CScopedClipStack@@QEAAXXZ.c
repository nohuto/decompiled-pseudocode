/*
 * XREFs of ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18008E388
 * Callers:
 *     ??1CDrawingContext@@EEAA@XZ @ 0x18003E1F4 (--1CDrawingContext@@EEAA@XZ.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18008E0D4 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800421E0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BFE98 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x18018E960 (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 */

void __fastcall CScopedClipStack::Clear(CScopedClipStack *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  int v4; // eax
  int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  void *v10; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(this, 84LL);
  *((_DWORD *)this + 566) = 0;
  v3 = 8LL;
  v4 = *((_DWORD *)this + 568);
  if ( v4 == 8 )
  {
    v7 = *((_DWORD *)this + 572);
    v2 = 0xFFFFFFFFLL;
    if ( v7 > 8 )
      v3 = v7;
    if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v3) <= *((_DWORD *)this + 567) )
    {
      v10 = 0LL;
      v8 = HrMalloc(0x10uLL, (unsigned int)v3, &v10);
      if ( v8 >= 0 )
      {
        operator delete(*((void **)this + 285));
        *((_QWORD *)this + 285) = v10;
        *((_DWORD *)this + 567) = v3;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xFEu, 0LL);
      }
    }
    *((_DWORD *)this + 572) = 0;
    v5 = 0;
  }
  else
  {
    v5 = v4 + 1;
  }
  v6 = 0;
  for ( *((_DWORD *)this + 568) = v5; v6 < *((_DWORD *)this + 224); ++v6 )
    CScopedClipStack::FreeCpuClipStackState(
      (CScopedClipStack *)v2,
      (struct CScopedClipStack::CpuClipStackState *)(*((_QWORD *)this + 109) + 136LL * v6));
  *((_DWORD *)this + 224) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 872, 136LL);
}
