/*
 * XREFs of ?InitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800E56AC
 * Callers:
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800E5568 (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?InitializeQueueInfo@CInputSinkStruct@@AEAAJAEAUInputQueueInfo@1@@Z @ 0x1800E571C (-InitializeQueueInfo@CInputSinkStruct@@AEAAJAEAUInputQueueInfo@1@@Z.c)
 */

void __fastcall CInputSinkStruct::InitializeQueues(CInputSinkStruct *this)
{
  struct CInputSinkStruct::InputQueueInfo *v1; // rsi
  int IsImplicit; // eax
  bool v4; // cl
  struct CInputSinkStruct::InputQueueInfo *i; // rbx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CInputSinkStruct *)((char *)this + 64);
  IsImplicit = NtQueryCompositionInputIsImplicit(*((_QWORD *)this + 8), &v6);
  v4 = 0;
  if ( IsImplicit >= 0 )
    v4 = v6 != 0;
  *((_BYTE *)this + 104) = v4;
  for ( i = this; i != v1; i = (struct CInputSinkStruct::InputQueueInfo *)((char *)i + 16) )
    CInputSinkStruct::InitializeQueueInfo(this, i);
}
