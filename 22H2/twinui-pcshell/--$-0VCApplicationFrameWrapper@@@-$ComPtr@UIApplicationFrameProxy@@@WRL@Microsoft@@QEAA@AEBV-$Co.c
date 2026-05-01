/*
 * XREFs of ??$?0VCApplicationFrameWrapper@@@?$ComPtr@UIApplicationFrameProxy@@@WRL@Microsoft@@QEAA@AEBV?$ComPtr@VCApplicationFrameWrapper@@@12@PEAPEAX@Z @ 0x1801E35CC
 * Callers:
 *     ?GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z @ 0x18000DCA0 (-GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IApplicationFrameProxy>::ComPtr<IApplicationFrameProxy>(
        __int64 *a1,
        _QWORD *a2)
{
  *a1 = (*a2 + 8LL) & -(__int64)(*a2 != 0LL);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  return a1;
}
