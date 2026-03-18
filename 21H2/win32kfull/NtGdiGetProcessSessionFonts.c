/*
 * XREFs of NtGdiGetProcessSessionFonts @ 0x1C0117190
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C000BADC (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtGdiGetProcessSessionFonts(
        void *a1,
        volatile void *a2,
        unsigned int *a3,
        volatile void *a4,
        unsigned int *a5)
{
  void *Pool2; // r14
  unsigned __int16 *v6; // r15
  bool v7; // r12
  unsigned int v8; // eax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  NTSTATUS ProcessSessionFonts; // edi
  HANDLE *v13; // r12
  __int64 v14; // r13
  ULONG v15; // eax
  char v16; // [rsp+40h] [rbp-88h]
  unsigned int v17; // [rsp+44h] [rbp-84h] BYREF
  unsigned int v18; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v19; // [rsp+4Ch] [rbp-7Ch]
  unsigned int v20; // [rsp+50h] [rbp-78h]
  PVOID P; // [rsp+58h] [rbp-70h]
  unsigned __int16 *v22; // [rsp+60h] [rbp-68h]
  PVOID Object; // [rsp+68h] [rbp-60h] BYREF
  PVOID v24; // [rsp+70h] [rbp-58h]
  unsigned int v25; // [rsp+78h] [rbp-50h]
  unsigned int v26; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v27; // [rsp+80h] [rbp-48h]
  unsigned __int64 v28; // [rsp+88h] [rbp-40h]
  void *v32; // [rsp+E8h] [rbp+20h]

  v32 = (void *)a4;
  v17 = 0;
  v18 = 0;
  v24 = 0LL;
  Pool2 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v22 = 0LL;
  v7 = 0;
  if ( gSessionId )
    return 0LL;
  if ( ((unsigned __int8)a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 < a3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( ((unsigned __int8)a5 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)(a5 + 1) > MmUserProbeAddress || a5 + 1 < a5 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v20 = *a3;
  v25 = v20;
  v8 = *a5;
  v19 = v8;
  v26 = v8;
  v9 = 8LL * v20;
  v27 = v9;
  if ( v9 > 0xFFFFFFFF || (v10 = 2LL * v8, v28 = v10, v10 > 0xFFFFFFFF) )
    ExRaiseStatus(-1073741675);
  if ( (_DWORD)v9 )
  {
    ProbeForWrite(a2, (unsigned int)v9, 4u);
    a4 = v32;
  }
  if ( (_DWORD)v10 )
    ProbeForWrite(a4, (unsigned int)v10, 4u);
  if ( v20 )
  {
    v16 = 0;
    Pool2 = (void *)ExAllocatePool2(256LL, v9, 1886221383LL);
    P = Pool2;
    if ( Pool2 )
    {
      v6 = (unsigned __int16 *)ExAllocatePool2(258LL, v10, 1886221383LL);
      v22 = v6;
      if ( v6 )
      {
LABEL_24:
        Object = 0LL;
        ProcessSessionFonts = ObReferenceObjectByHandle(a1, 0x40u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
        v24 = Object;
        if ( ProcessSessionFonts >= 0 )
        {
          ProcessSessionFonts = GetProcessSessionFonts((PRKPROCESS)Object, v20, v19, &v17, &v18, (void **)Pool2, v6);
          if ( ProcessSessionFonts >= 0 )
            v7 = v16 == 0;
          ProbeForWrite(a3, 4uLL, 4u);
          ProbeForWrite(a5, 4uLL, 4u);
          if ( (int)(ProcessSessionFonts + 0x80000000) < 0 || ProcessSessionFonts == -1073741789 )
          {
            *a3 = v17;
            *a5 = v18;
          }
          if ( ProcessSessionFonts >= 0 && !v16 )
          {
            memmove((void *)a2, Pool2, 8LL * v17);
            memmove(v32, v6, 2LL * v18);
          }
          if ( ProcessSessionFonts >= 0 )
            goto LABEL_34;
        }
        goto LABEL_49;
      }
      ProcessSessionFonts = -1073741801;
    }
    else
    {
      ProcessSessionFonts = -1073741801;
    }
  }
  else
  {
    v16 = 1;
    if ( !a2 && !v32 && !v19 )
      goto LABEL_24;
    ProcessSessionFonts = -1073741811;
  }
LABEL_49:
  if ( v7 && v17 )
  {
    v13 = (HANDLE *)Pool2;
    v14 = v17;
    do
    {
      NtClose(*v13++);
      --v14;
    }
    while ( v14 );
  }
LABEL_34:
  if ( v24 )
    ObfDereferenceObject(v24);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x706D7447u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x706D7447u);
  if ( ProcessSessionFonts < 0 )
  {
    v15 = RtlNtStatusToDosErrorNoTeb(ProcessSessionFonts);
    EngSetLastError(v15);
  }
  return (unsigned int)ProcessSessionFonts;
}
