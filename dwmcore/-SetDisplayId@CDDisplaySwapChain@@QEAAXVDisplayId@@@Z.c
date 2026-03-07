__int64 __fastcall CDDisplaySwapChain::SetDisplayId(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 96) != a2 )
  {
    *(_DWORD *)(a1 + 96) = a2;
    v2 = *(_QWORD *)(a1 + 128);
    if ( v2 )
    {
      v3 = v2 + 8 + *(int *)(*(_QWORD *)(v2 + 8) + 24LL);
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
    }
  }
  return result;
}
