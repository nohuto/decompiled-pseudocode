/*
 * XREFs of NtDCompositionWaitForCompositorClock @ 0x1C0007F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1C00080A0 (-Release@CCompClockInfo@DirectComposition@@QEAAJXZ.c)
 *     ?WaitForTick@CCompClockInfo@DirectComposition@@QEBAJIPEBQEAXPEAT_LARGE_INTEGER@@@Z @ 0x1C00080C8 (-WaitForTick@CCompClockInfo@DirectComposition@@QEBAJIPEBQEAXPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z @ 0x1C0008188 (-GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C005E51C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C006AA58 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall NtDCompositionWaitForCompositorClock(unsigned int a1, char *Src, unsigned int a3)
{
  __int64 v5; // rsi
  int CompositorClockInfo; // ebx
  union _LARGE_INTEGER *v7; // r12
  DirectComposition::CCompClockInfo *v8; // r15
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v10; // rdi
  char *v12; // rcx
  DirectComposition::CCompClockInfo *v13; // [rsp+30h] [rbp-168h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-160h] BYREF
  void *v15[34]; // [rsp+50h] [rbp-148h] BYREF

  v5 = a1;
  CompositorClockInfo = 0;
  memset(v15, 0, sizeof(v15));
  v7 = 0LL;
  v14[1] = 0LL;
  v14[0] = 0LL;
  v8 = 0LL;
  v13 = 0LL;
  if ( (_DWORD)v5 )
  {
    if ( (unsigned int)v5 <= 0x20 && Src )
    {
      v12 = &Src[8 * v5];
      if ( v12 < Src || (unsigned __int64)v12 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v15, Src, 8 * v5);
    }
    else
    {
      CompositorClockInfo = -1073741811;
    }
  }
  if ( a3 != -1 )
  {
    v14[0] = -10000LL * a3;
    v7 = (union _LARGE_INTEGER *)v14;
  }
  if ( CompositorClockInfo >= 0 )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    v10 = DefaultConnection;
    if ( DefaultConnection )
    {
      CompositorClockInfo = DirectComposition::CConnection::GetCompositorClockInfo(DefaultConnection, &v13);
      DirectComposition::CConnection::Release(v10);
      v8 = v13;
    }
    else
    {
      CompositorClockInfo = -1073741790;
    }
    KeLeaveCriticalRegion();
    if ( CompositorClockInfo >= 0 )
    {
      CompositorClockInfo = DirectComposition::CCompClockInfo::WaitForTick(v8, v5, v15, v7);
      DirectComposition::CCompClockInfo::Release(v8);
    }
  }
  return (unsigned int)CompositorClockInfo;
}
