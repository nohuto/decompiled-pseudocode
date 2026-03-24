/*
 * XREFs of NtDxgkPinResources @ 0x1C0171500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C0171530 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C0221860 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 */

__int64 __fastcall NtDxgkPinResources(struct _D3DKMT_PINRESOURCES *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // r8
  __int64 v5; // r9
  struct DXGPROCESS *Current; // rax
  unsigned __int64 v8; // rbx

  v3 = DxgkPinResourcesInternal(a1);
  if ( v3 == -1073741811 )
  {
    if ( byte_1C00B1FF8 )
    {
      Current = DXGPROCESS::GetCurrent(v2, v1, v4, v5);
      v8 = (unsigned __int64)Current;
      if ( !Current || (*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 216LL))() )
      {
        DxgCreateLiveDumpWithWdLogs(0x193u, 0x80EuLL, (unsigned __int64)KeGetCurrentThread(), v8, 0LL, 0);
        byte_1C00B1FF8 = 0;
      }
    }
  }
  return v3;
}
