/*
 * XREFs of DwmAsyncCreateDCompositionHwndTarget @ 0x1C01229D4
 * Callers:
 *     zzzComposeDesktop @ 0x1C00EC878 (zzzComposeDesktop.c)
 *     EditionNotifyDwmForSystemVisualCreation @ 0x1C0122940 (EditionNotifyDwmForSystemVisualCreation.c)
 * Callees:
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall DwmAsyncCreateDCompositionHwndTarget(PVOID Object, __int64 a2, int a3, __int64 a4)
{
  unsigned int v8; // ebx
  _QWORD v10[8]; // [rsp+20h] [rbp-48h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[0]) = 4194328;
    WORD2(v10[0]) = 0x8000;
    LODWORD(v10[5]) = 1073741892;
    *(_QWORD *)((char *)&v10[5] + 4) = a2;
    HIDWORD(v10[6]) = a3;
    v10[7] = a4;
    v8 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
