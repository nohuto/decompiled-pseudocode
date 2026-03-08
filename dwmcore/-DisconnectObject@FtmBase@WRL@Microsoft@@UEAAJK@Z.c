/*
 * XREFs of ?DisconnectObject@FtmBase@WRL@Microsoft@@UEAAJK@Z @ 0x180291040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::FtmBase::DisconnectObject(Microsoft::WRL::FtmBase *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 64LL))(v1);
  else
    return 2147942414LL;
}
