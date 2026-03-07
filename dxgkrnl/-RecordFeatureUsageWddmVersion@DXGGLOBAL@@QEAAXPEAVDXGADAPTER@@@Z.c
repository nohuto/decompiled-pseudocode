void __fastcall DXGGLOBAL::RecordFeatureUsageWddmVersion(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  __int64 v3; // rdx
  unsigned int v4; // ebx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v6; // rax

  if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage(this, a2) )
  {
    v4 = *(_DWORD *)(v3 + 2820);
    if ( v4 > *((_DWORD *)this + 76205) )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::RecordFeatureUsage(Global, 11LL, v4);
      *((_DWORD *)this + 76205) = v4;
    }
    if ( v4 < *((_DWORD *)this + 76204) )
    {
      v6 = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::RecordFeatureUsage(v6, 10LL, v4);
      *((_DWORD *)this + 76204) = v4;
    }
  }
}
