/*
 * XREFs of ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C004B834
 * Callers:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C004879C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C004B94C (GreDereferenceObject.c)
 *     GreOnCURSINFODestroy @ 0x1C004B9F8 (GreOnCURSINFODestroy.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C012627C (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 */

void __fastcall CleanupCursorObject(void **a1)
{
  __int64 v2; // rcx
  HSURF v3; // rcx
  HSURF v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  if ( *((_WORD *)a1 + 28) )
  {
    Win32FreePool(a1[8]);
    *((_DWORD *)a1 + 14) = 0;
    a1[8] = 0LL;
  }
  v2 = *((unsigned __int16 *)a1 + 36);
  if ( (_WORD)v2 )
  {
    UserDeleteAtom(v2);
    *((_WORD *)a1 + 36) = 0;
  }
  if ( ((_DWORD)a1[10] & 8) != 0 )
  {
    DestroyAniIcon((struct tagACON *)a1);
  }
  else
  {
    GreOnCURSINFODestroy();
    v3 = (HSURF)a1[11];
    if ( v3 )
    {
      GreDereferenceObject(v3);
      GreDecQuotaCount(a1[3]);
      a1[11] = 0LL;
    }
    v4 = (HSURF)a1[12];
    if ( v4 )
    {
      GreDereferenceObject(v4);
      GreDecQuotaCount(a1[3]);
      a1[12] = 0LL;
    }
    v5 = a1[16];
    if ( v5 )
    {
      GreDeleteObject(v5);
      GreDecQuotaCount(a1[3]);
      a1[16] = 0LL;
    }
    v6 = a1[13];
    if ( v6 )
    {
      GreDeleteObject(v6);
      a1[13] = 0LL;
    }
  }
}
