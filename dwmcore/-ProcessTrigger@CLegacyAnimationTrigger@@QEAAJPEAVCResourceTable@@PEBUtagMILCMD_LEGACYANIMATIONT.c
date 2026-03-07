__int64 __fastcall CLegacyAnimationTrigger::ProcessTrigger(
        CLegacyAnimationTrigger *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LEGACYANIMATIONTRIGGER_TRIGGER *a3)
{
  __int64 v3; // rsi
  int v4; // edi
  __int64 v6; // rbp
  _QWORD *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  v3 = *((_QWORD *)a3 + 1);
  v4 = 0;
  if ( !v3 )
    v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL);
  v6 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= *((_DWORD *)this + 22) )
    {
LABEL_8:
      *((_QWORD *)this + 12) = v3;
      return (unsigned int)v4;
    }
    v7 = *(_QWORD **)(*((_QWORD *)this + 8) + 8 * v6);
    if ( v7[16] )
    {
      v7[17] = v3;
      v7[26] = v3;
      v8 = CBaseAnimation::RegisterAnimateResource(*(CBaseAnimation **)(*((_QWORD *)this + 8) + 8 * v6));
      v4 = v8;
      if ( v8 < 0 )
        break;
    }
    v6 = (unsigned int)(v6 + 1);
    if ( v4 < 0 )
      goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x21u, 0LL);
  return (unsigned int)v4;
}
