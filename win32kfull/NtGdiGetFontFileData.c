/*
 * XREFs of NtGdiGetFontFileData @ 0x1C02D87D0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngMapFontFileFDInternal @ 0x1C0115154 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C011CB40 (EngUnmapFontFileFD.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1C0125A10 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1C0130380 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C014CD9A (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ?MapFontFileInKernel@@YAJPEAXPEAPEAX@Z @ 0x1C02B884C (-MapFontFileInKernel@@YAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall NtGdiGetFontFileData(unsigned int a1, unsigned int a2, size_t *a3, char *a4, size_t Size)
{
  __int64 v6; // rsi
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rax
  struct PFT *v12; // rcx
  struct PFF *PFFFromId; // rdi
  ULONG v14; // ebx
  ULONG_PTR v16; // rsi
  size_t v17; // r15
  NTSTATUS v18; // r12d
  char *v19; // rdx
  PVOID MappedBase; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+28h] [rbp-50h] BYREF
  size_t v22; // [rsp+30h] [rbp-48h]
  ULONG_PTR v23; // [rsp+38h] [rbp-40h]
  _QWORD v24[2]; // [rsp+40h] [rbp-38h] BYREF
  int v25; // [rsp+50h] [rbp-28h]

  v6 = a2;
  if ( ((unsigned __int8)a3 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v22 = *a3;
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)v24);
  v9 = Gre::Base::Globals(v8);
  v21 = *((_QWORD *)v9 + 6);
  GreAcquireSemaphore(v21);
  v11 = SGDGetSessionState(v10);
  PFFFromId = GetPFFFromId(*(struct PFT **)(*(_QWORD *)(v11 + 32) + 20272LL), a1, 0LL);
  v14 = 0;
  if ( !PFFFromId )
  {
    v12 = (struct PFT *)*((_QWORD *)v9 + 796);
    if ( v12 )
      PFFFromId = GetPFFFromId(v12, a1, 0LL);
  }
  if ( PFFFromId )
  {
    v24[0] = PFFFromId;
    Gre::Base::Globals(v12);
    ++*((_DWORD *)PFFFromId + 17);
    v25 = 0;
    SEMOBJ::vUnlock((SEMOBJ *)&v21);
    if ( (unsigned int)v6 < *((_DWORD *)PFFFromId + 9)
      && (_mm_lfence(), v16 = *(_QWORD *)(*((_QWORD *)PFFFromId + 25) + 8 * v6), v23 = v16, v17 = v22, v22 + Size >= v22)
      && *(unsigned int *)(v16 + 24) >= v22 + Size
      && (unsigned int)EngMapFontFileFDInternal(v16, 0LL, 0LL, 0) )
    {
      MappedBase = 0LL;
      v18 = MapFontFileInKernel(*(PVOID *)(v16 + 32), &MappedBase);
      if ( v18 >= 0 )
      {
        v19 = (char *)MappedBase + v17 + 16;
        if ( (*((_DWORD *)PFFFromId + 13) & 0x10) == 0 )
          v19 = (char *)MappedBase + v17;
        if ( (unsigned __int64)&a4[Size] > MmUserProbeAddress || &a4[Size] <= a4 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a4, v19, Size);
        MmUnmapViewInSessionSpace(MappedBase);
        EngUnmapFontFileFD(v16);
      }
      else
      {
        EngUnmapFontFileFD(v16);
        v14 = RtlNtStatusToDosError(v18);
      }
    }
    else
    {
      v14 = 87;
    }
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v24);
    return v14;
  }
  else
  {
    SEMOBJ::vUnlock((SEMOBJ *)&v21);
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v24);
    return 87LL;
  }
}
