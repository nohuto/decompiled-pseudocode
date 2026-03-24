/*
 * XREFs of DbgkUnMapViewOfSection @ 0x14068B978
 * Callers:
 *     MiUnmapViewOfSection @ 0x14061E510 (MiUnmapViewOfSection.c)
 *     MiFreeEnclaveModules @ 0x1408D2F70 (MiFreeEnclaveModules.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     DbgkpSendApiMessage @ 0x1408871A4 (DbgkpSendApiMessage.c)
 *     DbgkpSuppressDbgMsg @ 0x140887C98 (DbgkpSuppressDbgMsg.c)
 */

__int64 __fastcall DbgkUnMapViewOfSection(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r8
  struct _KTHREAD *v6; // rcx
  void *Teb; // rcx
  _QWORD v8[34]; // [rsp+20h] [rbp-128h] BYREF

  memset(v8, 0, sizeof(v8));
  result = (__int64)KeGetCurrentThread();
  if ( *(_BYTE *)(result + 562) )
  {
    CurrentThread = KeGetCurrentThread();
    result = *((unsigned int *)&CurrentThread[1].SwapListEntry + 2);
    if ( (result & 4) == 0 )
    {
      if ( BugCheckParameter1[1].AffinityPadding[9] )
      {
        v6 = KeGetCurrentThread();
        if ( (v6->MiscFlags & 0x400) != 0 || v6->ApcStateIndex == 1 )
          Teb = 0LL;
        else
          Teb = v6->Teb;
        if ( !Teb || BugCheckParameter1 != CurrentThread->Process || (result = DbgkpSuppressDbgMsg(), !(_DWORD)result) )
        {
          v8[6] = a2;
          v8[0] = 0x800380010LL;
          LODWORD(v8[5]) = 6;
          return DbgkpSendApiMessage((ULONG_PTR)BugCheckParameter1);
        }
      }
    }
  }
  return result;
}
