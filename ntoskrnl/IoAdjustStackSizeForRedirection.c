/*
 * XREFs of IoAdjustStackSizeForRedirection @ 0x1405541E0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 */

__int64 __fastcall IoAdjustStackSizeForRedirection(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v4; // esi
  KIRQL v7; // al
  char v8; // bl
  KIRQL v9; // r9
  char v10; // al
  char v11; // bl
  __int64 v12; // r8
  __int64 i; // rax
  __int64 v14; // rax

  v4 = 0;
  v7 = KeAcquireQueuedSpinLock(0xAuLL);
  v8 = *(_BYTE *)(a2 + 76);
  v9 = v7;
  v10 = *(_BYTE *)(a1 + 76);
  if ( v10 < v8 )
  {
    v11 = v8 - v10;
    v12 = a1;
    for ( i = *(_QWORD *)(a1 + 24); i; i = *(_QWORD *)(i + 24) )
      v12 = i;
    if ( (unsigned __int16)v11 + (unsigned int)(unsigned __int16)*(char *)(v12 + 76) < 0x7D )
    {
      while ( v12 != a1 )
      {
        v14 = *(_QWORD *)(v12 + 312);
        *(_BYTE *)(v12 + 76) += v11;
        v12 = *(_QWORD *)(v14 + 48);
      }
      *(_BYTE *)(a1 + 76) += v11;
    }
    else
    {
      v4 = -1073741811;
    }
  }
  else
  {
    v11 = 0;
  }
  KeReleaseQueuedSpinLock(0xAuLL, v9);
  if ( v4 >= 0 && a3 )
    *a3 = v11;
  return (unsigned int)v4;
}
