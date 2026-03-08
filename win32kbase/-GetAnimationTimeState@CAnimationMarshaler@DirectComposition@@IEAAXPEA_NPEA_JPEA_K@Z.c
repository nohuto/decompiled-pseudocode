/*
 * XREFs of ?GetAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEA_NPEA_JPEA_K@Z @ 0x1C024CF60
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C005B08C (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 *     ?GetAnimationTime@CAnimationMarshaler@DirectComposition@@IEAAX_KPEA_J@Z @ 0x1C024CEF8 (-GetAnimationTime@CAnimationMarshaler@DirectComposition@@IEAAX_KPEA_J@Z.c)
 * Callees:
 *     ?CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEAVCAnimationTimeList@2@_KPEA_KPEA_NPEA_J2@Z @ 0x1C00BA67C (-CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEAVCAnimationTimeList@.c)
 */

void __fastcall DirectComposition::CAnimationMarshaler::GetAnimationTimeState(
        DirectComposition::CAnimationMarshaler *this,
        bool *a2,
        __int64 *a3,
        unsigned __int64 *a4)
{
  bool v4; // bl
  __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  LARGE_INTEGER PerformanceCounter; // rax
  struct DirectComposition::CAnimationTimeList *v12; // rdx
  unsigned __int64 QuadPart; // r8
  __int64 v14; // rdx
  bool v15; // [rsp+80h] [rbp+8h] BYREF
  __int64 v16; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v17; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v15 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( (*(_DWORD *)(*((_QWORD *)this + 9) + 24LL) & 3) != 0 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v12 = (struct DirectComposition::CAnimationTimeList *)*((_QWORD *)this + 9);
    QuadPart = PerformanceCounter.QuadPart;
    if ( v12 )
    {
      do
      {
        DirectComposition::CAnimationMarshaler::CalculateAnimationTimeState(this, v12, QuadPart, &v18, &v15, &v16, &v17);
        v12 = *(struct DirectComposition::CAnimationTimeList **)(v14 + 16);
      }
      while ( v12 );
      v4 = v15;
      v9 = v16;
      v10 = v17;
    }
  }
  else
  {
    v10 = *((_QWORD *)this + 27);
    v9 = *((_QWORD *)this + 26);
    v4 = (*((_BYTE *)this + 200) & 4) != 0;
  }
  *a3 = v9;
  *a4 = v10;
  *a2 = v4;
}
