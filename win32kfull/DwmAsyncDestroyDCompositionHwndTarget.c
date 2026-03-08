/*
 * XREFs of DwmAsyncDestroyDCompositionHwndTarget @ 0x1C00E99A4
 * Callers:
 *     EditionNotifyDwmForSystemVisualDestruction @ 0x1C00E9940 (EditionNotifyDwmForSystemVisualDestruction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncDestroyDCompositionHwndTarget(PVOID Object, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  _OWORD v6[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[20]; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+54h] [rbp-14h]

  v4 = -1073741823;
  if ( Object )
  {
    memset(v6, 0, sizeof(v6));
    *(_QWORD *)v7 = 0LL;
    WORD2(v6[0]) = 0x8000;
    LODWORD(v6[0]) = 3670032;
    *(_DWORD *)&v7[8] = 1073741894;
    *(_QWORD *)&v7[12] = a2;
    v8 = a3;
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
