/*
 * XREFs of NtGdiGetProcessSessionFonts @ 0x1C00D2D60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C00D30D8 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtGdiGetProcessSessionFonts(
        void *a1,
        volatile void *a2,
        unsigned int *a3,
        volatile void *a4,
        unsigned int *a5)
{
  void **Pool2; // rdi
  unsigned __int16 *v7; // r14
  bool v8; // si
  unsigned int v9; // r15d
  unsigned int v10; // eax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r12
  char v13; // al
  int ProcessSessionFonts; // ebx
  HANDLE *v16; // rsi
  __int64 v17; // r12
  ULONG v18; // eax
  char v19; // [rsp+40h] [rbp-88h]
  unsigned int v20; // [rsp+44h] [rbp-84h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v22; // [rsp+4Ch] [rbp-7Ch]
  unsigned int v23; // [rsp+50h] [rbp-78h]
  PVOID P; // [rsp+58h] [rbp-70h]
  unsigned __int16 *v25; // [rsp+60h] [rbp-68h]
  PVOID Object; // [rsp+68h] [rbp-60h] BYREF
  PVOID v27; // [rsp+70h] [rbp-58h]
  unsigned int v28; // [rsp+78h] [rbp-50h]
  unsigned int v29; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v30; // [rsp+80h] [rbp-48h]
  unsigned __int64 v31; // [rsp+88h] [rbp-40h]

  v20 = 0;
  v21 = 0;
  v27 = 0LL;
  Pool2 = 0LL;
  P = 0LL;
  v7 = 0LL;
  v25 = 0LL;
  v8 = 0;
  if ( (unsigned int)GetCurrentWin32kSessionId() )
    return 0LL;
  if ( ((unsigned __int8)a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 < a3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( ((unsigned __int8)a5 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)(a5 + 1) > MmUserProbeAddress || a5 + 1 < a5 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v9 = *a3;
  v23 = v9;
  v28 = v9;
  v10 = *a5;
  v22 = v10;
  v29 = v10;
  v11 = 8LL * v9;
  v30 = v11;
  if ( v11 > 0xFFFFFFFF || (v12 = 2LL * v10, v31 = v12, v12 > 0xFFFFFFFF) )
    ExRaiseStatus(-1073741675);
  if ( (_DWORD)v11 )
    ProbeForWrite(a2, (unsigned int)v11, 4u);
  if ( (_DWORD)v12 )
    ProbeForWrite(a4, (unsigned int)v12, 4u);
  if ( v9 )
  {
    v13 = 0;
    v19 = 0;
  }
  else
  {
    v13 = 1;
    v19 = 1;
    if ( a2 || a4 || v22 )
    {
      ProcessSessionFonts = -1073741811;
      goto LABEL_50;
    }
  }
  if ( v13
    || (Pool2 = (void **)ExAllocatePool2(256LL, v11, 1886221383LL), (P = Pool2) != 0LL)
    && (v7 = (unsigned __int16 *)ExAllocatePool2(258LL, v12, 1886221383LL), (v25 = v7) != 0LL) )
  {
    Object = 0LL;
    ProcessSessionFonts = ObReferenceObjectByHandle(a1, 0x40u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v27 = Object;
    if ( ProcessSessionFonts >= 0 )
    {
      ProcessSessionFonts = GetProcessSessionFonts((PRKPROCESS)Object, v23, v22, &v20, &v21, Pool2, v7);
      if ( ProcessSessionFonts >= 0 )
        v8 = v19 == 0;
      ProbeForWrite(a3, 4uLL, 4u);
      ProbeForWrite(a5, 4uLL, 4u);
      if ( (int)(ProcessSessionFonts + 0x80000000) < 0 || ProcessSessionFonts == -1073741789 )
      {
        *a3 = v20;
        *a5 = v21;
      }
      if ( ProcessSessionFonts >= 0 && !v19 )
      {
        memmove((void *)a2, Pool2, 8LL * v20);
        memmove((void *)a4, v7, 2LL * v21);
      }
      if ( ProcessSessionFonts >= 0 )
        goto LABEL_35;
    }
  }
  else
  {
    ProcessSessionFonts = -1073741801;
  }
LABEL_50:
  if ( v8 && v20 )
  {
    v16 = Pool2;
    v17 = v20;
    do
    {
      NtClose(*v16++);
      --v17;
    }
    while ( v17 );
  }
LABEL_35:
  if ( v27 )
    ObfDereferenceObject(v27);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x706D7447u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x706D7447u);
  if ( ProcessSessionFonts < 0 )
  {
    v18 = RtlNtStatusToDosErrorNoTeb(ProcessSessionFonts);
    EngSetLastError(v18);
  }
  return (unsigned int)ProcessSessionFonts;
}
