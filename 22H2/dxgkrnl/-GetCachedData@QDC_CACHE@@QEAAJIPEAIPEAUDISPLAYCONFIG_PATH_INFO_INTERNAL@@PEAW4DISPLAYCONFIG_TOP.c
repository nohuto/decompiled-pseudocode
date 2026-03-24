/*
 * XREFs of ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1C0145DD8
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C0145CF0 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000B9F0 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000BAD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QDC_CACHE::GetCachedData(
        struct DXGFASTMUTEX *const *this,
        __int64 a2,
        unsigned int *a3,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a5,
        unsigned int *a6)
{
  __int64 v8; // rdi
  DXGPROCESS *Current; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  char *v13; // rbx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // edi
  struct DXGPROCESS *v21; // rax
  int v22; // ecx
  __int64 v23; // rdx
  unsigned int v24; // ebx
  _QWORD *v26; // rax
  _BYTE v27[40]; // [rsp+30h] [rbp-28h] BYREF

  v8 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = 274LL;
    return 3221225659LL;
  }
  else
  {
    Current = DXGPROCESS::GetCurrent((__int64)this, a2, (__int64)a3, (__int64)a4);
    if ( DXGPROCESS::IsRemoteConnection(Current) )
    {
      return 3221225473LL;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, this[1], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
      v13 = (char *)(this + 2);
      v14 = *((unsigned int *)this + 148);
      *a6 = v14;
      v15 = 0;
      while ( !*v13 || *((_DWORD *)v13 + 1) != (_DWORD)v8 )
      {
        ++v15;
        v13 += 32;
        if ( v15 >= 0x12 )
        {
          v13 = 0LL;
          break;
        }
      }
      if ( v13 )
      {
        v16 = *((unsigned int *)v13 + 2);
        if ( (unsigned int)v16 > *a3 )
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v11, v12);
          v26[3] = v8;
          v26[4] = *((unsigned int *)v13 + 2);
          v26[5] = *a3;
          WdLogEvent5_WdWarning(v26);
          v24 = -1073741823;
        }
        else
        {
          memmove(a4, *((const void **)v13 + 2), 200 * v16);
          *a3 = *((_DWORD *)v13 + 2);
          if ( a5 )
            *(_DWORD *)a5 = *((_DWORD *)v13 + 6);
          v20 = *((_DWORD *)this + 148);
          v21 = DXGPROCESS::GetCurrent((__int64)a5, v17, v18, v19);
          if ( v20 == *((_DWORD *)v21 + 118) )
          {
            v22 = *((_DWORD *)v21 + 117);
          }
          else
          {
            *((_DWORD *)v21 + 118) = v20;
            v22 = 0;
          }
          v23 = (unsigned int)(v22 + 1);
          *((_DWORD *)v21 + 117) = v23;
          if ( (v22 & (unsigned int)v23) == 0 && v22 != 1 )
            DxgkLogCodePointPacket(0x4Du, v23, *((_DWORD *)v13 + 1), *((_DWORD *)v13 + 7), 0LL);
          v24 = 0;
        }
      }
      else
      {
        v24 = -1073741801;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v11) + 24) = v8;
      }
      if ( v27[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v23);
      return v24;
    }
  }
}
