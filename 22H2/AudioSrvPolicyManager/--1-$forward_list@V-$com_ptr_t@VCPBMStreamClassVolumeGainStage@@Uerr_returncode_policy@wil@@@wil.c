/*
 * XREFs of ??1?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18002B9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000EF90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>(
        _QWORD **a1)
{
  _QWORD *v1; // rbx
  volatile signed __int32 *v2; // rcx
  _QWORD *v3; // rdi

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (volatile signed __int32 *)v1[1];
      v3 = (_QWORD *)*v1;
      if ( v2 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v2);
      operator delete(v1, (const struct std::nothrow_t *)0x10);
      v1 = v3;
    }
    while ( v3 );
  }
}
