/*
 * XREFs of AlpcpCreatePort @ 0x1407137E0
 * Callers:
 *     AlpcpCreateClientPort @ 0x140713330 (AlpcpCreateClientPort.c)
 *     AlpcpAcceptConnectPort @ 0x140713844 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x14077D738 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 */

__int64 __fastcall AlpcpCreatePort(int a1, int a2, void **a3)
{
  int Object; // ebx

  Object = ObCreateObjectEx(a1, (_DWORD)AlpcPortObjectType, a2, (_BYTE)a1);
  if ( Object >= 0 )
    memset(*a3, 0, 0x1D8uLL);
  return (unsigned int)Object;
}
