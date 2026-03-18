/*
 * XREFs of NtUserGetIconInfo @ 0x1C00240A0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0025910 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0025E68 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

_BOOL8 __fastcall NtUserGetIconInfo(
        __int64 a1,
        ULONG64 a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *a5,
        int a6)
{
  __int64 v10; // rdi
  __int64 v11; // rdx
  struct tagCURSOR *v12; // rax
  struct tagCURSOR *VirtualizedDpiCursor; // r13
  ULONG64 v14; // rdx
  _DWORD *v15; // rdx
  ULONG64 v16; // rcx
  _BYTE *v17; // rdx
  struct _UNICODE_STRING *v18; // rdi
  struct _UNICODE_STRING *v19; // rsi
  BOOL IconInfo; // ebx
  __int64 v21; // rcx
  _BYTE v23[24]; // [rsp+30h] [rbp-88h] BYREF
  struct _UNICODE_STRING *v24; // [rsp+48h] [rbp-70h]
  struct _UNICODE_STRING *v25; // [rsp+50h] [rbp-68h]
  __int64 v26; // [rsp+60h] [rbp-58h]
  __int128 v27; // [rsp+68h] [rbp-50h] BYREF
  __int128 v28; // [rsp+78h] [rbp-40h] BYREF

  v27 = 0LL;
  v25 = 0LL;
  v28 = 0LL;
  v24 = 0LL;
  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v23);
  v10 = 3LL;
  LOBYTE(v11) = 3;
  v12 = (struct tagCURSOR *)HMValidateHandle(a1, v11);
  if ( v12 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v12);
    if ( a3 )
    {
      v16 = (ULONG64)a3;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        v16 = MmUserProbeAddress;
      LODWORD(v27) = *(_DWORD *)v16;
      *((_QWORD *)&v27 + 1) = *(_QWORD *)(v16 + 8);
      ProbeForWrite(*((volatile void **)&v27 + 1), WORD1(v27), 2u);
      v25 = (struct _UNICODE_STRING *)&v27;
    }
    else
    {
      v25 = 0LL;
    }
    if ( a4 )
    {
      v14 = (ULONG64)a4;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        v14 = MmUserProbeAddress;
      LODWORD(v28) = *(_DWORD *)v14;
      *((_QWORD *)&v28 + 1) = *(_QWORD *)(v14 + 8);
      ProbeForWrite(*((volatile void **)&v28 + 1), WORD1(v28), 2u);
      v24 = (struct _UNICODE_STRING *)&v28;
    }
    else
    {
      v24 = 0LL;
    }
    if ( a5 )
    {
      v15 = a5;
      if ( (unsigned __int64)a5 >= MmUserProbeAddress )
        v15 = (_DWORD *)MmUserProbeAddress;
      *v15 = *v15;
    }
    if ( PsGetCurrentProcessWow64Process() )
    {
      v26 = 1LL;
      v10 = 0LL;
    }
    else
    {
      v26 = 4LL;
    }
    if ( (v10 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v17 = (_BYTE *)MmUserProbeAddress;
    *v17 = *v17;
    v17[31] = v17[31];
    v18 = v24;
    v19 = v25;
    IconInfo = _InternalGetIconInfo(VirtualizedDpiCursor, (struct _ICONINFO *)a2, v25, v24, a5, a6 != 0);
    if ( a3 )
    {
      *(_DWORD *)(&v19->MaximumLength + 1) = 0;
      *a3 = *v19;
    }
    if ( a4 )
    {
      *(_DWORD *)(&v18->MaximumLength + 1) = 0;
      *a4 = *v18;
    }
  }
  else
  {
    IconInfo = 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v23);
  UserSessionSwitchLeaveCrit(v21);
  return IconInfo;
}
