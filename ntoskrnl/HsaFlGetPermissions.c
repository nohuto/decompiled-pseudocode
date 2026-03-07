__int64 __fastcall HsaFlGetPermissions(_DWORD *a1)
{
  return *a1 & 2 | 1u;
}
