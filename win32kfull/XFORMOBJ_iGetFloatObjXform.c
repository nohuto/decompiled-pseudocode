ULONG __stdcall XFORMOBJ_iGetFloatObjXform(XFORMOBJ *pxo, FLOATOBJ_XFORM *pxfo)
{
  if ( !pxo )
    return -1;
  if ( pxfo )
    EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)pxo, pxfo);
  switch ( *(_DWORD *)(*(_QWORD *)&pxo->ulReserved + 32LL) & 0x43 )
  {
    case 1:
      return 2;
    case 3:
      return 1;
    case 67:
      return 0;
  }
  return 3;
}
