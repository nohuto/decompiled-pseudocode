_BOOL8 __fastcall CGlobalMit::s_HitTestRequest(struct _InputHitTestRequest *a1, struct _InputHitTestResult *a2)
{
  return (*(int (__fastcall **)(struct ISystemInputHost *, struct _InputHitTestRequest *, struct _InputHitTestResult *))(*(_QWORD *)CMit::s_pSystemInputHost + 24LL))(
           CMit::s_pSystemInputHost,
           a1,
           a2) >= 0;
}
