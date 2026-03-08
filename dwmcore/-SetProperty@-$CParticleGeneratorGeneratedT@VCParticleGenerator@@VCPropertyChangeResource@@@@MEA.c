/*
 * XREFs of ?SetProperty@?$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801C5970
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetMaxDirection@?$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@@QEAAJUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801C4108 (-SetMaxDirection@-$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@.c)
 *     ?SetMinDirection@?$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@@QEAAJUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801C44E0 (-SetMinDirection@-$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@.c)
 */

__int64 __fastcall CParticleGeneratorGeneratedT<CParticleGenerator,CPropertyChangeResource>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // r9d
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  __int64 v21; // rax
  unsigned int v23; // [rsp+20h] [rbp-28h]
  unsigned __int64 v24; // [rsp+30h] [rbp-18h] BYREF
  int v25; // [rsp+38h] [rbp-10h]

  if ( a3 == 18 )
  {
    v14 = a2 - 3;
    if ( !v14 )
    {
      if ( *(float *)a4 != *(float *)(a1 + 108) )
      {
        v21 = *(_QWORD *)a1;
        *(_DWORD *)(a1 + 108) = *a4;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v21 + 72))(a1, 0LL, 0LL);
      }
      return 0;
    }
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 5;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 4;
              if ( v20 )
              {
                if ( v20 != 1 )
                {
                  v23 = 3490;
                  goto LABEL_36;
                }
                if ( *(float *)a4 == *(float *)(a1 + 228) )
                  return 0;
                *(_DWORD *)(a1 + 228) = *a4;
              }
              else
              {
                if ( *(float *)a4 == *(float *)(a1 + 224) )
                  return 0;
                *(_DWORD *)(a1 + 224) = *a4;
              }
            }
            else
            {
              if ( *(float *)a4 == *(float *)(a1 + 192) )
                return 0;
              *(_DWORD *)(a1 + 192) = *a4;
            }
          }
          else
          {
            if ( *(float *)a4 == *(float *)(a1 + 188) )
              return 0;
            *(_DWORD *)(a1 + 188) = *a4;
          }
        }
        else
        {
          if ( *(float *)a4 == *(float *)(a1 + 120) )
            return 0;
          *(_DWORD *)(a1 + 120) = *a4;
        }
      }
      else
      {
        if ( *(float *)a4 == *(float *)(a1 + 116) )
          return 0;
        *(_DWORD *)(a1 + 116) = *a4;
      }
    }
    else
    {
      if ( *(float *)a4 == *(float *)(a1 + 112) )
        return 0;
      *(_DWORD *)(a1 + 112) = *a4;
    }
LABEL_11:
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
    return 0;
  }
  if ( a3 != 52 )
  {
    if ( a3 != 69 )
    {
      v23 = 3539;
LABEL_36:
      v13 = -2147024809;
      v11 = -2147024809;
      goto LABEL_37;
    }
    v4 = a2 - 7;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 != 1 )
          {
            v23 = 3534;
            goto LABEL_36;
          }
          *(_OWORD *)(a1 + 172) = *(_OWORD *)a4;
        }
        else
        {
          *(_OWORD *)(a1 + 156) = *(_OWORD *)a4;
        }
      }
      else
      {
        *(_OWORD *)(a1 + 140) = *(_OWORD *)a4;
      }
    }
    else
    {
      *(_OWORD *)(a1 + 124) = *(_OWORD *)a4;
    }
    goto LABEL_11;
  }
  if ( a2 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      v8 = v7 - 12;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          v23 = 3512;
          goto LABEL_36;
        }
        *(_QWORD *)(a1 + 208) = *(_QWORD *)a4;
        *(_DWORD *)(a1 + 216) = a4[2];
      }
      else
      {
        *(_QWORD *)(a1 + 196) = *(_QWORD *)a4;
        *(_DWORD *)(a1 + 204) = a4[2];
      }
      goto LABEL_11;
    }
    v9 = a4[2];
    v24 = *(_QWORD *)a4;
    v25 = v9;
    v10 = CParticleGeneratorGeneratedT<CParticleGenerator,CPropertyChangeResource>::SetMaxDirection(a1, &v24);
    v11 = v10;
    if ( v10 < 0 )
    {
      v23 = 3501;
LABEL_26:
      v13 = v10;
LABEL_37:
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v13, v23, 0LL);
    }
  }
  else
  {
    v12 = a4[2];
    v24 = *(_QWORD *)a4;
    v25 = v12;
    v10 = CParticleGeneratorGeneratedT<CParticleGenerator,CPropertyChangeResource>::SetMinDirection(a1, &v24);
    v11 = v10;
    if ( v10 < 0 )
    {
      v23 = 3497;
      goto LABEL_26;
    }
  }
  return v11;
}
