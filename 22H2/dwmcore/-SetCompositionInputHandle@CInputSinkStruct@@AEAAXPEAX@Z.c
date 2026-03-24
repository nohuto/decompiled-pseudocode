/*
 * XREFs of ?SetCompositionInputHandle@CInputSinkStruct@@AEAAXPEAX@Z @ 0x1800E143C
 * Callers:
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800E124C (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800E14F8 (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInputSinkStruct::SetCompositionInputHandle(CInputSinkStruct *this, void *a2)
{
  CInputSinkStruct *v2; // rdi
  CInputSinkStruct *v3; // rbx

  v2 = (CInputSinkStruct *)((char *)this + 64);
  v3 = this;
  if ( *((_QWORD *)this + 8) )
  {
    NotifyInputSinkRemoved();
    while ( v3 != v2 )
    {
      *((_QWORD *)v3 + 1) = 0LL;
      v3 = (CInputSinkStruct *)((char *)v3 + 16);
    }
    NtCloseCompositionInputSink(*(_QWORD *)v2);
  }
  *(_QWORD *)v2 = a2;
}
