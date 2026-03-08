/*
 * XREFs of ?CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ @ 0x1C03083B4
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z @ 0x1C00C3B10 (-CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00C3FAC (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1C00C490C (-Win32ProbeForRead@@YAXPEAX_KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall QueryFontTreeRequest::CaptureKerningPairs(QueryFontTreeRequest *this)
{
  _WORD *v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // rbx
  unsigned int v8; // eax
  _DWORD *v9; // rax
  __int64 v10; // rax

  v2 = (_WORD *)*((_QWORD *)this + 11);
  if ( v2 )
  {
    v3 = 0;
    Win32ProbeForRead(*((char **)this + 11), 6LL, 2);
    while ( 1 )
    {
      v4 = 3LL * v3;
      if ( !v2[3 * v3] && !v2[3 * v3 + 1] && !v2[3 * v3 + 2] )
        break;
      v10 = v3 + 1;
      if ( (unsigned int)v10 < v3 )
        return;
      ++v3;
      Win32ProbeForRead((char *)&v2[3 * v10], 6LL, 2);
    }
    v5 = v3 + 1;
    if ( (unsigned int)v5 >= v3 )
    {
      v6 = 6 * v5;
      if ( (unsigned __int64)(6 * v5) <= 0xFFFFFFFF )
      {
        v7 = **((_QWORD **)this + 8);
        v8 = (**(__int64 (__fastcall ***)(QueryFontTreeRequest *))this)(this);
        v9 = UmfdAllocation::ObtainKernelmodeAllocation(
               v8,
               v7,
               v2,
               v6,
               0LL,
               (unsigned __int8 (__fastcall *)(void *, __int64, _QWORD))UmfdAllocation::TryBufferHasSameContent);
        if ( v9 )
        {
          *(_DWORD *)((char *)v9 + 2 * v4) = 0;
          *((_WORD *)v9 + v4 + 2) = 0;
          *((_QWORD *)this + 9) = v9;
        }
      }
    }
  }
}
