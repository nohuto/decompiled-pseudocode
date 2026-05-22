/*
 * XREFs of ?Reset@RayStabilizer@@QEAAXXZ @ 0x180086618
 * Callers:
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x18001FE70 (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ??0MPCHandProcessor@@QEAA@XZ @ 0x18007D314 (--0MPCHandProcessor@@QEAA@XZ.c)
 *     ?TryDemote@MPCInputProviderBase@@UEAA_NXZ @ 0x180084E30 (-TryDemote@MPCInputProviderBase@@UEAA_NXZ.c)
 *     ??0MPCGamepadProcessor@@QEAA@XZ @ 0x180191B10 (--0MPCGamepadProcessor@@QEAA@XZ.c)
 *     ?OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ @ 0x180196280 (-OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1801963D0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Tidy@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAXXZ @ 0x18007F57C (-_Tidy@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@AEAAXX.c)
 */

void __fastcall RayStabilizer::Reset(RayStabilizer *this)
{
  std::deque<RayStabilizationResult>::_Tidy(this);
  *((_BYTE *)this + 80) = 0;
  *((_OWORD *)this + 3) = 0LL;
  *((_OWORD *)this + 4) = 0LL;
}
