/*
 * XREFs of ?GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ @ 0x1801EFB5C
 * Callers:
 *     ?GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ @ 0x1801EFB0C (-GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ.c)
 *     ?GetFrameRate@CDebugFrameCounter@@QEAAIXZ @ 0x1801EFB90 (-GetFrameRate@CDebugFrameCounter@@QEAAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDebugFrameCounter::GetFrameCountInternal(CDebugFrameCounter *this)
{
  unsigned int v1; // r8d
  __int64 result; // rax

  if ( !*((_BYTE *)this + 8) )
    return 0LL;
  v1 = *(_DWORD *)this;
  if ( *(_DWORD *)this == -1 )
    return 0LL;
  result = *((_DWORD *)this + 1) - v1;
  if ( v1 > *((_DWORD *)this + 1) )
    return (unsigned int)(result + 256);
  return result;
}
