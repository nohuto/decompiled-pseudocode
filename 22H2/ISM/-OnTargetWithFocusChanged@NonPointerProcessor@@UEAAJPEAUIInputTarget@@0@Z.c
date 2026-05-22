/*
 * XREFs of ?OnTargetWithFocusChanged@NonPointerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x180017820
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall NonPointerProcessor::OnTargetWithFocusChanged(
        NonPointerProcessor *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  _QWORD *v8; // rbx
  __m128 *v9; // rax
  __m128 v10; // xmm0
  _QWORD *v11; // rbx
  __m128 *v12; // rax
  __m128 v13; // xmm0
  __int64 (__fastcall *v14)(__int64, _QWORD, _DWORD *, _QWORD); // rdi
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ebx
  int v19; // [rsp+20h] [rbp-38h]
  int v20; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, struct IInputTarget *, struct IInputTarget *))(**((_QWORD **)this + 3) + 64LL))(
         *((_QWORD *)this + 3),
         a2,
         a3);
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 6);
    if ( v5 )
    {
      *((_QWORD *)this + 6) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v6 = malloc(0xB8uLL);
    v7 = v6;
    if ( v6 )
      memset_0(v6, 0, 0xB8uLL);
    if ( v7 )
    {
      memset_0(v7 + 2, 0, 0xB0uLL);
      *(_QWORD *)v7 = &RefCountedObject::`vftable';
      v7[2] = 1;
      *(_QWORD *)v7 = &InputContext::`vftable';
      *((_QWORD *)v7 + 2) = 0LL;
      v7[6] = 0;
      *((_QWORD *)v7 + 4) = 0LL;
      *((_QWORD *)v7 + 5) = 0LL;
      v8 = operator new(0x20uLL);
      *v8 = v8;
      v8[1] = v8;
      *((_QWORD *)v7 + 4) = v8;
      *((_QWORD *)v7 + 6) = 0LL;
      *((_QWORD *)v7 + 7) = 0LL;
      *((_QWORD *)v7 + 8) = 0LL;
      v9 = (__m128 *)operator new(0x80uLL);
      *((_QWORD *)v7 + 6) = v9;
      *((_QWORD *)v7 + 8) = v9 + 8;
      v10 = _mm_movelh_ps((__m128)(unsigned __int64)v8, (__m128)(unsigned __int64)v8);
      *v9 = v10;
      v9[1] = v10;
      v9[2] = v10;
      v9[3] = v10;
      v9[4] = v10;
      v9[5] = v10;
      v9[6] = v10;
      v9[7] = v10;
      *((_QWORD *)v7 + 7) = v9 + 8;
      *((_QWORD *)v7 + 9) = 7LL;
      *((_QWORD *)v7 + 10) = 8LL;
      v7[6] = 1065353216;
      v7[28] = 0;
      *((_QWORD *)v7 + 15) = 0LL;
      *((_QWORD *)v7 + 16) = 0LL;
      v11 = operator new(0x18uLL);
      *v11 = v11;
      v11[1] = v11;
      *((_QWORD *)v7 + 15) = v11;
      *((_QWORD *)v7 + 17) = 0LL;
      *((_QWORD *)v7 + 18) = 0LL;
      *((_QWORD *)v7 + 19) = 0LL;
      v12 = (__m128 *)operator new(0x80uLL);
      *((_QWORD *)v7 + 17) = v12;
      *((_QWORD *)v7 + 19) = v12 + 8;
      v13 = _mm_movelh_ps((__m128)(unsigned __int64)v11, (__m128)(unsigned __int64)v11);
      *v12 = v13;
      v12[1] = v13;
      v12[2] = v13;
      v12[3] = v13;
      v12[4] = v13;
      v12[5] = v13;
      v12[6] = v13;
      v12[7] = v13;
      *((_QWORD *)v7 + 18) = v12 + 8;
      *((_QWORD *)v7 + 20) = 7LL;
      *((_QWORD *)v7 + 21) = 8LL;
      v7[28] = 1065353216;
      *((_QWORD *)v7 + 22) = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      *((_QWORD *)this + 6) = v7;
      v14 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, _QWORD))(*(_QWORD *)v4 + 64LL);
      v15 = *((_QWORD *)this + 5);
      if ( v15 )
      {
        *((_QWORD *)this + 5) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        v7 = (_DWORD *)*((_QWORD *)this + 6);
      }
      v16 = v14(v4, *((_QWORD *)this + 4), v7, 0LL);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x96,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
          (const char *)(unsigned int)v16,
          (_DWORD)this + 40);
        return v17;
      }
      else
      {
        *((_BYTE *)this + 56) = 1;
        return 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\ContextualProcessors\\inc\\IContextualProcessor.h",
        (const char *)0x8007000ELL,
        v19);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x91,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
        (const char *)0x8007000ELL,
        v20);
      return 2147942414LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
      (const char *)0x8000FFFFLL,
      v19);
    return 2147549183LL;
  }
}
