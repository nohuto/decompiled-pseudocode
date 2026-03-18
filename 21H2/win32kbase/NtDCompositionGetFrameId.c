/*
 * XREFs of NtDCompositionGetFrameId @ 0x1C0211BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00164EC (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?GetFrameId@CConnection@DirectComposition@@QEAA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z @ 0x1C0080AF4 (-GetFrameId@CConnection@DirectComposition@@QEAA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z.c)
 */

__int64 __fastcall NtDCompositionGetFrameId(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int v5; // r14d
  unsigned int v6; // ebx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v8; // rdi
  __int64 FrameId; // rdx

  v5 = a1;
  v6 = 0;
  if ( a2 && (unsigned int)a1 <= 2 )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1, (__int64)a2, a3, a4);
    v8 = DefaultConnection;
    if ( DefaultConnection )
    {
      FrameId = DirectComposition::CConnection::GetFrameId(DefaultConnection, v5);
      if ( FrameId )
      {
        if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *a2 = FrameId;
      }
      else
      {
        v6 = -1073741823;
      }
      DirectComposition::CConnection::Release(v8, FrameId);
    }
    else
    {
      return (unsigned int)-1073741790;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
