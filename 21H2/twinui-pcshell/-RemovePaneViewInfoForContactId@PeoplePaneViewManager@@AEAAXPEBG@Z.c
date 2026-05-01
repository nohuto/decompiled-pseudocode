/*
 * XREFs of ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1802D0F3C
 * Callers:
 *     wil::details::lambda_call__lambda_8390a35183845e038b2d3788dae82ba3___::_lambda_call__lambda_8390a35183845e038b2d3788dae82ba3___ @ 0x1802CD4F4 (wil--details--lambda_call__lambda_8390a35183845e038b2d3788dae82ba3___--_lambda_call__lambda_8390.c)
 *     _lambda_6f903727e28235e985aa4aa4647c4ffc_::operator() @ 0x1802CD8CC (_lambda_6f903727e28235e985aa4aa4647c4ffc_--operator().c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1802D00B0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x18020FC64 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x1802D1F50 (-erase@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneV.c)
 */

void __fastcall PeoplePaneViewManager::RemovePaneViewInfoForContactId(RTL_SRWLOCK *this, unsigned __int16 *a2)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 **Ptr; // r11
  __int64 **v6; // rsi
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 16;
  AcquireSRWLockExclusive(this + 16);
  Ptr = (__int64 **)this[17].Ptr;
  v6 = (__int64 **)this[18].Ptr;
  while ( Ptr != v6 && (*((_DWORD *)*Ptr + 15) || (unsigned int)std::wstring::compare(*Ptr, a2)) )
    Ptr += 2;
  if ( Ptr != v6 )
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(&this[17], &v7, Ptr);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
