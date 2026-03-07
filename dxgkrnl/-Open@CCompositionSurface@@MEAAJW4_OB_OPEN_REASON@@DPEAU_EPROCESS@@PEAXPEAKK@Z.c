__int64 __fastcall CCompositionSurface::Open(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  if ( (*(unsigned int (__fastcall **)(__int64))(*((_QWORD *)Global + 38069) + 568LL))(a4) )
  {
    *(_QWORD *)(a1 + 32) = a4;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
  }
  return 0LL;
}
