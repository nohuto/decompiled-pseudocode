/*
 * XREFs of ?SetProperty@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180242B40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180098440 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnEmitterTimeChanged@CParticleEmitterVisual@@QEAAXXZ @ 0x1801C296C (-OnEmitterTimeChanged@CParticleEmitterVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CParticleEmitterVisualGeneratedT<CParticleEmitterVisual,CVisual>::SetProperty(
        __int64 *a1,
        unsigned int a2,
        int a3,
        __int64 a4)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax

  if ( a3 != 18 )
  {
    if ( a3 != 52 )
    {
      v4 = CVisual::SetProperty((float *)a1, a2, a3, (float *)a4);
      v6 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x26BAu, 0LL);
      return v6;
    }
    switch ( a2 )
    {
      case 'C':
        *(__int64 *)((char *)a1 + 748) = *(_QWORD *)a4;
        *((_DWORD *)a1 + 189) = *(_DWORD *)(a4 + 8);
        break;
      case 'F':
        a1[96] = *(_QWORD *)a4;
        *((_DWORD *)a1 + 194) = *(_DWORD *)(a4 + 8);
        break;
      case 'H':
        a1[98] = *(_QWORD *)a4;
        *((_DWORD *)a1 + 198) = *(_DWORD *)(a4 + 8);
        break;
      default:
        v7 = CVisual::SetProperty((float *)a1, a2, 52, (float *)a4);
        v6 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x26B5u, 0LL);
        return v6;
    }
    goto LABEL_11;
  }
  if ( a2 > 0x3F )
  {
    switch ( a2 )
    {
      case '@':
        if ( *(float *)a4 != *((float *)a1 + 184) )
        {
          v11 = *a1;
          *((_DWORD *)a1 + 184) = *(_DWORD *)a4;
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v11 + 72))(a1, 0LL, 0LL);
        }
        return 0;
      case 'A':
        if ( *(float *)a4 == *((float *)a1 + 185) )
          return 0;
        *((_DWORD *)a1 + 185) = *(_DWORD *)a4;
        goto LABEL_11;
      case 'D':
        if ( *(float *)a4 == *((float *)a1 + 190) )
          return 0;
        *((_DWORD *)a1 + 190) = *(_DWORD *)a4;
        goto LABEL_11;
      case 'E':
        if ( *(float *)a4 == *((float *)a1 + 191) )
          return 0;
        *((_DWORD *)a1 + 191) = *(_DWORD *)a4;
        goto LABEL_11;
    }
  }
  else
  {
    switch ( a2 )
    {
      case '?':
        if ( *(float *)a4 == *((float *)a1 + 183) )
          return 0;
        *((_DWORD *)a1 + 183) = *(_DWORD *)a4;
        goto LABEL_11;
      case '5':
        if ( *(float *)a4 != *((float *)a1 + 176) )
        {
          *((_DWORD *)a1 + 176) = *(_DWORD *)a4;
          CParticleEmitterVisual::OnEmitterTimeChanged((CParticleEmitterVisual *)a1);
        }
        return 0;
      case '6':
        if ( *(float *)a4 == *((float *)a1 + 177) )
          return 0;
        *((_DWORD *)a1 + 177) = *(_DWORD *)a4;
        goto LABEL_11;
      case '7':
        if ( *(float *)a4 == *((float *)a1 + 178) )
          return 0;
        *((_DWORD *)a1 + 178) = *(_DWORD *)a4;
        goto LABEL_11;
      case '<':
        if ( *(float *)a4 == *((float *)a1 + 181) )
          return 0;
        *((_DWORD *)a1 + 181) = *(_DWORD *)a4;
        goto LABEL_11;
      case '>':
        if ( *(float *)a4 == *((float *)a1 + 182) )
          return 0;
        *((_DWORD *)a1 + 182) = *(_DWORD *)a4;
LABEL_11:
        (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 72))(a1, 0LL, 0LL);
        return 0;
    }
  }
  v9 = CVisual::SetProperty((float *)a1, a2, 18, (float *)a4);
  v6 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x26A3u, 0LL);
  return v6;
}
