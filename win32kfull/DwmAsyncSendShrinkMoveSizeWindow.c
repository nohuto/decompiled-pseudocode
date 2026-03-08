/*
 * XREFs of DwmAsyncSendShrinkMoveSizeWindow @ 0x1C0270128
 * Callers:
 *     ?SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z @ 0x1C023DB80 (-SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall DwmAsyncSendShrinkMoveSizeWindow(PVOID Object, __int64 a2, int a3, __int64 a4)
{
  unsigned int v8; // edi
  int v10; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+24h] [rbp-44h]
  int v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+4Ch] [rbp-1Ch]
  int v14; // [rsp+54h] [rbp-14h]
  __int64 v15; // [rsp+58h] [rbp-10h]

  v8 = -1073741823;
  if ( Object )
  {
    memset_0(&v10, 0, 0x40uLL);
    v10 = 4194328;
    v11 = 0x8000;
    v12 = 1073741933;
    v13 = a2;
    v14 = a3;
    v15 = a4;
    v8 = LpcRequestPort(Object, &v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
