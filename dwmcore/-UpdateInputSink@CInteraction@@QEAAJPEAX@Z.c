/*
 * XREFs of ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800E53C4
 * Callers:
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800E5348 (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSI.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800E5448 (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800E5568 (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 *     ??0CInputSinkStruct@@QEAA@XZ @ 0x1800E57C0 (--0CInputSinkStruct@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CInteraction::UpdateInputSink(CInteraction *this, void *a2)
{
  unsigned int v2; // ebx
  CInputSinkStruct **v3; // rdi
  CInputSinkStruct *v6; // rax
  CInputSinkStruct *v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // esi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CInputSinkStruct **)((char *)this + 104);
  if ( a2 )
  {
    if ( *v3 )
      goto LABEL_7;
    v6 = (CInputSinkStruct *)DefaultHeap::AllocClear(0x70uLL);
    if ( !v6 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v7 = CInputSinkStruct::CInputSinkStruct(v6);
    *v3 = v7;
    if ( v7 )
    {
LABEL_7:
      v9 = CInputSinkStruct::ReplaceInputHandle(*v3, a2);
      v11 = v9;
      if ( v9 >= 0 )
        return (unsigned int)v9;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x2FDu, 0LL);
      v2 = v11;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x2F9u, 0LL);
      NtCloseCompositionInputSink(a2);
      v2 = -2147024882;
    }
  }
  SAFE_DELETE<CInputSinkStruct>(v3);
  return v2;
}
