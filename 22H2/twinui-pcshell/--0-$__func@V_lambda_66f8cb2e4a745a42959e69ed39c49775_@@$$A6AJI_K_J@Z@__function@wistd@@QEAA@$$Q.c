/*
 * XREFs of ??0?$__func@V_lambda_66f8cb2e4a745a42959e69ed39c49775_@@$$A6AJI_K_J@Z@__function@wistd@@QEAA@$$QEAV_lambda_66f8cb2e4a745a42959e69ed39c49775_@@@Z @ 0x1800B0F7C
 * Callers:
 *     ??$RuntimeClassInitialize@VShellFeedsExperienceManagerImpl@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVShellFeedsExperienceManagerImpl@@P84@EAAJI_K_J@Z@Z @ 0x1800B0360 (--$RuntimeClassInitialize@VShellFeedsExperienceManagerImpl@@@IImmersiveWindowMessageNotification.c)
 *     ?__move@?$__func@V_lambda_66f8cb2e4a745a42959e69ed39c49775_@@$$A6AJI_K_J@Z@__function@wistd@@UEAAXPEAV?$__base@$$A6AJI_K_J@Z@23@@Z @ 0x1800B9E70 (-__move@-$__func@V_lambda_66f8cb2e4a745a42959e69ed39c49775_@@$$A6AJI_K_J@Z@__function@wistd@@UEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<_lambda_66f8cb2e4a745a42959e69ed39c49775_,long (unsigned int,unsigned __int64,__int64)>::__func<_lambda_66f8cb2e4a745a42959e69ed39c49775_,long (unsigned int,unsigned __int64,__int64)>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &wistd::__function::__func<_lambda_66f8cb2e4a745a42959e69ed39c49775_,long (unsigned int,unsigned __int64,__int64)>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( a1 + 8 != a2 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 8);
  result = a1;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 16);
  return result;
}
