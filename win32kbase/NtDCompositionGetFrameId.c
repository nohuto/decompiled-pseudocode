/*
 * XREFs of NtDCompositionGetFrameId @ 0x1C0008660
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFrameId@CConnection@DirectComposition@@QEAA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z @ 0x1C000872C (-GetFrameId@CConnection@DirectComposition@@QEAA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C005E51C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C006AA58 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall NtDCompositionGetFrameId(unsigned int a1, __int64 *a2)
{
  unsigned int v4; // ebx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v6; // rdi
  __int64 FrameId; // rdx

  v4 = 0;
  if ( a2 && a1 <= 2 )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    v6 = DefaultConnection;
    if ( DefaultConnection )
    {
      FrameId = DirectComposition::CConnection::GetFrameId(DefaultConnection, a1);
      if ( FrameId )
      {
        if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *a2 = FrameId;
      }
      else
      {
        v4 = -1073741823;
      }
      DirectComposition::CConnection::Release(v6);
    }
    else
    {
      v4 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
