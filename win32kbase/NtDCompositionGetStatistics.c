__int64 __fastcall NtDCompositionGetStatistics(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int v6; // esi
  int v7; // edi
  unsigned __int64 v8; // r13
  struct tagCOMPOSITION_TARGET_ID *v9; // rbx
  DirectComposition::CConnection *DefaultConnection; // r12
  __int64 v11; // r10
  unsigned int i; // edx
  __int64 v13; // r9
  __int64 v14; // r8
  ULONG64 v15; // rcx
  unsigned int v17; // [rsp+30h] [rbp-128h] BYREF
  struct tagCOMPOSITION_TARGET_ID *v18; // [rsp+38h] [rbp-120h]
  unsigned int v19; // [rsp+40h] [rbp-118h]
  unsigned int v20; // [rsp+50h] [rbp-108h]
  unsigned __int64 v21; // [rsp+58h] [rbp-100h]
  __int64 v22; // [rsp+60h] [rbp-F8h]
  unsigned __int64 v23; // [rsp+68h] [rbp-F0h]
  __int64 v24; // [rsp+70h] [rbp-E8h]
  unsigned int *v25; // [rsp+78h] [rbp-E0h]
  __int128 v26; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+90h] [rbp-C8h]
  _BYTE v28[112]; // [rsp+A0h] [rbp-B8h] BYREF

  v22 = a4;
  v23 = a2;
  v6 = a3;
  v19 = a3;
  v24 = a4;
  v25 = a5;
  v7 = 0;
  v8 = 0LL;
  v21 = 0LL;
  v9 = 0LL;
  v18 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v17 = 0;
  if ( a1 && a2 && (a4 || !a3) )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (unsigned __int64 *)MmUserProbeAddress;
    v8 = *a1;
    v21 = *a1;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 >= 0 )
  {
    if ( a3 )
    {
      v6 = 256;
      if ( a3 <= 0x100 )
        v6 = a3;
      if ( v6 <= 4 )
      {
        v9 = (struct tagCOMPOSITION_TARGET_ID *)v28;
      }
      else
      {
        v9 = (struct tagCOMPOSITION_TARGET_ID *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                                  gpLeakTrackingAllocator,
                                                  0x104uLL,
                                                  28LL * v6,
                                                  0x61644344u);
        if ( !v9 )
          v7 = -1073741801;
      }
      v18 = v9;
    }
    if ( v7 >= 0 )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
      if ( DefaultConnection )
      {
        if ( !DirectComposition::CConnection::QueryStats(
                DefaultConnection,
                v8,
                (struct tagCOMPOSITION_FRAME_STATS *)&v26,
                v6,
                v9,
                &v17) )
          v7 = -1073741275;
        DirectComposition::CConnection::Release(DefaultConnection);
      }
      else
      {
        v7 = -1073741790;
      }
      KeLeaveCriticalRegion();
      if ( v7 >= 0 )
      {
        if ( a2 + 24 < a2 || a2 + 24 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_OWORD *)a2 = v26;
        *(_QWORD *)(a2 + 16) = v27;
        v11 = v22;
        if ( v22 )
        {
          for ( i = 0; ; ++i )
          {
            v20 = i;
            if ( i >= v6 )
              break;
            v13 = 28LL * i;
            v14 = v13 + v11;
            v15 = v13 + v11 + 28;
            if ( v15 < v13 + v11 || v15 > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            *(_OWORD *)v14 = *(_OWORD *)((char *)v9 + v13);
            *(_QWORD *)(v14 + 16) = *(_QWORD *)((char *)v9 + v13 + 16);
            *(_DWORD *)(v14 + 24) = *(_DWORD *)((char *)v9 + v13 + 24);
          }
        }
        if ( a5 )
        {
          if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a5 = v17;
        }
      }
    }
  }
  if ( v9 && v9 != (struct tagCOMPOSITION_TARGET_ID *)v28 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v9);
  return (unsigned int)v7;
}
