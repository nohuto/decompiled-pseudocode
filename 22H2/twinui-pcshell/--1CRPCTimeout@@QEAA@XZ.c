/*
 * XREFs of ??1CRPCTimeout@@QEAA@XZ @ 0x1801E994C
 * Callers:
 *     _CImmersiveApp::QueryService_::_1_::dtor$0 @ 0x1801EFB10 (_CImmersiveApp--QueryService_--_1_--dtor$0.c)
 *     __lambda_4b23a44972d25bfc52aa58256fd4c9b9_::operator()_::_1_::dtor$0 @ 0x1802DA5B8 (__lambda_4b23a44972d25bfc52aa58256fd4c9b9_--operator()_--_1_--dtor$0.c)
 *     _TabViewManager::TryFindAndNotifyReplacementTab_::_1_::dtor$6 @ 0x1802EDC8E (_TabViewManager--TryFindAndNotifyReplacementTab_--_1_--dtor$6.c)
 *     __lambda_11f4e68007e87e41ff887ccfc1974ff4_::operator()_::_1_::dtor$5 @ 0x1802FD649 (__lambda_11f4e68007e87e41ff887ccfc1974ff4_--operator()_--_1_--dtor$5.c)
 *     __lambda_11f4e68007e87e41ff887ccfc1974ff4_::operator()_::_1_::dtor$6 @ 0x1802FD655 (__lambda_11f4e68007e87e41ff887ccfc1974ff4_--operator()_--_1_--dtor$6.c)
 *     _TabTransferManager::PerformComplete_::_1_::dtor$8 @ 0x1802FF767 (_TabTransferManager--PerformComplete_--_1_--dtor$8.c)
 *     _TabTransferManager::PerformDrop_::_1_::dtor$3 @ 0x1802FFAD9 (_TabTransferManager--PerformDrop_--_1_--dtor$3.c)
 *     _TabTransferManager::PerformDrop_::_1_::dtor$5 @ 0x1802FFAF1 (_TabTransferManager--PerformDrop_--_1_--dtor$5.c)
 *     __lambda_1cf7f7afac08fe2873a8a6306d8dbd84_::operator()_::_1_::dtor$6 @ 0x18033A11D (__lambda_1cf7f7afac08fe2873a8a6306d8dbd84_--operator()_--_1_--dtor$6.c)
 *     __lambda_1c848fc40f8d66460ef5049a4e343f17_::operator()_::_1_::dtor$6 @ 0x18034AED2 (__lambda_1c848fc40f8d66460ef5049a4e343f17_--operator()_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CRPCTimeout::~CRPCTimeout(CRPCTimeout *this)
{
  CBaseRPCTimeout::Disarm(this);
}
