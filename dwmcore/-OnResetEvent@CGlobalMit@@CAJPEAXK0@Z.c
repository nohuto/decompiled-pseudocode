__int64 __fastcall CGlobalMit::OnResetEvent(void *a1, __int64 a2, void *a3)
{
  (*(void (__fastcall **)(struct IMessageSession *, __int64, void *))(*(_QWORD *)CMit::s_pMessageSession + 240LL))(
    CMit::s_pMessageSession,
    a2,
    a3);
  return 0LL;
}
