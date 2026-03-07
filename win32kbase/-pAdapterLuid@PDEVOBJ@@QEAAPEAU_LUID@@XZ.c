struct _LUID *__fastcall PDEVOBJ::pAdapterLuid(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 2552LL);
  if ( v2 == -4 && _bittest((const signed __int32 *)(v1 + 40), 0x11u) )
    return (struct _LUID *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 1768) + 40LL) + 2552LL) + 240LL);
  if ( !v2 || _bittest((const signed __int32 *)(v1 + 40), 0x11u) )
    return 0LL;
  return (struct _LUID *)(v2 + 240);
}
