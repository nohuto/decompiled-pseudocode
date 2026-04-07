/*
 * XREFs of ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001DAE0
 * Callers:
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001D520 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x1800263E0 (-GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Coloriz.c)
 *     ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z @ 0x180086B58 (-GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Col.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAA_NXZ @ 0x18001E720 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@det.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180036DD0 (-IsPPIEdition@@YA_NXZ.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18004266C (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     floorf_0 @ 0x180057E36 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180085530 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x180086C4C (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     PacksRGBColor @ 0x180088DB0 (PacksRGBColor.c)
 *     GetStaticImmersiveColorPrivForHighContrastState @ 0x1800C1880 (GetStaticImmersiveColorPrivForHighContrastState.c)
 */

__int64 __fastcall CGlassColorizationParameters::AdjustWindowColorization(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        float a3,
        char a4)
{
  float v7; // xmm6_4
  float v8; // xmm14_4
  float v9; // xmm7_4
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm12_4
  float v13; // xmm13_4
  DWORD StaticImmersiveColorPrivForHighContrastState; // r14d
  __int64 v15; // rsi
  unsigned int v16; // eax
  bool v17; // cl
  int Color; // edx
  _DWORD *v19; // rax
  _DWORD *v20; // rbx
  int v21; // ebx
  __m128i v22; // xmm7
  __m128i v23; // xmm8
  int v24; // eax
  int v25; // eax
  float v26; // xmm2_4
  float v27; // xmm7_4
  float v28; // xmm11_4
  float v29; // xmm8_4
  float v30; // xmm9_4
  int v31; // eax
  float v32; // xmm0_4
  __int64 result; // rax
  BOOL v34; // r15d
  unsigned __int8 v35; // cl
  int v36; // ebx
  unsigned int v37; // ebx
  bool v38; // al
  __int64 v39; // rax
  const wchar_t *v40; // rdx
  int v41; // eax
  bool v42; // sf
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // ecx
  bool IsHighContrastMode; // al
  __int64 v47; // rax
  unsigned int v48; // ecx
  __int64 v49; // [rsp+28h] [rbp-89h] BYREF
  struct _RTL_CRITICAL_SECTION *v50; // [rsp+30h] [rbp-81h] BYREF
  int v51; // [rsp+38h] [rbp-79h] BYREF
  int v52; // [rsp+3Ch] [rbp-75h]
  char v53; // [rsp+40h] [rbp-71h]
  __int64 Buffer; // [rsp+48h] [rbp-69h] BYREF
  float v55; // [rsp+50h] [rbp-61h]
  float v56; // [rsp+54h] [rbp-5Dh]
  float v57; // [rsp+130h] [rbp+7Fh] BYREF

  if ( (a4 & 0x30) != 0x30 )
  {
    v7 = (float)a2[3] / 255.0;
    v8 = (float)*a1 / 255.0;
    v9 = (float)a2[2] / 255.0;
    v10 = (float)a2[1] / 255.0;
    v11 = (float)*a2 / 255.0;
    v12 = (float)a1[2] / 255.0;
    v13 = (float)a1[1] / 255.0;
    if ( (a4 & 4) != 0 )
    {
      StaticImmersiveColorPrivForHighContrastState = 0;
      v57 = 0.0;
      (*(void (__fastcall **)(_QWORD, const wchar_t *, float *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 8)
                                                               + 8LL))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
        L"ColorPrevalence",
        &v57);
      v15 = a4 & 1;
      if ( (a4 & 8) != 0 )
      {
        v16 = LODWORD(v57);
        v17 = 0;
        Color = 0;
        LODWORD(v49) = 0;
        if ( (a4 & 0x60) == 0 && v57 != 0.0 )
        {
          v40 = L"AccentColorInactive";
          if ( (_BYTE)v15 )
            v40 = L"AccentColor";
          v41 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, __int64 *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                 + 8)
                                                                              + 8LL))(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
                  v40,
                  &v49);
          Color = v49;
          v42 = v41 < 0;
          v16 = LODWORD(v57);
          v17 = !v42;
        }
        if ( ((_BYTE)v15 || v17) && v16 )
        {
          if ( !Color )
          {
            if ( v16 <= 2 )
            {
              v44 = 4LL;
            }
            else
            {
              switch ( v16 )
              {
                case 3u:
                  v44 = 3LL;
                  break;
                case 4u:
                  v44 = 2LL;
                  break;
                case 5u:
                  v44 = 1LL;
                  break;
                default:
                  v44 = 343LL;
                  break;
              }
            }
            Color = ColorCache::GetColor(v44);
          }
          v22 = _mm_cvtsi32_si128((unsigned __int8)Color);
          v23 = _mm_cvtsi32_si128(BYTE1(Color));
          v24 = BYTE2(Color);
        }
        else
        {
          if ( a4 < 0 )
          {
            v43 = 303LL;
            if ( (a4 & 2) == 0 )
              v43 = 312LL;
            v21 = ColorCache::GetColor(v43);
          }
          else
          {
            v50 = &ColorCache::_lock;
            EnterCriticalSection(&ColorCache::_lock);
            Buffer = 343LL;
            LOBYTE(v55) = 1;
            v19 = RtlLookupElementGenericTable(&ColorCache::_cachedColors, &Buffer);
            v20 = v19;
            if ( v19 )
            {
              if ( !*((_BYTE *)v19 + 8) )
              {
                v19[1] = CImmersiveColor::GetColor(343LL);
                *((_BYTE *)v20 + 8) = 1;
              }
              v21 = v20[1];
              LeaveCriticalSection(&ColorCache::_lock);
            }
            else
            {
              v53 = 1;
              v51 = 343;
              v52 = CImmersiveColor::GetColor(343LL);
              RtlInsertElementGenericTable(&ColorCache::_cachedColors, &v51, 0xCu, 0LL);
              v21 = v52;
              CGuard<CDwmCS>::~CGuard<CDwmCS>(&v50);
            }
          }
          v7 = FLOAT_1_0;
          v22 = _mm_cvtsi32_si128((unsigned __int8)v21);
          v23 = _mm_cvtsi32_si128(BYTE1(v21));
          v24 = BYTE2(v21);
        }
      }
      else
      {
        if ( v57 == 0.0 )
        {
          v34 = !(a4 & 1);
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetImpl'::`2'::impl) )
          {
            v35 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26);
          }
          else
          {
            LODWORD(Buffer) = 16;
            v35 = SystemParametersInfoW(0x42u, 0x10u, &Buffer, 0) && (Buffer & 0x100000000LL) != 0;
          }
          v36 = a4 & 0x80;
          if ( v36 )
          {
            StaticImmersiveColorPrivForHighContrastState = GetStaticImmersiveColorPrivForHighContrastState(
                                                             (unsigned int)(v34 + 315),
                                                             v35);
          }
          else if ( v35 )
          {
            v45 = dword_1800CEB18[v15];
            if ( v45 != 31 )
              StaticImmersiveColorPrivForHighContrastState = GetSysColor(v45) | 0xFF000000;
          }
          else
          {
            StaticImmersiveColorPrivForHighContrastState = dword_1800CD7E0[v15];
          }
          if ( !*(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61) + 603LL) || v36 )
          {
            if ( (_DWORD)v15 )
              a3 = FLOAT_0_60000002;
            else
              a3 = FLOAT_0_2;
          }
          else
          {
            a3 = FLOAT_0_14;
          }
          v22 = _mm_cvtsi32_si128((unsigned __int8)StaticImmersiveColorPrivForHighContrastState);
          v23 = _mm_cvtsi32_si128(BYTE1(StaticImmersiveColorPrivForHighContrastState));
          v24 = BYTE2(StaticImmersiveColorPrivForHighContrastState);
        }
        else
        {
          if ( (a4 & 1) != 0 )
          {
            a3 = FLOAT_1_0;
            v7 = FLOAT_1_0;
            goto LABEL_15;
          }
          IsHighContrastMode = CDesktopManager::IsHighContrastMode();
          v47 = GetStaticImmersiveColorPrivForHighContrastState(302LL, IsHighContrastMode);
          a3 = FLOAT_0_2;
          v22 = _mm_cvtsi32_si128((unsigned __int8)v47);
          v48 = BYTE1(v47);
          v24 = BYTE2(v47);
          v23 = _mm_cvtsi32_si128(v48);
        }
        v7 = a3;
      }
      v10 = _mm_cvtepi32_ps(v23).m128_f32[0] / 255.0;
      v11 = (float)v24 / 255.0;
      v9 = _mm_cvtepi32_ps(v22).m128_f32[0] / 255.0;
      v8 = v11;
      v13 = v10;
      v12 = v9;
    }
