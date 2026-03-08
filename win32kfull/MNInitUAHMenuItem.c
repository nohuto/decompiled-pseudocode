/*
 * XREFs of MNInitUAHMenuItem @ 0x1C02376D8
 * Callers:
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0236E94 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C023A8F8 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNInitUAHMenuItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_DWORD *)a3 = -1431655765 * ((a2 - *(_QWORD *)(a1 + 88)) >> 5);
  result = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(result + 40) & 1) != 0 )
  {
    *(_OWORD *)(a3 + 36) = *(_OWORD *)(a1 + 128);
    result = *(unsigned int *)(a1 + 144);
    *(_DWORD *)(a3 + 52) = result;
  }
  *(_OWORD *)(a3 + 4) = *(_OWORD *)(a2 + 52);
  *(_OWORD *)(a3 + 20) = *(_OWORD *)(a2 + 68);
  return result;
}
