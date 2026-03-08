/*
 * XREFs of UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x1C000AF50
 * Callers:
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x1C000AE18 (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_HandleAddEndpointsState @ 0x1C0049038 (UsbDevice_HandleAddEndpointsState.c)
 *     UsbDevice_HandleDropEndpointsState @ 0x1C0049228 (UsbDevice_HandleDropEndpointsState.c)
 * Callees:
 *     UsbDevice_InitializeInputContextCommon @ 0x1C0008390 (UsbDevice_InitializeInputContextCommon.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C000BBEC (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_InitializeInputContextForDropEndpoints @ 0x1C000CFF4 (UsbDevice_InitializeInputContextForDropEndpoints.c)
 */

__int64 __fastcall UsbDevice_InitializeInputContextForAddDropEndpoints(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  int v7; // esi
  __int64 v8; // rax
  _DWORD *v9; // rdx
  int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // r8d

  UsbDevice_InitializeInputContextCommon(a1);
  v6 = 0;
  if ( (a3 & 0xFFFFFFFD) != 0 )
  {
    if ( a3 != 1 )
      return (unsigned int)-1073741595;
LABEL_4:
    v7 = UsbDevice_InitializeInputContextForDropEndpoints(a1, a2);
    if ( v7 < 0 )
      return (unsigned int)v7;
    goto LABEL_5;
  }
  v7 = UsbDevice_InitializeInputContextForAddEndpoints(a1, a2);
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( a3 <= 1 )
    goto LABEL_4;
LABEL_5:
  v8 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 8 : 0) + a1 + 640);
  if ( v8 )
    v9 = *(_DWORD **)(v8 + 16);
  else
    v9 = 0LL;
  v10 = *(_DWORD *)(a1 + 152) & ~*v9;
  v11 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 104LL) & 4) != 0 ? 0x20 : 0;
  *(_DWORD *)(a1 + 152) = v10;
  v12 = v9[1] | v10;
  *(_DWORD *)(a1 + 152) = v12;
  do
  {
    if ( _bittest(&v12, v6) )
    {
      *(_DWORD *)((char *)v9 + v11 + 32) = (v6 << 27) | *(_DWORD *)((char *)v9 + v11 + 32) & 0x7FFFFFF;
      v12 = *(_DWORD *)(a1 + 152);
    }
    ++v6;
  }
  while ( v6 < 0x20 );
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = *(_DWORD *)((char *)v9 + v11 + 32);
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      (_DWORD)v9,
      12,
      44,
      (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
      *(_BYTE *)(a1 + 135),
      v13 >> 27);
  }
  return (unsigned int)v7;
}
