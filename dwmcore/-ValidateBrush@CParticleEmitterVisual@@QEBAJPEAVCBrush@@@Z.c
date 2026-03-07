__int64 __fastcall CParticleEmitterVisual::ValidateBrush(CParticleEmitterVisual *this, struct CBrush *a2)
{
  if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 22LL)
    || (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 181LL)
    || (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 107LL) )
  {
    return 0LL;
  }
  else
  {
    return (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 73LL) == 0
         ? 0x88980403
         : 0;
  }
}
