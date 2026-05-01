/*
 * XREFs of ?Next@CPinnedListEnum@@UEAAJKPEAPEFAU_ITEMIDLIST@@PEAK@Z @ 0x180159F40
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z @ 0x18015E8AC (-_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPinnedListEnum::Next(CPinnedListEnum *this, __int64 a2, struct _ITEMIDLIST **a3, unsigned int *a4)
{
  __int64 result; // rax
  __int64 *v8; // rsi
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int PidlFromStream; // ebx

  if ( a4 )
    *a4 = 0;
  result = *((unsigned int *)this + 6);
  if ( !(_DWORD)result )
  {
    v8 = (__int64 *)((char *)this + 32);
    if ( *((_QWORD *)this + 4) )
      goto LABEL_10;
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2), 0LL);
    *v8 = v9;
    if ( v9 )
    {
      if ( (unsigned int)SHIsEmptyStream(v9) )
      {
        wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(v8);
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2));
        v11 = *((_QWORD *)this + 2);
        *((_DWORD *)this + 11) = v10;
        *((_DWORD *)this + 10) = *((_DWORD *)this + 11) < (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 88LL))(v11);
      }
    }
    if ( *v8 )
    {
LABEL_10:
      *a3 = 0LL;
      PidlFromStream = CPinnedListEnum::_NextPidlFromStream(this, a3);
    }
    else
    {
      PidlFromStream = 1;
    }
    if ( a4 )
      *a4 = PidlFromStream == 0;
    *((_DWORD *)this + 6) = PidlFromStream;
    if ( PidlFromStream )
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(v8);
    return PidlFromStream;
  }
  return result;
}
