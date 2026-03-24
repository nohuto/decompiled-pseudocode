/*
 * XREFs of ?GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z @ 0x180230350
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::ResetInteractionOutput @ 0x1800B6078 (_anonymous_namespace_--ResetInteractionOutput.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ @ 0x180230528 (-GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ.c)
 *     ?PeekFirst@?$CQueue@PEAVCBufferedInteractionOutput@@@@QEAAPEAXPEAXPEAPEAVCBufferedInteractionOutput@@@Z @ 0x180230B9C (-PeekFirst@-$CQueue@PEAVCBufferedInteractionOutput@@@@QEAAPEAXPEAXPEAPEAVCBufferedInteractionOut.c)
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x180231538 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 */

__int64 __fastcall CInteractionContextWrapper::GetBufferedOutputRaw(
        CInteractionContextWrapper *this,
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
    CurrentMicroSecTime = QpcTimeConverter::GetCurrentMicroSecTime((CInteractionContextWrapper *)((char *)this + 624));
  anonymous_namespace_::ResetInteractionOutput((__int64)v5, 0);
  if ( (*(unsigned __int8 (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 112LL))(this)
    && *((_DWORD *)this + 140) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 568));
    v9 = CQueue<CBufferedInteractionOutput *>::PeekFirst((char *)this + 544, v8, &v14);
    if ( v9 )
    {
      v10 = v14;
      do
      {
        if ( *(_QWORD *)v10 >= v15 && *(_QWORD *)v10 < CurrentMicroSecTime )
        {
          CInteractionContextWrapper::_UpdateInteractionOutput(
            this,
            (const struct INTERACTION_CONTEXT_OUTPUT *)(v10 + 12),
            v5);
          ++v4;
        }
        v10 = 0LL;
        v11 = 0LL;
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 568));
        if ( v9 && *(CInteractionContextWrapper **)v9 != (CInteractionContextWrapper *)((char *)this + 544) )
        {
          v11 = *(_QWORD *)v9;
          v10 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 568));
        v12 = v11 == 0;
        v9 = v11;
        v5 = v16;
      }
      while ( !v12 );
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 568));
  }
  return v4;
}
