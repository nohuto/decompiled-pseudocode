/*
 * XREFs of AddMagnificationOutputTransform @ 0x1C00DBA40
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     MagInputTransform @ 0x1C01491D2 (MagInputTransform.c)
 *     MagnificationInverseTransformPoint @ 0x1C01F7D98 (MagnificationInverseTransformPoint.c)
 */

__int64 __fastcall AddMagnificationOutputTransform(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v2; // edi
  __int64 v4; // rax
  _DWORD *v6; // rcx
  __int64 v7; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  while ( _InterlockedCompareExchange64(&gpMagInputLock, (signed __int64)CurrentThread, 0LL) )
    UserSleep(1LL);
  v4 = *(_QWORD *)(grpdeskRitInput + 224LL);
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 16) & 2) != 0 )
    {
      v6 = (_DWORD *)MagInputTransform();
      if ( v6 )
      {
        if ( PtInRect(v6, *a1) )
        {
          MagnificationInverseTransformPoint(v7, a1);
          v2 = 1;
        }
      }
    }
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return v2;
}
