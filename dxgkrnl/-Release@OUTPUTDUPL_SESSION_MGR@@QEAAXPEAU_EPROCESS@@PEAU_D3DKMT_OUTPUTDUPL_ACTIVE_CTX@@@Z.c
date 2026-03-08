/*
 * XREFs of ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C032A304
 * Callers:
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C032FAA0 (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ @ 0x1C032B094 (-TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::Release(
        OUTPUTDUPL_SESSION_MGR *this,
        struct _EPROCESS *a2,
        struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *a3)
{
  unsigned int v6; // r8d
  __int64 v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // rbx
  int v10; // ecx
  __int128 v11; // rtt
  unsigned int v12; // r8d
  __int64 v13; // rdx
  char *v14; // r10
  _BYTE v15[16]; // [rsp+50h] [rbp-28h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (OUTPUTDUPL_SESSION_MGR *)((char *)this + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v6 = *((_DWORD *)this + 1);
  v7 = **((_QWORD **)this + 7);
  v8 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      v9 = 32LL * v8;
      if ( a2 == *(struct _EPROCESS **)(v9 + v7 + 8) )
      {
        v10 = *(_DWORD *)(v9 + v7);
        if ( v10 )
          break;
      }
      if ( ++v8 >= v6 )
        goto LABEL_8;
    }
    *(_DWORD *)(v9 + v7) = v10 - 1;
    if ( v10 == 1 )
    {
      PerformanceFrequency.QuadPart = 0LL;
      v11 = (__int64)(*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - *(_QWORD *)(v9 + v7 + 16));
      *(_DWORD *)(v9 + v7 + 24) += v11 / PerformanceFrequency.QuadPart;
    }
  }
LABEL_8:
  if ( a3 )
  {
    v12 = *((_DWORD *)this + 32);
    v13 = 0LL;
    if ( v12 )
    {
      while ( 1 )
      {
        v14 = (char *)this + 24 * v13;
        if ( *((_QWORD *)v14 + 17) == *(_QWORD *)a3
          && *((_DWORD *)this + 6 * v13 + 38) == *((_DWORD *)a3 + 4)
          && *((_DWORD *)this + 6 * v13 + 36) == *((_DWORD *)a3 + 2)
          && *((_DWORD *)this + 6 * v13 + 37) == *((_DWORD *)a3 + 3) )
        {
          break;
        }
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= v12 )
          goto LABEL_15;
      }
      memmove(
        v14 + 136,
        (char *)this + 16 * (unsigned int)(v13 + 1) + 8 * (unsigned int)(v13 + 1) + 136,
        24LL * (v12 - (unsigned int)v13 - 1));
      --*((_DWORD *)this + 32);
      OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF(this);
    }
    else
    {
LABEL_15:
      WdLogSingleEntry1(1LL, 4305LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bFound", 4305LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
}
