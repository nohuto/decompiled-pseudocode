/*
 * XREFs of ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00953E0
 * Callers:
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C00951F4 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     NtDCompositionCreateConnection @ 0x1C02113F0 (NtDCompositionCreateConnection.c)
 *     NtDCompositionDestroyConnection @ 0x1C0211590 (NtDCompositionDestroyConnection.c)
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C00103C4 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C009549C (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::DestroyHandle(
        struct HDCOMPOSITIONCONNECTION__ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  DirectComposition::CConnection *v5; // rsi
  struct DirectComposition::CProcessData *v6; // rax
  struct DirectComposition::CProcessData *v7; // rdi
  struct _ERESOURCE *v8; // rbx
  DirectComposition::CConnection *v9; // rax
  unsigned int v10; // ebx
  unsigned int v11; // edx

  v5 = 0LL;
  v6 = DirectComposition::CProcessData::Current((__int64)a1, a2, a3, a4);
  v7 = v6;
  if ( v6 )
  {
    v8 = (struct _ERESOURCE *)*((_QWORD *)v6 + 4);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v8, 1u);
    v9 = (DirectComposition::CConnection *)*((_QWORD *)v7 + 3);
    if ( v9 && a1 == *((struct HDCOMPOSITIONCONNECTION__ **)v7 + 2) )
    {
      *((_QWORD *)v7 + 3) = 0LL;
      v5 = v9;
      v10 = 0;
    }
    else
    {
      v10 = -1073741790;
    }
    ExReleaseResourceLite(*((PERESOURCE *)v7 + 4));
    KeLeaveCriticalRegion();
    if ( v5 )
    {
      DirectComposition::CConnection::Disconnect(v5);
      DirectComposition::CConnection::Release(v5, v11);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v10;
}
