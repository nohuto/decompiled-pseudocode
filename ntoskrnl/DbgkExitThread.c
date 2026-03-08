/*
 * XREFs of DbgkExitThread @ 0x140936388
 * Callers:
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     DbgkpSendApiMessage @ 0x1409370E0 (DbgkpSendApiMessage.c)
 */

struct _KTHREAD *__fastcall DbgkExitThread(int a1)
{
  _KPROCESS *Process; // rcx
  struct _KTHREAD *result; // rax
  int v4; // edx
  _DWORD v5[68]; // [rsp+20h] [rbp-128h] BYREF

  memset(v5, 0, sizeof(v5));
  Process = KeGetCurrentThread()->ApcState.Process;
  result = KeGetCurrentThread();
  v4 = *((_DWORD *)&result[1].SwapListEntry + 2);
  if ( (v4 & 4) == 0 && Process[1].Affinity.StaticBitmap[29] && (v4 & 2) != 0 )
  {
    v5[12] = a1;
    v5[0] = 3407884;
    v5[1] = 8;
    v5[10] = 3;
    return (struct _KTHREAD *)DbgkpSendApiMessage(Process);
  }
  return result;
}
