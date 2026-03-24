/*
 * XREFs of ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0033190
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     HMAssignmentUnlock @ 0x1C0030630 (HMAssignmentUnlock.c)
 *     GreGetObjectOwner @ 0x1C0031450 (GreGetObjectOwner.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C004264C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C009A8A8 (HMChangeOwnerPheProcessWorker.c)
 *     FixupGlobalCursor @ 0x1C00A9F70 (FixupGlobalCursor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DestroyProcessesObjects(struct tagPROCESSINFO *a1)
{
  _BOOL8 v2; // r14
  char *v3; // rbx
  __int64 v4; // rsi
  __int64 *v5; // rdi
  struct _HANDLEENTRY *v6; // rbx
  _QWORD *v7; // rdi
  struct _HANDLEENTRY *v8; // rsi
  __int64 v9; // rdx
  char v10; // al
  unsigned int CurrentProcessId; // ebx

  v2 = *(_QWORD *)a1 == (_QWORD)gpepCSRSS;
  if ( qword_1C0252420 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    if ( (unsigned int)GreGetObjectOwner((unsigned int)qword_1C0252418, 1) == (CurrentProcessId & 0xFFFFFFFC) )
    {
      if ( qword_1C0257BF0 )
        qword_1C0257BF0();
    }
  }
  v3 = (char *)&gcachedCaptions;
  v4 = 5LL;
  v5 = (__int64 *)&gcachedCaptions;
  do
  {
    if ( *(_QWORD *)v3 && *(struct tagPROCESSINFO **)(*(_QWORD *)v3 + 24LL) == a1 )
      HMAssignmentUnlock(v5);
    v5 += 2;
    v3 += 16;
    --v4;
  }
  while ( v4 );
  GetDomainLockRef(14);
  v6 = qword_1C024FD58;
  v7 = gpKernelHandleTable;
  v8 = (struct _HANDLEENTRY *)((char *)qword_1C024FD58 + 32 * (unsigned int)giheLast);
  if ( qword_1C024FD58 <= v8 )
  {
    do
    {
      v9 = *((unsigned __int8 *)v6 + 24);
      if ( (_BYTE)v9 && (*((_BYTE *)&unk_1C020A46C + 24 * v9) & 2) != 0 && (struct tagPROCESSINFO *)v7[1] == a1 )
      {
        if ( v2 && (_BYTE)v9 == 3 )
          FixupGlobalCursor(*v7, a1);
        if ( (*((_BYTE *)v6 + 25) & 1) == 0 )
          HMDestroyUnlockedObjectWorker(v6);
        v10 = *((_BYTE *)v6 + 24);
        if ( v10 && gptiRit )
        {
          if ( v10 == 3 )
          {
            if ( qword_1C0257868 && (int)qword_1C0257868() >= 0 )
            {
              if ( qword_1C0257870 )
                qword_1C0257870(*v7);
            }
          }
          else
          {
            HMChangeOwnerPheProcessWorker(v6);
          }
        }
      }
      v6 = (struct _HANDLEENTRY *)((char *)v6 + 32);
      v7 += 3;
    }
    while ( v6 <= v8 );
  }
}
