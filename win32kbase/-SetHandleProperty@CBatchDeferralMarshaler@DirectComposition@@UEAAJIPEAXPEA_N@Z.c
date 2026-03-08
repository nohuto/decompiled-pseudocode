/*
 * XREFs of ?SetHandleProperty@CBatchDeferralMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C026F050
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C005CF5C (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 */

__int64 __fastcall DirectComposition::CBatchDeferralMarshaler::SetHandleProperty(
        struct DirectComposition::CEvent **this,
        unsigned __int64 a2,
        NSInstrumentation::CLeakTrackingAllocator *a3,
        bool *a4)
{
  __int64 result; // rax

  result = 3221225485LL;
  if ( a3 && !(_DWORD)a2 && !this[7] )
    return DirectComposition::CEvent::Create(a3, a2, this + 7);
  return result;
}
