CSynchronousSuperWetInk *__fastcall CSynchronousSuperWetInk::CSynchronousSuperWetInk(
        CSynchronousSuperWetInk *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx

  *((_QWORD *)this + 8) = &CSynchronousSuperWetInk::`vbtable'{for `CContent'};
  *((_QWORD *)this + 40) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 39) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 40) + 4LL) + 320) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CSuperWetSource::CSuperWetSource(this, a2);
  *((_BYTE *)this + 168) = 0;
  *(_QWORD *)this = &CSynchronousSuperWetInk::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CSynchronousSuperWetInk::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CSynchronousSuperWetInk::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 232;
  v4 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v4 + 60) = v4 - 248;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *((_QWORD *)this + 28) = v5;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0p_EventWriteTransfer(v6, &EVTDESC_SYNCHRONOUSSUPERWETINK_CREATED, (__int64)this);
  return this;
}
