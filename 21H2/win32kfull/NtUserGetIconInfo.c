/*
 * XREFs of NtUserGetIconInfo @ 0x1C00672D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0066AF8 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0067074 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     HMValidateHandle @ 0x1C00670E0 (HMValidateHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetIconInfo(
        unsigned __int64 a1,
        ULONG64 a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *a5,
        int a6)
{
  __int64 v10; // rdi
  struct tagCURSOR *v11; // rax
  ULONG64 v12; // rcx
  struct tagCURSOR *VirtualizedDpiCursor; // r13
  ULONG64 v14; // rdx
  _DWORD *v15; // rdx
  ULONG64 v16; // rcx
  _BYTE *v17; // rdx
  int IconInfo; // ebx
  __int64 v19; // rcx
  struct _UNICODE_STRING *v21; // [rsp+40h] [rbp-78h]
  struct _UNICODE_STRING *v22; // [rsp+48h] [rbp-70h]
  _BYTE v23[8]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v24; // [rsp+68h] [rbp-50h] BYREF
  __int128 v25; // [rsp+78h] [rbp-40h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v23);
  v10 = 3LL;
  v11 = (struct tagCURSOR *)HMValidateHandle(a1, 3u);
  if ( v11 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v11);
    if ( a3 )
    {
      v16 = (ULONG64)a3;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        v16 = MmUserProbeAddress;
      LODWORD(v24) = *(_DWORD *)v16;
      *((_QWORD *)&v24 + 1) = *(_QWORD *)(v16 + 8);
      ProbeForWrite(*((volatile void **)&v24 + 1), WORD1(v24), 2u);
      v22 = (struct _UNICODE_STRING *)&v24;
    }
    else
    {
      v22 = 0LL;
    }
    if ( a4 )
    {
      v14 = (ULONG64)a4;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        v14 = MmUserProbeAddress;
      LODWORD(v25) = *(_DWORD *)v14;
      *((_QWORD *)&v25 + 1) = *(_QWORD *)(v14 + 8);
      ProbeForWrite(*((volatile void **)&v25 + 1), WORD1(v25), 2u);
      v21 = (struct _UNICODE_STRING *)&v25;
    }
    else
    {
      v21 = 0LL;
    }
    if ( a5 )
    {
      v12 = MmUserProbeAddress;
      v15 = a5;
      if ( (unsigned __int64)a5 >= MmUserProbeAddress )
        v15 = (_DWORD *)MmUserProbeAddress;
      *v15 = *v15;
    }
    if ( PsGetCurrentProcessWow64Process(v12) )
      v10 = 0LL;
    if ( (v10 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v17 = (_BYTE *)MmUserProbeAddress;
    *v17 = *v17;
    v17[31] = v17[31];
    IconInfo = (unsigned __int8)_InternalGetIconInfo(
                                  VirtualizedDpiCursor,
                                  (struct _ICONINFO *)a2,
                                  v22,
                                  v21,
                                  a5,
                                  a6 != 0);
    if ( a3 )
    {
      *(_DWORD *)(&v22->MaximumLength + 1) = 0;
      *a3 = *v22;
    }
    if ( a4 )
    {
      *(_DWORD *)(&v21->MaximumLength + 1) = 0;
      *a4 = *v21;
    }
  }
  else
  {
    IconInfo = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v23);
  UserSessionSwitchLeaveCrit(v19);
  return IconInfo;
}
