/*
 * XREFs of ?InitializeQueueInfo@CInputSinkStruct@@AEAAJAEAUInputQueueInfo@1@@Z @ 0x1800E571C
 * Callers:
 *     ?InitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800E56AC (-InitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CInputSinkStruct::InitializeQueueInfo(
        CInputSinkStruct *this,
        struct CInputSinkStruct::InputQueueInfo *a2)
{
  __int64 v2; // rcx
  __int64 v4; // rdx
  unsigned int v5; // ebx
  int CompositionInputQueueAndTransform; // eax
  __int64 v7; // rcx
  _OWORD v9[3]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v10; // [rsp+60h] [rbp-68h]
  _BYTE v11[64]; // [rsp+70h] [rbp-58h] BYREF

  v2 = *((_QWORD *)this + 8);
  v4 = *(unsigned int *)a2;
  v5 = -2147467259;
  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  CompositionInputQueueAndTransform = NtQueryCompositionInputQueueAndTransform(v2, v4, v9, v11);
  if ( CompositionInputQueueAndTransform < 0 )
  {
    v5 = CompositionInputQueueAndTransform | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, CompositionInputQueueAndTransform | 0x10000000, 0xECu, 0LL);
  }
  else if ( (unsigned int)(LODWORD(v9[0]) - 2) <= 1 )
  {
    *((_QWORD *)a2 + 1) = *((_QWORD *)&v9[0] + 1);
  }
  return v5;
}
