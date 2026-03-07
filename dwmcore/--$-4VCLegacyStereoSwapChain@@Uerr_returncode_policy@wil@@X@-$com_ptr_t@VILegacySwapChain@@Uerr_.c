__int64 *__fastcall wil::com_ptr_t<ILegacySwapChain,wil::err_returncode_policy>::operator=<CLegacyStereoSwapChain,wil::err_returncode_policy,void>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( *(_QWORD *)a2 )
    v3 = *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 16LL) + *(_QWORD *)a2 + 8LL;
  else
    v3 = 0LL;
  v4 = *a1;
  *a1 = v3;
  if ( v3 )
  {
    v5 = v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  if ( v4 )
  {
    v6 = v4 + *(int *)(*(_QWORD *)(v4 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return a1;
}
