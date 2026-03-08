/*
 * XREFs of MNInitUAHMenu @ 0x1C02376B4
 * Callers:
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0236E94 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C023A454 (xxxSendUAHInitMenuMessage.c)
 *     xxxSendUAHMenuMessage @ 0x1C023A4DC (xxxSendUAHMenuMessage.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C023A8F8 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNInitUAHMenu(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = 0LL;
  if ( a1 )
    v3 = *a1;
  *(_QWORD *)a3 = v3;
  *(_QWORD *)(a3 + 8) = a2;
  result = a1[5];
  *(_DWORD *)(a3 + 16) = *(_DWORD *)(result + 40);
  return result;
}
