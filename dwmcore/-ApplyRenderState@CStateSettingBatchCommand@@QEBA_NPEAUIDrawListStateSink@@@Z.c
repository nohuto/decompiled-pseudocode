bool __fastcall CStateSettingBatchCommand::ApplyRenderState(
        CStateSettingBatchCommand *this,
        struct IDrawListStateSink *a2)
{
  (**(void (__fastcall ***)(struct IDrawListStateSink *, _QWORD))a2)(a2, *((_QWORD *)this + 1));
  return 0;
}
