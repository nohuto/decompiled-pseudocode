/*
 * XREFs of HMMarkObjectDestroy @ 0x1C0033E60
 * Callers:
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00091E0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C006AFB0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall HMMarkObjectDestroy(_DWORD *a1)
{
  unsigned int v2; // ecx
  char *v3; // r8
  char v4; // al

  GetDomainLockRef(14);
  v2 = 0;
  v3 = (char *)qword_1C024FA38 + dword_1C024FA40 * (unsigned int)(unsigned __int16)*a1;
  v4 = v3[25] | 1;
  v3[25] = v4;
  if ( a1[2] )
    v3[25] = v4 & 0xFD;
  else
    return 1;
  return v2;
}
