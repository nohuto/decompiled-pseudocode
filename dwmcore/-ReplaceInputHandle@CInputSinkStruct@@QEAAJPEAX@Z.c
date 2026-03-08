/*
 * XREFs of ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800E5568
 * Callers:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800E53C4 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetCompositionInputHandle@CInputSinkStruct@@AEAAXPEAX@Z @ 0x1800E5644 (-SetCompositionInputHandle@CInputSinkStruct@@AEAAXPEAX@Z.c)
 *     ?InitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800E56AC (-InitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CInputSinkStruct::ReplaceInputHandle(CInputSinkStruct *this, void *a2)
{
  unsigned int v3; // ebx
  __int128 v4; // xmm0
  __int64 v5; // rcx
  __int64 v6; // xmm1_8
  int CompositionInputSink; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // xmm1_8
  int CompositionInputSinkLuid; // eax
  __int64 v12; // rcx
  _BYTE v14[24]; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)v14 = 24;
  memset(&v14[4], 0, 20);
  v3 = 0;
  CInputSinkStruct::SetCompositionInputHandle(this, a2);
  v4 = *(_OWORD *)v14;
  *((_QWORD *)this + 12) = 0LL;
  v5 = *((_QWORD *)this + 8);
  v6 = *(_QWORD *)&v14[16];
  *((_BYTE *)this + 104) = 0;
  *(_OWORD *)((char *)this + 72) = v4;
  *((_QWORD *)this + 11) = v6;
  if ( v5 )
  {
    CompositionInputSink = NtQueryCompositionInputSink(v5, v14);
    if ( CompositionInputSink < 0 )
    {
      v3 = CompositionInputSink | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, CompositionInputSink | 0x10000000, 0x34u, 0LL);
    }
    else
    {
      v9 = *((_QWORD *)this + 8);
      v10 = *(_QWORD *)&v14[16];
      *(_OWORD *)((char *)this + 72) = *(_OWORD *)v14;
      *((_QWORD *)this + 11) = v10;
      CompositionInputSinkLuid = NtQueryCompositionInputSinkLuid(v9, (char *)this + 96);
      if ( CompositionInputSinkLuid < 0 )
      {
        v3 = CompositionInputSinkLuid | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, CompositionInputSinkLuid | 0x10000000, 0x37u, 0LL);
      }
      else
      {
        CInputSinkStruct::InitializeQueues(this);
      }
    }
  }
  return v3;
}
