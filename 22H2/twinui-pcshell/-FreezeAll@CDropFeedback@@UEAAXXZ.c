/*
 * XREFs of ?FreezeAll@CDropFeedback@@UEAAXXZ @ 0x180492050
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDropFeedback::FreezeAll(CDropFeedback *this)
{
  __int64 v2; // rcx
  unsigned int i; // edi
  __int64 v4; // rbx
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v2 + 24LL))(v2, &v5);
    for ( i = 0; i < v5; ++i )
    {
      v6 = 0LL;
      v4 = *((_QWORD *)this + 13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
      if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v4 + 32LL))(
             v4,
             i,
             &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810,
             &v6) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 176LL))(v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
    }
  }
}
