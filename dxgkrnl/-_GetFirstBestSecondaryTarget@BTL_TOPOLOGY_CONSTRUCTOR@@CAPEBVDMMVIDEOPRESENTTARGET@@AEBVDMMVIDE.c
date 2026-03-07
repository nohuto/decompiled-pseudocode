const struct DMMVIDEOPRESENTTARGET *__fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(
        const struct DMMVIDEOPRESENTTARGETSET *this)
{
  __int64 v1; // rbx
  const struct DMMVIDEOPRESENTTARGET *v3; // rdi
  const struct DXGADAPTER *v4; // rbp
  const struct DMMVIDEOPRESENTTARGETSET *v5; // rbx
  const struct DMMVIDEOPRESENTTARGET *i; // rbx

  v1 = *((_QWORD *)this + 11);
  if ( !*(_QWORD *)(v1 + 8) )
    WdLogSingleEntry0(1LL);
  v3 = 0LL;
  v4 = *(const struct DXGADAPTER **)(*(_QWORD *)(v1 + 8) + 16LL);
  v5 = (const struct DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 3);
  if ( v5 != (const struct DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGETSET *)((char *)v5 - 8);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, i) )
    {
      if ( !*((_DWORD *)i + 23) && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v4, i, v3) )
        v3 = i;
    }
  }
  return v3;
}
