/*
 * XREFs of ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x180006098
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180016E88 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180017434 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180005FB0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::SemaphoreValue::Destroy(wil::details **this)
{
  wil::details *v1; // rsi
  DWORD LastError; // ebx
  void *v4; // rdx
  wil::details *v5; // rsi
  DWORD v6; // ebx
  void *v7; // rdx

  v1 = *this;
  if ( *this )
  {
    LastError = GetLastError();
    wil::details::CloseHandle(v1, v4);
    SetLastError(LastError);
  }
  *this = 0LL;
  v5 = this[1];
  if ( v5 )
  {
    v6 = GetLastError();
    wil::details::CloseHandle(v5, v7);
    SetLastError(v6);
  }
  this[1] = 0LL;
}
