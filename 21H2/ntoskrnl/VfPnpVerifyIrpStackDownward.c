/*
 * XREFs of VfPnpVerifyIrpStackDownward @ 0x1409E3BE0
 * Callers:
 *     <none>
 * Callees:
 *     VfGetPristineDriverInit @ 0x1409D1D1C (VfGetPristineDriverInit.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1409D7A4C (IovUtilIsDeviceObjectMarked.c)
 *     IovUtilIsWdmStack @ 0x1409D7BE8 (IovUtilIsWdmStack.c)
 *     VfErrorReport1 @ 0x1409D9008 (VfErrorReport1.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1409E4040 (ViPnpVerifyMinorWasProcessedProperly.c)
 */

__int64 __fastcall VfPnpVerifyIrpStackDownward(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        const void *a7)
{
  __int64 result; // rax
  __int64 v12; // r13
  const void *v13; // rsi
  int v14; // edi
  __int64 v15; // rcx
  PDRIVER_INITIALIZE PristineDriverInit; // rax
  __int64 v17; // r8
  int IsDeviceObjectMarked; // eax
  int v19; // r9d
  int v20; // [rsp+30h] [rbp-38h]

  result = IovUtilIsWdmStack(a2);
  if ( (_DWORD)result )
  {
    v12 = a1[30];
    v13 = (const void *)*a1;
    v14 = *(_DWORD *)(*a1 + 48LL);
    v20 = *(_DWORD *)(a5 + 96);
    if ( *(_DWORD *)(v12 + 56) == 3 )
      VfErrorReport1(0x211u, a7, v13);
    v15 = a2[1];
    result = (__int64)IopInvalidDeviceRequest;
    if ( *(__int64 (__fastcall **)(__int64, IRP *))(v15 + 328) == IopInvalidDeviceRequest )
    {
      *(_DWORD *)(a5 + 4) |= 0x1000000u;
      PristineDriverInit = VfGetPristineDriverInit((struct _DRIVER_OBJECT *)v15);
      VfErrorReport1(0x21Fu, PristineDriverInit, v13);
      result = a6;
      *(_DWORD *)(a6 + 4) |= 0x80000000;
    }
    if ( a3 )
    {
      if ( v14 < 0 )
      {
        if ( v14 == -1073741637 )
        {
          if ( v20 != -1073741637 && (*(_DWORD *)(a5 + 4) & 0x2000000) == 0 )
          {
            result = VfErrorReport1(0x216u, a7, v13);
            *(_DWORD *)(a5 + 4) |= 0x2000000u;
          }
        }
        else if ( (*(_DWORD *)(a5 + 4) & 0x2000000) == 0 )
        {
          result = VfErrorReport1(0x215u, a7, v13);
          *(_DWORD *)(a5 + 4) |= 0x2000000u;
        }
      }
      if ( *(_QWORD *)(v12 + 48) )
      {
        result = IovUtilIsDeviceObjectMarked(*(_QWORD *)(v12 + 48), 2);
        if ( (_DWORD)result )
        {
          IsDeviceObjectMarked = IovUtilIsDeviceObjectMarked(v17, 3);
          return ViPnpVerifyMinorWasProcessedProperly(
                   (_DWORD)v13,
                   a4,
                   IsDeviceObjectMarked == 0 ? 4 : 0,
                   v19,
                   (__int64)a7,
                   1);
        }
      }
    }
  }
  return result;
}
