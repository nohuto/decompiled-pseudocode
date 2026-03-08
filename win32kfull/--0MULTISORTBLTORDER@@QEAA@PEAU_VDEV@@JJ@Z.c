/*
 * XREFs of ??0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z @ 0x1C02B08A0
 * Callers:
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02B4900 (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     ?vSortBltOrderWorker@@YAXPEAPEAU_SODISPSURF@@JJ@Z @ 0x1C02B56CC (-vSortBltOrderWorker@@YAXPEAPEAU_SODISPSURF@@JJ@Z.c)
 */

MULTISORTBLTORDER *__fastcall MULTISORTBLTORDER::MULTISORTBLTORDER(
        MULTISORTBLTORDER *this,
        struct _VDEV *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  int v6; // ebp
  int v7; // r15d
  __int64 v10; // rax
  _QWORD *v11; // rsi
  _QWORD *v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rax

  v4 = 0;
  v5 = 16 * *((_DWORD *)a2 + 4);
  v6 = a4;
  v7 = a3;
  if ( v5 )
    v10 = Win32AllocPool(v5, 1869835591LL, a3, a4);
  else
    v10 = 0LL;
  *(_QWORD *)this = v10;
  v11 = (_QWORD *)((char *)this + 8);
  *((_QWORD *)this + 1) = v10;
  *((_QWORD *)this + 2) = 0LL;
  if ( v10 )
  {
    v12 = *(_QWORD **)a2;
    v13 = 0;
    while ( v12 )
    {
      v14 = 2LL * v13++;
      *(_QWORD *)(*v11 + 8 * v14 + 8) = v12;
      *(_QWORD *)(*v11 + 8 * v14) = 0LL;
      v12 = (_QWORD *)*v12;
    }
    if ( *((_DWORD *)a2 + 4) != 1 )
    {
      do
      {
        v15 = v4++;
        *(_QWORD *)(*v11 + 16 * v15) = *v11 + 16LL * v4;
      }
      while ( v4 < *((_DWORD *)a2 + 4) - 1 );
    }
    vSortBltOrderWorker((struct _SODISPSURF **)this + 1, v7, v6);
    *((_QWORD *)this + 2) = *v11;
  }
  return this;
}
