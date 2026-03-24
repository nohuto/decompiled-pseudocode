/*
 * XREFs of ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C02904D4
 * Callers:
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0239474 (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C0290410 (-CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMU.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040C14 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x1C00491D4 (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGKEYEDMUTEX@@QEAAJI@Z @ 0x1C0291360 (-Initialize@DXGKEYEDMUTEX@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CreateKeyedMutex(
        DXGGLOBAL *this,
        __int64 a2,
        struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS a3,
        unsigned int a4,
        struct DXGKEYEDMUTEX **a5)
{
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  DXGKEYEDMUTEX *v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rax
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rdx
  DXGKEYEDMUTEX **v21; // rax
  __int64 v22; // rcx

  if ( !a5 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v9 + 24) = 4445LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *a5 = 0LL;
  v10 = operator new[](0xB0uLL, 0x4B677844u, (POOL_TYPE)512);
  v15 = (DXGKEYEDMUTEX *)v10;
  if ( v10 )
  {
    v10[2] = this;
    *(_OWORD *)v10 = 0LL;
    v10[3] = 0LL;
    *((_DWORD *)v10 + 8) = 0;
    v10[7] = 1LL;
    v10[8] = 0LL;
    v10[9] = a2;
    v10[10] = a2;
    v10[11] = 0LL;
    v10[14] = 0LL;
    v10[15] = 0LL;
    v10[16] = 0LL;
    *((_DWORD *)v10 + 34) = 0;
    *((_DWORD *)v10 + 35) = 34;
    *((_DWORD *)v10 + 36) = 53;
    v10[19] = 0LL;
    *((_DWORD *)v10 + 40) = 0;
    *((struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS *)v10 + 41) = a3;
    *((_BYTE *)v10 + 168) = 0;
    v16 = v10 + 12;
    v16[1] = v16;
    *v16 = v16;
    *((_QWORD *)v15 + 6) = (char *)v15 + 40;
    *((_QWORD *)v15 + 5) = (char *)v15 + 40;
  }
  else
  {
    v15 = 0LL;
  }
  if ( v15 )
  {
    v18 = DXGKEYEDMUTEX::Initialize(v15, a4);
    if ( v18 >= 0 )
    {
      DXGKEYEDMUTEX::AcquireReference(v15, v19);
      DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 528));
      v21 = (DXGKEYEDMUTEX **)((char *)this + 568);
      v22 = *((_QWORD *)this + 71);
      if ( *(DXGGLOBAL **)(v22 + 8) != (DXGGLOBAL *)((char *)this + 568) )
        __fastfail(3u);
      *(_QWORD *)v15 = v22;
      *((_QWORD *)v15 + 1) = v21;
      *(_QWORD *)(v22 + 8) = v15;
      *v21 = v15;
      DXGFASTMUTEX::Release((struct _KTHREAD **)this + 66, v20);
      *a5 = v15;
    }
    else
    {
      DXGKEYEDMUTEX::`scalar deleting destructor'(v15);
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
    v18 = -1073741801;
    *(_QWORD *)(v17 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v17);
  }
  return (unsigned int)v18;
}
