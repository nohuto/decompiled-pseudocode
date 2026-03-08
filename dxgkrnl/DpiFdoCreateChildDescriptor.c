/*
 * XREFs of DpiFdoCreateChildDescriptor @ 0x1C0208C54
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C02088D0 (DpiFdoEnumChildDevices.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C0397A98 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A240 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C0208DD8 (DpiAcpiGetAcpiChildName.c)
 *     DpiFdoReleaseChildDescriptor @ 0x1C03985D0 (DpiFdoReleaseChildDescriptor.c)
 */

__int64 __fastcall DpiFdoCreateChildDescriptor(__int64 a1, int a2, char a3, int *a4, __int64 a5, unsigned int a6)
{
  unsigned int v6; // ebx
  char *Pool2; // rax
  char *v12; // rdi
  int v13; // eax
  __int16 v14; // cx
  struct _KMUTANT *v15; // rax
  int v16; // eax
  _QWORD *v17; // rdi
  _QWORD *v18; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx

  v6 = 0;
  if ( !a3 && *a4 != 1 )
  {
    v20 = -1073741811LL;
    v6 = -1073741811;
    v21 = 2LL;
LABEL_20:
    WdLogSingleEntry1(v21, v20);
    return v6;
  }
  Pool2 = (char *)ExAllocatePool2(256LL, 128LL, 1953656900LL);
  v12 = Pool2;
  if ( !Pool2 )
  {
    v20 = -1073741801LL;
    v6 = -1073741801;
    v21 = 6LL;
    goto LABEL_20;
  }
  memset(Pool2, 0, 0x80uLL);
  v13 = *a4;
  *((_DWORD *)v12 + 14) = 1;
  *((_DWORD *)v12 + 6) = a2;
  v12[67] = a3;
  *((_DWORD *)v12 + 5) = a6;
  *(_OWORD *)(v12 + 4) = *(_OWORD *)a5;
  if ( v13 == 3 )
  {
    v14 = *(_WORD *)(a5 + 4);
    *((_DWORD *)v12 + 22) = *(_DWORD *)a5;
    v13 = 1;
    *((_DWORD *)v12 + 1) = 0x80000000;
    *((_DWORD *)v12 + 2) = 1;
    v12[12] = 0;
  }
  else
  {
    *(_DWORD *)(v12 + 94) = 0;
    v14 = 0;
  }
  *(_DWORD *)v12 = v13;
  *((_WORD *)v12 + 46) = v14;
  *((_DWORD *)v12 + 17) = 1;
  v15 = (struct _KMUTANT *)ExAllocatePool2(64LL, 56LL, 1953656900LL);
  *((_QWORD *)v12 + 9) = v15;
  if ( v15 )
  {
    KeInitializeMutex(v15, 0);
    if ( a3 && *(_BYTE *)(a1 + 1157) == 1 )
      *((_QWORD *)v12 + 10) = DpiAcpiGetAcpiChildName(a1, a6);
    if ( *(_DWORD *)v12 == 1 )
    {
      v16 = *(_DWORD *)(a1 + 3496) + 1;
      *(_DWORD *)(a1 + 3496) = v16;
      if ( *(_BYTE *)(a1 + 1152) )
      {
        if ( v16 == 1 || IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)a5) )
          dword_1C013B7F4 = a2;
      }
    }
    v17 = v12 + 32;
    v18 = *(_QWORD **)(a1 + 3488);
    if ( *v18 != a1 + 3480 )
      __fastfail(3u);
    *v17 = a1 + 3480;
    v17[1] = v18;
    *v18 = v17;
    *(_QWORD *)(a1 + 3488) = v17;
  }
  else
  {
    v6 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    DpiFdoReleaseChildDescriptor(v12);
  }
  return v6;
}
