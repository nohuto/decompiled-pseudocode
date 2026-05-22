/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_ce8a15022103a02b96acfc2f7dcf1bbe_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1801A40B0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     ??0InfoMetadata@@QEAA@XZ @ 0x1801A457C (--0InfoMetadata@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_ce8a15022103a02b96acfc2f7dcf1bbe_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        void **a2)
{
  InfoMetadata *v2; // rcx
  __int64 result; // rax
  void *v4; // rbx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  try
  {
    v2 = (InfoMetadata *)operator new(0x18uLL);
    InfoMetadata::s_instanceInfoMetadata = InfoMetadata::InfoMetadata(v2);
    result = 1LL;
  }
  catch ( ... )
  {
    v4 = *a2;
    __ExceptionPtrCreate(v5);
    __ExceptionPtrCurrentException(v5);
    __ExceptionPtrAssign(v4, v5);
    __ExceptionPtrDestroy(v5);
    return 0LL;
  }
  return result;
}
