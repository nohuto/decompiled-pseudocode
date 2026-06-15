/*
 * XREFs of sub_1800476C0 @ 0x1800476C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800458B4 @ 0x1800458B4 (sub_1800458B4.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800476C0(PTP_CALLBACK_INSTANCE Instance, char *Context, PTP_TIMER Timer)
{
  int v4; // eax
  int v5; // eax

  v4 = Mtx_lock((_Mtx_t)(Context + 8));
  if ( v4 )
  {
    std::_Throw_C_error(v4);
    goto LABEL_7;
  }
  if ( !*(_DWORD *)Context )
    sub_1800458B4((__int64)Context, 0);
  v5 = Mtx_unlock((_Mtx_t)(Context + 8));
  if ( v5 )
  {
LABEL_7:
    std::_Throw_C_error(v5);
    __debugbreak();
    JUMPOUT(0x18009B3ACLL);
  }
}
