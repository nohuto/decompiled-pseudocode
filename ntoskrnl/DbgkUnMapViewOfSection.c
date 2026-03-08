/*
 * XREFs of DbgkUnMapViewOfSection @ 0x1406A10EC
 * Callers:
 *     MiUnmapViewOfSection @ 0x1406A2570 (MiUnmapViewOfSection.c)
 *     MiFreeEnclaveModules @ 0x140A3B1B0 (MiFreeEnclaveModules.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     DbgkpSuppressDbgMsg @ 0x14093650C (DbgkpSuppressDbgMsg.c)
 *     DbgkpSendApiMessage @ 0x1409370E0 (DbgkpSendApiMessage.c)
 */

__int64 __fastcall DbgkUnMapViewOfSection(_KPROCESS *Object, __int64 a2)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r8
  struct _KTHREAD *v6; // rcx
  _QWORD v7[34]; // [rsp+20h] [rbp-128h] BYREF

  memset(v7, 0, sizeof(v7));
  result = (__int64)KeGetCurrentThread();
  if ( *(_BYTE *)(result + 562) )
  {
    CurrentThread = KeGetCurrentThread();
    result = *((unsigned int *)&CurrentThread[1].SwapListEntry + 2);
    if ( (result & 4) == 0 )
    {
      if ( Object[1].Affinity.StaticBitmap[29] )
      {
        v6 = KeGetCurrentThread();
        if ( (v6->MiscFlags & 0x400) != 0
          || v6->ApcStateIndex == 1
          || !v6->Teb
          || Object != CurrentThread->Process
          || (result = DbgkpSuppressDbgMsg(), !(_DWORD)result) )
        {
          v7[6] = a2;
          v7[0] = 0x800380010LL;
          LODWORD(v7[5]) = 6;
          return DbgkpSendApiMessage(Object);
        }
      }
    }
  }
  return result;
}
