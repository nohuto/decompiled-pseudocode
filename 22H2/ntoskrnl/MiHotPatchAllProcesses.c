/*
 * XREFs of MiHotPatchAllProcesses @ 0x1408CA2C8
 * Callers:
 *     MiLoadHotPatch @ 0x1408CAC20 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x1408CAF80 (MiLoadHotPatchForUserSid.c)
 *     MiUnloadHotPatch @ 0x1408CE818 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x1408CE964 (MiUnloadHotPatchForUserSid.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x14062BFA0 (PsGetNextProcess.c)
 *     MiHotPatchProcess @ 0x1408CA6A8 (MiHotPatchProcess.c)
 */

__int64 __fastcall MiHotPatchAllProcesses(unsigned int a1, unsigned int a2)
{
  _QWORD *i; // rcx
  int v5; // eax
  unsigned __int64 NextProcess; // rax
  _DWORD *v7; // r9
  _QWORD *v8; // rbx
  _OWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  for ( i = 0LL; ; i = v8 )
  {
    NextProcess = PsGetNextProcess(i);
    v8 = (_QWORD *)NextProcess;
    if ( !NextProcess )
      break;
    v5 = *(_DWORD *)(NextProcess + 2172);
    if ( (v5 & 0x1000) == 0 && v8 != (_QWORD *)PsSecureSystemProcess && (v5 & 1) == 0 && !v8[280] )
    {
      KiStackAttachProcess((_KPROCESS *)v8, 0LL, (__int64)v10, v7);
      MiHotPatchProcess(v8, a1, a2);
      KiUnstackDetachProcess((__int64)v10, 0);
    }
  }
  return 0LL;
}
