void __stdcall WNDOBJ_vSetConsumer(WNDOBJ *pwo, PVOID pvConsumer)
{
  if ( pwo != *(WNDOBJ **)(*(_QWORD *)&pwo[3].coClient.iUniq + 16LL) )
    pwo->pvConsumer = pvConsumer;
}
