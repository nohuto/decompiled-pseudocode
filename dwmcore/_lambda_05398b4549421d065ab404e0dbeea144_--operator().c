/*
 * XREFs of _lambda_05398b4549421d065ab404e0dbeea144_::operator() @ 0x18024B4D0
 * Callers:
 *     ?OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x18024B610 (-OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?GetSharedSectionData@CSharedSectionWrapper@@QEBA?AV?$span@E$0?0@gsl@@XZ @ 0x18024E3CC (-GetSharedSectionData@CSharedSectionWrapper@@QEBA-AV-$span@E$0-0@gsl@@XZ.c)
 */

unsigned __int64 __fastcall lambda_05398b4549421d065ab404e0dbeea144_::operator()(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 PixelFormatSize; // al
  _QWORD *v5; // r9
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  CSharedSectionWrapper::GetSharedSectionData(a2, v7);
  PixelFormatSize = GetPixelFormatSize(a3);
  return *v5 / ((unsigned __int64)PixelFormatSize >> 3);
}
