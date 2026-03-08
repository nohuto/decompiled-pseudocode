/*
 * XREFs of ?ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETREFERENCEINFO@@PEBXI@Z @ 0x180048F34
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpression::ProcessSetReferenceInfo(
        CExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EXPRESSION_SETREFERENCEINFO *a3,
        _QWORD *a4)
{
  unsigned int v6; // ecx
  unsigned int v8; // edx
  SIZE_T v9; // rax
  unsigned int i; // edx
  __int128 v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ebx

  v6 = *((_DWORD *)a3 + 2);
  if ( v6 && (v8 = *((_DWORD *)a3 + 3)) != 0 && (v6 += *((_DWORD *)this + 110), v6 <= v8) )
  {
    if ( !*((_QWORD *)this + 54) )
    {
      v9 = 24LL * *((unsigned int *)a3 + 3);
      if ( !is_mul_ok(*((unsigned int *)a3 + 3), 0x18uLL) )
        v9 = -1LL;
      *((_QWORD *)this + 54) = operator new(v9);
    }
    for ( i = 0; i < *((_DWORD *)a3 + 2); ++*((_DWORD *)this + 110) )
    {
      ++i;
      v11 = *(_OWORD *)a4;
      a4 += 3;
      v12 = 3LL * *((unsigned int *)this + 110);
      v13 = *((_QWORD *)this + 54);
      *(_OWORD *)(v13 + 8 * v12) = v11;
      *(_QWORD *)(v13 + 8 * v12 + 16) = *(a4 - 1);
    }
    if ( ((*((_BYTE *)this + 216) & 2) != 0 || *((_QWORD *)this + 56))
      && (v14 = (*(__int64 (__fastcall **)(CExpression *))(*(_QWORD *)this + 232LL))(this), v16 = v14, v14 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xAFu, 0LL);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v16 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0x93u, 0LL);
  }
  return v16;
}
