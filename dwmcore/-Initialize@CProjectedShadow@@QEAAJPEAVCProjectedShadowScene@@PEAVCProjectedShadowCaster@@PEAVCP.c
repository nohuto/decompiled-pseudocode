/*
 * XREFs of ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x180247970
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180004F04 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18004A77C (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA170 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CProjectedShadow::Initialize(
        CProjectedShadow *this,
        struct CProjectedShadowScene *a2,
        struct CProjectedShadowCaster *a3,
        struct CProjectedShadowReceiver *a4)
{
  CPtrArrayBase *v4; // rdi
  unsigned __int64 Count; // rax
  unsigned __int64 v10; // rdx
  CPtrArrayBase *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  unsigned __int64 v15; // rax
  CPtrArrayBase *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  CPtrArrayBase *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx

  v4 = (CProjectedShadow *)((char *)this + 24);
  Count = CPtrArrayBase::GetCount((CProjectedShadow *)((char *)this + 24));
  v12 = CPtrArrayBase::InsertAt(v11, v10, Count);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x65u, 0LL);
  }
  else
  {
    *((_QWORD *)this + 9) = a2;
    v15 = CPtrArrayBase::GetCount(v4);
    v17 = CPtrArrayBase::InsertAt(v16, (unsigned __int64)a3, v15);
    v14 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x68u, 0LL);
    }
    else
    {
      *((_QWORD *)this + 10) = a3;
      v19 = CPtrArrayBase::GetCount(v4);
      v21 = CPtrArrayBase::InsertAt(v20, (unsigned __int64)a4, v19);
      v14 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x6Bu, 0LL);
      else
        *((_QWORD *)this + 11) = a4;
    }
  }
  return v14;
}
