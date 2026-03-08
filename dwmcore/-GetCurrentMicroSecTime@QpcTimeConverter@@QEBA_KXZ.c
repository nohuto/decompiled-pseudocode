/*
 * XREFs of ?GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ @ 0x180281040
 * Callers:
 *     ?GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z @ 0x180280E50 (-GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z.c)
 * Callees:
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x18019CBB0 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 */

unsigned __int64 __fastcall QpcTimeConverter::GetCurrentMicroSecTime(QpcTimeConverter *this)
{
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  if ( QueryPerformanceCounter(&PerformanceCount)
    && (unsigned int)QpcTimeConverter::QpcToMicroSec(this, PerformanceCount.QuadPart, &v4) )
  {
    return v4;
  }
  else
  {
    return 1000LL * GetTickCount();
  }
}
