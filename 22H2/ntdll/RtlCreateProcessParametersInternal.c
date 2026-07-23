/*
 * XREFs of RtlCreateProcessParametersInternal @ 0x18004A9F0
 * Callers:
 *     RtlCreateProcessParametersEx @ 0x18004A850 (RtlCreateProcessParametersEx.c)
 *     RtlCreateProcessParametersWithTemplate @ 0x18004A8C0 (RtlCreateProcessParametersWithTemplate.c)
 *     RtlCreateProcessParameters @ 0x1800D65D0 (RtlCreateProcessParameters.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpCopyProcString @ 0x18004AEEC (RtlpCopyProcString.c)
 *     ValidateStringParameter @ 0x18004AF8C (ValidateStringParameter.c)
 *     RtlpGetBlockSizeEx @ 0x18004BDE8 (RtlpGetBlockSizeEx.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     RtlDeNormalizeProcessParams @ 0x1800D6640 (RtlDeNormalizeProcessParams.c)
 */

__int64 __fastcall RtlCreateProcessParametersInternal(
        PRTL_USER_PROCESS_PARAMETERS *a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        void *Src,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  __int64 v15; // r8
  unsigned __int16 *v16; // r9
  int v17; // eax
  unsigned __int64 v18; // r15
  __int16 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // r11
  int v23; // eax
  __int64 v24; // r10
  int v25; // eax
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // r8
  int v29; // eax
  int v30; // eax
  _WORD *v31; // rdx
  unsigned __int16 *v32; // r14
  unsigned __int16 *v33; // rax
  unsigned __int16 *v34; // r11
  unsigned __int16 *v35; // r10
  __int64 v36; // rcx
  unsigned __int64 v37; // rdi
  size_t BlockSize; // rsi
  unsigned __int64 i; // r14
  _RTL_USER_PROCESS_PARAMETERS *Heap; // rax
  PRTL_USER_PROCESS_PARAMETERS v41; // rbx
  char *v42; // rsi
  _RTL_USER_PROCESS_PARAMETERS *v43; // rsi
  int v44; // eax
  __int64 v45; // r9
  size_t v47; // r8
  char v48; // [rsp+20h] [rbp-50h]
  PRTL_USER_PROCESS_PARAMETERS v49; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v50; // [rsp+30h] [rbp-40h]
  _RTL_USER_PROCESS_PARAMETERS *v51; // [rsp+38h] [rbp-38h]
  unsigned __int16 *v52; // [rsp+40h] [rbp-30h]
  unsigned __int16 *v53; // [rsp+48h] [rbp-28h]
  unsigned __int16 *v54; // [rsp+50h] [rbp-20h]
  unsigned __int16 *v55; // [rsp+58h] [rbp-18h]
  _WORD *v56; // [rsp+60h] [rbp-10h]

  if ( (a12 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v51 = ProcessParameters;
  if ( (int)ValidateStringParameter(a2) < 0 )
    return 3221225485LL;
  v17 = v15 ? ValidateStringParameter(a3) : 0;
  if ( v17 < 0 )
    return 3221225485LL;
  v48 = 0;
  v18 = 0LL;
  if ( v16 )
  {
    v18 = (unsigned __int64)*v16 >> 1;
    if ( (int)ValidateStringParameter(v16) < 0 || !v18 )
      return 3221225485LL;
    if ( *(_WORD *)(*(_QWORD *)(v20 + 8) + 2 * v18 - 2) == v19 )
      goto LABEL_12;
    if ( v18 > 0x103 )
      return 3221225485LL;
    v48 = 1;
  }
LABEL_12:
  if ( a5 )
    v21 = ValidateStringParameter(a5);
  else
    v21 = 0;
  if ( v21 < 0 )
    return 3221225485LL;
  v22 = a7;
  v23 = a7 ? ValidateStringParameter(a7) : 0;
  if ( v23 < 0 )
    return 3221225485LL;
  v24 = a8;
  v25 = a8 ? ValidateStringParameter(a8) : 0;
  if ( v25 < 0 )
    return 3221225485LL;
  v26 = a9;
  v27 = a9 ? ValidateStringParameter(a9) : 0;
  if ( v27 < 0 )
    return 3221225485LL;
  v28 = a10;
  v29 = a10 ? ValidateStringParameter(a10) : 0;
  if ( v29 < 0 )
    return 3221225485LL;
  v30 = a11 ? ValidateStringParameter(a11) : 0;
  if ( v30 < 0 )
    return 3221225485LL;
  v31 = &RtlpNullString;
  v32 = a2;
  v33 = (unsigned __int16 *)&RtlpNullString;
  if ( a5 )
    v32 = a5;
  v52 = v32;
  if ( v22 )
    v33 = (unsigned __int16 *)v22;
  v53 = v33;
  v34 = (unsigned __int16 *)&RtlpNullString;
  if ( v24 )
    v34 = (unsigned __int16 *)v24;
  v35 = (unsigned __int16 *)&RtlpNullString;
  v54 = v34;
  v36 = v33[1];
  if ( v26 )
    v35 = (unsigned __int16 *)v26;
  v55 = v35;
  if ( v28 )
    v31 = (_WORD *)v28;
  v56 = v31;
  v37 = ((v34[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((*a2 + 9LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v35[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v36 + 7) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((*v32 + 9LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + 1608;
  if ( *v31 )
    v37 += ((unsigned __int16)v31[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( a3 )
    v37 += (*(unsigned __int16 *)(a3 + 2) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( a11 )
    v37 += (*(unsigned __int16 *)(a11 + 2) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( Src )
    BlockSize = RtlpGetBlockSizeEx(Src, 1LL);
  else
    BlockSize = ProcessParameters->EnvironmentSize;
  for ( i = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL; ; i = v50 )
  {
    if ( i < BlockSize || i + v37 < v37 )
      return 3221225621LL;
    Heap = (_RTL_USER_PROCESS_PARAMETERS *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, i + v37);
    v41 = Heap;
    if ( !Heap )
      return 3221225626LL;
    if ( Src )
    {
      memmove((char *)Heap + v37, Src, BlockSize);
      v42 = (char *)v41 + v37;
      goto LABEL_54;
    }
    RtlEnterCriticalSection(&FastPebLock);
    BlockSize = v51->EnvironmentSize;
    v50 = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( BlockSize <= i )
      break;
    RtlLeaveCriticalSection(&FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v41);
  }
  v47 = BlockSize;
  v42 = (char *)v41 + v37;
  memmove((char *)v41 + v37, v51->Environment, v47);
  RtlLeaveCriticalSection(&FastPebLock);
  i = v50;
LABEL_54:
  memset(v41, 0, sizeof(_RTL_USER_PROCESS_PARAMETERS));
  v41->Environment = v42;
  v43 = v51;
  v41->MaximumLength = v37;
  v41->Length = v37;
  v41->EnvironmentSize = i;
  v49 = v41 + 1;
  v41->Flags = 1;
  v41->ConsoleFlags = v43->ConsoleFlags & 1;
  if ( a4 )
  {
    RtlpCopyProcString(&v49, &v41->CurrentDirectory, a4, 520LL);
    if ( v48 )
    {
      v41->CurrentDirectory.DosPath.Buffer[v18] = 92;
      v41->CurrentDirectory.DosPath.Length += 2;
    }
  }
  else
  {
    RtlEnterCriticalSection(&FastPebLock);
    RtlpCopyProcString(&v49, &v41->CurrentDirectory, &v43->CurrentDirectory, 520LL);
    RtlLeaveCriticalSection(&FastPebLock);
  }
  if ( a3 )
    RtlpCopyProcString(&v49, &v41->DllPath, a3, *(unsigned __int16 *)(a3 + 2));
  if ( a11 )
    RtlpCopyProcString(&v49, &v41->RedirectionDllName, a11, *(unsigned __int16 *)(a11 + 2));
  RtlpCopyProcString(&v49, &v41->ImagePathName, a2, (unsigned int)*a2 + 2);
  v44 = *v52;
  if ( (_WORD)v44 == v52[1] )
    v45 = v52[1];
  else
    v45 = (unsigned int)(v44 + 2);
  RtlpCopyProcString(&v49, &v41->CommandLine, v52, v45);
  RtlpCopyProcString(&v49, &v41->WindowTitle, v53, v53[1]);
  RtlpCopyProcString(&v49, &v41->DesktopInfo, v54, v54[1]);
  RtlpCopyProcString(&v49, &v41->ShellInfo, v55, v55[1]);
  if ( *v56 )
    RtlpCopyProcString(&v49, &v41->RuntimeData, v56, (unsigned __int16)v56[1]);
  if ( (a12 & 1) == 0 )
    v41 = RtlDeNormalizeProcessParams(v41);
  *a1 = v41;
  return 0LL;
}
