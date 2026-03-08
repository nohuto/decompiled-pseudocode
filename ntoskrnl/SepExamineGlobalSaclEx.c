/*
 * XREFs of SepExamineGlobalSaclEx @ 0x1405B6A9C
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     SepRmGlobalSaclFind @ 0x1408A1C12 (SepRmGlobalSaclFind.c)
 *     SepExamineSaclEx @ 0x1409CB8C4 (SepExamineSaclEx.c)
 */

void __fastcall SepExamineGlobalSaclEx(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11,
        __int64 a12,
        char *a13)
{
  char *v13; // rsi
  char v14; // bl
  char *v15; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v21; // rcx
  char v22; // al
  char v23[16]; // [rsp+70h] [rbp-28h] BYREF

  v13 = (char *)a12;
  v14 = 0;
  v15 = a13;
  if ( a12 && !*(_BYTE *)a12 || a13 && !*a13 )
  {
    CurrentThread = KeGetCurrentThread();
    a12 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
    if ( (int)SepRmGlobalSaclFind(&a12, 0LL, a1, 0LL) >= 0 )
    {
      v21 = *(_QWORD *)(a12 + 24);
      if ( v21 )
      {
        LOBYTE(a12) = 0;
        v23[0] = 0;
        SepExamineSaclEx(v21, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, (__int64)&a12, (__int64)v23);
        if ( v13 )
        {
          if ( *v13 || (v22 = 0, (_BYTE)a12) )
            v22 = 1;
          *v13 = v22;
        }
        if ( v15 )
        {
          if ( *v15 || v23[0] )
            v14 = 1;
          *v15 = v14;
        }
      }
    }
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    KeLeaveCriticalRegion();
  }
}
