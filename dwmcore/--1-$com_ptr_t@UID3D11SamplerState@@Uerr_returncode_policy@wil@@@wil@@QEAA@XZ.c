/*
 * XREFs of ??1?$com_ptr_t@UID3D11SamplerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801028D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wil::com_ptr_t<ID3D11SamplerState,wil::err_returncode_policy>::~com_ptr_t<ID3D11SamplerState,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
