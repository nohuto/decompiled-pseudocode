/*
 * XREFs of ?GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI@Z @ 0x1C0145C28
 * Callers:
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C0145AC0 (DxgkGetDisplayConfigBufferSizes.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000B9F0 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QDC_CACHE::GetCachedBufferSizes(
        struct DXGFASTMUTEX *const *this,
        __int64 a2,
        unsigned int *a3,
        __int64 a4)
{
  __int64 v5; // rdi
  DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  char *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = 233LL;
    return 3221225659LL;
  }
  else
  {
    Current = DXGPROCESS::GetCurrent((__int64)this, a2, (__int64)a3, a4);
    if ( DXGPROCESS::IsRemoteConnection(Current) )
    {
      return 3221225473LL;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, this[1], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
      v9 = (char *)(this + 2);
      v10 = 0LL;
      while ( !*v9 || *((_DWORD *)v9 + 1) != (_DWORD)v5 )
      {
        v10 = (unsigned int)(v10 + 1);
        v9 += 32;
        if ( (unsigned int)v10 >= 0x12 )
        {
          v9 = 0LL;
          break;
        }
      }
      if ( v9 )
      {
        v11 = 0;
        *a3 = *((_DWORD *)v9 + 2);
      }
      else
      {
        v11 = -1073741823;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v8) + 24) = v5;
      }
      if ( v13[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v8);
      return v11;
    }
  }
}
