/*
 * XREFs of ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x18005DB20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005DBFC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x18005E020 (-VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005E108 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18005E530 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::VisualSetOffset(CChannel *this, unsigned int a2, double a3, double a4, double a5)
{
  float v7; // xmm1_4
  float v8; // xmm0_4
  unsigned int v9; // ebx
  _DWORD v11[8]; // [rsp+20h] [rbp-48h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  char *v13; // [rsp+70h] [rbp+8h] BYREF

  v13 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 195LL);
  if ( (int)CHandleTable::VerifyHandleTableEntry((char *)this + 16, a2, 0LL) < 0 )
    ModuleFailFastForHRESULT(2147942406LL, retaddr);
  v11[0] = 421;
  v7 = a3;
  v11[1] = a2;
  *(float *)&v11[2] = v7;
  v8 = a4;
  *(float *)&v11[4] = a5;
  *(float *)&v11[3] = v8;
  v9 = CChannel::SendCommand(this, v11, 0x14u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v9;
}
