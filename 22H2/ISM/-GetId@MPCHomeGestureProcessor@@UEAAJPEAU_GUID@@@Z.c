/*
 * XREFs of ?GetId@MPCHomeGestureProcessor@@UEAAJPEAU_GUID@@@Z @ 0x18001DAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCHomeGestureProcessor::GetId(MPCHomeGestureProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_MPCHomeGesture;
  return result;
}
