/*
 * XREFs of ?CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEAVCAnimationTimeList@2@_KPEA_KPEA_NPEA_J2@Z @ 0x1C009C020
 * Callers:
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C009BF90 (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 *     ?GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z @ 0x1C01D5CD8 (-GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CAnimationMarshaler::CalculateAnimationTimeState(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CAnimationTimeList *a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        bool *a5,
        __int64 *a6,
        unsigned __int64 *a7)
{
  int v7; // esi
  unsigned __int64 v8; // r11
  __int64 v9; // rdi
  unsigned __int64 v10; // r10
  char v11; // bl
  char v12; // al

  v7 = *((_DWORD *)a2 + 6);
  v8 = *((_QWORD *)this + 14);
  v9 = *((_QWORD *)this + 27);
  v10 = *((_QWORD *)this + 28);
  v11 = (*((_BYTE *)this + 208) & 4) != 0;
  if ( (v7 & 4) != 0 )
  {
    if ( !v8 && !*((_QWORD *)this + 18) )
      v8 = a3;
    v10 = v8;
  }
  if ( (v7 & 8) != 0 )
  {
    if ( a3 >= v8 )
    {
      v12 = *((_BYTE *)a2 + 28);
      if ( (*((_BYTE *)this + 208) & 4) != 0 )
      {
        if ( !v12 )
          v10 = a3;
      }
      else if ( v12 )
      {
        v9 += a3 - v10;
      }
    }
    v11 = *((_BYTE *)a2 + 28);
  }
  if ( (v7 & 0x10) != 0 )
  {
    v9 = *((_QWORD *)a2 + 4);
    if ( a3 >= v8 )
      v10 = a3;
  }
  *a4 = v8;
  *a5 = v11;
  *a6 = v9;
  *a7 = v10;
}
