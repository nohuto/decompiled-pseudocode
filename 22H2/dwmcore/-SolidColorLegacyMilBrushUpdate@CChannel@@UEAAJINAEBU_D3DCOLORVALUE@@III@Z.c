/*
 * XREFs of ?SolidColorLegacyMilBrushUpdate@CChannel@@UEAAJINAEBU_D3DCOLORVALUE@@III@Z @ 0x1800D5690
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005DBFC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005E108 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18005E530 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18005EA34 (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::SolidColorLegacyMilBrushUpdate(
        CChannel *this,
        unsigned int a2,
        double a3,
        const struct _D3DCOLORVALUE *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v10; // esi
  unsigned int v11; // edi
  unsigned int v12; // ebx
  __int128 v13; // xmm1
  float v14; // xmm0_4
  unsigned int v15; // ebx
  _DWORD v17[6]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v18; // [rsp+38h] [rbp-28h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+90h] [rbp+30h] BYREF

  v19 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 175);
  v10 = a5;
  CChannel::CheckOptionalHandle((__int64)this, a5, 60);
  v11 = a6;
  CChannel::CheckOptionalHandle((__int64)this, a6, 185);
  v12 = a7;
  CChannel::CheckOptionalHandle((__int64)this, a7, 185);
  v13 = *(_OWORD *)&a4->r;
  v17[0] = 504;
  v17[1] = a2;
  v17[3] = v10;
  v17[4] = v11;
  v14 = a3;
  v17[5] = v12;
  v18 = v13;
  *(float *)&v17[2] = v14;
  v15 = CChannel::SendCommand(this, v17, 0x28u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v19);
  return v15;
}
