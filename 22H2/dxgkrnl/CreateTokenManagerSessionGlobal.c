/*
 * XREFs of CreateTokenManagerSessionGlobal @ 0x1C001B31C
 * Callers:
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C016DC5C (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C0013948 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 *     ?Initialize@CTokenManager@@AEAAJXZ @ 0x1C001B39C (-Initialize@CTokenManager@@AEAAJXZ.c)
 *     ??0CTokenManager@@AEAA@XZ @ 0x1C001B4F8 (--0CTokenManager@@AEAA@XZ.c)
 */

__int64 __fastcall CreateTokenManagerSessionGlobal(CTokenManager **a1)
{
  CTokenManager *v2; // rax
  CTokenManager *v3; // rbx
  int v4; // edi

  v2 = (CTokenManager *)operator new(0x160uLL, 0x67734D54u, 1, PagedPool);
  if ( v2 )
    v3 = CTokenManager::CTokenManager(v2);
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = CTokenManager::Initialize(v3);
    if ( v4 >= 0 )
    {
      *a1 = v3;
      v3 = 0LL;
    }
    if ( v3 )
      CTokenManager::`scalar deleting destructor'(v3);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
