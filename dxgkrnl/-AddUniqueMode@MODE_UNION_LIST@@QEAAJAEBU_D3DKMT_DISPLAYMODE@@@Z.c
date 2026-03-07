__int64 __fastcall MODE_UNION_LIST::AddUniqueMode(MODE_UNION_LIST *this, const struct _D3DKMT_DISPLAYMODE *a2)
{
  unsigned int v2; // ebx
  struct _D3DKMT_DISPLAYMODE *v5; // rax
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0;
  v5 = MODE_UNION_LIST::SearchIndexdModeList(this, a2, &v7);
  if ( v5 )
  {
    if ( (*(_DWORD *)&v5->Flags & 2) != 0 )
    {
      MODE_UNION_LIST::RemoveMode(this, v7);
      MODE_UNION_LIST::AddMode(this, a2, v7);
    }
    else
    {
      UpgradeDispModeFlags((__int64)v5, (__int64)a2);
    }
  }
  else
  {
    return (unsigned int)MODE_UNION_LIST::AddMode(this, a2, v7);
  }
  return v2;
}
