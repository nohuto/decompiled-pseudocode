/*
 * XREFs of ?ClearD2DCaches@CDeviceManager@@IEAA_NK@Z @ 0x180050154
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18004F100 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ClearProtectedResources@CD3DDevice@@QEAA_NXZ @ 0x1802893DC (-ClearProtectedResources@CD3DDevice@@QEAA_NXZ.c)
 */

char __fastcall CDeviceManager::ClearD2DCaches(CDeviceManager *this, int a2)
{
  char v2; // bp
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // r8d
  unsigned int v6; // r14d
  __int64 v7; // r15
  __int64 i; // rdi
  char v9; // si
  __int64 v10; // rbx
  __int64 j; // rcx
  CD3DDevice *v12; // rcx
  int v14; // [rsp+64h] [rbp+Ch]
  int v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = a2;
  v2 = 1;
  v3 = *((_QWORD *)g_pComposition + 27);
  v4 = *(_QWORD *)(v3 + 544);
  v5 = *(_DWORD *)(v3 + 552);
  v14 = HIDWORD(v4);
  if ( !(_DWORD)v4 || !*(_DWORD *)(v3 + 548) )
  {
    v14 = 1080;
    v5 = 4;
    LODWORD(v4) = 1920;
  }
  v6 = v5 * ((v4 + 255) & 0xFFFFFF00) * ((v14 + 255) & 0xFFFFFF00)
     + ((v5 * (((_DWORD)v4 + 255) & 0xFFFFFF00) * ((v14 + 255) & 0xFFFFFF00)) >> 2);
  EnterCriticalSection(&stru_1803E7020);
  v7 = xmmword_1803E7050;
  for ( i = qword_1803E7048; i != v7; i += 16LL )
  {
    v9 = 0;
    v10 = *(_QWORD *)(*(_QWORD *)i + 896LL);
    EnterCriticalSection(&stru_1803E7020);
    for ( j = qword_1803E7048; j != (_QWORD)xmmword_1803E7050; j += 16LL )
    {
      if ( v10 == *(_QWORD *)(*(_QWORD *)j + 896LL) )
      {
        if ( j && !*(_BYTE *)(*(_QWORD *)j + 452LL) && !byte_1803E7060 && *(_DWORD *)(*(_QWORD *)j + 448LL) )
          v9 = 1;
        break;
      }
    }
    LeaveCriticalSection(&stru_1803E7020);
    if ( *(_BYTE *)(i + 8) && !v9 )
      CD3DDevice::ClearProtectedResources(*(CD3DDevice **)i);
    v12 = *(CD3DDevice **)i;
    v15 = 1;
    if ( *((_QWORD *)v12 + 25) )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, int *))(**((_QWORD **)v12 + 26) + 40LL))(
        *((_QWORD *)v12 + 26),
        2000LL,
        v6,
        &v15);
      if ( v15 != 1 )
        v2 = 0;
    }
    *(_BYTE *)(i + 8) = v9;
  }
  LeaveCriticalSection(&stru_1803E7020);
  return v2;
}
