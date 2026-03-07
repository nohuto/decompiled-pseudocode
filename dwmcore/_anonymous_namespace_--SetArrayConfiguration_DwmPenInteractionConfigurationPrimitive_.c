__int64 __fastcall anonymous_namespace_::SetArrayConfiguration_DwmPenInteractionConfigurationPrimitive_(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  int v6; // edi

  if ( !a1 && a2 )
  {
    v6 = -2147024809;
    goto LABEL_6;
  }
  *(_DWORD *)(a3 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a3, 12LL);
  v6 = DynArray<DwmPenInteractionConfigurationPrimitive,0>::AddMultipleAndSet(a3, a1, a2);
  if ( v6 < 0 )
  {
LABEL_6:
    *(_DWORD *)(a3 + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize(a3, 12LL);
  }
  return (unsigned int)v6;
}
