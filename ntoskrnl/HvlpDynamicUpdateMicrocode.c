/*
 * XREFs of HvlpDynamicUpdateMicrocode @ 0x14093E628
 * Callers:
 *     HvlUpdateMicrocodeDatabase @ 0x14093E610 (HvlUpdateMicrocodeDatabase.c)
 * Callees:
 *     IoAllocateMdl @ 0x14020CAD0 (IoAllocateMdl.c)
 *     MmBuildMdlForNonPagedPool @ 0x1402B5DB0 (MmBuildMdlForNonPagedPool.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     HvcallInitInputControl @ 0x14036E320 (HvcallInitInputControl.c)
 *     HvcallFastExtended @ 0x1403C6CA0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x140456EEE (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x140456F16 (HvlpHvToNtStatus.c)
 *     HvlpHandleInsufficientMemory @ 0x14053DA58 (HvlpHandleInsufficientMemory.c)
 *     HvlpLogMicrocodeUpdateStatus @ 0x14093E204 (HvlpLogMicrocodeUpdateStatus.c)
 */

__int64 __fastcall HvlpDynamicUpdateMicrocode(void *a1, ULONG a2, char a3)
{
  struct _MDL *Mdl; // rax
  struct _MDL *v7; // rdi
  __int16 v9; // ax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // [rsp+30h] [rbp-58h] BYREF
  void *v15; // [rsp+40h] [rbp-48h] BYREF
  ULONG v16; // [rsp+48h] [rbp-40h]
  BOOL v17; // [rsp+58h] [rbp-30h]

  v14 = 0LL;
  Mdl = IoAllocateMdl(a1, a2, 0, 0, 0LL);
  v7 = Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MmBuildMdlForNonPagedPool(Mdl);
  HvcallInitInputControl(7, &v14);
  LODWORD(v14) = v14 | 0x10000;
  v15 = a1;
  v16 = a2;
  v17 = a3 != 0;
  while ( 1 )
  {
    v9 = HvcallFastExtended(v14, (__int64)&v15, 0x20u, 0LL, 0);
    if ( !HvlpHvStatusIsInsufficientMemory(v9) )
      break;
    v13 = HvlpHandleInsufficientMemory(v11, v10, v11, v12);
    if ( v13 < 0 )
      goto LABEL_8;
  }
  v13 = HvlpHvToNtStatus(v11);
LABEL_8:
  IoFreeMdl(v7);
  if ( v13 >= 0 )
    HvlpLogMicrocodeUpdateStatus();
  return (unsigned int)v13;
}
