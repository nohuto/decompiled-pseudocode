/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_64a1b3f60083f412cbdb681d3efb1364_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x18008CED0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800795F8 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0MPCHeadUpdateListener@@QEAA@XZ @ 0x18008D4A0 (--0MPCHeadUpdateListener@@QEAA@XZ.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x18008D7D4 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_64a1b3f60083f412cbdb681d3efb1364_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        void **a2)
{
  void *v2; // rbx
  const char *v3; // r9
  __int64 result; // rax
  void *v5; // rbx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v2 = operator new(0xC8uLL);
    memset_0(v2, 0, 0xC8uLL);
    MPCHeadUpdateListener::s_instance = MPCHeadUpdateListener::MPCHeadUpdateListener((MPCHeadUpdateListener *)v2);
    if ( !MPCHeadUpdateListener::s_instance )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        33LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        v3);
      __debugbreak();
    }
    MPCHeadUpdateListener::Initialize(retaddr);
    result = 1LL;
  }
  catch ( ... )
  {
    v5 = *a2;
    __ExceptionPtrCreate(v6);
    __ExceptionPtrCurrentException(v6);
    __ExceptionPtrAssign(v5, v6);
    __ExceptionPtrDestroy(v6);
    return 0LL;
  }
  return result;
}
