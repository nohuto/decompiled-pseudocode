/*
 * XREFs of WPP_RECORDER_SF_qqqss @ 0x1C000A12C
 * Callers:
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C001C150 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIIsPowerNodeInTransition @ 0x1C0022070 (ACPIIsPowerNodeInTransition.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1C007B228 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C007DD9C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C007EC78 (ACPIBusIrpQueryBusRelations.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rsi
  const char *v12; // rdi
  __int64 v13; // rbx
  unsigned __int64 v15; // r14
  unsigned int v16; // ebp
  unsigned int v17; // r12d
  int v18; // eax
  unsigned __int8 v19; // cf
  __int64 v20; // r8
  __int64 v21; // r8
  const char *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rdx
  const char *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rbx
  int v29; // [rsp+20h] [rbp-88h]

  v10 = a9;
  v12 = a10;
  v13 = -1LL;
  v15 = (unsigned __int64)a3 >> 16;
  v16 = a2;
  v17 = a4;
  v18 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v15 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v19 = _bittest(&v18, (a3 - 1) & 0x1F);
  v20 = 5LL;
  if ( v19 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v15 + 1) >= a2 )
  {
    if ( a10 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a10[v21] );
      v20 = v21 + 1;
    }
    v22 = a10;
    if ( !a10 )
      v22 = "NULL";
    if ( a9 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a9[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = a9;
    if ( !a9 )
      v25 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v15),
      43LL,
      a5,
      v17,
      &a6,
      8LL,
      &a7,
      8LL,
      &a8,
      8LL,
      v25,
      v24,
      v22,
      v20,
      0LL);
  }
  if ( v12 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v12[v26] );
  }
  if ( !v12 )
    v12 = "NULL";
  if ( v10 )
  {
    do
      ++v13;
    while ( v10[v13] );
    v27 = v13 + 1;
  }
  else
  {
    v27 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  LOWORD(v29) = v17;
  return WppAutoLogTrace(a1, v16, a3, a5, v29, &a6, 8LL, &a7, 8LL, &a8, 8LL, v10, v27, v12);
}
