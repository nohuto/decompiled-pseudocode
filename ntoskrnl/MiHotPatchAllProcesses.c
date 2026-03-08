/*
 * XREFs of MiHotPatchAllProcesses @ 0x140A34748
 * Callers:
 *     MiLoadHotPatch @ 0x140A352A0 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140A35638 (MiLoadHotPatchForUserSid.c)
 *     MiUnloadHotPatch @ 0x140A392C0 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x140A3940C (MiUnloadHotPatchForUserSid.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1406AA530 (PsGetNextProcess.c)
 *     MiHotPatchProcess @ 0x140A34804 (MiHotPatchProcess.c)
 */

__int64 __fastcall MiHotPatchAllProcesses(unsigned int a1, unsigned int a2)
{
  __int64 *i; // rcx
  int v5; // eax
  __int64 *NextProcess; // rax
  __int64 *v7; // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  for ( i = 0LL; ; i = v7 )
  {
    NextProcess = PsGetNextProcess(i);
    v7 = NextProcess;
    if ( !NextProcess )
      break;
    v5 = *((_DWORD *)NextProcess + 543);
    if ( (v5 & 0x1000) == 0 && v7 != (__int64 *)PsSecureSystemProcess && (v5 & 1) == 0 && !v7[280] )
    {
      KeStackAttachProcess((PRKPROCESS)v7, &ApcState);
      MiHotPatchProcess(v7, a1, a2);
      KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
    }
  }
  return 0LL;
}
