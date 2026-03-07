__int64 __fastcall CCompositionLight::AddTargets(
        __int64 a1,
        CResourceTable *a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  unsigned int v7; // edi
  struct CResource *ResourceWithoutType; // rax
  unsigned int v13; // ecx
  struct CResource *v14; // rbx
  int v15; // eax
  unsigned int v16; // ecx

  v6 = 0;
  v7 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
      v14 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
              ResourceWithoutType,
              196LL) )
      {
        break;
      }
      v15 = CCompositionLight::AddTarget(a1, v14, a6, 0LL);
      v6 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xA8u, 0LL);
        return v6;
      }
      ++v7;
      ++a4;
      if ( v7 >= a3 )
        return v6;
    }
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2003303421, 0xA4u, 0LL);
  }
  return v6;
}
