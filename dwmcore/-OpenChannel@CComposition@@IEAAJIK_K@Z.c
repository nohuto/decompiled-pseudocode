/*
 * XREFs of ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x1800AA7F0
 * Callers:
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x1800AA450 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCChannelContext@@@@YAXAEAPEAVCChannelContext@@@Z @ 0x1800AA7C8 (--$ReleaseInterface@VCChannelContext@@@@YAXAEAPEAVCChannelContext@@@Z.c)
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x1800AA8DC (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ?AddAndSet@?$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z @ 0x1800ABA84 (-AddAndSet@-$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CComposition::OpenChannel(CComposition *this, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 *v6; // r14
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // eax
  struct CChannelContext *v10; // rax
  __int64 v11; // rcx
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-28h]
  struct CChannelContext *v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h] BYREF

  v15 = 0LL;
  if ( a2 >= 0x10000
    || (v6 = (__int64 *)((char *)this + 440), a2 < *((_DWORD *)this + 116)) && *(_QWORD *)(*v6 + 8LL * a2) )
  {
    v8 = -2147024809;
    v13 = -2147024809;
    v14 = 1741;
    goto LABEL_13;
  }
  v7 = CChannelContext::Create(a2, a3, a4, *((struct CConnection **)this + 83), &v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    v14 = 1751;
    goto LABEL_11;
  }
  v9 = *((_DWORD *)this + 116);
  if ( a2 >= v9 )
  {
    v16 = 0LL;
    v7 = DynArray<CChannelContext *,1>::AddAndSet(v6, a2 - v9 + 1, &v16);
    v8 = v7;
    if ( v7 < 0 )
    {
      v14 = 1761;
LABEL_11:
      v13 = v7;
LABEL_13:
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v13, v14, 0LL);
      goto LABEL_7;
    }
  }
  v10 = v15;
  v11 = *v6;
  v15 = 0LL;
  *(_QWORD *)(v11 + 8LL * a2) = v10;
LABEL_7:
  ReleaseInterface<CChannelContext>((__int64 *)&v15);
  return v8;
}
