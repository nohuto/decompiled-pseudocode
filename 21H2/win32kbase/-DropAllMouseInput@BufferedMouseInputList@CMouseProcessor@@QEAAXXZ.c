/*
 * XREFs of ?DropAllMouseInput@BufferedMouseInputList@CMouseProcessor@@QEAAXXZ @ 0x1C00C4824
 * Callers:
 *     ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x1C00C47C0 (-MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x1C01FC678 (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 * Callees:
 *     ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x1C01F90B0 (--_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z.c)
 */

void __fastcall CMouseProcessor::BufferedMouseInputList::DropAllMouseInput(
        CMouseProcessor::BufferedMouseInputList *this,
        unsigned int a2)
{
  CMouseProcessor::MouseInputMessage **v2; // rbx
  CMouseProcessor::MouseInputMessage *v3; // rcx
  CMouseProcessor::MouseInputMessage *v4; // rax

  v2 = (CMouseProcessor::MouseInputMessage **)((char *)this + 8);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (CMouseProcessor::MouseInputMessage *)v2 )
      break;
    if ( *((CMouseProcessor::MouseInputMessage ***)v3 + 1) != v2
      || (v4 = *(CMouseProcessor::MouseInputMessage **)v3,
          *(CMouseProcessor::MouseInputMessage **)(*(_QWORD *)v3 + 8LL) != v3) )
    {
      __fastfail(3u);
    }
    *v2 = v4;
    *((_QWORD *)v4 + 1) = v2;
    CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(v3, a2);
  }
}
