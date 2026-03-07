char __fastcall CEffectBrush::HasCompositionSurface(CEffectBrush *this)
{
  __int64 v1; // rbx
  __int64 v3; // rcx

  v1 = 0LL;
  if ( !*((_DWORD *)this + 36) )
    return 0;
  while ( 1 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v1);
    if ( v3 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 248LL))(v3) )
        break;
    }
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= *((_DWORD *)this + 36) )
      return 0;
  }
  return 1;
}
