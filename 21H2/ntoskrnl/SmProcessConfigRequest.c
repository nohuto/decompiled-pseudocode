/*
 * XREFs of SmProcessConfigRequest @ 0x1407CEB1C
 * Callers:
 *     SmSetStoreInformation @ 0x14061D784 (SmSetStoreInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     SmpSystemStoreCreate @ 0x1407CEC30 (SmpSystemStoreCreate.c)
 */

__int64 __fastcall SmProcessConfigRequest(unsigned __int64 a1, int a2, KPROCESSOR_MODE a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  unsigned int v7; // eax
  unsigned __int64 v8; // rbx
  unsigned int v9; // ecx
  unsigned int v11; // eax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx

  v4 = 0;
  if ( a2 != 8 )
    return (unsigned int)-1073741306;
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v5 = a1;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 7) = *(_BYTE *)(v5 + 7);
  }
  v6 = *(_QWORD *)a1;
  if ( (_BYTE)v6 != 4 )
    return (unsigned int)-1073741735;
  if ( (v6 & 0xFFFF00) != 0 )
    return (unsigned int)-1073741811;
  v7 = BYTE3(v6);
  if ( BYTE3(v6) >= 3u )
    return (unsigned int)-1073741811;
  if ( v7 )
  {
    v11 = v7 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
        return v4;
      v12 = HIDWORD(v6);
      if ( (unsigned int)(v12 - 4) <= 0x1C && (((_DWORD)v12 - 1) & (unsigned int)v12) == 0 )
      {
        dword_140C4ECFC = v12;
        return v4;
      }
    }
    else
    {
      v13 = HIDWORD(v6);
      if ( (unsigned int)v13 <= 1 )
      {
        PspOutSwapSharedPages = v13;
        return v4;
      }
    }
    return (unsigned int)-1073741811;
  }
  v8 = HIDWORD(v6);
  if ( (unsigned int)v8 >= 0x100 )
    return (unsigned int)-1073741811;
  if ( (((unsigned int)v8 >> 2) & 3) == 3 )
    return (unsigned int)-1073741811;
  v9 = v8 & 0x30;
  if ( v9 >= 0x30 )
    return (unsigned int)-1073741811;
  if ( ((((unsigned int)v8 >> 2) & 3) == 2 || v9 == 32) && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a3) )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    dword_140D24180 = v8 & 0xC0 | dword_140D24180 & 0xFFFFFF00 | ((unsigned int)v8 >> 2) & 0xF | (16 * (v8 & 3));
    if ( (dword_140D24180 & 3) != 0 )
      SmpSystemStoreCreate();
  }
  return v4;
}
