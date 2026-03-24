/*
 * XREFs of ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x1800C1268
 * Callers:
 *     ?AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z @ 0x1800C1198 (-AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18009DA14 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800C13A8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??$_Emplace_reallocate@ULightEntry@CVisual@@@?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@QEAAPEAULightEntry@CVisual@@QEAU23@$$QEAU23@@Z @ 0x1800C13F4 (--$_Emplace_reallocate@ULightEntry@CVisual@@@-$vector@ULightEntry@CVisual@@V-$allocator@ULightEn.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800C18FC (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::AddLight(_QWORD *a1, __int64 a2, int a3, char a4)
{
  int v5; // ebp
  _QWORD *v6; // rcx
  char v7; // r15
  _OWORD *v10; // rdx
  _QWORD *i; // rax
  CPtrArrayBase *v12; // rdi
  unsigned __int64 Count; // rax
  CPtrArrayBase *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  _OWORD *v17; // rdx
  _OWORD v19[2]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  v6 = a1 + 37;
  v7 = 0;
  v10 = (_OWORD *)v6[1];
  if ( a3 )
  {
    *(_QWORD *)&v19[0] = a2;
    BYTE8(v19[0]) = a4;
    if ( (_OWORD *)v6[2] == v10 )
    {
      std::vector<CVisual::LightEntry>::_Emplace_reallocate<CVisual::LightEntry>(v6, v10, v19);
    }
    else
    {
      *v10 = v19[0];
      v6[1] += 16LL;
    }
    v12 = (CPtrArrayBase *)(a2 + 24);
    CPtrArrayBase::Remove((CPtrArrayBase *)(a2 + 24), (unsigned __int64)a1);
  }
  else
  {
    for ( i = (_QWORD *)*v6; i != (_QWORD *)v10; i += 2 )
    {
      if ( *i == a2 )
        goto LABEL_6;
    }
    v12 = (CPtrArrayBase *)(a2 + 24);
    Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(a2 + 24));
    v15 = CPtrArrayBase::InsertAt(v14, (unsigned __int64)a1, Count);
    v5 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x484u, 0LL);
      goto LABEL_10;
    }
    v7 = 1;
LABEL_6:
    *(_QWORD *)&v19[0] = a2;
    v17 = (_OWORD *)a1[35];
    BYTE8(v19[0]) = a4;
    if ( (_OWORD *)a1[36] == v17 )
    {
      std::vector<CVisual::LightEntry>::_Emplace_reallocate<CVisual::LightEntry>(a1 + 34, v17, v19);
    }
    else
    {
      *v17 = v19[0];
      a1[35] += 16LL;
    }
    v12 = (CPtrArrayBase *)(a2 + 24);
  }
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 5LL);
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 72LL))(a1, *(_BYTE *)(a2 + 161) != 0 ? 1 : 11, a2);
LABEL_10:
  if ( v5 < 0 && v7 )
    CPtrArrayBase::Remove(v12, (unsigned __int64)a1);
  return (unsigned int)v5;
}
