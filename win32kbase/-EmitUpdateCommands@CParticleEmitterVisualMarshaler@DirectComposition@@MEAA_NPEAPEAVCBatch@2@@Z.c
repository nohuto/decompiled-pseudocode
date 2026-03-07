char __fastcall DirectComposition::CParticleEmitterVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetEmitterAnimationCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetEmitterTimeCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetTimestepCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetEmitterLifetimeCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetRandomSeedCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetBrushCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetEmitterGeometryCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetEmitFromCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetEdgeThicknessCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetEmitterViewBoxCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetMinBurstRateInSecondsCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetMaxBurstRateInSecondsCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetMinParticlesPerBurstCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetMaxParticlesPerBurstCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetMaxParticleInstancesCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetDragCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetAngularDragCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetTorqueCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetForceCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetSortModeCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetTerminalVelocityCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetParticleGeneratorCommand(this, a2)
    && DirectComposition::CParticleEmitterVisualMarshaler::EmitSetParticleBehaviorsCommand(this, a2)
    && DirectComposition::CResourceMarshalerArrayBase::Marshal(
         (_QWORD *)this + 65,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 137,
         0x1000000,
         588,
         589) )
  {
    return DirectComposition::CParticleEmitterVisualMarshaler::EmitSetClearCommand(this, a2) != 0;
  }
  return v4;
}
