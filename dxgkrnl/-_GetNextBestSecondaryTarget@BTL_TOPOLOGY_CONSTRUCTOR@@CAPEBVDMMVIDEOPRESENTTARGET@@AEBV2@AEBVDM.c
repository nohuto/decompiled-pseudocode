const struct DMMVIDEOPRESENTTARGET *__fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(
        const struct DMMVIDEOPRESENTTARGET *a1,
        const struct DMMVIDEOPRESENTTARGETSET *this)
{
  __int64 v2; // rbx
  const struct DMMVIDEOPRESENTTARGET *v5; // rdx
  const struct DXGADAPTER *v6; // r14
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  const struct DMMVIDEOPRESENTTARGET *v8; // rbx
  const struct DMMVIDEOPRESENTTARGET *v9; // rdi
  const struct DMMVIDEOPRESENTTARGETSET *v10; // rbx
  const struct DMMVIDEOPRESENTTARGET *i; // rbx

  v2 = *((_QWORD *)this + 11);
  if ( !*(_QWORD *)(v2 + 8) )
    WdLogSingleEntry0(1LL);
  v5 = a1;
  v6 = *(const struct DXGADAPTER **)(*(_QWORD *)(v2 + 8) + 16LL);
  while ( 1 )
  {
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, v5);
    v8 = NextTarget;
    if ( !NextTarget )
      break;
    if ( !*((_DWORD *)NextTarget + 23)
      && !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v6, NextTarget, a1)
      && !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v6, a1, v8) )
    {
      return v8;
    }
    v5 = v8;
  }
  v9 = 0LL;
  v10 = (const struct DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 3);
  if ( v10 != (const struct DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGETSET *)((char *)v10 - 8);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, i) )
    {
      if ( !*((_DWORD *)i + 23)
        && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v6, i, v9)
        && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v6, a1, i) )
      {
        v9 = i;
      }
    }
  }
  return v9;
}
