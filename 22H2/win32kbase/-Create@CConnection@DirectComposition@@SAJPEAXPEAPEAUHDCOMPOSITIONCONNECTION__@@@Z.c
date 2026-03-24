/*
 * XREFs of ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00AABBC
 * Callers:
 *     NtDCompositionCreateConnection @ 0x1C00AAB20 (NtDCompositionCreateConnection.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0048F20 (UserIsCurrentProcessDwm.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C005BD7C (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C005D370 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C00AAC9C (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z @ 0x1C00AAFC4 (-ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Create(void *a1, struct HDCOMPOSITIONCONNECTION__ **a2)
{
  struct DirectComposition::CProcessData *v4; // rax
  struct DirectComposition::CProcessData *v5; // rdi
  struct _ERESOURCE *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edx
  DirectComposition::CConnection *v11; // rsi
  int v12; // ebx
  struct HDCOMPOSITIONCONNECTION__ *v13; // rax
  struct DirectComposition::CConnection *v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = 0LL;
  v4 = DirectComposition::CProcessData::Current((__int64)a1);
  v5 = v4;
  if ( v4 )
  {
    v6 = (struct _ERESOURCE *)*((_QWORD *)v4 + 4);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v6, 1u);
    if ( *((_QWORD *)v5 + 3) || !UserIsCurrentProcessDwm(v8, v7) )
    {
      v12 = -1073741790;
    }
    else
    {
      v9 = DirectComposition::CConnection::ReclaimSessionGlobalConnection(&v15);
      v11 = v15;
      v12 = v9;
      if ( v9 < 0 || (v12 = DirectComposition::CConnection::Connect(v15, a1), v12 < 0) )
      {
        if ( v11 )
          DirectComposition::CConnection::Release(v11, v10);
      }
      else
      {
        *((_QWORD *)v5 + 2) += 4LL;
        v13 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)v5 + 2);
        *((_QWORD *)v5 + 3) = v11;
        *a2 = v13;
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)v5 + 4));
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v12;
}