LABEL_15:
    v25 = *((_DWORD *)a1 + 2);
    v57 = fmaxf(0.0, fminf(1.0, (float)*((int *)a1 + 3) / 100.0)) * (float)(1.0 - v7);
    v26 = fmaxf(0.0, fminf(1.0, (float)v25 / 100.0)) * a3;
    v27 = (float)((float)(v9 * v7) * (float)(1.0 - v26)) + (float)(v26 * v12);
    v28 = (float)(v7 * (float)(1.0 - v26)) + v26;
    v29 = (float)((float)(v10 * v7) * (float)(1.0 - v26)) + (float)(v26 * v13);
    v30 = (float)((float)(v11 * v7) * (float)(1.0 - v26)) + (float)(v26 * v8);
    if ( v28 > 0.0 )
    {
      v27 = v27 / v28;
      v29 = v29 / v28;
      v30 = v30 / v28;
    }
    a1[2] = (int)fminf(floorf_0((float)(v27 * 255.0) + 0.5), 255.0);
    a1[1] = (int)fminf(floorf_0((float)(v29 * 255.0) + 0.5), 255.0);
    *a1 = (int)fminf(floorf_0((float)(v30 * 255.0) + 0.5), 255.0);
    a1[3] = (int)fminf(floorf_0((float)(v28 * 255.0) + 0.5), 255.0);
    v31 = (int)floorf_0((float)(v28 * 100.0) + 0.5);
    v32 = v57 * 100.0;
    *((_DWORD *)a1 + 2) = v31;
    *((_DWORD *)a1 + 3) = (int)floorf_0(v32 + 0.5);
    result = (unsigned int)(int)floorf_0(0.5);
    *((_DWORD *)a1 + 4) = result;
    return result;
  }
  v37 = 312;
  if ( IsPPIEdition() )
    v37 = 1178;
  v38 = CDesktopManager::IsHighContrastMode();
  v39 = GetStaticImmersiveColorPrivForHighContrastState(v37, v38);
  v56 = FLOAT_1_0;
  *(float *)&Buffer = (float)(unsigned __int8)v39 / 255.0;
  *((float *)&Buffer + 1) = (float)BYTE1(v39) / 255.0;
  v55 = (float)BYTE2(v39) / 255.0;
  return PacksRGBColor(&Buffer, a1);
}
