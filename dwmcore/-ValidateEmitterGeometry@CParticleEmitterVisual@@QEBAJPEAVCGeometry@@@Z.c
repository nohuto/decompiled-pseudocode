__int64 __fastcall CParticleEmitterVisual::ValidateEmitterGeometry(CParticleEmitterVisual *this, struct CGeometry *a2)
{
  if ( (*(unsigned __int8 (__fastcall **)(struct CGeometry *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 138LL)
    || (*(unsigned __int8 (__fastcall **)(struct CGeometry *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 102LL)
    || (*(unsigned __int8 (__fastcall **)(struct CGeometry *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 59LL) )
  {
    return 0LL;
  }
  else
  {
    return (*(unsigned __int8 (__fastcall **)(struct CGeometry *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 126LL) == 0
         ? 0x88980403
         : 0;
  }
}
