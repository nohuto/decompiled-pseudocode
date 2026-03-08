/*
 * XREFs of ?Release@CAdapter@@UEAAJXZ @ 0x1C0018ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCAdapter@@IEAAPEAXI@Z @ 0x1C0018EFC (--_GCAdapter@@IEAAPEAXI@Z.c)
 */

__int64 __fastcall CAdapter::Release(CAdapter *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 25);
  if ( !v2 && this )
    CAdapter::`scalar deleting destructor'(this, a2);
  return v2;
}
