/*
 * XREFs of ?GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z @ 0x180280E50
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::ResetInteractionOutput @ 0x180039D10 (_anonymous_namespace_--ResetInteractionOutput.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ @ 0x180281040 (-GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ.c)
 *     ?PeekFirst@?$CQueue@PEAVCBufferedInteractionOutput@@@@QEAAPEAXPEAXPEAPEAVCBufferedInteractionOutput@@@Z @ 0x180281684 (-PeekFirst@-$CQueue@PEAVCBufferedInteractionOutput@@@@QEAAPEAXPEAXPEAPEAVCBufferedInteractionOut.c)
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x180281FF4 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 */

__int64 __fastcall CInteractionContextWrapper::GetBufferedOutputRaw(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct InteractionOutput *a4)
{
  unsigned int v4; // r15d
  struct InteractionOutput *v5; // rdi
  unsigned __int64 CurrentMicroSecTime; // rbp
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+10h]
  struct InteractionOutput *v16; // [rsp+88h] [rbp+20h]

  v16 = a4;
  v15 = a2;
  v4 = 0;
  v5 = a4;
  CurrentMicroSecTime = a3;
  if ( !a3 )
    CurrentMicroSecTime = QpcTimeConverter::GetCurrentMicroSecTime((QpcTimeConverter *)&this[15].OwningThread);
  anonymous_namespace_::ResetInteractionOutput((__int64)v5, 0);
  if ( ((unsigned __int8 (__fastcall *)(struct _RTL_CRITICAL_SECTION *))this->DebugInfo[2].ProcessLocksList.Flink)(this)
    && LODWORD(this[13].SpinCount) )
  {
    EnterCriticalSection(this + 14);
    v9 = CQueue<CBufferedInteractionOutput *>::PeekFirst(&this[13].OwningThread, v8, &v14);
    if ( v9 )
    {
      v10 = v14;
      do
      {
        if ( *(_QWORD *)v10 >= v15 && *(_QWORD *)v10 < CurrentMicroSecTime )
        {
          CInteractionContextWrapper::_UpdateInteractionOutput(
            (CInteractionContextWrapper *)this,
            (const struct INTERACTION_CONTEXT_OUTPUT *)(v10 + 12),
            v5);
          ++v4;
        }
        v10 = 0LL;
        v11 = 0LL;
        EnterCriticalSection(this + 14);
        if ( v9 && *(struct _RTL_CRITICAL_SECTION **)v9 != (struct _RTL_CRITICAL_SECTION *)&this[13].OwningThread )
        {
          v11 = *(_QWORD *)v9;
          v10 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
        }
        LeaveCriticalSection(this + 14);
        v12 = v11 == 0;
        v9 = v11;
        v5 = v16;
      }
      while ( !v12 );
    }
    LeaveCriticalSection(this + 14);
  }
  return v4;
}
