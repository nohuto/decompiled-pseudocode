__int64 __fastcall DisplayConfigGetTargetBaseType(struct _LUID *a1)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGADAPTER *v8; // rsi
  int v9; // ebp
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rax
  _QWORD *v20; // rax
  unsigned __int64 v21[2]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v22[144]; // [rsp+30h] [rbp-A8h] BYREF

  if ( a1 && a1->LowPart == 6 && a1->HighPart == 24 )
  {
    a1[2].HighPart = -1;
    Global = DXGGLOBAL::GetGlobal();
    v3 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1[1], v21);
    v8 = v3;
    if ( v3 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, v3, 0LL);
      v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22, 0LL);
      DXGADAPTER::ReleaseReference(v8);
      if ( v9 < 0 )
      {
        WdLogSingleEntry3(3LL, v8, *((int *)v8 + 102), *((unsigned int *)v8 + 101));
        v9 = -1073741811;
      }
      else
      {
        v10 = *((_QWORD *)v8 + 365);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 104);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v21, v11);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 120) + 72LL));
          v12 = *(_QWORD *)(v11 + 120);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v12, a1[2].LowPart);
          if ( TargetById )
          {
            a1[2].HighPart = *((_DWORD *)TargetById + 21);
          }
          else
          {
            v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
            v9 = -1073741811;
            v20[3] = a1[2].LowPart;
            v20[4] = a1;
            v20[5] = v8;
          }
          if ( v12 )
            ReferenceCounted::Release((ReferenceCounted *)(v12 + 64));
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v21[0] + 40));
        }
        else
        {
          WdLogSingleEntry3(3LL, v8, *((int *)v8 + 102), *((unsigned int *)v8 + 101));
          v9 = -1073741637;
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22);
      return (unsigned int)v9;
    }
    else
    {
      v19 = WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
      *(_QWORD *)(v19 + 24) = a1[1].HighPart;
      *(_QWORD *)(v19 + 32) = a1[1].LowPart;
      return 3223191554LL;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, a1);
    return 3221225485LL;
  }
}
