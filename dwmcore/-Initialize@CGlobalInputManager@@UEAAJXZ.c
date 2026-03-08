/*
 * XREFs of ?Initialize@CGlobalInputManager@@UEAAJXZ @ 0x1800CB060
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800AE4F0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CKst@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800CB0DC (-Create@CKst@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Start@CKstBase@@AEAAJPEBG@Z @ 0x1800CB16C (-Start@CKstBase@@AEAAJPEBG@Z.c)
 *     ?Initialize@CInputManager@@UEAAJXZ @ 0x1800CB370 (-Initialize@CInputManager@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGlobalInputManager::Initialize(struct CComposition **this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  CKstBase **v5; // rsi
  const unsigned __int16 *v6; // rdx
  int v7; // eax
  __int64 v9; // rcx
  unsigned int v10; // [rsp+20h] [rbp-18h]
  unsigned int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = CInputManager::Initialize((CInputManager *)this);
  v4 = v2;
  if ( v2 < 0 )
  {
    v11 = 49;
    goto LABEL_10;
  }
  v5 = this + 41;
  v2 = CKst::Create(this[2], this + 41);
  v4 = v2;
  if ( v2 < 0 )
  {
    v11 = 53;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, v11, 0LL);
    return v4;
  }
  if ( ((*((_QWORD *)*v5 + 2) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return 0;
  v7 = CKstBase::Start(*v5, v6);
  v4 = v7;
  if ( v7 >= 0 )
  {
    return 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
      (const char *)(unsigned int)v7,
      v10);
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v4, 0x36u, 0LL);
  }
  return v4;
}
