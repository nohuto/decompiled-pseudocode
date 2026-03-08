/*
 * XREFs of ?ResetBackBuffer@CLegacyStereoSwapChain@@MEAAJXZ @ 0x18029CDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResetBackBuffer@CLegacySwapChain@@MEAAJXZ @ 0x180100BF0 (-ResetBackBuffer@CLegacySwapChain@@MEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::ResetBackBuffer(CLegacyStereoSwapChain *this)
{
  _QWORD *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 (__fastcall ***v9)(_QWORD, __int64, _QWORD *); // rbx
  __int64 v10; // r8
  __int64 (__fastcall **v11)(_QWORD, __int64, _QWORD *); // rax
  __int64 (__fastcall *v12)(_QWORD, __int64, _QWORD *); // rsi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx

  v1 = (_QWORD *)((char *)this + 360);
  v3 = *((_QWORD *)this + 45);
  *v1 = 0LL;
  if ( v3 )
  {
    v4 = *(int *)(*(_QWORD *)(v3 + 8) + 4LL) + v3 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = CLegacySwapChain::ResetBackBuffer(this);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_180383C70, 2u, v5, 0xC6u, 0LL);
  }
  else
  {
    v8 = *((_QWORD *)this + 16);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1LL);
      v9 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD *))*((_QWORD *)this + 16);
      v10 = *v1;
      v11 = *v9;
      *v1 = 0LL;
      v12 = *v11;
      if ( v10 )
      {
        v13 = v10 + 8 + *(int *)(*(_QWORD *)(v10 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      v14 = v12(v9, 1LL, v1);
      v7 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_180383C70, 2u, v14, 0xCEu, 0LL);
      else
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v1 + 8LL))(*v1, 2LL);
    }
  }
  return v7;
}
