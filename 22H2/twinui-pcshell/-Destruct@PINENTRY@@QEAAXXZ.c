/*
 * XREFs of ?Destruct@PINENTRY@@QEAAXXZ @ 0x180154DAC
 * Callers:
 *     ?DestroyCallback@PINENTRY@@SAHPEAV1@PEAX@Z @ 0x180154D90 (-DestroyCallback@PINENTRY@@SAHPEAV1@PEAX@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18015AF50 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 * Callees:
 *     <none>
 */

void __fastcall PINENTRY::Destruct(PINENTRY *this)
{
  ILFree(*(LPITEMIDLIST *)this);
  *((_DWORD *)this + 6) = 0;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 1);
}
