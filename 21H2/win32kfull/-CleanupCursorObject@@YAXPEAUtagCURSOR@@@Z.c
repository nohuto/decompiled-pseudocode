/*
 * XREFs of ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C0026524
 * Callers:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00233C4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001F4EC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     GreDereferenceObject @ 0x1C002669C (GreDereferenceObject.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0086CD0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C0110F74 (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 *     _lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator() @ 0x1C02711D8 (_lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_--operator().c)
 */

void __fastcall CleanupCursorObject(struct tagCURSOR *a1)
{
  HSURF v2; // rcx
  HSURF v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 HDEV; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF

  if ( *((_WORD *)a1 + 28) )
  {
    Win32FreePool(*((_QWORD *)a1 + 8));
    *((_DWORD *)a1 + 14) = 0;
    *((_QWORD *)a1 + 8) = 0LL;
  }
  if ( *((_WORD *)a1 + 36) )
  {
    UserDeleteAtom();
    *((_WORD *)a1 + 36) = 0;
  }
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
  {
    DestroyAniIcon(a1);
  }
  else
  {
    if ( (struct tagCURSOR *)gCachedSetPointerState == (struct tagCURSOR *)((char *)a1 + 80) )
    {
      SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v12, ghsemDynamicModeChange);
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        v10 = HDEV;
        v7 = *(_QWORD *)(HDEV + 56);
        if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v10) )
        {
          lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator()(v8, v7, (char *)a1 + 80);
        }
        else
        {
          v11 = ghsemGreLock;
          GreAcquireSemaphore(ghsemGreLock);
          lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator()(v9, v7, (char *)a1 + 80);
          SEMOBJ::vUnlock((SEMOBJ *)&v11);
        }
      }
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v12);
    }
    v2 = (HSURF)*((_QWORD *)a1 + 11);
    if ( v2 )
    {
      GreDereferenceObject(v2);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 11) = 0LL;
    }
    v3 = (HSURF)*((_QWORD *)a1 + 12);
    if ( v3 )
    {
      GreDereferenceObject(v3);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 12) = 0LL;
    }
    v4 = *((_QWORD *)a1 + 16);
    if ( v4 )
    {
      GreDeleteObject(v4);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 16) = 0LL;
    }
    v5 = *((_QWORD *)a1 + 13);
    if ( v5 )
    {
      GreDeleteObject(v5);
      *((_QWORD *)a1 + 13) = 0LL;
    }
  }
}
