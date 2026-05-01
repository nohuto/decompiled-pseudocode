/*
 * XREFs of ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x180026620
 * Callers:
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800264E8 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x1800CB370 (-shared_from_this@-$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA-AV-$shared_ptr@V.c)
 *     _lambda_536d29ca497f1a4a88268fb5f9ff4d76_::operator() @ 0x1800CF4A0 (_lambda_536d29ca497f1a4a88268fb5f9ff4d76_--operator().c)
 *     _lambda_3365270d15408528c67f40078b37390e_::operator() @ 0x1801368B8 (_lambda_3365270d15408528c67f40078b37390e_--operator().c)
 *     ?NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z @ 0x1803388F8 (-NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z.c)
 *     ??R_lambda_be3e5d9dce35d2c8dbfa8485373731d5_@@QEBAXXZ @ 0x180395100 (--R_lambda_be3e5d9dce35d2c8dbfa8485373731d5_@@QEBAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Ref_count_base::_Incref_nz(std::_Ref_count_base *this)
{
  signed __int32 v1; // eax

  while ( 1 )
  {
    v1 = *((_DWORD *)this + 2);
    if ( !v1 )
      break;
    if ( v1 == _InterlockedCompareExchange((volatile signed __int32 *)this + 2, v1 + 1, v1) )
      return 1;
  }
  return 0;
}
