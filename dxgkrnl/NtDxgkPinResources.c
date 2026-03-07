__int64 __fastcall NtDxgkPinResources(struct _D3DKMT_PINRESOURCES *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned int v4; // esi
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdi

  v4 = DxgkPinResourcesInternal(a1, a2, a3);
  if ( v4 == -1073741811 )
  {
    if ( byte_1C013B157 )
    {
      Current = DXGPROCESS::GetCurrent(v3);
      v6 = (__int64)Current;
      if ( !Current || (*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 216LL))() )
      {
        DxgCreateLiveDumpWithWdLogs2(0x193u, 2062LL, (__int64)KeGetCurrentThread(), v6, 0LL, 0LL);
        byte_1C013B157 = 0;
      }
    }
  }
  return v4;
}
