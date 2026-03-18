/*
 * XREFs of AlpcpCreatePort @ 0x140717C64
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1407169EC (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x1407177B4 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x1407CC8A8 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     ObCreateObjectEx @ 0x140730870 (ObCreateObjectEx.c)
 */

__int64 __fastcall AlpcpCreatePort(int a1, int a2, void **a3)
{
  int Object; // ebx

  Object = ObCreateObjectEx(a1, (_DWORD)AlpcPortObjectType, a2, (_BYTE)a1);
  if ( Object >= 0 )
    memset(*a3, 0, 0x1D8uLL);
  return (unsigned int)Object;
}
