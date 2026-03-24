/*
 * XREFs of WPP_RECORDER_SF_qs @ 0x1C002F228
 * Callers:
 *     OSNotifyDeviceEnum @ 0x1C002F0AC (OSNotifyDeviceEnum.c)
 *     ACPIBuildIssueNotifyInvalidateRelationsForDockDevice @ 0x1C004B9E0 (ACPIBuildIssueNotifyInvalidateRelationsForDockDevice.c)
 *     OSNotifyDeviceCheck @ 0x1C0058AC4 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEject @ 0x1C0058C58 (OSNotifyDeviceEject.c)
 *     AcpiHandleInternalNotify @ 0x1C005B1E8 (AcpiHandleInternalNotify.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qs(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7)
{
  __int64 v7; // rdi
  unsigned __int64 v10; // rsi
  unsigned int v11; // r14d
  __int64 v13; // rbx
  int v14; // eax
  __int64 v16; // rdx
  const char *v17; // rcx
  int v18; // [rsp+20h] [rbp-58h]

  v7 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v11 = a2;
  v13 = (__int64)a7;
  v14 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v14, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= a2 )
  {
    if ( a7 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a7[v16] );
    }
    v17 = a7;
    if ( !a7 )
      v17 = "NULL";
    pfnWppTraceMessage(*((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10), 43LL, a5, a4, &a6, 8LL, v17);
  }
  if ( v13 )
  {
    do
      ++v7;
    while ( *(_BYTE *)(v13 + v7) );
  }
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, v11, a3, a5, v18, &a6);
}
