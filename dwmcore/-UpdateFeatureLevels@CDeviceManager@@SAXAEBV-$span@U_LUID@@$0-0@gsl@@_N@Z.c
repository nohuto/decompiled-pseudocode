/*
 * XREFs of ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@_N@Z @ 0x1800F3798
 * Callers:
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180051630 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180034A84 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

struct CComposition *__fastcall CDeviceManager::UpdateFeatureLevels(CD3DDevice *a1, unsigned __int8 a2)
{
  struct _LUID *v2; // rbx
  int v3; // esi
  int v4; // edi
  int v5; // r12d
  unsigned __int8 v6; // r15
  unsigned __int8 v7; // r14
  struct _LUID *v8; // rbp
  struct _LUID v9; // rdx
  int ExistingDevice; // eax
  int v11; // eax
  char v12; // dl
  int v13; // r10d
  int v14; // edx
  int v15; // r11d
  int v16; // ecx
  struct CComposition *result; // rax
  __int128 v18; // xmm0
  CD3DDevice *v19; // [rsp+20h] [rbp-48h] BYREF
  __int128 v20; // [rsp+28h] [rbp-40h]

  v2 = (struct _LUID *)*((_QWORD *)a1 + 1);
  v3 = 0;
  v4 = 0;
  v5 = a2;
  v6 = 0;
  v7 = 1;
  v8 = &v2[*(_QWORD *)a1];
  while ( v2 != v8 )
  {
    v9 = *v2;
    v19 = 0LL;
    ExistingDevice = CDeviceManager::GetExistingDevice(a1, v9, &v19);
    a1 = v19;
    if ( ExistingDevice < 0 )
      goto LABEL_11;
    v11 = *((_DWORD *)v19 + 146);
    v12 = *((_BYTE *)v19 + 1509);
    if ( !v3 || v11 < v3 )
      v3 = *((_DWORD *)v19 + 146);
    if ( v11 <= v4 )
    {
      if ( v12 )
LABEL_29:
        v6 = 1;
    }
    else
    {
      if ( v12 )
        goto LABEL_29;
      v4 = *((_DWORD *)v19 + 146);
    }
    if ( v11 < 37632 || *((_BYTE *)v19 + 1505) )
      v7 = 0;
LABEL_11:
    if ( v19 )
      CD3DDevice::Release(v19);
    ++v2;
  }
  v13 = 37120;
  v14 = v6;
  v15 = 37120;
  v16 = v7;
  if ( v3 )
    v15 = v3;
  DWORD2(v20) = v6;
  HIDWORD(v20) = v7;
  LODWORD(v20) = v15;
  if ( v4 )
    v13 = v4;
  DWORD1(v20) = v13;
  if ( CCommonRegistryData::m_forceEffectMode == 1 )
  {
    v16 = 0;
    goto LABEL_35;
  }
  if ( CCommonRegistryData::m_forceEffectMode == 2 )
  {
    v14 = 0;
    DWORD2(v20) = 0;
    v16 = 1;
LABEL_35:
    HIDWORD(v20) = v16;
  }
  result = g_pComposition;
  if ( *((_DWORD *)g_pComposition + 326) != v15
    || *((_DWORD *)g_pComposition + 327) != v13
    || *((_DWORD *)g_pComposition + 328) != v14
    || *((_DWORD *)g_pComposition + 329) != v16
    || *((_DWORD *)g_pComposition + 330) != v5 )
  {
    v18 = v20;
    *((_BYTE *)g_pComposition + 1279) = 1;
    *(_OWORD *)((char *)result + 1304) = v18;
    *((_DWORD *)result + 330) = v5;
  }
  return result;
}
