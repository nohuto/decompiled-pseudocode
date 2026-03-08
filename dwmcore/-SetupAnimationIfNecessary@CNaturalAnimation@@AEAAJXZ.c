/*
 * XREFs of ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x18023AC9C
 * Callers:
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180238E40 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1802394BC (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x1802398F8 (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 *     ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x18023A498 (-SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 */

__int64 __fastcall CNaturalAnimation::SetupAnimationIfNecessary(CNaturalAnimation *this)
{
  unsigned int v1; // edi
  int v3; // eax
  __int64 v4; // rcx
  int v5; // ecx
  char v6; // dl

  v1 = 0;
  if ( (*((_BYTE *)this + 588) & 1) == 0 )
  {
    v3 = CNaturalAnimation::SampleInitialValueAndFinalValueIfNecessary(this);
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x292u, 0LL);
      *((_BYTE *)this + 588) &= ~1u;
    }
    else
    {
      v5 = *((_DWORD *)this + 86);
      *(_QWORD *)((char *)this + 348) = *((_QWORD *)this + 42);
      *((_DWORD *)this + 89) = v5;
      CNaturalAnimation::InitializeForces(this);
      v6 = *((_BYTE *)this + 588);
      if ( (v6 & 2) == 0 )
      {
        *((_QWORD *)this + 50) = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL) - Time::s_luBegin.QuadPart;
        v6 |= 2u;
      }
      *((_BYTE *)this + 588) = v6 & 0xF6 | 1;
    }
  }
  return v1;
}
