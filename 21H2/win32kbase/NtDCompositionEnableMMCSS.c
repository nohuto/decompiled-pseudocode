/*
 * XREFs of NtDCompositionEnableMMCSS @ 0x1C01D27D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C005AD7C (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C005C370 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C005C904 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C01D33D0 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall NtDCompositionEnableMMCSS(__int64 a1)
{
  int v1; // r14d
  unsigned int v2; // edi
  __int64 v3; // rcx
  DirectComposition::CConnection *DefaultConnection; // rsi
  struct DirectComposition::CProcessData *v5; // rbp
  struct _ERESOURCE *v6; // rbx
  int v7; // eax
  bool v8; // cl
  int v9; // eax
  unsigned int v10; // edx

  v1 = a1;
  v2 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1);
  if ( DefaultConnection )
  {
    v5 = DirectComposition::CProcessData::Current(v3);
    v6 = (struct _ERESOURCE *)*((_QWORD *)v5 + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v6, 1u);
    v7 = *((_DWORD *)v5 + 10);
    if ( v1 )
    {
      if ( v7 != -1 )
      {
        v8 = v7 == 0;
        v9 = v7 + 1;
        goto LABEL_8;
      }
    }
    else if ( v7 )
    {
      v9 = v7 - 1;
      v8 = v9 == 0;
LABEL_8:
      *((_DWORD *)v5 + 10) = v9;
      if ( v8 )
        v2 = DirectComposition::CConnection::EnableMMCSS(DefaultConnection, v1);
      goto LABEL_11;
    }
    v2 = -1073741823;
LABEL_11:
    ExReleaseResourceLite(*((PERESOURCE *)v5 + 1));
    KeLeaveCriticalRegion();
    DirectComposition::CConnection::Release(DefaultConnection, v10);
    return v2;
  }
  return (unsigned int)-1073741790;
}
