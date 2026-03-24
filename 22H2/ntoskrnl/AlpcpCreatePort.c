/*
 * XREFs of AlpcpCreatePort @ 0x1405E0F24
 * Callers:
 *     AlpcpCreateClientPort @ 0x1405E054C (AlpcpCreateClientPort.c)
 *     AlpcpAcceptConnectPort @ 0x1405E103C (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x14068D758 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     ObCreateObjectEx @ 0x140651EA0 (ObCreateObjectEx.c)
 */

__int64 __fastcall AlpcpCreatePort(int a1, int a2, void **a3)
{
  int Object; // ebx

  Object = ObCreateObjectEx(a1, (_DWORD)AlpcPortObjectType, a2, a1);
  if ( Object >= 0 )
    memset(*a3, 0, 0x1D8uLL);
  return (unsigned int)Object;
}
