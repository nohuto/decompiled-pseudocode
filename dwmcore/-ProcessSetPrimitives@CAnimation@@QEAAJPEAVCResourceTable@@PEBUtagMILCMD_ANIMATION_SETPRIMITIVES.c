/*
 * XREFs of ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x1800F2764
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800F2804 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ?Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z @ 0x1800F28AC (-Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCAnimationPrimitiveBuffer@@@@YAXAEAPEAVCAnimationPrimitiveBuffer@@@Z @ 0x1800F294C (--$ReleaseInterface@VCAnimationPrimitiveBuffer@@@@YAXAEAPEAVCAnimationPrimitiveBuffer@@@Z.c)
 */

__int64 __fastcall CAnimation::ProcessSetPrimitives(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETPRIMITIVES *a3)
{
  struct CSharedSection *Resource; // rax
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  struct CSharedSectionAnimationPrimitiveBuffer *v13; // [rsp+50h] [rbp+18h] BYREF

  Resource = (struct CSharedSection *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0xA9u);
  v6 = CSharedSectionAnimationPrimitiveBuffer::Create(Resource, *((_DWORD *)a3 + 3), *((_DWORD *)a3 + 4), &v13);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x135u, 0LL);
  }
  else
  {
    ReleaseInterface<CAnimationPrimitiveBuffer>((char *)this + 128);
    v9 = *((_QWORD *)this + 18);
    *((_QWORD *)this + 16) = v13;
    if ( !v9 || *(_QWORD *)(v9 + 96) )
    {
      v10 = CBaseAnimation::RegisterAnimateResource(this);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x13Fu, 0LL);
    }
  }
  return v8;
}
