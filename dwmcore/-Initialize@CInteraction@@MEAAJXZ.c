/*
 * XREFs of ?Initialize@CInteraction@@MEAAJXZ @ 0x1800399A0
 * Callers:
 *     <none>
 * Callees:
 *     ??2CInteractionContextWrapper@@SAPEAX_K@Z @ 0x180039A94 (--2CInteractionContextWrapper@@SAPEAX_K@Z.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x180039AB8 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z @ 0x1800EBF60 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z.c)
 *     ??$SAFE_DELETE@UIInteractionContextWrapper@@@@YAXAEAPEAUIInteractionContextWrapper@@@Z @ 0x18020844C (--$SAFE_DELETE@UIInteractionContextWrapper@@@@YAXAEAPEAUIInteractionContextWrapper@@@Z.c)
 */

__int64 __fastcall CInteraction::Initialize(CInteraction *this)
{
  CInteractionContextWrapper *v2; // rax
  unsigned __int64 v3; // rcx
  struct IInteractionContextWrapper *v4; // rbx
  CInteractionContextWrapper *v5; // rax
  struct IInteractionContextWrapper *v6; // rdi
  CInteractionContextWrapper *v7; // rax
  struct IInteractionContextWrapper *v8; // rsi
  CInteractionContextWrapper *v9; // rax
  struct IInteractionContextWrapper *v10; // rax
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  unsigned int v15; // [rsp+20h] [rbp-20h]
  struct IInteractionContextWrapper *v16; // [rsp+30h] [rbp-10h] BYREF
  CInteractionContextWrapper *v17; // [rsp+78h] [rbp+38h] BYREF
  CInteractionContextWrapper *v18; // [rsp+80h] [rbp+40h] BYREF
  CInteractionContextWrapper *v19; // [rsp+88h] [rbp+48h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  v16 = 0LL;
  v2 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new((unsigned __int64)this);
  if ( !v2 )
  {
    v17 = 0LL;
    goto LABEL_16;
  }
  v17 = CInteractionContextWrapper::CInteractionContextWrapper(v2);
  v4 = v17;
  if ( !v17 )
  {
LABEL_16:
    v15 = 104;
    goto LABEL_17;
  }
  v5 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v3);
  if ( !v5 || (v18 = CInteractionContextWrapper::CInteractionContextWrapper(v5), (v6 = v18) == 0LL) )
  {
    v15 = 107;
    goto LABEL_17;
  }
  v7 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v3);
  if ( !v7 || (v19 = CInteractionContextWrapper::CInteractionContextWrapper(v7), (v8 = v19) == 0LL) )
  {
    v15 = 110;
    goto LABEL_17;
  }
  v9 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v3);
  if ( !v9 || (v10 = CInteractionContextWrapper::CInteractionContextWrapper(v9), (v16 = v10) == 0LL) )
  {
    v15 = 113;
LABEL_17:
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024882, v15, 0LL);
    goto LABEL_18;
  }
  v11 = CInteractionProcessor::Initialize((CInteraction *)((char *)this + 352), v4, v6, v8, v10, 0);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x73u, 0LL);
LABEL_18:
    SAFE_DELETE<IInteractionContextWrapper>(&v17);
    SAFE_DELETE<IInteractionContextWrapper>(&v18);
    SAFE_DELETE<IInteractionContextWrapper>(&v19);
    SAFE_DELETE<IInteractionContextWrapper>(&v16);
  }
  return v13;
}
