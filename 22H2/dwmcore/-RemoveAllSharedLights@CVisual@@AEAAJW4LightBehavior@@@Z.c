/*
 * XREFs of ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x1800CD504
 * Callers:
 *     ?ProcessClearSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_CLEARSHAREDLIGHTS@@@Z @ 0x1800CD4F4 (-ProcessClearSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_CLEARSHAREDLIGH.c)
 *     ?ProcessClearExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_CLEAREXCLUDEDSHAREDLIGHTS@@@Z @ 0x1801AE23C (-ProcessClearExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_CLEAREX.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18009DA14 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800C13A8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800C18FC (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_3569146171@@@details@wil@@QEAA_NXZ @ 0x1800EF9EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_3569146171@@@details@wil@@QEAA_NX.c)
 *     memmove_0 @ 0x1800F4017 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::RemoveAllSharedLights(_QWORD *a1, int a2)
{
  unsigned int v2; // r15d
  char v3; // bp
  _QWORD *v5; // rbx
  char *v6; // rsi
  __int64 *v7; // r14
  char v8; // al
  __int64 v9; // r8
  bool v10; // r14
  _QWORD *v11; // rbx
  char *v12; // rsi
  __int64 *v13; // r14
  char IsEnabled; // al
  __int64 v15; // r8
  __int64 **i; // rax
  unsigned __int64 Count; // rax
  CPtrArrayBase *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx

  v2 = 0;
  v3 = 0;
  if ( a2 )
  {
    v11 = (_QWORD *)a1[37];
    v12 = (char *)(v11 + 2);
    while ( v11 != (_QWORD *)a1[38] )
    {
      if ( *(v12 - 8) )
      {
        v13 = (__int64 *)*v11;
        IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_3569146171>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_3569146171>::GetImpl'::`2'::impl);
        v15 = *v13;
        if ( IsEnabled )
          (*(void (__fastcall **)(__int64 *, _QWORD *))(v15 + 296))(v13, a1);
        else
          (*(void (__fastcall **)(__int64 *, _QWORD *))(v15 + 280))(v13, a1);
        for ( i = (__int64 **)a1[34]; ; i += 2 )
        {
          if ( i == (__int64 **)a1[35] )
            goto LABEL_24;
          if ( *i == v13 )
            break;
        }
        Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(v13 + 3));
        v19 = CPtrArrayBase::InsertAt(v18, (unsigned __int64)a1, Count);
        v2 = v19;
        if ( v19 >= 0 )
        {
          v3 = 1;
LABEL_24:
          memmove_0(v11, v12, a1[38] - (_QWORD)v12);
          a1[38] -= 16LL;
          continue;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x57Bu, 0LL);
        break;
      }
      v11 += 2;
      v12 += 16;
    }
  }
  else
  {
    v5 = (_QWORD *)a1[34];
    v6 = (char *)(v5 + 2);
    while ( v5 != (_QWORD *)a1[35] )
    {
      if ( *(v6 - 8) )
      {
        v7 = (__int64 *)*v5;
        v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_3569146171>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_3569146171>::GetImpl'::`2'::impl);
        v9 = *v7;
        if ( v8 )
          (*(void (__fastcall **)(__int64 *, _QWORD *))(v9 + 288))(v7, a1);
        else
          (*(void (__fastcall **)(__int64 *, _QWORD *))(v9 + 280))(v7, a1);
        v10 = CPtrArrayBase::Remove((CPtrArrayBase *)(v7 + 3), (__int64)a1);
        memmove_0(v5, v6, a1[35] - (_QWORD)v6);
        a1[35] -= 16LL;
        if ( !v3 )
          v3 = v10;
      }
      else
      {
        v5 += 2;
        v6 += 16;
      }
    }
  }
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 5LL);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 1LL);
  }
  return v2;
}
