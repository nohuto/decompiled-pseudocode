/*
 * XREFs of ?Process2DInput@MPCMouseProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180196C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCMouseProcessor::Process2DInput(MPCMouseProcessor *this, struct InputInfo *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 578) + 48LL))(
           *((_QWORD *)this + 578),
           a2);
}
