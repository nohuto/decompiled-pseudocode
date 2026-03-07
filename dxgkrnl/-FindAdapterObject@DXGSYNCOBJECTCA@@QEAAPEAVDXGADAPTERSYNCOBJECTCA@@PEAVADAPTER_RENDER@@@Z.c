struct DXGADAPTERSYNCOBJECTCA *__fastcall DXGSYNCOBJECTCA::FindAdapterObject(
        DXGSYNCOBJECTCA *this,
        struct ADAPTER_RENDER *a2)
{
  DXGSYNCOBJECTCA *i; // rax

  for ( i = (DXGSYNCOBJECTCA *)*((_QWORD *)this + 37); ; i = *(DXGSYNCOBJECTCA **)i )
  {
    if ( i == (DXGSYNCOBJECTCA *)((char *)this + 296) )
      return 0LL;
    if ( !a2 || *((struct ADAPTER_RENDER **)i - 4) == a2 )
      break;
  }
  return (DXGSYNCOBJECTCA *)((char *)i - 48);
}
