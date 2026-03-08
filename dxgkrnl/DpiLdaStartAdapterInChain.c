/*
 * XREFs of DpiLdaStartAdapterInChain @ 0x1C03A4064
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x1C0209A10 (DpiFdoStartAdapterThreadImpl.c)
 * Callees:
 *     DpiLdaPreStartChain @ 0x1C00658F4 (DpiLdaPreStartChain.c)
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 */

__int64 __fastcall DpiLdaStartAdapterInChain(
        __int64 a1,
        char a2,
        void *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned int a5,
        __int64 a6,
        _QWORD *a7)
{
  PVOID DeviceExtension; // rdi
  struct _DEVICE_OBJECT *v10; // rsi
  int started; // ebx
  unsigned int v12; // r9d
  __int64 v13; // r11
  __int64 v14; // rbx
  char v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r10
  unsigned int v18; // esi
  __int64 v19; // rbp
  struct _DEVICE_OBJECT *v20; // rcx

  DeviceExtension = *(PVOID *)(a1 + 64);
  if ( *((_BYTE *)DeviceExtension + 508) == 1 )
  {
    v10 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 3);
  }
  else
  {
    v10 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 341);
    if ( !v10 )
    {
LABEL_4:
      started = 1075708986;
      WdLogSingleEntry1(3LL, a1);
      return (unsigned int)started;
    }
    DeviceExtension = v10->DeviceExtension;
  }
  v12 = *((_DWORD *)DeviceExtension + 684);
  if ( v12 != *((_DWORD *)DeviceExtension + 126) )
    goto LABEL_4;
  v13 = 0LL;
  *((_BYTE *)DeviceExtension + 2740) = 0;
  if ( v12 )
  {
    v14 = *((_QWORD *)DeviceExtension + 341);
    v15 = 0;
    while ( 1 )
    {
      v16 = *(_QWORD *)(v14 + 8 * v13);
      v17 = *(_QWORD *)(v16 + 64);
      if ( *(_BYTE *)(v17 + 232) == 1 )
        break;
      if ( (unsigned int)(*(_DWORD *)(v17 + 236) - 1) > 1 )
        goto LABEL_4;
      if ( v15 || *((_DWORD *)DeviceExtension + 281) != *(_DWORD *)(v17 + 1124) )
        v15 = 1;
      v13 = (unsigned int)(v13 + 1);
      *((_BYTE *)DeviceExtension + 2740) = v15;
      if ( (unsigned int)v13 >= v12 )
        goto LABEL_15;
    }
    started = -1071774669;
    WdLogSingleEntry1(3LL, v16);
  }
  else
  {
LABEL_15:
    started = DpiLdaPreStartChain(v10);
    if ( started >= 0 )
    {
      v18 = 1;
      if ( *((_DWORD *)DeviceExtension + 684) <= 1u )
      {
LABEL_23:
        started = DpiFdoStartAdapter(*((struct _DEVICE_OBJECT **)DeviceExtension + 3), a2, a3, a4, a5, a6, a7);
        if ( started >= 0 )
          return (unsigned int)started;
        v20 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
      }
      else
      {
        while ( 1 )
        {
          v19 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 341) + 8LL * v18) + 64LL);
          if ( *(_DWORD *)(v19 + 236) == 1 )
          {
            started = DpiFdoStartAdapter(*(struct _DEVICE_OBJECT **)(v19 + 24), a2, a3, a4, a5, a6, 0LL);
            if ( started < 0 )
              break;
          }
          if ( ++v18 >= *((_DWORD *)DeviceExtension + 684) )
            goto LABEL_23;
        }
        v20 = *(struct _DEVICE_OBJECT **)(v19 + 152);
      }
      IoInvalidateDeviceState(v20);
      return (unsigned int)started;
    }
    WdLogSingleEntry1(3LL, v10);
  }
  return (unsigned int)started;
}
