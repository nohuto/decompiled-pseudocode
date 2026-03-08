/*
 * XREFs of Interrupter_IoResList_GetMessageCountAndType @ 0x1C006E888
 * Callers:
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C006EAF0 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall Interrupter_IoResList_GetMessageCountAndType(__int64 a1, unsigned int *a2, unsigned int *a3, char *a4)
{
  char v4; // bp
  unsigned int v5; // r14d
  unsigned int v6; // edi
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // ebx
  char v11; // r15
  __int64 v12; // r13
  unsigned int i; // r12d
  __int64 v14; // rax
  char *result; // rax
  char v16; // [rsp+20h] [rbp-58h]

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v16 = 0;
  v7 = 0;
  v8 = a1;
  while ( v7 < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2320))(
                 WdfDriverGlobals,
                 v8) )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2328))(
           WdfDriverGlobals,
           v8,
           v7);
    v10 = 0;
    v11 = 0;
    v12 = v9;
    for ( i = 0;
          i < (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2384))(
                WdfDriverGlobals,
                v12);
          ++i )
    {
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2392))(
              WdfDriverGlobals,
              v12,
              i);
      if ( *(_BYTE *)(v14 + 1) == 2 && (*(_BYTE *)(v14 + 4) & 3) == 3 && (*(_BYTE *)v14 & 8) == 0 )
      {
        if ( v10 )
          v11 = 1;
        v10 += *(_DWORD *)(v14 + 12) - *(_DWORD *)(v14 + 8) + 1;
      }
    }
    v4 = v16;
    if ( v11 )
    {
      if ( !v16 || v10 > v6 )
      {
        v4 = 1;
        v16 = 1;
LABEL_15:
        v5 = v7;
        v6 = v10;
      }
    }
    else if ( !v16 && v10 > v6 )
    {
      goto LABEL_15;
    }
    v8 = a1;
    ++v7;
  }
  *a2 = v5;
  *a3 = v6;
  result = a4;
  *a4 = v4;
  return result;
}
