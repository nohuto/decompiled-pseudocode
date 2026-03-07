void __fastcall CVP_SYSTEM_THREAD::ThreadRoutine(PVOID StartContext)
{
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)StartContext + 8LL))(StartContext);
  (**(void (__fastcall ***)(PVOID, __int64))StartContext)(StartContext, 1LL);
}
