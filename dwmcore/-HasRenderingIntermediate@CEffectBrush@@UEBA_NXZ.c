char __fastcall CEffectBrush::HasRenderingIntermediate(CEffectBrush *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  if ( !(unsigned __int8)CEffectBrush::HasBlurEffectNode(this) )
  {
    v2 = 0LL;
    if ( !*((_DWORD *)this + 36) )
      return 0;
    while ( 1 )
    {
      v3 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v2);
      if ( v3 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 264LL))(v3) )
          break;
      }
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 36) )
        return 0;
    }
  }
  return 1;
}
