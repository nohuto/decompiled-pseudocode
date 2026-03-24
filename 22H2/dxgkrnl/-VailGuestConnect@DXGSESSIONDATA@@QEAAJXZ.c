/*
 * XREFs of ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02B7028
 * Callers:
 *     NtDxgkVailConnect @ 0x1C02B8ED0 (NtDxgkVailConnect.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x1C02B5BC0 (-Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C02B6048 (-ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailGuestConnect(DXGSESSIONDATA *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  struct _EX_RUNDOWN_REF *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  const struct _GUID *v7; // r8
  DXGVAILGUESTOBJECT *v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  LODWORD(v2) = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (DXGSESSIONDATA *)((char *)this + 18880), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  if ( *((_QWORD *)this + 2366) )
  {
    ++*((_DWORD *)this + 4730);
  }
  else
  {
    v4 = (struct _EX_RUNDOWN_REF *)operator new(0x58uLL, 0x4B677844u, 1, PagedPool);
    v8 = (DXGVAILGUESTOBJECT *)v4;
    if ( v4 )
    {
      v4->Count = (ULONG_PTR)this;
      LODWORD(v4[1].Count) = 1;
      v4[2].Count = 0LL;
      v4[3].Count = 0LL;
      v4[4].Count = 0LL;
      LODWORD(v4[5].Count) = 0;
      HIDWORD(v4[5].Ptr) = -1;
      LODWORD(v4[6].Count) = 46;
      v4[8].Count = 0LL;
      v4[9].Count = 0LL;
      v4[10].Count = 0LL;
      ExInitializeRundownProtection(v4 + 7);
    }
    else
    {
      v8 = 0LL;
    }
    *((_QWORD *)this + 2366) = v8;
    if ( v8 )
    {
      v9 = DXGVAILGUESTOBJECT::Initialize(v8, v5, v7);
      v2 = v9;
      if ( v9 >= 0 )
      {
        *((_DWORD *)this + 4730) = 1;
      }
      else
      {
        v12 = WdLogNewEntry5_WdWarning(v10, v3, v11);
        *(_QWORD *)(v12 + 24) = v2;
        WdLogEvent5_WdWarning(v12);
        DXGVAILGUESTOBJECT::ReleaseReference(*((DXGVAILGUESTOBJECT **)this + 2366));
        *((_QWORD *)this + 2366) = 0LL;
      }
    }
    else
    {
      LODWORD(v2) = -1073741801;
      v13 = WdLogNewEntry5_WdWarning(v6, v5, v7);
      *(_QWORD *)(v13 + 24) = -1073741801LL;
      WdLogEvent5_WdWarning(v13);
    }
  }
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v3);
  return (unsigned int)v2;
}
