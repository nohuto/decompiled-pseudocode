__int64 __fastcall CFlipToken::CanReleaseToFrame(CFlipToken *this, unsigned int a2, bool *a3)
{
  int v3; // esi
  CompositionSurfaceObject *v7; // rcx
  bool v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a3 = 0;
  if ( *((_DWORD *)this + 6) == 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 144LL))(this) )
    {
      *a3 = *((_BYTE *)this + 564);
    }
    else if ( (unsigned int)CompositionSurfaceObject::GetIndependentFlipState(
                              *((_QWORD *)this + 4),
                              *((_QWORD *)this + 5)) != 2 )
    {
      v7 = (CompositionSurfaceObject *)*((_QWORD *)this + 4);
      v9 = 0;
      v3 = CompositionSurfaceObject::SyncIntervalSatisfied(v7, a2, &v9);
      if ( v3 >= 0 && (v9 || !*((_DWORD *)this + 28)) )
        *a3 = 1;
    }
  }
  return (unsigned int)v3;
}
