/*
 * XREFs of ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x1800D0AC8
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z @ 0x1800D07C0 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x1800D0BF0 (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     ??$ReleaseInterface@UID2D1Effect@@@@YAXAEAPEAUID2D1Effect@@@Z @ 0x1800D0C2C (--$ReleaseInterface@UID2D1Effect@@@@YAXAEAPEAUID2D1Effect@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::PopulateEffectTable(CD2DContext *this)
{
  int v1; // ebx
  _BYTE *v2; // rsi
  _QWORD *v3; // r14
  __int64 v4; // rdi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0;
  v2 = &unk_1803E1D64;
  v10 = 0LL;
  v3 = (_QWORD *)((char *)this + 216);
  v4 = 0LL;
  do
  {
    if ( *v2 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**((_QWORD **)this + 25) + 504LL))(
             *((_QWORD *)this + 25),
             (char *)&xmmword_1803E1D54 + 24 * v4,
             &v10);
      v1 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x744u, 0LL);
        goto LABEL_9;
      }
      v9 = v10;
      v10 = 0LL;
      *v3 = v9;
    }
    v4 = (unsigned int)(v4 + 1);
    ++v3;
    v2 += 24;
  }
  while ( (unsigned int)v4 < 8 );
  if ( v1 >= 0 )
    goto LABEL_5;
LABEL_9:
  CD2DContext::ReleaseEffectTable(this);
LABEL_5:
  ReleaseInterface<ID2D1Effect>(&v10);
  return (unsigned int)v1;
}
