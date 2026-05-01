/*
 * XREFs of std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___ @ 0x18035C740
 * Callers:
 *     ?GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA?AV?$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ @ 0x18035DAA4 (-GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA-AV-$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18035CBA4 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18035ED68 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

void __fastcall std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb___(struct std::once_flag *a1, __int64 a2)
{
  __int64 v4; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v7[24]; // [rsp+40h] [rbp-18h] BYREF

  __ExceptionPtrCreate(v5);
  v6[0] = v5;
  v6[1] = a2;
  if ( std::_Execute_once(
         a1,
         (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_9127ed4c7f0b883365da4a18d16712eb_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
         v6) )
  {
    __ExceptionPtrDestroy(v5);
  }
  else
  {
    if ( __ExceptionPtrToBool(v5) )
    {
      v4 = std::exception_ptr::exception_ptr((std::exception_ptr *)v7, (const struct std::exception_ptr *)v5);
      std::rethrow_exception(v4);
      __debugbreak();
    }
    std::_XGetLastError();
    __debugbreak();
    std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb____::_1_::dtor_0();
  }
}
