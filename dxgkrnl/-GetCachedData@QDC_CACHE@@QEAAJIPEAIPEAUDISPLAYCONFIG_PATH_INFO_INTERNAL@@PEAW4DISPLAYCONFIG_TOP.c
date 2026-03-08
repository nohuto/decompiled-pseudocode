/*
 * XREFs of ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1C01A344C
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C01A6190 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QDC_CACHE::GetCachedData(
        QDC_CACHE *this,
        __int64 a2,
        unsigned int *a3,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a5,
        unsigned int *a6)
{
  __int64 v6; // rsi
  __int64 v10; // rax
  bool v11; // cl
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // rbx
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rax
  struct DXGPROCESS *Current; // rax
  int v20; // edx
  unsigned int *v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // edx
  unsigned int v24; // ebx
  DXGFASTMUTEX *v26; // [rsp+50h] [rbp-28h]
  char v27; // [rsp+58h] [rbp-20h]

  v6 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 265LL;
    return 3221225659LL;
  }
  else
  {
    v10 = *((_QWORD *)DXGPROCESS::GetCurrent() + 11);
    if ( v10 )
      v11 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v10 + 224))(0LL, 0LL, 0LL) != 0;
    else
      v11 = 0;
    if ( v11 )
    {
      return 3221225473LL;
    }
    else
    {
      v27 = 0;
      v26 = (QDC_CACHE *)((char *)this + 8);
      if ( this == (QDC_CACHE *)-8LL )
      {
        WdLogSingleEntry1(1LL, 592LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *((struct _KTHREAD **)v26 + 3) == KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 599LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
      }
      DXGFASTMUTEX::Acquire(v26);
      v15 = (char *)this + 56;
      v16 = *((unsigned int *)this + 158);
      v27 = 1;
      *a6 = v16;
      v17 = 0;
      while ( !*v15 || *((_DWORD *)v15 + 1) != (_DWORD)v6 )
      {
        ++v17;
        v15 += 32;
        if ( v17 >= 0x12 )
          goto LABEL_24;
      }
      if ( !v15 )
      {
LABEL_24:
        v24 = -1073741801;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v12, v13, v14) + 24) = v6;
        goto LABEL_20;
      }
      v18 = *((unsigned int *)v15 + 2);
      if ( (unsigned int)v18 > *a3 )
      {
        WdLogSingleEntry3(3LL, v6, *((unsigned int *)v15 + 2), *a3);
        v24 = -1073741823;
      }
      else
      {
        memmove(a4, *((const void **)v15 + 2), 216 * v18);
        *a3 = *((_DWORD *)v15 + 2);
        if ( a5 )
          *(_DWORD *)a5 = *((_DWORD *)v15 + 6);
        Current = DXGPROCESS::GetCurrent();
        v20 = *((_DWORD *)this + 158);
        v21 = (unsigned int *)((char *)Current + 580);
        if ( v20 != *((_DWORD *)Current + 146) )
        {
          *((_DWORD *)Current + 146) = v20;
          *v21 = 0;
        }
        v22 = *v21;
        v23 = *v21 + 1;
        *v21 = v23;
        if ( (v22 & v23) == 0 && v23 != 2 )
          DxgkLogCodePointPacket(0x4Du, v23, *((_DWORD *)v15 + 1), *((_DWORD *)v15 + 7), 0LL);
        v24 = 0;
      }
LABEL_20:
      if ( v27 )
      {
        v27 = 0;
        DXGFASTMUTEX::Release((struct _KTHREAD **)v26);
      }
      return v24;
    }
  }
}
