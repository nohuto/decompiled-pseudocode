/*
 * XREFs of ?UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B9C28
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800B9CE0 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z @ 0x18000EAE4 (-Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 */

__int64 __fastcall CIconicAnimatedVisual::UpdateSourceRect(CIconicAnimatedVisual *this)
{
  CRectResourceProxy *v1; // r9
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // rax
  int v8; // eax
  _DWORD v10[4]; // [rsp+30h] [rbp-28h] BYREF

  v1 = (CRectResourceProxy *)*((_QWORD *)this + 39);
  v2 = 0;
  if ( v1 )
  {
    v10[0] = 0;
    v3 = 0;
    v10[1] = 0;
    v4 = *((_QWORD *)this + 36);
    v5 = *(_QWORD *)(v4 + 376);
    if ( v5 )
      v3 = *(_DWORD *)(v5 + 120);
    v6 = 0;
    *(float *)&v10[2] = (float)v3;
    v7 = *(_QWORD *)(v4 + 376);
    if ( v7 )
      v6 = *(_DWORD *)(v7 + 124);
    *(float *)&v10[3] = (float)v6;
    v8 = CRectResourceProxy::Update(v1, (const struct MilRectF *)v10);
    v2 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x85u);
  }
  return v2;
}
