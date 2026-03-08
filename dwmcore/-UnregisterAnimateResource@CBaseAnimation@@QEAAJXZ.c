/*
 * XREFs of ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800C5B04
 * Callers:
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x1800C5A6C (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?UpdateAnimateValues@CScalar@@UEAA_NXZ @ 0x18024B250 (-UpdateAnimateValues@CScalar@@UEAA_NXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBaseAnimation::UnregisterAnimateResource(CBaseAnimation *this)
{
  unsigned int v1; // ebx
  __int64 v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // r11
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v9; // rcx

  v1 = 0;
  if ( *((_BYTE *)this + 104) )
  {
    v3 = *((_QWORD *)this + 2);
    v4 = *(_QWORD *)(v3 + 688);
    v5 = ((unsigned __int64)this + 64) & -(__int64)(this != 0LL);
    v6 = 0LL;
    v7 = *(_DWORD *)(v3 + 712);
    if ( v7 )
    {
      do
      {
        if ( v5 == *(_QWORD *)(v4 + 8 * v6) )
          break;
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < v7 );
    }
    if ( (unsigned int)v6 >= v7 )
    {
      v1 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, 0x793u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0x8Eu, 0LL);
    }
    else
    {
      while ( (unsigned int)v6 < v7 - 1 )
      {
        *(_QWORD *)(v4 + 8 * v6) = *(_QWORD *)(v4 + 8LL * (unsigned int)(v6 + 1));
        v6 = (unsigned int)(v6 + 1);
        v7 = *(_DWORD *)(v3 + 712);
      }
      *(_DWORD *)(v3 + 712) = v7 - 1;
      *((_BYTE *)this + 104) = 0;
    }
  }
  return v1;
}
