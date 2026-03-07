struct _LUID *__fastcall PDEVOBJ::pRenderAdapterLuid(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 2552LL);
  if ( v2 == -4 && _bittest((const signed __int32 *)(v1 + 40), 0x11u) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 1768) + 40LL) + 2552LL);
    if ( (*(_DWORD *)(v3 + 160) & 0x4800000) == 0x4000000 )
      return (struct _LUID *)(v3 + 288);
    else
      return (struct _LUID *)(v3 + 240);
  }
  else if ( !v2 || _bittest((const signed __int32 *)(v1 + 40), 0x11u) )
  {
    return 0LL;
  }
  else if ( (*(_DWORD *)(v2 + 160) & 0x4800000) == 0x4000000 )
  {
    return (struct _LUID *)(v2 + 288);
  }
  else
  {
    return (struct _LUID *)(v2 + 240);
  }
}
