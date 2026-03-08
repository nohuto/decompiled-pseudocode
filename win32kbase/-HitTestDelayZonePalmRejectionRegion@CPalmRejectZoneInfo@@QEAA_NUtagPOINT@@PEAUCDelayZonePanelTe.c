/*
 * XREFs of ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C0215AB0
 * Callers:
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C0215BB8 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 * Callees:
 *     PtInRect @ 0x1C00157B4 (PtInRect.c)
 *     IntersectRect @ 0x1C003B560 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z @ 0x1C0215768 (-ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z.c)
 *     ?GetDelayZoneRectFromInputRect@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@U2@J@Z @ 0x1C0215924 (-GetDelayZoneRectFromInputRect@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@U2@J@Z.c)
 *     ?GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@PEBUCompositionInputObject@@U2@@Z @ 0x1C02159E0 (-GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@PEBUCompositionInpu.c)
 */

bool __fastcall CPalmRejectZoneInfo::HitTestDelayZonePalmRejectionRegion(
        CPalmRejectZoneInfo *this,
        struct tagPOINT a2,
        struct tagRECT *a3)
{
  const struct CompositionInputObject *v4; // r8
  CPalmRejectZoneInfo *v7; // rcx
  const struct CompositionInputObject *v8; // r8
  int v9; // eax
  struct tagRECT v10; // xmm6
  INT v11; // r8d
  int v12; // eax
  CPalmRejectZoneInfo *v13; // rcx
  struct tagRECT v14; // xmm0
  struct tagPOINT v16[2]; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v17; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v18; // [rsp+40h] [rbp-30h] BYREF

  v4 = (const struct CompositionInputObject *)*((_QWORD *)this + 9);
  *(_OWORD *)&v16[0].x = *(_OWORD *)((char *)this + 24);
  CPalmRejectZoneInfo::GetInputRectFromInputSinkInScreenSpace(this, &v17, v4, (struct tagRECT *)v16);
  v8 = (const struct CompositionInputObject *)*((_QWORD *)this + 10);
  if ( !v8
    || (*(_OWORD *)&v16[0].x = *(_OWORD *)((char *)this + 40),
        CPalmRejectZoneInfo::GetInputRectFromInputSinkInScreenSpace(v7, &v18, v8, (struct tagRECT *)v16),
        *(_OWORD *)&v16[0].x = 0LL,
        (v9 = IntersectRect(v16, &v17.left, &v18.left)) != 0) )
  {
    v10 = v17;
    v11 = *((_DWORD *)this + 22);
    v16[0] = *(struct tagPOINT *)&v17.left;
    v18 = v17;
    v12 = CPalmRejectZoneInfo::ConvertDipsToScreenSpaceUnits(v7, *(struct tagPOINT *)&v17.left, v11);
    CPalmRejectZoneInfo::GetDelayZoneRectFromInputRect(v13, &v17, (__m128i *)&v18, v12);
    v14 = v17;
    a3[1] = v10;
    *a3 = v14;
    LOBYTE(v9) = PtInRect(&v17, *(_QWORD *)&a2);
  }
  return v9;
}
